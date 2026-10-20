#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003A[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 16, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58,
    0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0,
    0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0,
    0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 267, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0,
};

void unit_003A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001E8000;
    case 2u: goto L_001E8008;
    case 3u: goto L_001E80FC;
    case 4u: goto L_001E815C;
    case 5u: goto L_001E82C8;
    case 6u: goto L_001E82D4;
    case 7u: goto L_001E83CC;
    case 8u: goto L_001E83F4;
    case 9u: goto L_001E8480;
    case 10u: goto L_001E84E4;
    case 11u: goto L_001E8514;
    case 12u: goto L_001E8530;
    case 13u: goto L_001E8540;
    case 14u: goto L_001E8558;
    case 15u: goto L_001E856C;
    case 16u: goto L_001E8578;
    case 17u: goto L_001E8580;
    case 18u: goto L_001E85AC;
    case 19u: goto L_001E85F4;
    case 20u: goto L_001E8604;
    case 21u: goto L_001E8634;
    case 22u: goto L_001E867C;
    case 23u: goto L_001E86A0;
    case 24u: goto L_001E8728;
    case 25u: goto L_001E873C;
    case 26u: goto L_001E874C;
    case 27u: goto L_001E8890;
    case 28u: goto L_001E88B0;
    case 29u: goto L_001E88D0;
    case 30u: goto L_001E88FC;
    case 31u: goto L_001E8980;
    case 32u: goto L_001E8A18;
    case 33u: goto L_001E8A20;
    case 34u: goto L_001E8A3C;
    case 35u: goto L_001E8A54;
    case 36u: goto L_001E8A88;
    case 37u: goto L_001E8B08;
    case 38u: goto L_001E8B2C;
    case 39u: goto L_001E8BD0;
    case 40u: goto L_001E8BDC;
    case 41u: goto L_001E8C10;
    case 42u: goto L_001E8C40;
    case 43u: goto L_001E8C60;
    case 44u: goto L_001E8C7C;
    case 45u: goto L_001E8D80;
    case 46u: goto L_001E8D9C;
    case 47u: goto L_001E8DA8;
    case 48u: goto L_001E8DBC;
    case 49u: goto L_001E8DCC;
    case 50u: goto L_001E8DEC;
    case 51u: goto L_001E8E00;
    case 52u: goto L_001E8E1C;
    case 53u: goto L_001E8E54;
    case 54u: goto L_001E8EB4;
    case 55u: goto L_001E8EC4;
    case 56u: goto L_001E8ED4;
    case 57u: goto L_001E8EE8;
    case 58u: goto L_001E8EFC;
    case 59u: goto L_001E8F0C;
    case 60u: goto L_001E8F20;
    case 61u: goto L_001E8F30;
    case 62u: goto L_001E8F84;
    case 63u: goto L_001E8FD4;
    case 64u: goto L_001E901C;
    case 65u: goto L_001E9028;
    case 66u: goto L_001E9070;
    case 67u: goto L_001E907C;
    case 68u: goto L_001E90C0;
    case 69u: goto L_001E9104;
    case 70u: goto L_001E915C;
    case 71u: goto L_001E917C;
    case 72u: goto L_001E91B4;
    case 73u: goto L_001E926C;
    case 74u: goto L_001E93A4;
    case 75u: goto L_001E93E4;
    case 76u: goto L_001E93F8;
    case 77u: goto L_001E948C;
    case 78u: goto L_001E94E4;
    case 79u: goto L_001E9518;
    case 80u: goto L_001E95B4;
    case 81u: goto L_001E9620;
    case 82u: goto L_001E9634;
    case 83u: goto L_001E965C;
    case 84u: goto L_001E9680;
    case 85u: goto L_001E968C;
    case 86u: goto L_001E96A0;
    case 87u: goto L_001E96E8;
    case 88u: goto L_001E970C;
    case 89u: goto L_001E9738;
    case 90u: goto L_001E9768;
    case 91u: goto L_001E977C;
    case 92u: goto L_001E9790;
    case 93u: goto L_001E9798;
    case 94u: goto L_001E97C0;
    case 95u: goto L_001E97EC;
    case 96u: goto L_001E9808;
    case 97u: goto L_001E9870;
    case 98u: goto L_001E9884;
    case 99u: goto L_001E9898;
    case 100u: goto L_001E98A8;
    case 101u: goto L_001E98BC;
    case 102u: goto L_001E98C4;
    case 103u: goto L_001E98EC;
    case 104u: goto L_001E9918;
    case 105u: goto L_001E9934;
    case 106u: goto L_001E9980;
    case 107u: goto L_001E9994;
    case 108u: goto L_001E99A8;
    case 109u: goto L_001E99F8;
    case 110u: goto L_001E9A24;
    case 111u: goto L_001E9A38;
    case 112u: goto L_001E9A68;
    case 113u: goto L_001E9A94;
    case 114u: goto L_001E9AA8;
    case 115u: goto L_001E9AD8;
    case 116u: goto L_001E9AF4;
    case 117u: goto L_001E9B18;
    case 118u: goto L_001E9B2C;
    case 119u: goto L_001E9B5C;
    case 120u: goto L_001E9B88;
    case 121u: goto L_001E9B9C;
    case 122u: goto L_001E9BCC;
    case 123u: goto L_001E9C04;
    case 124u: goto L_001E9C18;
    case 125u: goto L_001E9C2C;
    case 126u: goto L_001E9C3C;
    case 127u: goto L_001E9C58;
    case 128u: goto L_001E9C78;
    case 129u: goto L_001E9C98;
    case 130u: goto L_001E9CAC;
    case 131u: goto L_001E9CBC;
    case 132u: goto L_001E9CCC;
    case 133u: goto L_001E9CFC;
    case 134u: goto L_001E9D38;
    case 135u: goto L_001E9D4C;
    case 136u: goto L_001E9D7C;
    case 137u: goto L_001E9DB8;
    case 138u: goto L_001E9DF8;
    case 139u: goto L_001E9EA4;
    case 140u: goto L_001E9EC8;
    case 141u: goto L_001E9EDC;
    case 142u: goto L_001E9F08;
    case 143u: goto L_001E9F38;
    case 144u: goto L_001E9F90;
    case 145u: goto L_001E9FB8;
    case 146u: goto L_001E9FFC;
    case 147u: goto L_001EA018;
    case 148u: goto L_001EA03C;
    case 149u: goto L_001EA050;
    case 150u: goto L_001EA088;
    case 151u: goto L_001EA0E4;
    case 152u: goto L_001EA140;
    case 153u: goto L_001EA158;
    case 154u: goto L_001EA168;
    case 155u: goto L_001EA180;
    case 156u: goto L_001EA1A4;
    case 157u: goto L_001EA1AC;
    case 158u: goto L_001EA1E0;
    case 159u: goto L_001EA1FC;
    case 160u: goto L_001EA214;
    case 161u: goto L_001EA228;
    case 162u: goto L_001EA240;
    case 163u: goto L_001EA254;
    case 164u: goto L_001EA290;
    case 165u: goto L_001EA298;
    case 166u: goto L_001EA2E4;
    case 167u: goto L_001EA2FC;
    case 168u: goto L_001EA334;
    case 169u: goto L_001EA34C;
    case 170u: goto L_001EA388;
    case 171u: goto L_001EA390;
    case 172u: goto L_001EA3A8;
    case 173u: goto L_001EA440;
    case 174u: goto L_001EA45C;
    case 175u: goto L_001EA4C4;
    case 176u: goto L_001EA4E0;
    case 177u: goto L_001EA530;
    case 178u: goto L_001EA598;
    case 179u: goto L_001EA5DC;
    case 180u: goto L_001EA60C;
    case 181u: goto L_001EA61C;
    case 182u: goto L_001EA66C;
    case 183u: goto L_001EA6EC;
    case 184u: goto L_001EA6F8;
    case 185u: goto L_001EA71C;
    case 186u: goto L_001EA740;
    case 187u: goto L_001EA74C;
    case 188u: goto L_001EA7C8;
    case 189u: goto L_001EA824;
    case 190u: goto L_001EA8C4;
    case 191u: goto L_001EA988;
    case 192u: goto L_001EA9BC;
    case 193u: goto L_001EA9E0;
    case 194u: goto L_001EAA8C;
    case 195u: goto L_001EAAA8;
    case 196u: goto L_001EAB24;
    case 197u: goto L_001EAB48;
    case 198u: goto L_001EAB50;
    case 199u: goto L_001EAB70;
    case 200u: goto L_001EABA4;
    case 201u: goto L_001EABB0;
    case 202u: goto L_001EABE4;
    case 203u: goto L_001EAC18;
    case 204u: goto L_001EAC3C;
    case 205u: goto L_001EAC48;
    case 206u: goto L_001EAC54;
    case 207u: goto L_001EAC68;
    case 208u: goto L_001EAC78;
    case 209u: goto L_001EAC88;
    case 210u: goto L_001EACB0;
    case 211u: goto L_001EACBC;
    case 212u: goto L_001EACC4;
    case 213u: goto L_001EAD08;
    case 214u: goto L_001EAD1C;
    case 215u: goto L_001EAD3C;
    case 216u: goto L_001EAD50;
    case 217u: goto L_001EAEE8;
    case 218u: goto L_001EAF1C;
    case 219u: goto L_001EAF90;
    case 220u: goto L_001EAFB0;
    case 221u: goto L_001EAFD0;
    case 222u: goto L_001EAFF8;
    case 223u: goto L_001EB004;
    case 224u: goto L_001EB00C;
    case 225u: goto L_001EB050;
    case 226u: goto L_001EB064;
    case 227u: goto L_001EB0B0;
    case 228u: goto L_001EB0D4;
    case 229u: goto L_001EB0F4;
    case 230u: goto L_001EB108;
    case 231u: goto L_001EB134;
    case 232u: goto L_001EB330;
    case 233u: goto L_001EB33C;
    case 234u: goto L_001EB38C;
    case 235u: goto L_001EB3A8;
    case 236u: goto L_001EB3B4;
    case 237u: goto L_001EB3CC;
    case 238u: goto L_001EB414;
    case 239u: goto L_001EB4D8;
    case 240u: goto L_001EB59C;
    case 241u: goto L_001EB5AC;
    case 242u: goto L_001EB624;
    case 243u: goto L_001EB67C;
    case 244u: goto L_001EB6A8;
    case 245u: goto L_001EB6BC;
    case 246u: goto L_001EB6E8;
    case 247u: goto L_001EB6FC;
    case 248u: goto L_001EB728;
    case 249u: goto L_001EB7A0;
    case 250u: goto L_001EB7B0;
    case 251u: goto L_001EB828;
    case 252u: goto L_001EB8AC;
    case 253u: goto L_001EB8B4;
    case 254u: goto L_001EB988;
    case 255u: goto L_001EB998;
    case 256u: goto L_001EBA94;
    case 257u: goto L_001EBAC4;
    case 258u: goto L_001EBAE0;
    case 259u: goto L_001EBB5C;
    case 260u: goto L_001EBB70;
    case 261u: goto L_001EBBF8;
    case 262u: goto L_001EBC18;
    case 263u: goto L_001EBC20;
    case 264u: goto L_001EBC40;
    case 265u: goto L_001EBCF8;
    case 266u: goto L_001EBD68;
    case 267u: goto L_001EBD6C;
    case 268u: goto L_001EBD90;
    case 269u: goto L_001EBDB8;
    case 270u: goto L_001EBDD4;
    case 271u: goto L_001EBDF0;
    case 272u: goto L_001EBE18;
    case 273u: goto L_001EBE38;
    case 274u: goto L_001EBE6C;
    case 275u: goto L_001EBE98;
    case 276u: goto L_001EBEA0;
    case 277u: goto L_001EBEA8;
    case 278u: goto L_001EBEB4;
    case 279u: goto L_001EBEC0;
    case 280u: goto L_001EBEE0;
    case 281u: goto L_001EBF0C;
    case 282u: goto L_001EBF3C;
    case 283u: goto L_001EBF54;
    case 284u: goto L_001EBF70;
    case 285u: goto L_001EBF9C;
    case 286u: goto L_001EBFCC;
    case 287u: goto L_001EBFE8;
    default: bad_entry(c, 0x001E8000u); return;
    }
L_001E8000:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 21464u));
    c.budget -= 2;
L_001E8008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[2], c.r[2].w[0] - 28032u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 1011u);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st128((c.r[4].w[0]) & ~15u, c.r[3]);  if (t) { goto L_001E8030; } }
    set32(c.r[2], 0u + 1155u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001E8038; } }
L_001E8030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[29].w[0] + 360u), c.r[2].w[0]);
    c.budget -= 2;
L_001E8038:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[2].w[0] + 212u));
    c.f[1] = fp::add(c.f[0], c.f[2]);
    st32((c.r[2].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[2].w[0] + 212u);  if (t) { goto L_001E8070; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_001E8094; } }
L_001E8070:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E8094; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 4;
L_001E8094:
    c.f[0] = ld32((c.r[16].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = fp::add(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E80C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 212u), c.f[0]);  if (t) { goto L_001E80EC; } }
L_001E80C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E80EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_001E80EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.f[12] = ld32((c.r[2].w[0] + 212u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E80FCu); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001E80FCu) [[unlikely]] return; }
L_001E80FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[3], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    set32(c.r[2], c.r[2].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
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
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 360u));
    st32((c.r[16].w[0] + 232u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 944u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E815Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 29u, depth + 1u); else { c.pc = 0x001F0370u; return; } if (c.pc != 0x001E815Cu) [[unlikely]] return; }
L_001E815C:
    st32((c.r[29].w[0] + 468u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[16].w[0] + 212u));
    c.f[1] = ld32((c.r[29].w[0] + 468u));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 468u), c.f[1]);  if (t) { goto L_001E8194; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 468u), c.f[0]);  if (t) { goto L_001E81B8; } }
L_001E8194:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E81B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 468u), c.f[0]);
    c.budget -= 4;
L_001E81B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 468u));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E81E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 468u), c.f[0]);  if (t) { goto L_001E8208; } }
L_001E81E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E8208; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 468u), c.f[0]);
    c.budget -= 4;
L_001E8208:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 468u));
    c.f[0] = ld32((c.r[1].w[0] + 21536u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E8234; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21528u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E83CC; } }
L_001E8234:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[3] = ld32((c.r[1].w[0] + 21672u));
    c.f[0] = ld32((c.r[29].w[0] + 468u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E8254; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = fp::sub(c.f[3], c.f[0]);  if (t) { goto L_001E8258; } }
L_001E8254:
    c.f[3] = fp::sub(c.f[0], c.f[3]);
    c.budget -= 1;
L_001E8258:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E8290; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = 0u;
    c.f[3] = fp::sub(c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E8290; } }
    c.f[3] = c.f[3] ^ fp::kSign;
    c.budget -= 1;
L_001E8290:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 21496u));
    c.f[0] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21456u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[20] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E82BC; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_001E82BC:
    c.f[12] = ld32((c.r[16].w[0] + 212u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E82C8u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001E82C8u) [[unlikely]] return; }
L_001E82C8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 16u);  if (t) { goto L_001E82F0; } }
L_001E82D4:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E82D4u | kUnwind; return; } goto L_001E82D4; } }
L_001E82F0:
    st32((c.r[29].w[0] + 216u), c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[3], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 208u);
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
    set32(c.r[4], c.r[16].w[0] + 224u);
    set32(c.r[3], c.r[29].w[0] + 208u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.f[3] = 0u;
    c.f[2] = 0u;
    set32(c.r[3], c.r[29].w[0] + 208u);
    c.f[0] = 0u;
    set32(c.r[4], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 208u), c.f[3]);
    st32((c.r[29].w[0] + 212u), c.f[2]);
    st32((c.r[29].w[0] + 216u), c.f[1]);
    st32((c.r[29].w[0] + 220u), c.f[0]);
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
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[0] = ld32((c.r[16].w[0] + 224u));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[3].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 232u));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[3].w[0] + 232u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + 224u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 55;
L_001E83CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[18].w[0] + 3u);
    set32(c.r[4], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E83E8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
L_001E83E8:
    c.f[12] = ld32((c.r[16].w[0] + 212u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E83F4u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001E83F4u) [[unlikely]] return; }
L_001E83F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[3].w[0] - 28016u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[4], c.r[16].w[0] + 224u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[3] = 0u;
    c.f[2] = 0u;
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.f[0] = 0u;
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 128u), c.f[3]);
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 136u), c.f[1]);
    c.budget -= 35;
L_001E8480:
    st32((c.r[29].w[0] + 140u), c.f[0]);
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
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[0] = ld32((c.r[16].w[0] + 224u));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[3].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 232u));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[3].w[0] + 232u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + 224u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);  if (t) { goto L_001EBD68; } }
L_001E84E4:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 393u));
    set32(c.r[2], 0u - 3u);
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E8508; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001E8508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8514u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E8514u) [[unlikely]] return; }
L_001E8514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E8528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001E8528; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E8528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8530u);  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001CD4B0u; return; } if (c.pc != 0x001E8530u) [[unlikely]] return; }
L_001E8530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8540u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 158u, depth + 1u); else { c.pc = 0x001D1A70u; return; } if (c.pc != 0x001E8540u) [[unlikely]] return; }
L_001E8540:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E8564; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8558u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E8558u) [[unlikely]] return; }
L_001E8558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E8564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E856Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E856Cu) [[unlikely]] return; }
L_001E856C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E8578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8580u);  if (depth < kMaxDepth) unit_0066(c, 283u, depth + 1u); else { c.pc = 0x0029AEB0u; return; } if (c.pc != 0x001E8580u) [[unlikely]] return; }
L_001E8580:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E85B4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E85ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 359u, depth + 1u); else { c.pc = 0x0029B960u; return; } if (c.pc != 0x001E85ACu) [[unlikely]] return; }
L_001E85AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E85B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 1004u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E85D0; } }
    set32(c.r[2], 0u + 1104u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E8734; } }
L_001E85D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E8730; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E8730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E85F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 46u, depth + 1u); else { c.pc = 0x001E0820u; return; } if (c.pc != 0x001E85F4u) [[unlikely]] return; }
L_001E85F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8604u); set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_0038(c, 46u, depth + 1u); else { c.pc = 0x001E0820u; return; } if (c.pc != 0x001E8604u) [[unlikely]] return; }
L_001E8604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 1004u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E865C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 884u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], 0u + 4405u);  if (t) { goto L_001E8654; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8634u);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001E8634u) [[unlikely]] return; }
L_001E8634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], 0u + 4410u);  if (t) { goto L_001E8648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 4404u);  if (t) { goto L_001E8648; } }
    set32(c.r[20], 0u + 4410u);
    c.budget -= 1;
L_001E8648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_001E8694; } }
    set32(c.r[20], 0u + 4405u);
    c.budget -= 1;
L_001E8654:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8690; } }
L_001E865C:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 884u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E8674; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 4406u);  if (t) { goto L_001E8690; } }
L_001E8674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E867Cu);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001E867Cu) [[unlikely]] return; }
L_001E867C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], 0u + 4411u);  if (t) { goto L_001E8690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 4407u);  if (t) { goto L_001E8690; } }
    set32(c.r[20], 0u + 4411u);
    c.budget -= 1;
L_001E8690:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_001E8694:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E86A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E86A0u) [[unlikely]] return; }
L_001E86A0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[7], c.r[2].w[0] << 3);
    set32(c.r[6], 0u - 9u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 403u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 403u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[3].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 403u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 403u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 884u)));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8728u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AEE0u; return; } if (c.pc != 0x001E8728u) [[unlikely]] return; }
L_001E8728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E8730:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E8734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E873Cu);  if (depth < kMaxDepth) unit_0034(c, 129u, depth + 1u); else { c.pc = 0x001D1410u; return; } if (c.pc != 0x001E873Cu) [[unlikely]] return; }
L_001E873C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E8888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E874Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 130u, depth + 1u); else { c.pc = 0x001D1470u; return; } if (c.pc != 0x001E874Cu) [[unlikely]] return; }
L_001E874C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E8780; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E8780; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E879C; } }
L_001E8780:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], 0u - 33u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_001E879C:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 9551u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E87D0; } }
    set32(c.r[3], 0u + 9717u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E87D0; } }
    set32(c.r[3], 0u + 9713u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E87D0; } }
    set32(c.r[3], 0u + 9513u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E87EC; } }
L_001E87D0:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], 0u - 33u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_001E87EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 9034u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 9551u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 9622u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 9170u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 9005u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 9716u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 9089u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 394u));
    c.r[3].d[0] = c.r[5].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E8888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8890u);  if (depth < kMaxDepth) unit_0034(c, 96u, depth + 1u); else { c.pc = 0x001D0D30u; return; } if (c.pc != 0x001E8890u) [[unlikely]] return; }
L_001E8890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E8BE4; } }
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E88B0u); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001E88B0u) [[unlikely]] return; }
L_001E88B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21448u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E88D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E88D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001E88D0u) [[unlikely]] return; }
L_001E88D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E88D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 14u);  if (t) { goto L_001E88F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_001E88F4; } }
    set32(c.r[5], 0u + 14u);
    c.budget -= 1;
L_001E88F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E88FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 81u, depth + 1u); else { c.pc = 0x001E1350u; return; } if (c.pc != 0x001E88FCu) [[unlikely]] return; }
L_001E88FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E8910; } }
    st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001E8910:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E8B14; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 208ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E89A4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41EC0000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[4].w[0] + 48u);  if (t) { goto L_001E8950; } }
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 1;
L_001E8950:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41EC0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0xC1EC0000u);  if (t) { goto L_001E8970; } }
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1EC0000u);
    c.budget -= 2;
L_001E8970:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0xC1EC0000u);  if (t) { goto L_001E898C; } }
    goto L_001E8984;
L_001E8980:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1EC0000u);
    c.budget -= 1;
L_001E8984:
    st32((c.r[5].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1EC0000u);
    c.budget -= 2;
L_001E898C:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E89A4; } }
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.budget -= 1;
L_001E89A4:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 474u));
    set32(c.r[3], 0u + 60u);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 560u));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 56u);  if (t) { goto L_001E89D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 40u);  if (t) { goto L_001E89D0; } }
    set32(c.r[4], 0u + 56u);
    c.budget -= 1;
L_001E89D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 560u));
    st16((c.r[16].w[0] + 474u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_001E8A2C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001E8A08; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_001E8A08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[1].w[0] + 21672u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8A18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 350u, depth + 1u); else { c.pc = 0x001CBD30u; return; } if (c.pc != 0x001E8A18u) [[unlikely]] return; }
L_001E8A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8A20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 51u, depth + 1u); else { c.pc = 0x001E4A80u; return; } if (c.pc != 0x001E8A20u) [[unlikely]] return; }
L_001E8A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 1;
L_001E8A2C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 16ull;  if (t) { goto L_001E8A60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8A3Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E8A3Cu) [[unlikely]] return; }
L_001E8A3C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8A54u); set32(c.r[5], 0u + 717u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E8A54u) [[unlikely]] return; }
L_001E8A54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 1;
L_001E8A60:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001E8A78; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_001E8A78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[1].w[0] + 21672u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8A88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 350u, depth + 1u); else { c.pc = 0x001CBD30u; return; } if (c.pc != 0x001E8A88u) [[unlikely]] return; }
L_001E8A88:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41EC0000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[3].w[0] + 48u));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[3].w[0] + 48u);  if (t) { goto L_001E8AAC; } }
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 1;
L_001E8AAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41EC0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xC1EC0000u);  if (t) { goto L_001E8ACC; } }
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1EC0000u);
    c.budget -= 2;
L_001E8ACC:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0xC1EC0000u);  if (t) { goto L_001E8AE8; } }
    st32((c.r[4].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1EC0000u);
    c.budget -= 2;
L_001E8AE8:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E8B00; } }
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 1;
L_001E8B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8B08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001E8B08u) [[unlikely]] return; }
L_001E8B08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E8B14:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);  if (t) { goto L_001E8B24; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    c.budget -= 2;
L_001E8B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8B2Cu); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E8B2Cu) [[unlikely]] return; }
L_001E8B2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001E8B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001E8B40; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E8B40:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 35u));
    c.r[3].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E8B58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_001E8B5C; } }
L_001E8B58:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E8B5C:
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[5], 0u + 39u);
    set32(c.r[3], c.r[3].w[0] + 39u);
    set32(c.r[6], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[5].w[0] - c.r[4].w[0]);  if (t) { goto L_001E8B84; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001E8BB0; } }
L_001E8B84:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[1].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
L_001E8BB0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st8((c.r[16].w[0] + 587u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E8BC0; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_001E8BC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[1].w[0] + 21672u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8BD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 350u, depth + 1u); else { c.pc = 0x001CBD30u; return; } if (c.pc != 0x001E8BD0u) [[unlikely]] return; }
L_001E8BD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8BDCu); set32(c.r[5], 0u + 63u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E8BDCu) [[unlikely]] return; }
L_001E8BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E8BE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 61u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 15070u);  if (t) { goto L_001E8E0C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[16].w[0] + 560u));
    set32(c.r[5], 0u + 10u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C10u); st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 81u, depth + 1u); else { c.pc = 0x001E1350u; return; } if (c.pc != 0x001E8C10u) [[unlikely]] return; }
L_001E8C10:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].sd[0] < 46ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E8C84; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 560u));
    st16((c.r[16].w[0] + 474u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_001E8C4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 51u, depth + 1u); else { c.pc = 0x001E4A80u; return; } if (c.pc != 0x001E8C40u) [[unlikely]] return; }
L_001E8C40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 1;
L_001E8C4C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 16ull;  if (t) { goto L_001E8C6C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C60u); set32(c.r[5], 0u + 51u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E8C60u) [[unlikely]] return; }
L_001E8C60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 1;
L_001E8C6C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001E8C7Cu) [[unlikely]] return; }
L_001E8C7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E8C84:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[8], 0u - 1u);  if (t) { goto L_001E8CAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[3].w[0] + 164u)));  if (t) { goto L_001E8CAC; } }
    set32(c.r[8], 0u - 1u);
    c.budget -= 1;
L_001E8CAC:
    set32(c.r[3], ld32((c.r[16].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], 0u - 1u);  if (t) { goto L_001E8CC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 168u)));  if (t) { goto L_001E8CC4; } }
    set32(c.r[7], 0u - 1u);
    c.budget -= 1;
L_001E8CC4:
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], 0u + 5901u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001E8CE8; } }
    set32(c.r[3], 0u + 570u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_001E8CE8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E8CE8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001E8D00; } }
    set32(c.r[3], 0u + 573u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_001E8D00; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E8D00:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001E8D44; } }
    set32(c.r[3], 0u + 541u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001E8D38; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001E8D2C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_001E8D2C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E8D2C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E8D38; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001E8D38:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001E8D44; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E8D44:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E8D58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001E8D58; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E8D58:
    set32(c.r[3], ld32((c.r[16].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E8DD4; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E8DD4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001E8DD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8D80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 89u, depth + 1u); else { c.pc = 0x001E1460u; return; } if (c.pc != 0x001E8D80u) [[unlikely]] return; }
L_001E8D80:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[5], 0u + 81u);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8D9Cu); st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E8D9Cu) [[unlikely]] return; }
L_001E8D9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 984u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8DA8u); c.r[17].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0034(c, 158u, depth + 1u); else { c.pc = 0x001D1A70u; return; } if (c.pc != 0x001E8DA8u) [[unlikely]] return; }
L_001E8DA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E8DC4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8DBCu); set32(c.r[5], 0u + 82u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E8DBCu) [[unlikely]] return; }
L_001E8DBC:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001E8DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8DCCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E8DCCu) [[unlikely]] return; }
L_001E8DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E8DD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8DECu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E8DECu) [[unlikely]] return; }
L_001E8DEC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 85u, depth + 1u); else { c.pc = 0x001E5120u; return; } if (c.pc != 0x001E8E00u) [[unlikely]] return; }
L_001E8E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 15070u);
    c.budget -= 1;
L_001E8E0C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 225u);  if (t) { goto L_001E8E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 40u, depth + 1u); else { c.pc = 0x001EC780u; return; } if (c.pc != 0x001E8E1Cu) [[unlikely]] return; }
L_001E8E1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 225u);
    c.budget -= 1;
L_001E8E28:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E8EBC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 644u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[16].w[0] + 652u));
    c.f[13] = ld32((c.r[1].w[0] + 21440u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E54u); set32(c.r[4], c.r[16].w[0] + 212u);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x001E8E54u) [[unlikely]] return; }
L_001E8E54:
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E8E74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[16].w[0] + 656u);  if (t) { goto L_001E8E8C; } }
L_001E8E74:
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21456u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[12] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[3], c.r[16].w[0] + 656u);
    c.budget -= 6;
L_001E8E8C:
    set32(c.r[2], c.r[16].w[0] + 304u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[4], c.r[16].w[0] + 224u);
    set32(c.r[5], c.r[16].w[0] + 656u);
    set32(c.r[6], c.r[16].w[0] + 224u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8EB4u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0011(c, 18u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x001E8EB4u) [[unlikely]] return; }
L_001E8EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E8EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8EC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 131u, depth + 1u); else { c.pc = 0x001D14A0u; return; } if (c.pc != 0x001E8EC4u) [[unlikely]] return; }
L_001E8EC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E8EE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8ED4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 132u, depth + 1u); else { c.pc = 0x001D14B0u; return; } if (c.pc != 0x001E8ED4u) [[unlikely]] return; }
L_001E8ED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E8EF4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E8EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8EE8u);  if (depth < kMaxDepth) unit_003C(c, 249u, depth + 1u); else { c.pc = 0x001F3240u; return; } if (c.pc != 0x001E8EE8u) [[unlikely]] return; }
L_001E8EE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E8EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8EFCu);  if (depth < kMaxDepth) unit_0034(c, 135u, depth + 1u); else { c.pc = 0x001D1520u; return; } if (c.pc != 0x001E8EFCu) [[unlikely]] return; }
L_001E8EFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E8F18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 187u, depth + 1u); else { c.pc = 0x0022A640u; return; } if (c.pc != 0x001E8F0Cu) [[unlikely]] return; }
L_001E8F0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E8F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F20u);  if (depth < kMaxDepth) unit_0034(c, 136u, depth + 1u); else { c.pc = 0x001D1580u; return; } if (c.pc != 0x001E8F20u) [[unlikely]] return; }
L_001E8F20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 140u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x001E8F30u) [[unlikely]] return; }
L_001E8F30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E8F54; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 15110u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E8F54; } }
    set32(c.r[3], 0u + 15115u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 15700u);  if (t) { goto L_001E8FA8; } }
L_001E8F54:
    set32(c.r[4], ld32((c.r[16].w[0] + 644u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 484u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F84u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 317u, depth + 1u); else { c.pc = 0x001FF2F0u; return; } if (c.pc != 0x001E8F84u) [[unlikely]] return; }
L_001E8F84:
    set32(c.r[4], ld32((c.r[16].w[0] + 644u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 484u), 0u);  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 15700u);
    c.budget -= 1;
L_001E8FA8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1050u);  if (t) { goto L_001E8FE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 168u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15720u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8FD4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001E8FD4u) [[unlikely]] return; }
L_001E8FD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 1050u);
    c.budget -= 1;
L_001E8FE0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1150u);  if (t) { goto L_001E9034; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], 0u + 83u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 672u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 676u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E901Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E901Cu) [[unlikely]] return; }
L_001E901C:
    set32(c.r[5], ld32((c.r[16].w[0] + 676u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9028u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 111u, depth + 1u); else { c.pc = 0x001CD650u; return; } if (c.pc != 0x001E9028u) [[unlikely]] return; }
L_001E9028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 1150u);
    c.budget -= 1;
L_001E9034:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1100u);  if (t) { goto L_001E9088; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], 0u + 91u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 672u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 676u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9070u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E9070u) [[unlikely]] return; }
L_001E9070:
    set32(c.r[5], ld32((c.r[16].w[0] + 676u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E907Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 111u, depth + 1u); else { c.pc = 0x001CD650u; return; } if (c.pc != 0x001E907Cu) [[unlikely]] return; }
L_001E907C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 1100u);
    c.budget -= 1;
L_001E9088:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1000u);  if (t) { goto L_001E90CC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], 0u + 91u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    st32((c.r[16].w[0] + 672u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 676u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E90C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E90C0u) [[unlikely]] return; }
L_001E90C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 1000u);
    c.budget -= 1;
L_001E90CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 52u);  if (t) { goto L_001E9110; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], 0u + 91u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    st32((c.r[16].w[0] + 672u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 676u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9104u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E9104u) [[unlikely]] return; }
L_001E9104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 52u);
    c.budget -= 1;
L_001E9110:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E9184; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[1].d[0] = c.r[3].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 472u));
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 32ull;  if (t) { goto L_001E9168; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E915Cu); set32(c.r[5], 0u + 3950u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E915Cu) [[unlikely]] return; }
L_001E915C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 1;
L_001E9168:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E917Cu); set32(c.r[5], 0u + 3951u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E917Cu) [[unlikely]] return; }
L_001E917C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E9184:
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], 0u + 103u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E91AC; } }
    set32(c.r[3], 0u + 104u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E91AC; } }
    set32(c.r[3], 0u + 105u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E91BC; } }
L_001E91AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E91B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 229u, depth + 1u); else { c.pc = 0x002F7680u; return; } if (c.pc != 0x001E91B4u) [[unlikely]] return; }
L_001E91B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E91BC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[4].d[0] = c.r[3].d[0] >> 61;
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E9584; } }
    c.r[1].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E9584; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001E9248; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 395u));
    set32(c.r[4], 0u - 9u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[2].d[0] = c.r[4].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001E9264; } }
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E9260; } }
L_001E9248:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001E9260:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E9264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E926Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E926Cu) [[unlikely]] return; }
L_001E926C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E92A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 9076u);
    set32(c.r[3], ld32((c.r[3].w[0] + 912u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E92A0; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001E92A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 372u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E92B4; } }
    set32(c.r[17], 0u + 2u);
    c.budget -= 1;
L_001E92B4:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E92F4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8994u);
    set32(c.r[17], 0u + 2u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 872u), c.r[17].w[0]);
    c.budget -= 12;
L_001E92F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0] + 228u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E931C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_001E9324; } }
L_001E931C:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 2;
L_001E9324:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E933C; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001E933C:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 474u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0] + 560u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 560u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E9380; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 393u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E9398; } }
L_001E9380:
    c.r[4].d[0] = ld8((c.r[5].w[0] + 393u));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001E9398:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E93A4u); set32(c.r[4], ld32((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x001E93A4u) [[unlikely]] return; }
L_001E93A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E93B0; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001E93B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001E93D8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 61;
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E93DC; } }
L_001E93D8:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001E93DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E93E4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E93E4u) [[unlikely]] return; }
L_001E93E4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E9414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E93F8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E93F8u) [[unlikely]] return; }
L_001E93F8:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E9418; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E9418; } }
L_001E9414:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001E9418:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001E9554; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[16].w[0] + 872u), c.r[3].w[0]);  if (t) { goto L_001E9438; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 872u), c.r[2].w[0]);
    c.budget -= 2;
L_001E9438:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 393u));
    set32(c.r[2], 0u + 5u);
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 61;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001E9460; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E9464; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001E9460:
    st32((c.r[16].w[0] + 872u), c.r[2].w[0]);
    c.budget -= 1;
L_001E9464:
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E948Cu); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x00168C20u; return; } if (c.pc != 0x001E948Cu) [[unlikely]] return; }
L_001E948C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E94F8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 393u));
    set32(c.r[2], 0u + 5u);
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 61;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001E94C0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_001E94F8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001E94C0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001E94F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E94E4u); set32(c.r[6], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x00168C20u; return; } if (c.pc != 0x001E94E4u) [[unlikely]] return; }
L_001E94E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E94F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 3;
L_001E94F8:
    st32((c.r[16].w[0] + 176u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9518u); st32((c.r[2].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0035(c, 149u, depth + 1u); else { c.pc = 0x001D6C30u; return; } if (c.pc != 0x001E9518u) [[unlikely]] return; }
L_001E9518:
    set32(c.r[7], ld32((c.r[16].w[0] + 60u)));
    c.r[3].d[0] = 0ull & 7ull;
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[5], 0u - 29u);
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st32((c.r[7].w[0] + 640u), 0u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
L_001E9554:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 393u));
    set32(c.r[5], 0u - 2u);
    c.r[6].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 393u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EBD68; } }
L_001E9584:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 224u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E95BC; } }
    set32(c.r[3], 0u + 661u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E95BC; } }
    set32(c.r[3], 0u + 662u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E95BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E95B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 76u, depth + 1u); else { c.pc = 0x001D0910u; return; } if (c.pc != 0x001E95B4u) [[unlikely]] return; }
L_001E95B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E9698; } }
L_001E95BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E95D0; } }
    st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001E95D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E95F0; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 560u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001E95F0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 378u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 560u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9620u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E9620u) [[unlikely]] return; }
L_001E9620:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9634u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E9634u) [[unlikely]] return; }
L_001E9634:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001E9654; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 2;
L_001E9654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E965Cu); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E965Cu) [[unlikely]] return; }
L_001E965C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E9670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001E9670; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E9670:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9680u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001E9680u) [[unlikely]] return; }
L_001E9680:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E968Cu); set32(c.r[5], 0u + 717u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E968Cu) [[unlikely]] return; }
L_001E968C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E9698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E96A0u);  if (depth < kMaxDepth) unit_0034(c, 61u, depth + 1u); else { c.pc = 0x001D06C0u; return; } if (c.pc != 0x001E96A0u) [[unlikely]] return; }
L_001E96A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E96F0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 402u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 396u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E96E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001E96E8u) [[unlikely]] return; }
L_001E96E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E96F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].sd[0] < 441ll ? 1ull : 0ull;  if (t) { goto L_001E9718; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E970Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 139u, depth + 1u); else { c.pc = 0x001E2100u; return; } if (c.pc != 0x001E970Cu) [[unlikely]] return; }
L_001E970C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[2].d[0] = c.r[3].sd[0] < 441ll ? 1ull : 0ull;
    c.budget -= 1;
L_001E9718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E9740; } }
    c.r[1].d[0] = c.r[3].sd[0] < 453ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E9740; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9738u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 139u, depth + 1u); else { c.pc = 0x001E2100u; return; } if (c.pc != 0x001E9738u) [[unlikely]] return; }
L_001E9738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E9740:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].sd[0] < 471ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E9774; } }
    c.r[1].d[0] = c.r[3].sd[0] < 483ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E9770; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9768u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 139u, depth + 1u); else { c.pc = 0x001E2100u; return; } if (c.pc != 0x001E9768u) [[unlikely]] return; }
L_001E9768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E9770:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E9774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E977Cu);  if (depth < kMaxDepth) unit_0034(c, 63u, depth + 1u); else { c.pc = 0x001D0740u; return; } if (c.pc != 0x001E977Cu) [[unlikely]] return; }
L_001E977C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E9890; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9790u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 139u, depth + 1u); else { c.pc = 0x001E2100u; return; } if (c.pc != 0x001E9790u) [[unlikely]] return; }
L_001E9790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9798u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 231u, depth + 1u); else { c.pc = 0x001E6FC0u; return; } if (c.pc != 0x001E9798u) [[unlikely]] return; }
L_001E9798:
    set32(c.r[4], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E97C8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E97C0u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E97C0u) [[unlikely]] return; }
L_001E97C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E97C8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 371u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E9810; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E97ECu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E97ECu) [[unlikely]] return; }
L_001E97EC:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 23u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9808u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E9808u) [[unlikely]] return; }
L_001E9808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E9810:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].sd[0] < 450ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E9844; } }
    c.r[1].d[0] = c.r[4].sd[0] < 458ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
L_001E9844:
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E987C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 402u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E9878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9870u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 90u, depth + 1u); else { c.pc = 0x001E51B0u; return; } if (c.pc != 0x001E9870u) [[unlikely]] return; }
L_001E9870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E9878:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E987C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9884u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E9884u) [[unlikely]] return; }
L_001E9884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E9890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9898u);  if (depth < kMaxDepth) unit_0034(c, 67u, depth + 1u); else { c.pc = 0x001D07D0u; return; } if (c.pc != 0x001E9898u) [[unlikely]] return; }
L_001E9898:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E98B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E98A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 68u, depth + 1u); else { c.pc = 0x001D07E0u; return; } if (c.pc != 0x001E98A8u) [[unlikely]] return; }
L_001E98A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E99A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E98B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E98BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 139u, depth + 1u); else { c.pc = 0x001E2100u; return; } if (c.pc != 0x001E98BCu) [[unlikely]] return; }
L_001E98BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E98C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 231u, depth + 1u); else { c.pc = 0x001E6FC0u; return; } if (c.pc != 0x001E98C4u) [[unlikely]] return; }
L_001E98C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E98F4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E98ECu); set32(c.r[5], 0u + 38u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E98ECu) [[unlikely]] return; }
L_001E98EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E98F4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 371u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E993C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9918u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E9918u) [[unlikely]] return; }
L_001E9918:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 23u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9934u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E9934u) [[unlikely]] return; }
L_001E9934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E993C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E998C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 402u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E9988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9980u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 90u, depth + 1u); else { c.pc = 0x001E51B0u; return; } if (c.pc != 0x001E9980u) [[unlikely]] return; }
L_001E9980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E9988:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E998C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9994u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E9994u) [[unlikely]] return; }
L_001E9994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E99A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E99A8u);  if (depth < kMaxDepth) unit_0034(c, 107u, depth + 1u); else { c.pc = 0x001D0EE0u; return; } if (c.pc != 0x001E99A8u) [[unlikely]] return; }
L_001E99A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E99D0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 4457u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E9A30; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E9A2C; } }
L_001E99D0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 371u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E9A00; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E99F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001E99F8u) [[unlikely]] return; }
L_001E99F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E9A00:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9A24u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001E9A24u) [[unlikely]] return; }
L_001E9A24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E9A2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E9A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9A38u);  if (depth < kMaxDepth) unit_0034(c, 108u, depth + 1u); else { c.pc = 0x001D0EF0u; return; } if (c.pc != 0x001E9A38u) [[unlikely]] return; }
L_001E9A38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E9AA0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 371u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E9A70; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9A68u); set32(c.r[5], 0u + 751u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E9A68u) [[unlikely]] return; }
L_001E9A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E9A70:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9A94u); set32(c.r[5], 0u + 751u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E9A94u) [[unlikely]] return; }
L_001E9A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E9AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9AA8u);  if (depth < kMaxDepth) unit_0034(c, 102u, depth + 1u); else { c.pc = 0x001D0E50u; return; } if (c.pc != 0x001E9AA8u) [[unlikely]] return; }
L_001E9AA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E9B24; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 371u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E9AE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9AD8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001E9AD8u) [[unlikely]] return; }
L_001E9AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E9AE0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E9B00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9AF4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E9AF4u) [[unlikely]] return; }
L_001E9AF4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
L_001E9B00:
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B18u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001E9B18u) [[unlikely]] return; }
L_001E9B18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E9B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B2Cu);  if (depth < kMaxDepth) unit_0034(c, 104u, depth + 1u); else { c.pc = 0x001D0E90u; return; } if (c.pc != 0x001E9B2Cu) [[unlikely]] return; }
L_001E9B2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E9B94; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 371u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E9B64; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B5Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001E9B5Cu) [[unlikely]] return; }
L_001E9B5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E9B64:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B88u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001E9B88u) [[unlikely]] return; }
L_001E9B88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E9B94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B9Cu);  if (depth < kMaxDepth) unit_0034(c, 106u, depth + 1u); else { c.pc = 0x001D0ED0u; return; } if (c.pc != 0x001E9B9Cu) [[unlikely]] return; }
L_001E9B9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E9C24; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 371u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E9BD4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9BCCu); set32(c.r[5], 0u + 159u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E9BCCu) [[unlikely]] return; }
L_001E9BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E9BD4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E9C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9C04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 90u, depth + 1u); else { c.pc = 0x001E51B0u; return; } if (c.pc != 0x001E9C04u) [[unlikely]] return; }
L_001E9C04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E9C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9C18u); set32(c.r[5], 0u + 159u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E9C18u) [[unlikely]] return; }
L_001E9C18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E9C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9C2Cu);  if (depth < kMaxDepth) unit_0034(c, 111u, depth + 1u); else { c.pc = 0x001D0F60u; return; } if (c.pc != 0x001E9C2Cu) [[unlikely]] return; }
L_001E9C2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E9C44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9C3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 112u, depth + 1u); else { c.pc = 0x001D0F70u; return; } if (c.pc != 0x001E9C3Cu) [[unlikely]] return; }
L_001E9C3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E9CA4; } }
L_001E9C44:
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9C58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 111u, depth + 1u); else { c.pc = 0x001D0F60u; return; } if (c.pc != 0x001E9C58u) [[unlikely]] return; }
L_001E9C58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E9C80; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 168u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15610u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9C78u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001E9C78u) [[unlikely]] return; }
L_001E9C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E9C80:
    set32(c.r[6], ld32((c.r[16].w[0] + 168u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15620u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9C98u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001E9C98u) [[unlikely]] return; }
L_001E9C98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E9CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9CACu);  if (depth < kMaxDepth) unit_0034(c, 114u, depth + 1u); else { c.pc = 0x001D0F90u; return; } if (c.pc != 0x001E9CACu) [[unlikely]] return; }
L_001E9CAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E9CD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9CBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 113u, depth + 1u); else { c.pc = 0x001D0F80u; return; } if (c.pc != 0x001E9CBCu) [[unlikely]] return; }
L_001E9CBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E9CD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9CCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 116u, depth + 1u); else { c.pc = 0x001D0FB0u; return; } if (c.pc != 0x001E9CCCu) [[unlikely]] return; }
L_001E9CCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E9D44; } }
L_001E9CD4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 371u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E9D04; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9CFCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001E9CFCu) [[unlikely]] return; }
L_001E9CFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E9D04:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.r[1].d[0] = c.r[3].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9D38u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001E9D38u) [[unlikely]] return; }
L_001E9D38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E9D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9D4Cu);  if (depth < kMaxDepth) unit_0034(c, 115u, depth + 1u); else { c.pc = 0x001D0FA0u; return; } if (c.pc != 0x001E9D4Cu) [[unlikely]] return; }
L_001E9D4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E9DC0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 371u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E9D84; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9D7Cu); set32(c.r[5], 0u + 174u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E9D7Cu) [[unlikely]] return; }
L_001E9D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E9D84:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.r[1].d[0] = c.r[3].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9DB8u); set32(c.r[5], 0u + 174u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E9DB8u) [[unlikely]] return; }
L_001E9DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E9DC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 220u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 661u);  if (t) { goto L_001E9E04; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9DF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 95u, depth + 1u); else { c.pc = 0x001E1750u; return; } if (c.pc != 0x001E9DF8u) [[unlikely]] return; }
L_001E9DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 661u);
    c.budget -= 1;
L_001E9E04:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 662u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 660u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E9F40; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E9E60; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.r[3].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
L_001E9E60:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 380u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E9E8C; } }
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E9E8C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001E9E9C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 2;
L_001E9E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9EA4u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E9EA4u) [[unlikely]] return; }
L_001E9EA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E9EB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001E9EB8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E9EB8:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9EC8u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001E9EC8u) [[unlikely]] return; }
L_001E9EC8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E9EDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9EDCu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0046(c, 80u, depth + 1u); else { c.pc = 0x002196D0u; return; } if (c.pc != 0x001E9EDCu) [[unlikely]] return; }
L_001E9EDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E9EF0; } }
    st32((c.r[16].w[0] + 168u), 0u);
    c.budget -= 1;
L_001E9EF0:
    set32(c.r[6], ld32((c.r[16].w[0] + 168u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 667u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9F08u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001E9F08u) [[unlikely]] return; }
L_001E9F08:
    c.f[2] = ld32((c.r[16].w[0] + 228u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[1] = ld32((c.r[16].w[0] + 604u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9F38u); set32(c.r[5], 0u + 676u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E9F38u) [[unlikely]] return; }
L_001E9F38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001E9F40:
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], 0u + 111u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E9F5C; } }
    set32(c.r[2], 0u + 110u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EA0DC; } }
L_001E9F5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], 0u + 111u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E9FB0; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[6].w[0] + 395u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9F90u); st8((c.r[6].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 66u, depth + 1u); else { c.pc = 0x001E0DC0u; return; } if (c.pc != 0x001E9F90u) [[unlikely]] return; }
L_001E9F90:
    set32(c.r[4], c.r[16].w[0] + 224u);
    set32(c.r[3], c.r[16].w[0] + 800u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);  if (t) { goto L_001E9FB8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E9FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9FB8u);  if (depth < kMaxDepth) unit_0038(c, 66u, depth + 1u); else { c.pc = 0x001E0DC0u; return; } if (c.pc != 0x001E9FB8u) [[unlikely]] return; }
L_001E9FB8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 380u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E9FE4; } }
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EBD68; } }
L_001E9FE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], 0u + 111u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9FFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 66u, depth + 1u); else { c.pc = 0x001E0DC0u; return; } if (c.pc != 0x001E9FFCu) [[unlikely]] return; }
L_001E9FFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 228u), c.f[0]);  if (t) { goto L_001EA00C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001EA00C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA018u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EA018u) [[unlikely]] return; }
L_001EA018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001EA02C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001EA02C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EA02C:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA03Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001EA03Cu) [[unlikely]] return; }
L_001EA03C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EA050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA050u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0046(c, 80u, depth + 1u); else { c.pc = 0x002196D0u; return; } if (c.pc != 0x001EA050u) [[unlikely]] return; }
L_001EA050:
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 228u));
    c.f[1] = ld32((c.r[16].w[0] + 604u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EA088; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA088u); set32(c.r[5], 0u + 676u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EA088u) [[unlikely]] return; }
L_001EA088:
    c.r[9].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[8].d[0] = 0ull & 1ull;
    set32(c.r[7], 0u - 2u);
    set32(c.r[5], 0u - 129u);
    set32(c.r[6], c.r[8].w[0] << 7);
    set32(c.r[3], 0u - 65u);
    set32(c.r[4], c.r[8].w[0] << 6);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 176u), 0u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EA0DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA0E4u);  if (depth < kMaxDepth) unit_0034(c, 142u, depth + 1u); else { c.pc = 0x001D16A0u; return; } if (c.pc != 0x001EA0E4u) [[unlikely]] return; }
L_001EA0E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EA150; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], 0u + 1600u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EA14C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EA14C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 644u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 28352u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[16].w[0] + 784u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 644u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 14;
L_001EA140:
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 792u), c.f[0]);  if (t) { goto L_001EBD68; } }
L_001EA14C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EA150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA158u);  if (depth < kMaxDepth) unit_0034(c, 70u, depth + 1u); else { c.pc = 0x001D0800u; return; } if (c.pc != 0x001EA158u) [[unlikely]] return; }
L_001EA158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EA170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA168u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 73u, depth + 1u); else { c.pc = 0x001D0850u; return; } if (c.pc != 0x001EA168u) [[unlikely]] return; }
L_001EA168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EA24C; } }
L_001EA170:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 128ull;  if (t) { goto L_001EA1EC; } }
L_001EA180:
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], 0u + 75u);  if (t) { goto L_001EA198; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[17], c.r[2].w[0] + 76u);
    c.budget -= 2;
L_001EA198:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA1A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001EA1A4u) [[unlikely]] return; }
L_001EA1A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA1ACu); c.r[17].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001EA1ACu) [[unlikely]] return; }
L_001EA1AC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EA1D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EA1D4; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EA1D4; } }
    set32(c.r[17], 0u + 3502u);
    c.budget -= 1;
L_001EA1D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EA1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA1E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EA1E0u) [[unlikely]] return; }
L_001EA1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 1;
L_001EA1EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EA220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA1FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 77u, depth + 1u); else { c.pc = 0x002F9060u; return; } if (c.pc != 0x001EA1FCu) [[unlikely]] return; }
L_001EA1FC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA214u); set32(c.r[5], 0u + 158u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EA214u) [[unlikely]] return; }
L_001EA214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EA220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA228u);  if (depth < kMaxDepth) unit_0038(c, 34u, depth + 1u); else { c.pc = 0x001E0580u; return; } if (c.pc != 0x001EA228u) [[unlikely]] return; }
L_001EA228:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA240u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EA240u) [[unlikely]] return; }
L_001EA240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EA24C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA254u);  if (depth < kMaxDepth) unit_0034(c, 163u, depth + 1u); else { c.pc = 0x001D1FD0u; return; } if (c.pc != 0x001EA254u) [[unlikely]] return; }
L_001EA254:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EA3B0; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_001EA374; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], 0u + 75u);  if (t) { goto L_001EA284; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[17], c.r[2].w[0] + 76u);
    c.budget -= 2;
L_001EA284:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA290u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001EA290u) [[unlikely]] return; }
L_001EA290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA298u); c.r[17].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001EA298u) [[unlikely]] return; }
L_001EA298:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EA2C0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EA2C0; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EA2C0; } }
    set32(c.r[17], 0u + 3502u);
    c.budget -= 1;
L_001EA2C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EA2EC; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EA2EC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA2E4u); set32(c.r[5], 0u + 753u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EA2E4u) [[unlikely]] return; }
L_001EA2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001EA2EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 1264u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44690000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA2FCu); c.r[5].d[0] = c.r[2].d[0] | 30276ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EA2FCu) [[unlikely]] return; }
L_001EA2FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001EA310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001EA310; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EA310:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EA324; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_001EA324:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA334u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EA334u) [[unlikely]] return; }
L_001EA334:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44690000u);
    st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA34Cu); c.r[5].d[0] = c.r[2].d[0] | 30276ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EA34Cu) [[unlikely]] return; }
L_001EA34C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001EA360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001EA360; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EA360:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 32u), 0u);  if (t) { goto L_001EBD68; } }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 1;
L_001EA374:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA388u); set32(c.r[20], 0u + 176u);  if (depth < kMaxDepth) unit_0039(c, 14u, depth + 1u); else { c.pc = 0x001E4190u; return; } if (c.pc != 0x001EA388u) [[unlikely]] return; }
L_001EA388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA390u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 168u, depth + 1u); else { c.pc = 0x001D2090u; return; } if (c.pc != 0x001EA390u) [[unlikely]] return; }
L_001EA390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EA3A0; } }
    set32(c.r[20], 0u + 722u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001EA3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA3A8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EA3A8u) [[unlikely]] return; }
L_001EA3A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001EA3B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[17], 0u + 808u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[17].d[0];  if (t) { goto L_001EA464; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], 0u - 1u);  if (t) { goto L_001EA3E0; } }
    set32(c.r[5], 0u + 144u);
    c.budget -= 1;
L_001EA3E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EA3F4; } }
    set32(c.r[5], 0u + 128u);
    c.budget -= 1;
L_001EA3F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EA40C; } }
    set32(c.r[5], 0u + 96u);
    set32(c.r[17], 0u + 903u);
    c.budget -= 2;
L_001EA40C:
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EA424; } }
    set32(c.r[5], 0u + 170u);
    set32(c.r[17], 0u + 903u);
    c.budget -= 2;
L_001EA424:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA440u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 56u, depth + 1u); else { c.pc = 0x001C4830u; return; } if (c.pc != 0x001EA440u) [[unlikely]] return; }
L_001EA440:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA45Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001EA45Cu) [[unlikely]] return; }
L_001EA45C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001EA464:
    set32(c.r[17], 0u + 903u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[17].d[0]; set32(c.r[3], 0u + 809u);  if (t) { goto L_001EA4EC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], 0u - 1u);  if (t) { goto L_001EA490; } }
    set32(c.r[5], 0u + 122u);
    c.budget -= 1;
L_001EA490:
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EA4A8; } }
    set32(c.r[5], 0u + 144u);
    set32(c.r[17], 0u + 914u);
    c.budget -= 2;
L_001EA4A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA4C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 56u, depth + 1u); else { c.pc = 0x001C4830u; return; } if (c.pc != 0x001EA4C4u) [[unlikely]] return; }
L_001EA4C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA4E0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001EA4E0u) [[unlikely]] return; }
L_001EA4E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 809u);
    c.budget -= 1;
L_001EA4EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 878u);  if (t) { goto L_001EA5A4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA530u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 56u, depth + 1u); else { c.pc = 0x001C4830u; return; } if (c.pc != 0x001EA530u) [[unlikely]] return; }
L_001EA530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[20], 0u + 809u);  if (t) { goto L_001EA54C; } }
    c.r[20].d[0] = c.r[20].d[0] | 32768ull;
    c.budget -= 1;
L_001EA54C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 193ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], 0u + 2u);  if (t) { goto L_001EA588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_001EA588; } }
    set32(c.r[7], 0u + 2u);
    c.budget -= 1;
L_001EA588:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA598u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001EA598u) [[unlikely]] return; }
L_001EA598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 878u);
    c.budget -= 1;
L_001EA5A4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EA604; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], 0u + 50u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA5DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 56u, depth + 1u); else { c.pc = 0x001C4830u; return; } if (c.pc != 0x001EA5DCu) [[unlikely]] return; }
L_001EA5DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[4], 0u + 882u);
    st32((c.r[16].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[3].w[0] + 164u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 176u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 176u), 0u);  if (t) { goto L_001EBD68; } }
L_001EA604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA60Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 24u, depth + 1u); else { c.pc = 0x002F85D0u; return; } if (c.pc != 0x001EA60Cu) [[unlikely]] return; }
L_001EA60C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EA624; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA61Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 29u, depth + 1u); else { c.pc = 0x002F8640u; return; } if (c.pc != 0x001EA61Cu) [[unlikely]] return; }
L_001EA61C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001EA624:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 1551u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EA664; } }
    set32(c.r[3], 0u + 1552u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EA664; } }
    set32(c.r[3], 0u + 1555u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EA664; } }
    set32(c.r[3], 0u + 1562u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EA664; } }
    set32(c.r[3], 0u + 1561u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1556u);  if (t) { goto L_001EA678; } }
L_001EA664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA66Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 60u, depth + 1u); else { c.pc = 0x001ED020u; return; } if (c.pc != 0x001EA66Cu) [[unlikely]] return; }
L_001EA66C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 1556u);
    c.budget -= 1;
L_001EA678:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EA68C; } }
    set32(c.r[3], 0u + 1558u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 800u);  if (t) { goto L_001EA788; } }
L_001EA68C:
    set32(c.r[6], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 380u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EA6D4; } }
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EA74C; } }
L_001EA6D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 1558u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EA704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA6ECu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0046(c, 80u, depth + 1u); else { c.pc = 0x002196D0u; return; } if (c.pc != 0x001EA6ECu) [[unlikely]] return; }
L_001EA6EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA6F8u); set32(c.r[5], 0u + 1559u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EA6F8u) [[unlikely]] return; }
L_001EA6F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 800u));  if (t) { goto L_001EA750; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EA704:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001EA714; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 2;
L_001EA714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA71Cu); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EA71Cu) [[unlikely]] return; }
L_001EA71C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001EA730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001EA730; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EA730:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA740u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001EA740u) [[unlikely]] return; }
L_001EA740:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA74Cu); set32(c.r[5], 0u + 1557u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EA74Cu) [[unlikely]] return; }
L_001EA74C:
    c.f[1] = ld32((c.r[16].w[0] + 800u));
    c.budget -= 1;
L_001EA750:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[16].w[0] + 224u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 808u));
    c.f[0] = ld32((c.r[16].w[0] + 232u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 232u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 804u));
    c.f[0] = ld32((c.r[1].w[0] + 21432u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 804u), c.f[0]);  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 800u);
    c.budget -= 1;
L_001EA788:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EA7B4; } }
    set32(c.r[3], 0u + 801u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EA7B4; } }
    set32(c.r[3], 0u + 4575u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EA7B4; } }
    set32(c.r[3], 0u + 803u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EA7D0; } }
L_001EA7B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EA7D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA7C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 78u, depth + 1u); else { c.pc = 0x001ED4F0u; return; } if (c.pc != 0x001EA7C8u) [[unlikely]] return; }
L_001EA7C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001EA7D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 1001u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EA804; } }
    set32(c.r[3], 0u + 1051u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EA804; } }
    set32(c.r[3], 0u + 1101u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EA804; } }
    set32(c.r[3], 0u + 1151u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1570u);  if (t) { goto L_001EA8A4; } }
L_001EA804:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA824u); st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001EA824u) [[unlikely]] return; }
L_001EA824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 560u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 560u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[1].d[0] = c.r[4].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0] + 168u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[3].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 176u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 176u), 0u);  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 1570u);
    c.budget -= 1;
L_001EA8A4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1576u);  if (t) { goto L_001EA8D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA8C4u); set32(c.r[5], 0u + 1572u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EA8C4u) [[unlikely]] return; }
L_001EA8C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 1576u);
    c.budget -= 1;
L_001EA8D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EAA30; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 64ull;  if (t) { goto L_001EA994; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EA95C; } }
    c.f[1] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21616u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EA938; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 212u), c.f[0]);  if (t) { goto L_001EA95C; } }
L_001EA938:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EA95C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_001EA95C:
    c.f[1] = ld32((c.r[16].w[0] + 680u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EA980; } }
    st32((c.r[16].w[0] + 212u), c.f[1]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001EA980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA988u); set32(c.r[5], 0u + 257u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EA988u) [[unlikely]] return; }
L_001EA988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 1;
L_001EA994:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 75u);  if (t) { goto L_001EA9B4; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[5], c.r[2].w[0] + 76u);
    c.budget -= 2;
L_001EA9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA9BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001EA9BCu) [[unlikely]] return; }
L_001EA9BC:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 400u));
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA9E0u); st8((c.r[16].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EA9E0u) [[unlikely]] return; }
L_001EA9E0:
    c.r[9].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[7], 0u - 33u);
    set32(c.r[8], c.r[3].w[0] << 5);
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[5], 0u - 9u);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 400u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 400u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EBD68; } }
L_001EAA30:
    set32(c.r[2], 0u + 1630u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001EAA84; } }
    set32(c.r[2], 0u + 1600u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001EAA84; } }
    set32(c.r[2], 0u + 1612u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001EAA84; } }
    set32(c.r[2], 0u + 1602u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001EAA84; } }
    set32(c.r[2], 0u + 1645u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001EAA84; } }
    c.r[2].d[0] = c.r[4].sd[0] < 1600ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EAA94; } }
    c.r[1].d[0] = c.r[4].sd[0] < 1630ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EAA94; } }
L_001EAA84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAA8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 14u, depth + 1u); else { c.pc = 0x001EC180u; return; } if (c.pc != 0x001EAA8Cu) [[unlikely]] return; }
L_001EAA8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001EAA94:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 562u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EAC60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAAA8u); set32(c.r[4], ld32((c.r[16].w[0] + 164u)));  if (depth < kMaxDepth) unit_0039(c, 100u, depth + 1u); else { c.pc = 0x001E5420u; return; } if (c.pc != 0x001EAAA8u) [[unlikely]] return; }
L_001EAAA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[4], c.r[2].w[0] - 15u);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EAAD4; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 560u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001EAAD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001EAAF8; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001EAAF8; } }
    set32(c.r[3], c.r[4].w[0] + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EBD68; } }
L_001EAAF8:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 560u));
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 32ull;  if (t) { goto L_001EABF4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001EAB1C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 2;
L_001EAB1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAB24u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EAB24u) [[unlikely]] return; }
L_001EAB24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001EAB38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001EAB38; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EAB38:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAB48u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001EAB48u) [[unlikely]] return; }
L_001EAB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAB50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001EAB50u) [[unlikely]] return; }
L_001EAB50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EAB78; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 472u));
    c.r[2].d[0] = c.r[2].d[0] & 61440ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EAB78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAB70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 72u, depth + 1u); else { c.pc = 0x001E4D10u; return; } if (c.pc != 0x001EAB70u) [[unlikely]] return; }
L_001EAB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001EAB78:
    st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 562u)));
    set32(c.r[17], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001EAB94; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EAB94:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 562u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EABA4u); set32(c.r[5], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001EABA4u) [[unlikely]] return; }
L_001EABA4:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EABB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001EABB0u) [[unlikely]] return; }
L_001EABB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] & 65535ull;  if (t) { goto L_001EABDC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 562u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3119u);  if (t) { goto L_001EABD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3103u);  if (t) { goto L_001EABD4; } }
    set32(c.r[2], 0u + 3119u);
    c.budget -= 1;
L_001EABD4:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 2;
L_001EABDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EABE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EABE4u) [[unlikely]] return; }
L_001EABE4:
    st16((c.r[16].w[0] + 562u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 628u), c.r[17].w[0]);  if (t) { goto L_001EBD68; } }
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 1;
L_001EABF4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001EAC10; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 2;
L_001EAC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC18u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EAC18u) [[unlikely]] return; }
L_001EAC18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001EAC2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001EAC2C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EAC2C:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC3Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001EAC3Cu) [[unlikely]] return; }
L_001EAC3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC48u); st32((c.r[16].w[0] + 636u), 0u);  if (depth < kMaxDepth) unit_0038(c, 95u, depth + 1u); else { c.pc = 0x001E1750u; return; } if (c.pc != 0x001EAC48u) [[unlikely]] return; }
L_001EAC48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC54u); set32(c.r[5], 0u + 220u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EAC54u) [[unlikely]] return; }
L_001EAC54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EAC60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC68u);  if (depth < kMaxDepth) unit_0034(c, 117u, depth + 1u); else { c.pc = 0x001D0FC0u; return; } if (c.pc != 0x001EAC68u) [[unlikely]] return; }
L_001EAC68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EAC80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 118u, depth + 1u); else { c.pc = 0x001D0FE0u; return; } if (c.pc != 0x001EAC78u) [[unlikely]] return; }
L_001EAC78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EAFB8; } }
L_001EAC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC88u);  if (depth < kMaxDepth) unit_003D(c, 82u, depth + 1u); else { c.pc = 0x001F53E0u; return; } if (c.pc != 0x001EAC88u) [[unlikely]] return; }
L_001EAC88:
    set32(c.r[3], 0u + 60u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EACB4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EACB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 102u, depth + 1u); else { c.pc = 0x001E5470u; return; } if (c.pc != 0x001EACB0u) [[unlikely]] return; }
L_001EACB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EACB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EACBCu);  if (depth < kMaxDepth) unit_0039(c, 15u, depth + 1u); else { c.pc = 0x001E4230u; return; } if (c.pc != 0x001EACBCu) [[unlikely]] return; }
L_001EACBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001EAD28; } }
L_001EACC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EAD24; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 912u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 912u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EAD24; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 368u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EAD24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAD08u);  if (depth < kMaxDepth) unit_0034(c, 120u, depth + 1u); else { c.pc = 0x001D1020u; return; } if (c.pc != 0x001EAD08u) [[unlikely]] return; }
L_001EAD08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EAD24; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAD1Cu); set32(c.r[5], 0u + 724u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EAD1Cu) [[unlikely]] return; }
L_001EAD1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001EAD24:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001EAD28:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EACC4u | kUnwind; return; } goto L_001EACC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAD3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 83u, depth + 1u); else { c.pc = 0x001D5B30u; return; } if (c.pc != 0x001EAD3Cu) [[unlikely]] return; }
L_001EAD3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EAD58; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAD50u); set32(c.r[5], 0u + 708u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EAD50u) [[unlikely]] return; }
L_001EAD50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001EAD58:
    st32((c.r[16].w[0] + 768u), 0u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001EAE28; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001EAD90; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EAD8C; } }
    set32(c.r[17], 0u + 724u);
    c.budget -= 1;
L_001EAD8C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001EAD90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001EADB0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EADAC; } }
    set32(c.r[17], 0u + 722u);
    c.budget -= 1;
L_001EADAC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_001EADB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001EADD0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EADCC; } }
    set32(c.r[17], 0u + 722u);
    c.budget -= 1;
L_001EADCC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_001EADD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001EADF0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EADEC; } }
    set32(c.r[17], 0u + 724u);
    c.budget -= 1;
L_001EADEC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001EADF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001EAE10; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EAE0C; } }
    set32(c.r[17], 0u + 160u);
    c.budget -= 1;
L_001EAE0C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_001EAE10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_001EAE2C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EAE28; } }
    set32(c.r[17], 0u + 160u);
    c.budget -= 1;
L_001EAE28:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 1;
L_001EAE2C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EAEE0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001EAE58; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EAE54; } }
    set32(c.r[17], 0u + 724u);
    c.budget -= 1;
L_001EAE54:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001EAE58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EAE70; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EAE70; } }
    set32(c.r[17], 0u + 722u);
    c.budget -= 1;
L_001EAE70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EAE8C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EAE8C; } }
    set32(c.r[17], 0u + 722u);
    c.budget -= 1;
L_001EAE8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_001EAEA8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EAEA4; } }
    set32(c.r[17], 0u + 724u);
    c.budget -= 1;
L_001EAEA4:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_001EAEA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001EAEC0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001EAEC0; } }
    set32(c.r[17], 0u + 161u);
    c.budget -= 1;
L_001EAEC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EAEDC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EAEDC; } }
    set32(c.r[17], 0u + 161u);
    c.budget -= 1;
L_001EAEDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EAEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAEE8u);  if (depth < kMaxDepth) unit_0034(c, 118u, depth + 1u); else { c.pc = 0x001D0FE0u; return; } if (c.pc != 0x001EAEE8u) [[unlikely]] return; }
L_001EAEE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 161u);  if (t) { goto L_001EAF74; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001EAF0C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EAF0C; } }
    set32(c.r[17], 0u + 727u);
    c.budget -= 1;
L_001EAF0C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001EAF54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAF1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 34u, depth + 1u); else { c.pc = 0x001E0580u; return; } if (c.pc != 0x001EAF1Cu) [[unlikely]] return; }
L_001EAF1C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001EAF54; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    set32(c.r[17], c.r[3].w[0] + 728u);
    c.budget -= 11;
L_001EAF54:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001EAF70; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EAF70; } }
    set32(c.r[17], 0u + 726u);
    c.budget -= 1;
L_001EAF70:
    set32(c.r[3], 0u + 161u);
    c.budget -= 1;
L_001EAF74:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_001EAF88; } }
    set32(c.r[3], 0u + 160u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_001EAF9C; } }
L_001EAF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAF90u); c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001D5040u; return; } if (c.pc != 0x001EAF90u) [[unlikely]] return; }
L_001EAF90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EAF9C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EAF9C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAFB0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EAFB0u) [[unlikely]] return; }
L_001EAFB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001EAFB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 726u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1005u);  if (t) { goto L_001EB28C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAFD0u);  if (depth < kMaxDepth) unit_003D(c, 82u, depth + 1u); else { c.pc = 0x001F53E0u; return; } if (c.pc != 0x001EAFD0u) [[unlikely]] return; }
L_001EAFD0:
    set32(c.r[3], 0u + 60u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EAFFC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAFF8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 102u, depth + 1u); else { c.pc = 0x001E5470u; return; } if (c.pc != 0x001EAFF8u) [[unlikely]] return; }
L_001EAFF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EAFFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB004u);  if (depth < kMaxDepth) unit_0039(c, 15u, depth + 1u); else { c.pc = 0x001E4230u; return; } if (c.pc != 0x001EB004u) [[unlikely]] return; }
L_001EB004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001EB070; } }
L_001EB00C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EB06C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 912u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 912u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001EB06C; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 368u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 368u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001EB06C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB050u);  if (depth < kMaxDepth) unit_0034(c, 120u, depth + 1u); else { c.pc = 0x001D1020u; return; } if (c.pc != 0x001EB050u) [[unlikely]] return; }
L_001EB050:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB06C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB064u); set32(c.r[5], 0u + 724u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EB064u) [[unlikely]] return; }
L_001EB064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001EB06C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001EB070:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB00Cu | kUnwind; return; } goto L_001EB00C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001EBD68; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EB0A8; } }
    st32((c.r[16].w[0] + 176u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 168u), c.r[4].w[0]);  if (t) { goto L_001EBD68; } }
L_001EB0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB0B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 81u, depth + 1u); else { c.pc = 0x001D5AC0u; return; } if (c.pc != 0x001EB0B0u) [[unlikely]] return; }
L_001EB0B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EB110; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB0D4u); set32(c.r[4], ld32((c.r[16].w[0] + 240u)));  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x001EB0D4u) [[unlikely]] return; }
L_001EB0D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EB110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB0F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 99u, depth + 1u); else { c.pc = 0x001D0E10u; return; } if (c.pc != 0x001EB0F4u) [[unlikely]] return; }
L_001EB0F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB110; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB108u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 8u, depth + 1u); else { c.pc = 0x001E4080u; return; } if (c.pc != 0x001EB108u) [[unlikely]] return; }
L_001EB108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001EB110:
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001EBD68; } }
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB134u); set32(c.r[5], ld32((c.r[17].w[0] + 240u)));  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001EB134u) [[unlikely]] return; }
L_001EB134:
    st32((c.r[29].w[0] + 464u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[16].w[0] + 212u));
    c.f[1] = ld32((c.r[29].w[0] + 464u));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 464u), c.f[1]);  if (t) { goto L_001EB16C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 464u), c.f[0]);  if (t) { goto L_001EB190; } }
L_001EB16C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EB190; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 464u), c.f[0]);
    c.budget -= 4;
L_001EB190:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 464u));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EB1BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 464u), c.f[0]);  if (t) { goto L_001EB1E0; } }
L_001EB1BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EB1E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 464u), c.f[0]);
    c.budget -= 4;
L_001EB1E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    c.f[2] = ld32((c.r[29].w[0] + 464u));
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EB220; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_001EB23C; } }
L_001EB220:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 7;
L_001EB23C:
    c.r[4].d[0] = c.r[3].d[0] & 4095ull;
    c.r[3].d[0] = c.r[4].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001EB25C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 3841ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 2049ll ? 1ull : 0ull;  if (t) { goto L_001EB268; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001EB25C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 168u), c.r[3].w[0]);  if (t) { goto L_001EBD68; } }
    c.r[1].d[0] = c.r[4].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 1;
L_001EB268:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_001EB280; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 168u), c.r[3].w[0]);  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_001EB280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 168u), c.r[3].w[0]);  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 1005u);
    c.budget -= 1;
L_001EB28C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EB2A0; } }
    set32(c.r[3], 0u + 1105u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 234u);  if (t) { goto L_001EB3D8; } }
L_001EB2A0:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 380ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EB344; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EB344; } }
    c.f[2] = ld32((c.r[3].w[0] + 228u));
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EB308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_001EB310; } }
L_001EB308:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 2;
L_001EB310:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EB344; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB330u); set32(c.r[5], 0u + 660u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EB330u) [[unlikely]] return; }
L_001EB330:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB33Cu); set32(c.r[5], 0u + 660u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EB33Cu) [[unlikely]] return; }
L_001EB33C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001EB344:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 1005u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 165u);  if (t) { goto L_001EB360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_001EB360; } }
    set32(c.r[4], 0u + 165u);
    c.budget -= 1;
L_001EB360:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001EBD68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB38Cu); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EB38Cu) [[unlikely]] return; }
L_001EB38C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001EB3A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001EB3A0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EB3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB3A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 24u, depth + 1u); else { c.pc = 0x001F4400u; return; } if (c.pc != 0x001EB3A8u) [[unlikely]] return; }
L_001EB3A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB3B4u); set32(c.r[5], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_003C(c, 315u, depth + 1u); else { c.pc = 0x001F3F70u; return; } if (c.pc != 0x001EB3B4u) [[unlikely]] return; }
L_001EB3B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 912u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB3CCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_003E(c, 2u, depth + 1u); else { c.pc = 0x001F8010u; return; } if (c.pc != 0x001EB3CCu) [[unlikely]] return; }
L_001EB3CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 234u);
    c.budget -= 1;
L_001EB3D8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 190u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 191u);  if (t) { goto L_001EB4EC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EB414; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31080u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EB414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB414u);  if (depth < kMaxDepth) unit_003E(c, 14u, depth + 1u); else { c.pc = 0x001F8390u; return; } if (c.pc != 0x001EB414u) [[unlikely]] return; }
L_001EB414:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 31080u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001EB468; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EB468; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31080u)));
    st32((c.r[3].w[0] + 72u), c.r[16].w[0]);
    c.budget -= 6;
L_001EB468:
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], ld32((c.r[1].w[0] + 31080u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EB4E0; } }
    set32(c.r[6], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[5].w[0] + 44u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 31080u)));
    set32(c.r[5], 0u + 190u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB4D8u); st32((c.r[2].w[0] + 72u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EB4D8u) [[unlikely]] return; }
L_001EB4D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001EB4E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 176u), 0u);  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 191u);
    c.budget -= 1;
L_001EB4EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 198u);  if (t) { goto L_001EB534; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31080u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31080u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 72u), c.r[16].w[0]);  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 198u);
    c.budget -= 1;
L_001EB534:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 203u);  if (t) { goto L_001EB738; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.r[1].d[0] = c.r[3].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EB594; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31616u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EB5B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 31656u)));
    set32(c.r[3], c.r[3].w[0] + 28320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31648u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001EB5B8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EB594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB59Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001EB59Cu) [[unlikely]] return; }
L_001EB59C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB5ACu); st32((c.r[16].w[0] + 980u), 0u);  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x001EB5ACu) [[unlikely]] return; }
L_001EB5AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 31616u), 0u);  if (t) { goto L_001EBD68; } }
L_001EB5B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 31648u)));
    set32(c.r[6], c.r[6].w[0] + 28320u);
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 984u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 31648u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0] + 912u)));
    st32((c.r[16].w[0] + 980u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EB63C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB624u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001EB624u) [[unlikely]] return; }
L_001EB624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
L_001EB63C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31616u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EB6F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EB6B0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EB670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB728; } }
L_001EB670:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB67Cu); set32(c.r[5], 0u + 199u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EB67Cu) [[unlikely]] return; }
L_001EB67C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31648u)));
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[1].w[0] + 31652u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB6A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 2u, depth + 1u); else { c.pc = 0x001F8010u; return; } if (c.pc != 0x001EB6A8u) [[unlikely]] return; }
L_001EB6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB728; } }
L_001EB6B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB6BCu); set32(c.r[5], 0u + 199u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EB6BCu) [[unlikely]] return; }
L_001EB6BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31648u)));
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[1].w[0] + 31652u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB6E8u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_003E(c, 2u, depth + 1u); else { c.pc = 0x001F8010u; return; } if (c.pc != 0x001EB6E8u) [[unlikely]] return; }
L_001EB6E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB728; } }
L_001EB6F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB6FCu); set32(c.r[5], 0u + 199u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EB6FCu) [[unlikely]] return; }
L_001EB6FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31648u)));
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[1].w[0] + 31652u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB728u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_003E(c, 2u, depth + 1u); else { c.pc = 0x001F8010u; return; } if (c.pc != 0x001EB728u) [[unlikely]] return; }
L_001EB728:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 31616u), 0u);  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 203u);
    c.budget -= 1;
L_001EB738:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1641u);  if (t) { goto L_001EB834; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.r[1].d[0] = c.r[3].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EB798; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31616u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EB7BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 31656u)));
    set32(c.r[3], c.r[3].w[0] + 28320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31648u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001EB7BC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EB798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB7A0u); set32(c.r[5], 0u + 204u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EB7A0u) [[unlikely]] return; }
L_001EB7A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB7B0u); st32((c.r[16].w[0] + 980u), 0u);  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x001EB7B0u) [[unlikely]] return; }
L_001EB7B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 31616u), 0u);  if (t) { goto L_001EBD68; } }
L_001EB7BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 31648u)));
    set32(c.r[6], c.r[6].w[0] + 28320u);
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 984u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 31648u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0] + 912u)));
    st32((c.r[16].w[0] + 980u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB828u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001EB828u) [[unlikely]] return; }
L_001EB828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 1641u);
    c.budget -= 1;
L_001EB834:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1642u);  if (t) { goto L_001EB8C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4384u)));
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4384u)));
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 228u), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4384u)));
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    st32((c.r[16].w[0] + 232u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.r[1].d[0] = c.r[3].sd[0] < 151ll ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB8ACu); set32(c.r[5], 0u + 1643u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EB8ACu) [[unlikely]] return; }
L_001EB8AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB8B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 159u, depth + 1u); else { c.pc = 0x0020F2F0u; return; } if (c.pc != 0x001EB8B4u) [[unlikely]] return; }
L_001EB8B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 1642u);
    c.budget -= 1;
L_001EB8C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EB990; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EB918; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4384u)));
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    st32((c.r[16].w[0] + 228u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4384u)));
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 232u), c.f[0]);  if (t) { goto L_001EB96C; } }
L_001EB918:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4384u)));
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4384u)));
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 228u), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4384u)));
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    st32((c.r[16].w[0] + 232u), c.f[0]);
    c.budget -= 21;
L_001EB96C:
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.r[1].d[0] = c.r[3].sd[0] < 76ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB988u); set32(c.r[5], 0u + 660u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EB988u) [[unlikely]] return; }
L_001EB988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001EB990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB998u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 238u, depth + 1u); else { c.pc = 0x001D36A0u; return; } if (c.pc != 0x001EB998u) [[unlikely]] return; }
L_001EB998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBB78; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 394u));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_001EBAE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EBAE0; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBAE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_001EBA2C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EBA2C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[5], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
L_001EBA2C:
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBAE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EBAE0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[4], 0u - 5u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_001EBA8C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 2;
L_001EBA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA94u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EBA94u) [[unlikely]] return; }
L_001EBA94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001EBAA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001EBAA8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EBAA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_001EBABC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 2;
L_001EBABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBAC4u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EBAC4u) [[unlikely]] return; }
L_001EBAC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001EBAD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001EBAD8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EBAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBAE0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001EBAE0u) [[unlikely]] return; }
L_001EBAE0:
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EBD68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EBB0C; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBD68; } }
L_001EBB0C:
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EBB68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EBB38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);  if (t) { goto L_001EBB40; } }
L_001EBB38:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.budget -= 2;
L_001EBB40:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EBD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBB5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001EBB5Cu) [[unlikely]] return; }
L_001EBB5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EBB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBB70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EBB70u) [[unlikely]] return; }
L_001EBB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001EBB78:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 5252u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBBA0; } }
    set32(c.r[3], 0u + 5253u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBBA0; } }
    set32(c.r[3], 0u + 5288u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[4].sd[0] < 2600ll ? 1ull : 0ull;  if (t) { goto L_001EBBBC; } }
L_001EBBA0:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 5288u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBD68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
    c.r[3].d[0] = c.r[4].sd[0] < 2600ll ? 1ull : 0ull;
    c.budget -= 1;
L_001EBBBC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBCA0; } }
    c.r[1].d[0] = c.r[4].sd[0] < 2699ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EBCA0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBCA0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_001EBBF0; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 2;
L_001EBBF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBBF8u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EBBF8u) [[unlikely]] return; }
L_001EBBF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001EBC0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001EBC0C; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EBC0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001EBC8C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001EBC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBC20u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 105u, depth + 1u); else { c.pc = 0x001CD570u; return; } if (c.pc != 0x001EBC20u) [[unlikely]] return; }
L_001EBC20:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EBC88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[18].d[0];  if (t) { goto L_001EBC88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBC40u); c.r[5].d[0] = c.r[2].d[0] | 16722ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EBC40u) [[unlikely]] return; }
L_001EBC40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001EBC54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001EBC54; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EBC54:
    c.r[4].d[0] = ld64((c.r[6].w[0] + 224u));
    c.r[3].d[0] = ld64((c.r[16].w[0] + 224u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001EBC78; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 232u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 232u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBC78; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EBC78:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001EBC88; } }
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);
    st128((c.r[6].w[0] + 224u) & ~15u, c.r[3]);
    c.budget -= 2;
L_001EBC88:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001EBC8C:
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EBC18u | kUnwind; return; } goto L_001EBC18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBD68; } }
L_001EBCA0:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 175u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1682u);  if (t) { goto L_001EBD18; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].sd[0] < 90ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 31224u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBD68; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 2512u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EBCF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBCF8u);  if (depth < kMaxDepth) unit_0046(c, 132u, depth + 1u); else { c.pc = 0x0021A730u; return; } if (c.pc != 0x001EBCF8u) [[unlikely]] return; }
L_001EBCF8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 31224u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001EBD68; } }
    set32(c.r[3], 0u + 1682u);
    c.budget -= 1;
L_001EBD18:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBD38; } }
    set32(c.r[3], 0u + 1684u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EBD38; } }
    set32(c.r[3], 0u + 1683u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBD68; } }
L_001EBD38:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 397u));
    set32(c.r[4], 0u - 9u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[3], 0u - 2u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 397u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
L_001EBD68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001EBD6C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_001EBD90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EBDDC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBDB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 56u, depth + 1u); else { c.pc = 0x001C4830u; return; } if (c.pc != 0x001EBDB8u) [[unlikely]] return; }
L_001EBDB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBDDC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 809u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBDD4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001EBDD4u) [[unlikely]] return; }
L_001EBDD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EBDE0; } }
L_001EBDDC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EBDE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EBDF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 20035ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE18u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EBE18u) [[unlikely]] return; }
L_001EBE18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001EBE24; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001EBE24:
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.r[5].d[0] = c.r[2].d[0] | 20035ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE38u); set32(c.r[4], c.r[3].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EBE38u) [[unlikely]] return; }
L_001EBE38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001EBE44; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001EBE44:
    set32(c.r[4], ld32((c.r[18].w[0] + 644u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[2].d[0] | 20035ull;
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE6Cu); set32(c.r[4], c.r[2].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EBE6Cu) [[unlikely]] return; }
L_001EBE6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001EBE78; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001EBE78:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001EBEC0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001EBEC0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001EBEC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE98u);  if (depth < kMaxDepth) unit_0033(c, 100u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x001EBE98u) [[unlikely]] return; }
L_001EBE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBEA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 100u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x001EBEA0u) [[unlikely]] return; }
L_001EBEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBEA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 100u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x001EBEA8u) [[unlikely]] return; }
L_001EBEA8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBEB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001EBEB4u) [[unlikely]] return; }
L_001EBEB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBEC0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001EBEC0u) [[unlikely]] return; }
L_001EBEC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EBEE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF0Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001EBF0Cu) [[unlikely]] return; }
L_001EBF0C:
    set32(c.r[3], ld32((c.r[18].w[0] + 644u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF3Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EBF3Cu) [[unlikely]] return; }
L_001EBF3C:
    st32((c.r[19].w[0] + 60u), c.r[18].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 644u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF54u); st32((c.r[17].w[0] + 644u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 271u, depth + 1u); else { c.pc = 0x001EBDF0u; return; } if (c.pc != 0x001EBF54u) [[unlikely]] return; }
L_001EBF54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EBF70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF9Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EBF9Cu) [[unlikely]] return; }
L_001EBF9C:
    set32(c.r[3], ld32((c.r[16].w[0] + 644u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBFCCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EBFCCu) [[unlikely]] return; }
L_001EBFCC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 60u), c.r[16].w[0]);  if (t) { goto L_001EBFD8; } }
    set32(c.r[16], c.r[16].w[0] + 436u);
    c.budget -= 1;
L_001EBFD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBFE8u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EBFE8u) [[unlikely]] return; }
L_001EBFE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001EBFF4; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001EBFF4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { [[clang::musttail]] return unit_003B(c, 1u, depth); } }
    set32(c.r[18], c.r[18].w[0] + 436u);
    c.budget -= 1;
    [[clang::musttail]] return unit_003B(c, 1u, depth);
}

}
