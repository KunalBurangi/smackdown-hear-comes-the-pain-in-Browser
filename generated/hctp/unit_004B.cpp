#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0,
    40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0,
    71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0,
    0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0,
    0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153,
    0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176,
    0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191,
    0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0,
    0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0,
    0, 215, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0,
    0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 235,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0,
    246, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0,
    0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_004B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0022C000;
    case 2u: goto L_0022C06C;
    case 3u: goto L_0022C08C;
    case 4u: goto L_0022C0CC;
    case 5u: goto L_0022C0D4;
    case 6u: goto L_0022C0E0;
    case 7u: goto L_0022C198;
    case 8u: goto L_0022C1C0;
    case 9u: goto L_0022C1E8;
    case 10u: goto L_0022C230;
    case 11u: goto L_0022C318;
    case 12u: goto L_0022C324;
    case 13u: goto L_0022C330;
    case 14u: goto L_0022C33C;
    case 15u: goto L_0022C36C;
    case 16u: goto L_0022C370;
    case 17u: goto L_0022C3D0;
    case 18u: goto L_0022C40C;
    case 19u: goto L_0022C418;
    case 20u: goto L_0022C42C;
    case 21u: goto L_0022C4D0;
    case 22u: goto L_0022C504;
    case 23u: goto L_0022C590;
    case 24u: goto L_0022C668;
    case 25u: goto L_0022C670;
    case 26u: goto L_0022C67C;
    case 27u: goto L_0022C6CC;
    case 28u: goto L_0022C6EC;
    case 29u: goto L_0022C720;
    case 30u: goto L_0022C72C;
    case 31u: goto L_0022C73C;
    case 32u: goto L_0022C790;
    case 33u: goto L_0022C7B0;
    case 34u: goto L_0022C918;
    case 35u: goto L_0022C920;
    case 36u: goto L_0022C9B4;
    case 37u: goto L_0022C9D8;
    case 38u: goto L_0022CA24;
    case 39u: goto L_0022CA78;
    case 40u: goto L_0022CA80;
    case 41u: goto L_0022CA90;
    case 42u: goto L_0022CB48;
    case 43u: goto L_0022CB68;
    case 44u: goto L_0022CBB4;
    case 45u: goto L_0022CBD4;
    case 46u: goto L_0022CC40;
    case 47u: goto L_0022CC90;
    case 48u: goto L_0022CD70;
    case 49u: goto L_0022CD88;
    case 50u: goto L_0022CDB0;
    case 51u: goto L_0022CE08;
    case 52u: goto L_0022CF90;
    case 53u: goto L_0022CFA4;
    case 54u: goto L_0022CFB8;
    case 55u: goto L_0022CFC8;
    case 56u: goto L_0022CFD4;
    case 57u: goto L_0022CFF0;
    case 58u: goto L_0022D020;
    case 59u: goto L_0022D038;
    case 60u: goto L_0022D050;
    case 61u: goto L_0022D09C;
    case 62u: goto L_0022D0A8;
    case 63u: goto L_0022D0B4;
    case 64u: goto L_0022D0CC;
    case 65u: goto L_0022D0F0;
    case 66u: goto L_0022D120;
    case 67u: goto L_0022D138;
    case 68u: goto L_0022D150;
    case 69u: goto L_0022D160;
    case 70u: goto L_0022D170;
    case 71u: goto L_0022D180;
    case 72u: goto L_0022D190;
    case 73u: goto L_0022D1A0;
    case 74u: goto L_0022D1B0;
    case 75u: goto L_0022D1C0;
    case 76u: goto L_0022D1D0;
    case 77u: goto L_0022D1E0;
    case 78u: goto L_0022D1F0;
    case 79u: goto L_0022D218;
    case 80u: goto L_0022D260;
    case 81u: goto L_0022D2BC;
    case 82u: goto L_0022D2D0;
    case 83u: goto L_0022D300;
    case 84u: goto L_0022D318;
    case 85u: goto L_0022D330;
    case 86u: goto L_0022D36C;
    case 87u: goto L_0022D378;
    case 88u: goto L_0022D38C;
    case 89u: goto L_0022D3AC;
    case 90u: goto L_0022D3C0;
    case 91u: goto L_0022D3CC;
    case 92u: goto L_0022D3E0;
    case 93u: goto L_0022D40C;
    case 94u: goto L_0022D494;
    case 95u: goto L_0022D4F4;
    case 96u: goto L_0022D698;
    case 97u: goto L_0022D768;
    case 98u: goto L_0022D770;
    case 99u: goto L_0022D7D0;
    case 100u: goto L_0022D814;
    case 101u: goto L_0022D838;
    case 102u: goto L_0022D874;
    case 103u: goto L_0022D888;
    case 104u: goto L_0022D8B0;
    case 105u: goto L_0022D8DC;
    case 106u: goto L_0022D8F4;
    case 107u: goto L_0022D90C;
    case 108u: goto L_0022D998;
    case 109u: goto L_0022DAA4;
    case 110u: goto L_0022DAC0;
    case 111u: goto L_0022DBC4;
    case 112u: goto L_0022DBE8;
    case 113u: goto L_0022DC00;
    case 114u: goto L_0022DC24;
    case 115u: goto L_0022DCC0;
    case 116u: goto L_0022DCD4;
    case 117u: goto L_0022DCE0;
    case 118u: goto L_0022DCF8;
    case 119u: goto L_0022DD2C;
    case 120u: goto L_0022DD3C;
    case 121u: goto L_0022DE84;
    case 122u: goto L_0022DF18;
    case 123u: goto L_0022DF44;
    case 124u: goto L_0022DF5C;
    case 125u: goto L_0022DF88;
    case 126u: goto L_0022DFA0;
    case 127u: goto L_0022DFCC;
    case 128u: goto L_0022DFE4;
    case 129u: goto L_0022E010;
    case 130u: goto L_0022E028;
    case 131u: goto L_0022E054;
    case 132u: goto L_0022E070;
    case 133u: goto L_0022E094;
    case 134u: goto L_0022E0B8;
    case 135u: goto L_0022E0DC;
    case 136u: goto L_0022E0F8;
    case 137u: goto L_0022E10C;
    case 138u: goto L_0022E120;
    case 139u: goto L_0022E160;
    case 140u: goto L_0022E178;
    case 141u: goto L_0022E184;
    case 142u: goto L_0022E1A0;
    case 143u: goto L_0022E1D0;
    case 144u: goto L_0022E1F8;
    case 145u: goto L_0022E210;
    case 146u: goto L_0022E21C;
    case 147u: goto L_0022E240;
    case 148u: goto L_0022E278;
    case 149u: goto L_0022E294;
    case 150u: goto L_0022E300;
    case 151u: goto L_0022E320;
    case 152u: goto L_0022E340;
    case 153u: goto L_0022E37C;
    case 154u: goto L_0022E388;
    case 155u: goto L_0022E394;
    case 156u: goto L_0022E3A0;
    case 157u: goto L_0022E3E4;
    case 158u: goto L_0022E470;
    case 159u: goto L_0022E4A0;
    case 160u: goto L_0022E4C8;
    case 161u: goto L_0022E5EC;
    case 162u: goto L_0022E5F4;
    case 163u: goto L_0022E604;
    case 164u: goto L_0022E88C;
    case 165u: goto L_0022E97C;
    case 166u: goto L_0022EA8C;
    case 167u: goto L_0022EBD0;
    case 168u: goto L_0022ECB8;
    case 169u: goto L_0022ECD4;
    case 170u: goto L_0022ED18;
    case 171u: goto L_0022EDE8;
    case 172u: goto L_0022EE00;
    case 173u: goto L_0022EE58;
    case 174u: goto L_0022EE64;
    case 175u: goto L_0022EE70;
    case 176u: goto L_0022EE7C;
    case 177u: goto L_0022EE94;
    case 178u: goto L_0022EEB0;
    case 179u: goto L_0022EEE0;
    case 180u: goto L_0022EEF8;
    case 181u: goto L_0022EF10;
    case 182u: goto L_0022EF20;
    case 183u: goto L_0022EF30;
    case 184u: goto L_0022EF40;
    case 185u: goto L_0022EF50;
    case 186u: goto L_0022EF60;
    case 187u: goto L_0022EF9C;
    case 188u: goto L_0022EFA8;
    case 189u: goto L_0022EFB4;
    case 190u: goto L_0022EFDC;
    case 191u: goto L_0022EFFC;
    case 192u: goto L_0022F010;
    case 193u: goto L_0022F02C;
    case 194u: goto L_0022F044;
    case 195u: goto L_0022F078;
    case 196u: goto L_0022F08C;
    case 197u: goto L_0022F098;
    case 198u: goto L_0022F0F0;
    case 199u: goto L_0022F12C;
    case 200u: goto L_0022F184;
    case 201u: goto L_0022F1B4;
    case 202u: goto L_0022F210;
    case 203u: goto L_0022F218;
    case 204u: goto L_0022F220;
    case 205u: goto L_0022F25C;
    case 206u: goto L_0022F2C8;
    case 207u: goto L_0022F2D0;
    case 208u: goto L_0022F2D8;
    case 209u: goto L_0022F300;
    case 210u: goto L_0022F318;
    case 211u: goto L_0022F340;
    case 212u: goto L_0022F350;
    case 213u: goto L_0022F358;
    case 214u: goto L_0022F364;
    case 215u: goto L_0022F384;
    case 216u: goto L_0022F394;
    case 217u: goto L_0022F39C;
    case 218u: goto L_0022F3A4;
    case 219u: goto L_0022F3B0;
    case 220u: goto L_0022F3E4;
    case 221u: goto L_0022F434;
    case 222u: goto L_0022F4AC;
    case 223u: goto L_0022F4E4;
    case 224u: goto L_0022F4F0;
    case 225u: goto L_0022F4F8;
    case 226u: goto L_0022F508;
    case 227u: goto L_0022F528;
    case 228u: goto L_0022F540;
    case 229u: goto L_0022F55C;
    case 230u: goto L_0022F564;
    case 231u: goto L_0022F580;
    case 232u: goto L_0022F5CC;
    case 233u: goto L_0022F5D8;
    case 234u: goto L_0022F5E4;
    case 235u: goto L_0022F5FC;
    case 236u: goto L_0022F620;
    case 237u: goto L_0022F63C;
    case 238u: goto L_0022F648;
    case 239u: goto L_0022F654;
    case 240u: goto L_0022F660;
    case 241u: goto L_0022F6F8;
    case 242u: goto L_0022F75C;
    case 243u: goto L_0022F810;
    case 244u: goto L_0022F868;
    case 245u: goto L_0022F874;
    case 246u: goto L_0022F880;
    case 247u: goto L_0022F88C;
    case 248u: goto L_0022F8A4;
    case 249u: goto L_0022F8C0;
    case 250u: goto L_0022F91C;
    case 251u: goto L_0022F93C;
    case 252u: goto L_0022F95C;
    case 253u: goto L_0022F97C;
    case 254u: goto L_0022FA28;
    case 255u: goto L_0022FA50;
    case 256u: goto L_0022FA88;
    case 257u: goto L_0022FAAC;
    case 258u: goto L_0022FAD4;
    case 259u: goto L_0022FAFC;
    case 260u: goto L_0022FB24;
    case 261u: goto L_0022FB40;
    case 262u: goto L_0022FB64;
    case 263u: goto L_0022FB80;
    case 264u: goto L_0022FBA4;
    case 265u: goto L_0022FBE0;
    case 266u: goto L_0022FC04;
    case 267u: goto L_0022FC28;
    case 268u: goto L_0022FC4C;
    case 269u: goto L_0022FC70;
    case 270u: goto L_0022FCB0;
    case 271u: goto L_0022FCEC;
    case 272u: goto L_0022FE0C;
    case 273u: goto L_0022FE2C;
    case 274u: goto L_0022FE50;
    case 275u: goto L_0022FE60;
    case 276u: goto L_0022FE80;
    case 277u: goto L_0022FEA4;
    case 278u: goto L_0022FEE0;
    case 279u: goto L_0022FF10;
    case 280u: goto L_0022FF24;
    case 281u: goto L_0022FF50;
    case 282u: goto L_0022FF6C;
    case 283u: goto L_0022FF78;
    case 284u: goto L_0022FFAC;
    default: bad_entry(c, 0x0022C000u); return;
    }
L_0022C000:
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[9].w[3]);
    vu::mulbc(c.vu0, 14u, 9u, 9u, c.vu0.q);
    vu::ftoi(c.vu0, 15u, 10u, 9u, 4);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[10]);
    set32(c.r[17], c.r[29].w[0] + 112u);
    set32(c.r[3], ld32((c.r[29].w[0] + 736u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 740u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[19], c.r[3].w[0] - 1792u);
    c.budget -= 18;
    { const bool t = c.r[19].sd[0] <= 0; set32(c.r[18], c.r[2].w[0] - 1792u);  if (t) { goto L_0022C14C; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[1].d[0] = c.r[19].sd[0] < 512ll ? 1ull : 0ull;  if (t) { goto L_0022C14C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022C14C; } }
    c.r[1].d[0] = c.r[18].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022C14C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C06Cu);  if (depth < kMaxDepth) unit_0047(c, 130u, depth + 1u); else { c.pc = 0x0021D9D0u; return; } if (c.pc != 0x0022C06Cu) [[unlikely]] return; }
L_0022C06C:
    set32(c.r[3], c.r[2].w[0] << 9);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));  if (t) { goto L_0022C080; } }
    set32(c.r[2], c.r[3].w[0] + 63u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 2;
L_0022C080:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C08Cu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0047(c, 130u, depth + 1u); else { c.pc = 0x0021D9D0u; return; } if (c.pc != 0x0022C08Cu) [[unlikely]] return; }
L_0022C08C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));  if (t) { goto L_0022C09C; } }
    set32(c.r[2], c.r[2].w[0] + 63u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 2;
L_0022C09C:
    c.r[6].d[0] = c.r[3].d[0] << 48;
    c.r[8].d[0] = c.r[19].d[0] << 48;
    c.r[9].d[0] = c.r[18].d[0] << 48;
    set32(c.r[10], 0u + 2u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 624u);
    set32(c.r[7], 0u + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0CCu); c.r[11].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 191u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0022C0CCu) [[unlikely]] return; }
L_0022C0CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0D4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0022C0D4u) [[unlikely]] return; }
L_0022C0D4:
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0E0u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 197u, depth + 1u); else { c.pc = 0x00101F30u; return; } if (c.pc != 0x0022C0E0u) [[unlikely]] return; }
L_0022C0E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 28672u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 28672u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 8);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 8);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 744u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022C150; } }
    set32(c.r[2], c.r[21].w[0] + 80u);
    ld128((c.r[20].w[0]) & ~15u, c.r[6]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[20].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);  if (t) { goto L_0022C150; } }
L_0022C14C:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0022C150:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28272u)));
    set32(c.r[2], c.r[2].w[0] + 31840u);
    set32(c.r[3], c.r[3].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C198u); set32(c.r[5], ld32((c.r[1].w[0] + 28272u)));  if (depth < kMaxDepth) unit_0013(c, 99u, depth + 1u); else { c.pc = 0x0014D7F0u; return; } if (c.pc != 0x0022C198u) [[unlikely]] return; }
L_0022C198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 832u);  c.pc = t; return; }
L_0022C1C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C1E8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x0022C1E8u) [[unlikely]] return; }
L_0022C1E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 4768u);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 44u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    st32((c.r[18].w[0] + 32u), 0u);
    st32((c.r[18].w[0] + 36u), 0u);
    st32((c.r[18].w[0] + 40u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0022C230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[1].w[0] + 25864u));
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 25856u));
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 25848u));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 25840u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    c.f[0] = ld32((c.r[1].w[0] + 25832u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 30;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022C2B0; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.budget -= 2;
L_0022C2B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[1].w[0] + 25832u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022C2D0; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.budget -= 2;
L_0022C2D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[1].w[0] + 25832u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022C2F0; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 2;
L_0022C2F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[1].w[0] + 25832u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022C310; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 2;
L_0022C310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C318u); c.f[12] = ld32((c.r[16].w[0] + 28u));  if (depth < kMaxDepth) unit_0006(c, 197u, depth + 1u); else { c.pc = 0x0011A1D8u; return; } if (c.pc != 0x0022C318u) [[unlikely]] return; }
L_0022C318:
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C324u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0006(c, 197u, depth + 1u); else { c.pc = 0x0011A1D8u; return; } if (c.pc != 0x0022C324u) [[unlikely]] return; }
L_0022C324:
    c.f[12] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C330u); c.f[20] = fp::add(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0006(c, 197u, depth + 1u); else { c.pc = 0x0011A1D8u; return; } if (c.pc != 0x0022C330u) [[unlikely]] return; }
L_0022C330:
    c.f[12] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C33Cu); c.f[20] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0011A490u; return; } if (c.pc != 0x0022C33Cu) [[unlikely]] return; }
L_0022C33C:
    c.f[3] = fp::add(c.f[0], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[9].d[0] = 0ull + 0ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[1].w[0] + 25824u));
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25816u));
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
L_0022C36C:
    set32(c.r[7], c.r[9].w[0] << 4);
    c.budget -= 1;
L_0022C370:
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C370u | kUnwind; return; } goto L_0022C370; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C36Cu | kUnwind; return; } goto L_0022C36C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022C3D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
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
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C40Cu); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x0022C40Cu) [[unlikely]] return; }
L_0022C40C:
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C418u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0022C418u) [[unlikely]] return; }
L_0022C418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x414C0000u);
    set32(c.r[4], c.r[21].w[0] + 24u);
    c.r[5].d[0] = c.r[2].d[0] | 18759ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C42Cu); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x0022C42Cu) [[unlikely]] return; }
L_0022C42C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 4832u);
    set32(c.r[3], c.r[3].w[0] - 4816u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[21].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 4800u);
    st32((c.r[21].w[0] + 48u), c.r[2].w[0]);
    ld128((c.r[20].w[0]) & ~15u, c.r[2]);
    st128((c.r[21].w[0] + 64u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[21].w[0] + 72u));
    c.f[1] = ld32((c.r[21].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022C474; } }
    st32((c.r[21].w[0] + 64u), c.f[0]);
    st32((c.r[21].w[0] + 72u), c.f[1]);
    c.budget -= 2;
L_0022C474:
    c.f[0] = ld32((c.r[21].w[0] + 76u));
    c.f[1] = ld32((c.r[21].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022C490; } }
    st32((c.r[21].w[0] + 68u), c.f[0]);
    st32((c.r[21].w[0] + 76u), c.f[1]);
    c.budget -= 2;
L_0022C490:
    st32((c.r[21].w[0] + 80u), c.r[19].w[0]);
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[21].w[0] + 84u), c.r[18].w[0]);
    st32((c.r[21].w[0] + 88u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 92u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0022C4D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0022C750; } }
L_0022C504:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0022C74C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022C570; } }
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022C570; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022C570; } }
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0022C574; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0022C574; } }
L_0022C570:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022C574:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0022C74C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4C490000u);  if (t) { goto L_0022C588; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0022C588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C590u); c.r[5].d[0] = c.r[2].d[0] | 18248ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022C590u) [[unlikely]] return; }
L_0022C590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0022C59C; } }
    set32(c.r[21], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0022C59C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0022C74C; } }
    c.f[6] = ld32((c.r[17].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = ld32((c.r[17].w[0] + 64u));
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.f[5] = ld32((c.r[17].w[0] + 76u));
    c.f[2] = ld32((c.r[17].w[0] + 68u));
    c.f[3] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[4] = fp::add(c.f[4], c.f[6]);
    c.f[4] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    c.f[2] = fp::sub(c.f[1], c.f[4]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022C5F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[3].w[0] + 8u));  if (t) { goto L_0022C5F8; } }
L_0022C5F0:
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 2;
L_0022C5F8:
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022C618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[6], c.f[4]);  if (t) { goto L_0022C620; } }
L_0022C618:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::sub(c.f[6], c.f[4]);
    c.budget -= 2;
L_0022C620:
    fpu_div(c, 2u, c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.f[5], c.f[3]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0022C654; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[21], c.f[2]);  if (t) { goto L_0022C660; } }
L_0022C654:
    c.f[21] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 3;
L_0022C660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C668u); c.f[12] = fp::sub(c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 98u, depth + 1u); else { c.pc = 0x00145F10u; return; } if (c.pc != 0x0022C668u) [[unlikely]] return; }
L_0022C668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C670u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0011(c, 99u, depth + 1u); else { c.pc = 0x00145F50u; return; } if (c.pc != 0x0022C670u) [[unlikely]] return; }
L_0022C670:
    c.f[20] = c.f[0];
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[20].w[0] << 2);
    c.budget -= 3;
L_0022C67C:
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[19], c.r[4].w[0] + 80u);
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[20].w[0] << 4);  if (t) { goto L_0022C73C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[18], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    ld128((c.r[18].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] + 28640u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u + 3u);
    c.f[12] = c.f[20];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C6CCu); set32(c.r[5], c.r[2].w[0] + 256u);  if (depth < kMaxDepth) unit_0011(c, 18u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x0022C6CCu) [[unlikely]] return; }
L_0022C6CC:
    set32(c.r[2], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_0022C6DC; } }
    st32((c.r[2].w[0]), c.f[21]);
    c.budget -= 1;
L_0022C6DC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C6ECu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4070u; return; } if (c.pc != 0x0022C6ECu) [[unlikely]] return; }
L_0022C6EC:
    ld128((c.r[18].w[0] + 96u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] + 28640u);
    c.f[12] = c.f[20];
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u + 3u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C720u); set32(c.r[5], c.r[2].w[0] + 736u);  if (depth < kMaxDepth) unit_0011(c, 18u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x0022C720u) [[unlikely]] return; }
L_0022C720:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C72Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x0022C72Cu) [[unlikely]] return; }
L_0022C72C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C73Cu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0031(c, 7u, depth + 1u); else { c.pc = 0x001C4090u; return; } if (c.pc != 0x0022C73Cu) [[unlikely]] return; }
L_0022C73C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[20].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C67Cu | kUnwind; return; } goto L_0022C67C; } }
L_0022C74C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0022C750:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C504u | kUnwind; return; } goto L_0022C504; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0022C790:
    set32(c.r[3], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 23600u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 23592u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 23584u), c.r[3].w[0]);  c.pc = t; return; }
L_0022C7B0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4472u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022C7F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 23592u), 0u);
    c.budget -= 2;
L_0022C7F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[1].w[0] - 23592u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[1].w[0] - 23584u), c.r[4].w[0]);  if (t) { goto L_0022CBE4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 23592u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 23592u)));
    c.r[1].d[0] = c.r[3].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0022C82C; } }
    set32(c.r[6], 0u + 4u);
    c.budget -= 1;
L_0022C82C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].d[0] = ld8((c.r[1].w[0] + 28008u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[4].w[0] - 23568u);
    set32(c.r[5], c.r[5].w[0] - 25200u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 23600u)));
    set32(c.r[5], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 18;
    { const bool t = c.r[6].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[6].w[0]);  if (t) { goto L_0022C878; } }
    breakpoint(c, 0x0022C874u);
    c.budget -= 1;
L_0022C878:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_0022C8B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 23584u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 13;
L_0022C8B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], 0u + 3u);  if (t) { goto L_0022C8C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 1u);  if (t) { goto L_0022C8D8; } }
L_0022C8C8:
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022C8D8; } }
    set32(c.r[20], 0u + 2u);
    c.budget -= 1;
L_0022C8D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31704u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022C8F8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[20], 0u + 1u);  if (t) { goto L_0022C8F8; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022C8F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0022C910; } }
    set32(c.r[20], 0u + 5u);
    c.budget -= 1;
L_0022C910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { goto L_0022CBDC; } }
L_0022C918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C920u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126B58u; return; } if (c.pc != 0x0022C920u) [[unlikely]] return; }
L_0022C920:
    c.r[16].d[0] = c.r[2].d[0] & 4095ull;
    c.r[1].d[0] = c.r[16].sd[0] < 769ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 1280ll ? 1ull : 0ull;  if (t) { goto L_0022C93C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 20);  if (t) { goto L_0022C940; } }
    set32(c.r[16], c.r[16].w[0] + 1024u);
    c.budget -= 1;
L_0022C93C:
    set32(c.r[2], c.r[16].w[0] << 20);
    c.budget -= 1;
L_0022C940:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] - 25200u);
    c.f[0] = ld32((c.r[1].w[0] + 25808u));
    set32(c.r[17], c.r[29].w[0] + 180u);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    set32(c.r[4], c.r[29].w[0] + 204u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 28008u));
    st32((c.r[29].w[0] + 204u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.f[1] = ld32((c.r[1].w[0] + 25888u));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[2] = c.r[2].w[0];
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C9B4u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 7u, depth + 1u); else { c.pc = 0x00144160u; return; } if (c.pc != 0x0022C9B4u) [[unlikely]] return; }
L_0022C9B4:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B90000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 204u);
    set32(c.r[18], c.r[29].w[0] + 184u);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C9D8u); st32((c.r[29].w[0] + 176u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 6u, depth + 1u); else { c.pc = 0x00144150u; return; } if (c.pc != 0x0022C9D8u) [[unlikely]] return; }
L_0022C9D8:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B90000u);
    c.f[2] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 8u);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31544u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 192u);  if (t) { goto L_0022CA1C; } }
    c.r[1].d[0] = c.r[16].sd[0] < 2501ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < 3500ll ? 1ull : 0ull;  if (t) { goto L_0022CA18; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022CA78; } }
L_0022CA18:
    set32(c.r[4], 0u + 192u);
    c.budget -= 1;
L_0022CA1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CA24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0022CA24u) [[unlikely]] return; }
L_0022CA24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022CA78; } }
    c.f[3] = ld32((c.r[17].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 25800u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[6], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.f[3] ^ fp::kSign;
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CA78u);  if (depth < kMaxDepth) unit_004A(c, 272u, depth + 1u); else { c.pc = 0x0022B340u; return; } if (c.pc != 0x0022CA78u) [[unlikely]] return; }
L_0022CA78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CA80u);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x0022CA80u) [[unlikely]] return; }
L_0022CA80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022CBD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CA90u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126B58u; return; } if (c.pc != 0x0022CA90u) [[unlikely]] return; }
L_0022CA90:
    c.r[16].d[0] = c.r[2].d[0] & 4095ull;
    c.r[1].d[0] = c.r[16].sd[0] < 897ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 1152ll ? 1ull : 0ull;  if (t) { goto L_0022CAAC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 20);  if (t) { goto L_0022CAB0; } }
    set32(c.r[16], c.r[16].w[0] + 2048u);
    c.budget -= 1;
L_0022CAAC:
    set32(c.r[2], c.r[16].w[0] << 20);
    c.budget -= 1;
L_0022CAB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25808u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 25200u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 204u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 18;
    { const bool t = c.r[4].sd[0] < 0; st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0022CB04; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022CB20; } }
L_0022CB04:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_0022CB20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[1] = ld32((c.r[1].w[0] + 25792u));
    set32(c.r[4], c.r[29].w[0] + 204u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CB48u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 7u, depth + 1u); else { c.pc = 0x00144160u; return; } if (c.pc != 0x0022CB48u) [[unlikely]] return; }
L_0022CB48:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432A0000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 204u);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CB68u); st32((c.r[29].w[0] + 176u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 6u, depth + 1u); else { c.pc = 0x00144150u; return; } if (c.pc != 0x0022CB68u) [[unlikely]] return; }
L_0022CB68:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x432A0000u);
    c.f[2] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 8u);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 31544u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 192u);  if (t) { goto L_0022CBAC; } }
    c.r[1].d[0] = c.r[16].sd[0] < 2501ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < 3500ll ? 1ull : 0ull;  if (t) { goto L_0022CBA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022CBD4; } }
L_0022CBA8:
    set32(c.r[4], 0u + 192u);
    c.budget -= 1;
L_0022CBAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CBB4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0022CBB4u) [[unlikely]] return; }
L_0022CBB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022CBD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CBD4u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004A(c, 272u, depth + 1u); else { c.pc = 0x0022B340u; return; } if (c.pc != 0x0022CBD4u) [[unlikely]] return; }
L_0022CBD4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0022CBDC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C918u | kUnwind; return; } goto L_0022C918; } }
L_0022CBE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 23584u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0022CCEC; } }
    set32(c.r[2], c.r[3].w[0] << 20);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[1].w[0] + 28672u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[17], c.r[29].w[0] + 164u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    st32((c.r[1].w[0] + 28676u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[1].w[0] + 28680u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25808u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC40u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x0022CC40u) [[unlikely]] return; }
L_0022CC40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[29].w[0] + 160u), 0u);
    set32(c.r[3], ld32((c.r[1].w[0] - 23584u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    set32(c.r[16], c.r[29].w[0] + 168u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] - 32u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[1].w[0] + 25904u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 25784u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC90u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 19u, depth + 1u); else { c.pc = 0x00144490u; return; } if (c.pc != 0x0022CC90u) [[unlikely]] return; }
L_0022CC90:
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[1].w[0] + 28712u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28728u), c.f[2]);
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28840u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28856u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28744u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28872u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28800u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28804u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 28808u), c.r[3].w[0]);  if (t) { goto L_0022CD4C; } }
L_0022CCEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[1].w[0] + 28672u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28676u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28680u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28712u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28728u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28856u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28744u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28800u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28804u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28808u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28840u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28872u), 0u);
    c.budget -= 24;
L_0022CD4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0022CD70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CD88u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x0022CD88u) [[unlikely]] return; }
L_0022CD88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 128u);
    set32(c.r[2], c.r[2].w[0] - 4848u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022CDB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1B00000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 31072u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    set32(c.r[5], 0u + 128u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[9].w[0] + 795u));
    c.budget -= 14;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[9].w[0] + 788u);  if (t) { goto L_0022CDF4; } }
    set32(c.r[5], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0022CEB8; } }
L_0022CDF4:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], c.r[6].w[0] + 28320u);
    set32(c.r[5], c.r[7].w[0] << 2);
    c.budget -= 5;
L_0022CE08:
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022CE7C; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 240u)));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022CE6C; } }
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022CE6C; } }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022CE6C; } }
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0022CE70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0022CE70; } }
L_0022CE6C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022CE70:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022CE7C; } }
    set32(c.r[8], 0u + 1u);
    c.budget -= 1;
L_0022CE7C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].d[0] = c.r[7].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022CE08u | kUnwind; return; } goto L_0022CE08; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0022CEAC; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[5], 0u + 28u);  if (t) { goto L_0022CEB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 28u), c.r[5].w[0]);  if (t) { goto L_0022CEB8; } }
L_0022CEAC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0022CEB8; } }
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    c.budget -= 1;
L_0022CEB8:
    set32(c.r[8], ld32((c.r[4].w[0] + 28u)));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 7u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[8].d[0];  if (t) { goto L_0022CF80; } }
    c.f[0] = c.r[8].w[0];
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] < 0; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022CEE0; } }
    c.f[0] = c.r[7].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022CEFC; } }
L_0022CEE0:
    set32(c.r[6], c.r[7].w[0] >> 1);
    c.r[5].d[0] = c.r[7].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0022CEFC:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 25776u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0022CF30; } }
    set32(c.r[5], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[5].d[0]; set32(c.r[5], 0u - 1u);  if (t) { goto L_0022CF30; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0022CF30:
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 7u));
    c.r[1].d[0] = c.r[5].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022CF5C; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0022CF5C; } }
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_0022CF5C:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 7u));
    c.r[1].d[0] = c.r[5].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022CF80; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[4], 0u + 28u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0022CF80; } }
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0022CF80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022CF90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CFA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0022CFA4u) [[unlikely]] return; }
L_0022CFA4:
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 48u);  if (t) { goto L_0022CFD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CFB8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0022CFB8u) [[unlikely]] return; }
L_0022CFB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0022CFCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CFC8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 48u, depth + 1u); else { c.pc = 0x0022CD70u; return; } if (c.pc != 0x0022CFC8u) [[unlikely]] return; }
L_0022CFC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022CFCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CFD4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0022CFD4u) [[unlikely]] return; }
L_0022CFD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022CFF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022D038; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 4848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D020u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0022D020u) [[unlikely]] return; }
L_0022D020:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022D03C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D038u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0022D038u) [[unlikely]] return; }
L_0022D038:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022D03C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022D050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022D0CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 4832u);
    set32(c.r[3], c.r[3].w[0] - 4816u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 4800u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D09Cu); st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0022D09Cu) [[unlikely]] return; }
L_0022D09C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D0A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0022D0A8u) [[unlikely]] return; }
L_0022D0A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D0B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x0022D0B4u) [[unlikely]] return; }
L_0022D0B4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022D0D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D0CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0022D0CCu) [[unlikely]] return; }
L_0022D0CC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022D0D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022D0F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022D138; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 4768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D120u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0022D120u) [[unlikely]] return; }
L_0022D120:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022D13C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D138u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0022D138u) [[unlikely]] return; }
L_0022D138:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022D13C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022D150:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B550u | kUnwind; return; } [[clang::musttail]] return unit_004A(c, 285u, depth); }
L_0022D160:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B480u | kUnwind; return; } [[clang::musttail]] return unit_004A(c, 279u, depth); }
L_0022D170:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B420u | kUnwind; return; } [[clang::musttail]] return unit_004A(c, 277u, depth); }
L_0022D180:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B480u | kUnwind; return; } [[clang::musttail]] return unit_004A(c, 279u, depth); }
L_0022D190:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 36u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B480u | kUnwind; return; } [[clang::musttail]] return unit_004A(c, 279u, depth); }
L_0022D1A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022BD20u | kUnwind; return; } [[clang::musttail]] return unit_004A(c, 300u, depth); }
L_0022D1B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022B480u | kUnwind; return; } [[clang::musttail]] return unit_004A(c, 279u, depth); }
L_0022D1C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C4D0u | kUnwind; return; } goto L_0022C4D0; }
L_0022D1D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D050u | kUnwind; return; } goto L_0022D050; }
L_0022D1E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D050u | kUnwind; return; } goto L_0022D050; }
L_0022D1F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D218u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x0022D218u) [[unlikely]] return; }
L_0022D218:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 4560u);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0022D260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 164u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0022D2BC; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 32u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = 0ull & 1ull;
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 474u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[7].w[0] + 474u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022D2BC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D2BCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022D2BCu) [[unlikely]] return; }
L_0022D2BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022D2D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022D318; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 4560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D300u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0022D300u) [[unlikely]] return; }
L_0022D300:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022D31C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D318u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0022D318u) [[unlikely]] return; }
L_0022D318:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022D31C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022D330:
    set32(c.r[29], c.r[29].w[0] - 5776u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D36Cu); st32((c.r[29].w[0] + 5772u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 303u, depth + 1u); else { c.pc = 0x001FF110u; return; } if (c.pc != 0x0022D36Cu) [[unlikely]] return; }
L_0022D36C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D378u); c.r[5].d[0] = 0ull | 50000ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0022D378u) [[unlikely]] return; }
L_0022D378:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0022D394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D38Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x0022D38Cu) [[unlikely]] return; }
L_0022D38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0022D39C; } }
L_0022D394:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0022D39C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 288u);  if (t) { goto L_0022D3B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D3ACu); set32(c.r[4], ld32((c.r[29].w[0] + 5772u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0022D3ACu) [[unlikely]] return; }
L_0022D3AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0022E1A4; } }
L_0022D3B4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D3C0u); set32(c.r[6], 0u + 4352u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0022D3C0u) [[unlikely]] return; }
L_0022D3C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D3CCu); c.r[5].d[0] = 0ull | 50000ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0022D3CCu) [[unlikely]] return; }
L_0022D3CC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0022D3E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D3E0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x0022D3E0u) [[unlikely]] return; }
L_0022D3E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0022D3F0; } }
L_0022D3E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0022D3F0:
    c.r[10].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 59u);
    set32(c.r[5], 0u + 125u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 123u);  if (t) { goto L_0022D47C; } }
L_0022D40C:
    c.r[7].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0022D48C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[5].d[0]; set32(c.r[3], c.r[20].w[0] << 7);  if (t) { goto L_0022D43C; } }
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 288u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0022D478; } }
L_0022D43C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_0022D44C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 1u);  if (t) { goto L_0022D478; } }
L_0022D44C:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;  if (t) { goto L_0022D478; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022D478; } }
    c.r[1].d[0] = c.r[7].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] << 7);  if (t) { goto L_0022D478; } }
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 288u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 4;
L_0022D478:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0022D47C:
    c.r[3].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D40Cu | kUnwind; return; } goto L_0022D40C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022D48C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { goto L_0022D758; } }
L_0022D494:
    st8((c.r[29].w[0] + 163u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[29].w[0] + 5752u);
    st8((c.r[29].w[0] + 162u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[29].w[0] + 5748u);
    st8((c.r[29].w[0] + 161u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 5736u);
    st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[29].w[0] + 160u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[6], c.r[29].w[0] + 5744u);
    st64((c.r[29].w[0] + 8u), c.r[5].d[0]);
    set32(c.r[2], c.r[16].w[0] << 7);
    st64((c.r[29].w[0] + 16u), c.r[4].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[2].w[0] + 288u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    set32(c.r[5], c.r[5].w[0] + 25920u);
    set32(c.r[7], c.r[29].w[0] + 5740u);
    set32(c.r[8], c.r[29].w[0] + 5768u);
    set32(c.r[9], c.r[29].w[0] + 5764u);
    set32(c.r[10], c.r[29].w[0] + 5760u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D4F4u); set32(c.r[11], c.r[29].w[0] + 5756u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x0022D4F4u) [[unlikely]] return; }
L_0022D4F4:
    set32(c.r[2], c.r[16].w[0] << 5);
    set32(c.r[4], ld32((c.r[29].w[0] + 5744u)));
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    set32(c.r[8], c.r[3].w[0] + 4640u);
    c.f[3] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[8].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 5740u)));
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 5768u));
    st32((c.r[8].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 5764u));
    st32((c.r[8].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 5760u));
    st32((c.r[8].w[0] + 12u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 5756u));
    fpu_div(c, 1u, c.f[1], c.f[3]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 26;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022D56C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0022D588; } }
L_0022D56C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_0022D588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    st16((c.r[8].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 5752u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[3]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022D5D4; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0022D5F0; } }
L_0022D5D4:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_0022D5F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    st16((c.r[8].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 5748u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[3]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022D63C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0022D658; } }
L_0022D63C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_0022D658:
    c.r[11].d[0] = 0ull + 0ull;
    st16((c.r[8].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 5736u)));
    st16((c.r[8].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 119u);
    set32(c.r[4], 0u + 109u);
    set32(c.r[3], 0u + 116u);
    set32(c.r[2], 0u + 114u);
    set32(c.r[15], 0u + 64u);
    set32(c.r[14], 0u + 103u);
    set32(c.r[13], 0u + 101u);
    set32(c.r[12], 0u + 97u);
    set32(c.r[10], 0u + 104u);
    set32(c.r[6], 0u + 100u);
    set32(c.r[7], c.r[9].w[0] + c.r[29].w[0]);
    c.budget -= 16;
L_0022D698:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_0022D6AC; } }
    c.r[11].d[0] = c.r[11].d[0] | 64ull;
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    c.budget -= 2;
L_0022D6AC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_0022D6BC; } }
    c.r[11].d[0] = c.r[11].d[0] | 1ull;
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    c.budget -= 2;
L_0022D6BC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_0022D6CC; } }
    c.r[11].d[0] = c.r[11].d[0] | 2ull;
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    c.budget -= 2;
L_0022D6CC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_0022D6DC; } }
    c.r[11].d[0] = c.r[11].d[0] | 4ull;
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    c.budget -= 2;
L_0022D6DC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_0022D6EC; } }
    c.r[11].d[0] = c.r[11].d[0] | 8ull;
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    c.budget -= 2;
L_0022D6EC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[15].d[0];  if (t) { goto L_0022D6FC; } }
    c.r[11].d[0] = c.r[11].d[0] | 16ull;
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    c.budget -= 2;
L_0022D6FC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[14].d[0];  if (t) { goto L_0022D70C; } }
    c.r[11].d[0] = c.r[11].d[0] | 32ull;
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    c.budget -= 2;
L_0022D70C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[13].d[0];  if (t) { goto L_0022D71C; } }
    c.r[11].d[0] = c.r[11].d[0] | 128ull;
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    c.budget -= 2;
L_0022D71C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[12].d[0];  if (t) { goto L_0022D72C; } }
    c.r[11].d[0] = c.r[11].d[0] | 256ull;
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    c.budget -= 2;
L_0022D72C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[10].d[0];  if (t) { goto L_0022D73C; } }
    c.r[7].d[0] = c.r[11].d[0] | 512ull;
    c.r[11].d[0] = c.r[7].d[0] & 65535ull;
    c.budget -= 2;
L_0022D73C:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[7].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[7], c.r[9].w[0] + c.r[29].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D698u | kUnwind; return; } goto L_0022D698; } }
    st16((c.r[8].w[0] + 28u), static_cast<std::uint16_t>(c.r[11].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0022D758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D494u | kUnwind; return; } goto L_0022D494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D768u); set32(c.r[19], c.r[29].w[0] + 4640u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0022D768u) [[unlikely]] return; }
L_0022D768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D770u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0022D770u) [[unlikely]] return; }
L_0022D770:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0022D7C8; } }
    set32(c.r[2], c.r[20].w[0] << 5);
    set32(c.r[4], 0u + 170u);
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], 0u + 2u);
    c.f[0] = ld32((c.r[1].w[0] + 25968u));
    set32(c.r[20], c.r[20].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[3].w[0] + 16u), 0u);
    c.f[0] = ld32((c.r[1].w[0] + 25968u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 22u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 24u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 26u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 19;
L_0022D7C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { goto L_0022E190; } }
L_0022D7D0:
    c.r[4].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 512ull;  if (t) { goto L_0022D7F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022E184; } }
    c.r[2].d[0] = c.r[4].d[0] & 512ull;
    c.budget -= 1;
L_0022D7F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0022D80C; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 31704u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022E184; } }
L_0022D80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D814u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0022D814u) [[unlikely]] return; }
L_0022D814:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022D830; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022E184; } }
L_0022D830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D838u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0022D838u) [[unlikely]] return; }
L_0022D838:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022D85C; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 170u);  if (t) { goto L_0022D85C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022E184; } }
L_0022D85C:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0022D8A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D874u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0022D874u) [[unlikely]] return; }
L_0022D874:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022E184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D888u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0022D888u) [[unlikely]] return; }
L_0022D888:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0022D8A4; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31704u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022E184; } }
L_0022D8A4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022D8A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    c.budget -= 2;
L_0022D8B0:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[21], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022D8CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D8B0u | kUnwind; return; } goto L_0022D8B0; } }
L_0022D8CC:
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D8DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 114u, depth + 1u); else { c.pc = 0x002099C0u; return; } if (c.pc != 0x0022D8DCu) [[unlikely]] return; }
L_0022D8DC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D8F4u); c.r[7].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 116u, depth + 1u); else { c.pc = 0x002099F0u; return; } if (c.pc != 0x0022D8F4u) [[unlikely]] return; }
L_0022D8F4:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0022D914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D90Cu); set32(c.r[4], ld32((c.r[29].w[0] + 5772u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0022D90Cu) [[unlikely]] return; }
L_0022D90C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E1A0; } }
L_0022D914:
    st32((c.r[21].w[0] + 464u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[21].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    st32((c.r[21].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[21].w[0] + 232u), c.f[0]);
    st8((c.r[21].w[0] + 370u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[21].w[0] + 208u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 22u)));
    c.f[0] = ld32((c.r[1].w[0] + 25960u));
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[21].w[0] + 212u), c.f[0]);
    st32((c.r[21].w[0] + 216u), 0u);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 25;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022DADC; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 4ull;  if (t) { goto L_0022DA3C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D998u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0022D998u) [[unlikely]] return; }
L_0022D998:
    c.r[10].d[0] = ld8((c.r[21].w[0] + 397u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 9u);
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[7], 0u - 65u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[10].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st8((c.r[21].w[0] + 397u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 405u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st8((c.r[21].w[0] + 405u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 394u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[21].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 402u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[21].w[0] + 402u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 397u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[21].w[0] + 397u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 405u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[21].w[0] + 405u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 395u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[21].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 403u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 41;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 403u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0022DAC0; } }
L_0022DA3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022DA50; } }
    set32(c.r[2], 0u + 99u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_0022DA84; } }
L_0022DA50:
    set32(c.r[2], 0u - 1u);
    st32((c.r[21].w[0] + 164u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022DAC0; } }
    c.r[4].d[0] = ld8((c.r[21].w[0] + 395u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0022DAC0; } }
L_0022DA84:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0022DAAC; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 15440u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DAA4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0022DAA4u) [[unlikely]] return; }
L_0022DAA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[19].w[0] + 4u));  if (t) { goto L_0022DAC4; } }
L_0022DAAC:
    set32(c.r[5], 0u + 15000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DAC0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0022DAC0u) [[unlikely]] return; }
L_0022DAC0:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 4u));
    c.budget -= 1;
L_0022DAC4:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 536u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022DADC; } }
    st32((c.r[21].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 1;
L_0022DADC:
    st32((c.r[21].w[0] + 480u), c.r[16].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[21].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    st32((c.r[21].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[21].w[0] + 232u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0022DC40; } }
    set32(c.r[10], 0u - 5u);
    st32((c.r[21].w[0] + 164u), c.r[2].w[0]);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 397u));
    set32(c.r[8], 0u - 65u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[6], 0u - 9u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[3], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];
    st8((c.r[21].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 405u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];
    st8((c.r[21].w[0] + 405u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st8((c.r[21].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 402u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st8((c.r[21].w[0] + 402u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[21].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 405u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[21].w[0] + 405u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[21].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 405u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 43;
    { const bool t = c.r[21].d[0] == 0ull; st8((c.r[21].w[0] + 405u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0022DBB8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0022DBB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DBC4u); c.r[5].d[0] = c.r[2].d[0] | 21569ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022DBC4u) [[unlikely]] return; }
L_0022DBC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0022DBD0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0022DBD0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022DBE8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DBE8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022DBE8u) [[unlikely]] return; }
L_0022DBE8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0022DBF4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0022DBF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DC00u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022DC00u) [[unlikely]] return; }
L_0022DC00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0022DC0C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0022DC0C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022DC24; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DC24u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022DC24u) [[unlikely]] return; }
L_0022DC24:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 4u));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 536u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022DC40; } }
    st32((c.r[21].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 1;
L_0022DC40:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022E0DC; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 397u));
    set32(c.r[6], 0u - 5u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[5], 0u - 2u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], 0u + 32u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[21].w[0] + 397u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 405u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[21].w[0] + 405u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 395u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[21].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 403u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[21].w[0] + 403u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[21].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    c.budget -= 26;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0022DCE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DCC0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0022DCC0u) [[unlikely]] return; }
L_0022DCC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0022DCD8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DCD4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210C90u; return; } if (c.pc != 0x0022DCD4u) [[unlikely]] return; }
L_0022DCD4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0022DCD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DCE0u); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0022DCE0u) [[unlikely]] return; }
L_0022DCE0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0022DCEC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0022DCEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C490000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DCF8u); c.r[5].d[0] = c.r[2].d[0] | 18248ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022DCF8u) [[unlikely]] return; }
L_0022DCF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0022DD04; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0022DD04:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0022DD14; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_0022DD14:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0022DD3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DD2Cu);  if (depth < kMaxDepth) unit_004B(c, 278u, depth + 1u); else { c.pc = 0x0022FEE0u; return; } if (c.pc != 0x0022DD2Cu) [[unlikely]] return; }
L_0022DD2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0022DD3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DD3Cu); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0022DD3Cu) [[unlikely]] return; }
L_0022DD3C:
    set32(c.r[3], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022DDDC; } }
    c.r[10].d[0] = ld8((c.r[21].w[0] + 397u));
    set32(c.r[2], 0u - 33u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[7], 0u - 65u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[5], 0u - 9u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st8((c.r[21].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[21].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 402u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[21].w[0] + 402u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[21].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 405u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[21].w[0] + 405u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[21].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 403u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[21].w[0] + 403u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 36;
L_0022DDDC:
    set32(c.r[3], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[2], 0u + 170u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022DE64; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 394u));
    set32(c.r[7], 0u - 65u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[5], 0u - 9u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[21].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 402u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[21].w[0] + 402u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[21].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 405u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[21].w[0] + 405u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[21].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 403u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[21].w[0] + 403u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 30;
L_0022DE64:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0022E05C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DE84u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0022DE84u) [[unlikely]] return; }
L_0022DE84:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 397u));
    set32(c.r[5], 0u - 9u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[21].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 405u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[21].w[0] + 405u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[21].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 402u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[21].w[0] + 402u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[21].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    st32((c.r[21].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[21].w[0] + 232u), c.f[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].sd[0] < 108ll ? 1ull : 0ull;
    c.budget -= 30;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 114ll ? 1ull : 0ull;  if (t) { goto L_0022E0DC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0022E0DC; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x52450000u);  if (t) { goto L_0022DF10; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0022DF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DF18u); c.r[5].d[0] = c.r[2].d[0] | 17996ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022DF18u) [[unlikely]] return; }
L_0022DF18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0022DF24; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0022DF24:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022DF44; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022DF44; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DF44u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022DF44u) [[unlikely]] return; }
L_0022DF44:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0022DF50; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0022DF50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DF5Cu); c.r[5].d[0] = c.r[2].d[0] | 21569ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022DF5Cu) [[unlikely]] return; }
L_0022DF5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0022DF68; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0022DF68:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022DF88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022DF88; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DF88u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022DF88u) [[unlikely]] return; }
L_0022DF88:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0022DF94; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0022DF94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DFA0u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022DFA0u) [[unlikely]] return; }
L_0022DFA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0022DFAC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0022DFAC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022DFCC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022DFCC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DFCCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022DFCCu) [[unlikely]] return; }
L_0022DFCC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0022DFD8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0022DFD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DFE4u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022DFE4u) [[unlikely]] return; }
L_0022DFE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0022DFF0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0022DFF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022E010; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022E010; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E010u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022E010u) [[unlikely]] return; }
L_0022E010:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0022E01C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0022E01C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E028u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022E028u) [[unlikely]] return; }
L_0022E028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0022E034; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0022E034:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022E0DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022E0DC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E054u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022E054u) [[unlikely]] return; }
L_0022E054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[19].w[0] + 28u));  if (t) { goto L_0022E0E0; } }
L_0022E05C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43410000u);  if (t) { goto L_0022E068; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0022E068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E070u); c.r[5].d[0] = c.r[2].d[0] | 21569ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022E070u) [[unlikely]] return; }
L_0022E070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0022E07C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0022E07C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022E094; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E094u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022E094u) [[unlikely]] return; }
L_0022E094:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0022E0DC; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);  if (t) { goto L_0022E0B0; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0022E0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E0B8u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022E0B8u) [[unlikely]] return; }
L_0022E0B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0022E0C4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0022E0C4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022E0DC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E0DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022E0DCu) [[unlikely]] return; }
L_0022E0DC:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 28u));
    c.budget -= 1;
L_0022E0E0:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0022E0F0; } }
    st32((c.r[21].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 1;
L_0022E0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E0F8u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0022E0F8u) [[unlikely]] return; }
L_0022E0F8:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0022E12C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E10Cu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0022E10Cu) [[unlikely]] return; }
L_0022E10C:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0022E12C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E120u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0022E120u) [[unlikely]] return; }
L_0022E120:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0022E184; } }
L_0022E12C:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022E184; } }
    c.r[5].d[0] = ld8((c.r[21].w[0] + 392u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[4], 0u + 40u);
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E160u); st8((c.r[21].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0022E160u) [[unlikely]] return; }
L_0022E160:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 436u);  if (t) { goto L_0022E17C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E178u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_004B(c, 78u, depth + 1u); else { c.pc = 0x0022D1F0u; return; } if (c.pc != 0x0022E178u) [[unlikely]] return; }
L_0022E178:
    set32(c.r[4], c.r[21].w[0] + 436u);
    c.budget -= 1;
L_0022E17C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E184u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0022E184u) [[unlikely]] return; }
L_0022E184:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 32u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0022E190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D7D0u | kUnwind; return; } goto L_0022D7D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E1A0u); set32(c.r[4], ld32((c.r[29].w[0] + 5772u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0022E1A0u) [[unlikely]] return; }
L_0022E1A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0022E1A4:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 5776u);  c.pc = t; return; }
L_0022E1D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E1F8u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0022E1F8u) [[unlikely]] return; }
L_0022E1F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_0022E214; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E210u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 147u, depth + 1u); else { c.pc = 0x0022E240u; return; } if (c.pc != 0x0022E210u) [[unlikely]] return; }
L_0022E210:
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 1;
L_0022E214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E21Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0022E21Cu) [[unlikely]] return; }
L_0022E21C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0022E240:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52450000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[8].d[0] = c.r[2].d[0] | 17996ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E278u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 132u, depth + 1u); else { c.pc = 0x001DEA70u; return; } if (c.pc != 0x0022E278u) [[unlikely]] return; }
L_0022E278:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 4576u);
    set32(c.r[4], c.r[18].w[0] + 32u);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E294u); st32((c.r[18].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 152u, depth + 1u); else { c.pc = 0x00141D80u; return; } if (c.pc != 0x0022E294u) [[unlikely]] return; }
L_0022E294:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    ld128((c.r[17].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[2].w[0] + 16u), c.f[0]);  if (t) { goto L_0022E2DC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
L_0022E2DC:
    st32((c.r[18].w[0] + 116u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0022E300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022E328; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E320u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 152u, depth + 1u); else { c.pc = 0x00141D80u; return; } if (c.pc != 0x0022E320u) [[unlikely]] return; }
L_0022E320:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 2;
L_0022E328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022E340:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E37Cu); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x0022E37Cu) [[unlikely]] return; }
L_0022E37C:
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E388u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0022E388u) [[unlikely]] return; }
L_0022E388:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E394u); set32(c.r[4], c.r[20].w[0] + 24u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0022E394u) [[unlikely]] return; }
L_0022E394:
    set32(c.r[4], c.r[20].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E3A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x0022E3A0u) [[unlikely]] return; }
L_0022E3A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 4656u);
    set32(c.r[2], c.r[2].w[0] - 4640u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 4624u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 4608u);
    st32((c.r[20].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 144u), c.r[19].w[0]);
    st8((c.r[20].w[0] + 88u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 138u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0022E434; } }
L_0022E3E4:
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[20].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[5].w[0] + 90u);
    st16((c.r[5].w[0] + 90u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[8].d[0] == 0ull; st8((c.r[2].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022E420; } }
    c.r[2].d[0] = ld16((c.r[5].w[0] + 88u));
    c.r[3].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0022E420:
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 138u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[20].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0022E434:
    c.r[2].d[0] = c.r[8].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022E3E4u | kUnwind; return; } goto L_0022E3E4; } }
    st16((c.r[20].w[0] + 140u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0022E470:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 140u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 140u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 138u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 140u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022E494; } }
    st16((c.r[4].w[0] + 140u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0022E494:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022E4A0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 88u));
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = ld8((c.r[3].w[0] + 63u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022E4EC; } }
L_0022E4C8:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 140u));
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 90u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + c.r[17].w[0]);  if (t) { goto L_0022E4E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[3].w[0] + 64u));  if (t) { goto L_0022E4F8; } }
L_0022E4E8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0022E4EC:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[6].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022E4C8u | kUnwind; return; } goto L_0022E4C8; } }
L_0022E4F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0022EDE8; } }
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[4], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 472u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022E53C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31704u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022EDE8; } }
L_0022E53C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[4], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 472u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022E570; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0022EDE8; } }
L_0022E570:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[4], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 472u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022E5B4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022E5B4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31608u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022EDE8; } }
L_0022E5B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[4], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 472u));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0022E5E4; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022EDE8; } }
L_0022E5E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E5ECu);  if (depth < kMaxDepth) unit_0047(c, 131u, depth + 1u); else { c.pc = 0x0021D9F0u; return; } if (c.pc != 0x0022E5ECu) [[unlikely]] return; }
L_0022E5EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E5F4u);  if (depth < kMaxDepth) unit_0015(c, 8u, depth + 1u); else { c.pc = 0x001540B0u; return; } if (c.pc != 0x0022E5F4u) [[unlikely]] return; }
L_0022E5F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E604u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 218u, depth + 1u); else { c.pc = 0x0014F060u; return; } if (c.pc != 0x0022E604u) [[unlikely]] return; }
L_0022E604:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022E6C4; } }
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
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 1293ull;
    st64((c.r[9].w[0]), c.r[8].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0] + 8u), 0ull);
    set32(c.r[2], 0u + 71u);
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
L_0022E6C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022E77C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
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
    set32(c.r[2], 0u + 8u);
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
    c.budget -= 38;
L_0022E77C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 473u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022E860; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022E860; } }
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
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 29ull;
    st64((c.r[9].w[0]), c.r[8].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0] + 8u), 0ull);
    set32(c.r[2], 0u + 71u);
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
L_0022E860:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 473u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022E88C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E88Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 265u, depth + 1u); else { c.pc = 0x001FE540u; return; } if (c.pc != 0x0022E88Cu) [[unlikely]] return; }
L_0022E88C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 473u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0022E968; } }
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022E968; } }
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
    set32(c.r[3], 0u + 72u);
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
    c.budget -= 39;
L_0022E968:
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E97Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0015(c, 11u, depth + 1u); else { c.pc = 0x001541F0u; return; } if (c.pc != 0x0022E97Cu) [[unlikely]] return; }
L_0022E97C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 473u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022EA60; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022EA60; } }
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
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 1293ull;
    st64((c.r[9].w[0]), c.r[8].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0] + 8u), 0ull);
    set32(c.r[2], 0u + 71u);
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
L_0022EA60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 473u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022EA8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EA8Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 265u, depth + 1u); else { c.pc = 0x001FE540u; return; } if (c.pc != 0x0022EA8Cu) [[unlikely]] return; }
L_0022EA8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 473u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022EB6C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022EB6C; } }
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
    c.budget -= 39;
L_0022EB6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 473u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022EDD8; } }
    set32(c.r[2], c.r[29].w[0] + 112u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[1].w[0] + 28272u)));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    set32(c.r[5], c.r[2].w[0] + 224u);
    c.budget -= 16;
L_0022EBD0:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022EBD0u | kUnwind; return; } goto L_0022EBD0; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28272u)));
    set32(c.r[2], c.r[2].w[0] + 224u);
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28272u)));
    set32(c.r[3], c.r[3].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 51;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ECB8u); set32(c.r[5], ld32((c.r[1].w[0] + 28272u)));  if (depth < kMaxDepth) unit_0013(c, 99u, depth + 1u); else { c.pc = 0x0014D7F0u; return; } if (c.pc != 0x0022ECB8u) [[unlikely]] return; }
L_0022ECB8:
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ECD4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0015(c, 18u, depth + 1u); else { c.pc = 0x00154690u; return; } if (c.pc != 0x0022ECD4u) [[unlikely]] return; }
L_0022ECD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28272u)));
    set32(c.r[3], c.r[3].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ED18u); set32(c.r[5], ld32((c.r[1].w[0] + 28272u)));  if (depth < kMaxDepth) unit_0013(c, 99u, depth + 1u); else { c.pc = 0x0014D7F0u; return; } if (c.pc != 0x0022ED18u) [[unlikely]] return; }
L_0022ED18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022EDD8; } }
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
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 93ull;
    st64((c.r[9].w[0]), c.r[8].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0] + 8u), 0ull);
    set32(c.r[2], 0u + 71u);
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
L_0022EDD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EDE8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 218u, depth + 1u); else { c.pc = 0x0014F060u; return; } if (c.pc != 0x0022EDE8u) [[unlikely]] return; }
L_0022EDE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0022EE00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022EE94; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 4656u);
    set32(c.r[2], c.r[2].w[0] - 4640u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 4624u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 4608u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EE58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0022EE58u) [[unlikely]] return; }
L_0022EE58:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EE64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0022EE64u) [[unlikely]] return; }
L_0022EE64:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EE70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0022EE70u) [[unlikely]] return; }
L_0022EE70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EE7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x0022EE7Cu) [[unlikely]] return; }
L_0022EE7C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022EE98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EE94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0022EE94u) [[unlikely]] return; }
L_0022EE94:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022EE98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022EEB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022EEF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 4576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EEE0u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0037(c, 141u, depth + 1u); else { c.pc = 0x001DEBE0u; return; } if (c.pc != 0x0022EEE0u) [[unlikely]] return; }
L_0022EEE0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022EEFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EEF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0022EEF8u) [[unlikely]] return; }
L_0022EEF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022EEFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022EF10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022E470u | kUnwind; return; } goto L_0022E470; }
L_0022EF20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022EE00u | kUnwind; return; } goto L_0022EE00; }
L_0022EF30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022E4A0u | kUnwind; return; } goto L_0022E4A0; }
L_0022EF40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022EE00u | kUnwind; return; } goto L_0022EE00; }
L_0022EF50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 36u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022EE00u | kUnwind; return; } goto L_0022EE00; }
L_0022EF60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EF9Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x0022EF9Cu) [[unlikely]] return; }
L_0022EF9C:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EFA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0022EFA8u) [[unlikely]] return; }
L_0022EFA8:
    set32(c.r[4], c.r[19].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EFB4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x0022EFB4u) [[unlikely]] return; }
L_0022EFB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 4416u);
    set32(c.r[3], c.r[3].w[0] - 4400u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 4384u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EFDCu); st32((c.r[19].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 183u, depth + 1u); else { c.pc = 0x001ADAC0u; return; } if (c.pc != 0x0022EFDCu) [[unlikely]] return; }
L_0022EFDC:
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st8((c.r[19].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0022F024; } }
    set32(c.r[2], 0u + 207u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0022F024; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EFFCu);  if (depth < kMaxDepth) unit_003D(c, 80u, depth + 1u); else { c.pc = 0x001F53C0u; return; } if (c.pc != 0x0022EFFCu) [[unlikely]] return; }
L_0022EFFC:
    set32(c.r[3], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0022F01C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F010u);  if (depth < kMaxDepth) unit_003D(c, 80u, depth + 1u); else { c.pc = 0x001F53C0u; return; } if (c.pc != 0x0022F010u) [[unlikely]] return; }
L_0022F010:
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0022F024; } }
L_0022F01C:
    set32(c.r[17], 0u + 35u);
    set32(c.r[20], 0u + 208u);
    c.budget -= 2;
L_0022F024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F02Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0022F02Cu) [[unlikely]] return; }
L_0022F02C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022F058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F044u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0022F044u) [[unlikely]] return; }
L_0022F044:
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0022F058; } }
    set32(c.r[17], 0u + 33u);
    set32(c.r[20], 0u + 210u);
    c.budget -= 2;
L_0022F058:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st8((c.r[1].w[0] + 31176u), static_cast<std::uint8_t>(c.r[20].w[0]));  if (t) { goto L_0022F06C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0022F06C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F078u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022F078u) [[unlikely]] return; }
L_0022F078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0022F084; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0022F084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F08Cu); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0030(c, 167u, depth + 1u); else { c.pc = 0x001C3F30u; return; } if (c.pc != 0x0022F08Cu) [[unlikely]] return; }
L_0022F08C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F098u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0022F098u) [[unlikely]] return; }
L_0022F098:
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[11]);
    set32(c.r[9], 0u - 9u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[18].w[0] + 208u) & ~15u, c.r[11]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[11]);
    st128((c.r[18].w[0] + 224u) & ~15u, c.r[11]);
    c.r[11].d[0] = ld8((c.r[18].w[0] + 397u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[18].w[0] + 397u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[18].w[0] + 392u));
    c.r[2].d[0] = c.r[9].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F0F0u); st8((c.r[18].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0022F0F0u) [[unlikely]] return; }
L_0022F0F0:
    set32(c.r[2], 0u + 1000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31472u), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 31184u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull & 1ull;
    st32((c.r[1].w[0] + 31464u), c.r[3].w[0]);
    set32(c.r[4], 0u - 2u);
    set32(c.r[6], 0u - 1u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 28352u);  if (t) { goto L_0022F170; } }
L_0022F12C:
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0022F16C; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_0022F16C; } }
    c.r[2].d[0] = ld8((c.r[8].w[0] + 400u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[8].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_0022F16C:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0022F170:
    c.r[2].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F12Cu | kUnwind; return; } goto L_0022F12C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0022F1E0; } }
L_0022F184:
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022F1DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[18].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0022F1DC; } }
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F1B4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0022F1B4u) [[unlikely]] return; }
L_0022F1B4:
    set32(c.r[6], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u + 100u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 392u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0])));
    st32((c.r[2].w[0] + 640u), c.r[3].w[0]);
    c.budget -= 10;
L_0022F1DC:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0022F1E0:
    c.r[2].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F184u | kUnwind; return; } goto L_0022F184; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31616u), 0u);
    st32((c.r[19].w[0] + 52u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 56u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 164u)));
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F210u); st32((c.r[19].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_0041(c, 70u, depth + 1u); else { c.pc = 0x00205490u; return; } if (c.pc != 0x0022F210u) [[unlikely]] return; }
L_0022F210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F218u);  if (depth < kMaxDepth) unit_0041(c, 171u, depth + 1u); else { c.pc = 0x002072B0u; return; } if (c.pc != 0x0022F218u) [[unlikely]] return; }
L_0022F218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0022F2A0; } }
L_0022F220:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0022F29C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 224u);  if (t) { goto L_0022F254; } }
    c.r[1].d[0] = c.r[3].sd[0] < 212ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0022F29C; } }
L_0022F254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F25Cu); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x0022F25Cu) [[unlikely]] return; }
L_0022F25C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022F29C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 392u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 400u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_0022F29C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0022F2A0:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F220u | kUnwind; return; } goto L_0022F220; } }
    st32((c.r[19].w[0] + 68u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26856u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F2C8u); st8((c.r[1].w[0] + 8896u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004C(c, 210u, depth + 1u); else { c.pc = 0x00231980u; return; } if (c.pc != 0x0022F2C8u) [[unlikely]] return; }
L_0022F2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F2D0u);  if (depth < kMaxDepth) unit_003F(c, 143u, depth + 1u); else { c.pc = 0x001FD4A0u; return; } if (c.pc != 0x0022F2D0u) [[unlikely]] return; }
L_0022F2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F2D8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0022F2D8u) [[unlikely]] return; }
L_0022F2D8:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0022F300; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31336u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 31336u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F300u); set32(c.r[4], ld32((c.r[19].w[0] + 56u)));  if (depth < kMaxDepth) unit_004C(c, 20u, depth + 1u); else { c.pc = 0x002304B0u; return; } if (c.pc != 0x0022F300u) [[unlikely]] return; }
L_0022F300:
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[5], c.r[5].w[0] + 1344u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F318u); set32(c.r[6], c.r[6].w[0] + 1536u);  if (depth < kMaxDepth) unit_003F(c, 188u, depth + 1u); else { c.pc = 0x001FD8E0u; return; } if (c.pc != 0x0022F318u) [[unlikely]] return; }
L_0022F318:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0022F340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F350u);  if (depth < kMaxDepth) unit_003F(c, 303u, depth + 1u); else { c.pc = 0x001FF110u; return; } if (c.pc != 0x0022F350u) [[unlikely]] return; }
L_0022F350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F358u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 26u, depth + 1u); else { c.pc = 0x00230540u; return; } if (c.pc != 0x0022F358u) [[unlikely]] return; }
L_0022F358:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F364u); c.r[4].d[0] = c.r[2].d[0] | 4576ull;  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0022F364u) [[unlikely]] return; }
L_0022F364:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022F384; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 26856u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F384u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 185u, depth + 1u); else { c.pc = 0x0021E3F0u; return; } if (c.pc != 0x0022F384u) [[unlikely]] return; }
L_0022F384:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F394u); st32((c.r[1].w[0] + 31072u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004C(c, 33u, depth + 1u); else { c.pc = 0x00230600u; return; } if (c.pc != 0x0022F394u) [[unlikely]] return; }
L_0022F394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F39Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0041(c, 60u, depth + 1u); else { c.pc = 0x002053A0u; return; } if (c.pc != 0x0022F39Cu) [[unlikely]] return; }
L_0022F39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F3A4u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x0022F3A4u) [[unlikely]] return; }
L_0022F3A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022F3B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46410000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 17477ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F3E4u); set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0022F3E4u) [[unlikely]] return; }
L_0022F3E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0022F3F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0022F3F8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022F3F8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 72u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022F508; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0022F474; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F434u); set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (depth < kMaxDepth) unit_001A(c, 48u, depth + 1u); else { c.pc = 0x00168BD0u; return; } if (c.pc != 0x0022F434u) [[unlikely]] return; }
L_0022F434:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022F474; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0022F508; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0022F46C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022F46C; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0022F46C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0022F508; } }
L_0022F474:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26856u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022F508; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1368u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022F508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F4ACu);  if (depth < kMaxDepth) unit_0078(c, 276u, depth + 1u); else { c.pc = 0x002E2760u; return; } if (c.pc != 0x0022F4ACu) [[unlikely]] return; }
L_0022F4AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022F508; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 31168u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 31184u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31472u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F4E4u); st8((c.r[1].w[0] - 24016u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0022F4E4u) [[unlikely]] return; }
L_0022F4E4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F4F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x0022F4F0u) [[unlikely]] return; }
L_0022F4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F4F8u);  if (depth < kMaxDepth) unit_004B(c, 211u, depth + 1u); else { c.pc = 0x0022F340u; return; } if (c.pc != 0x0022F4F8u) [[unlikely]] return; }
L_0022F4F8:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F508u); st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 148u, depth + 1u); else { c.pc = 0x0013D450u; return; } if (c.pc != 0x0022F508u) [[unlikely]] return; }
L_0022F508:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 72u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022F564; } }
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F528u); st32((c.r[1].w[0] + 31472u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 264u, depth + 1u); else { c.pc = 0x00192010u; return; } if (c.pc != 0x0022F528u) [[unlikely]] return; }
L_0022F528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022F564; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F540u); st32((c.r[1].w[0] + 31464u), 0u);  if (depth < kMaxDepth) unit_000F(c, 148u, depth + 1u); else { c.pc = 0x0013D450u; return; } if (c.pc != 0x0022F540u) [[unlikely]] return; }
L_0022F540:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0022F55C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F55Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022F55Cu) [[unlikely]] return; }
L_0022F55C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F564u);  if (depth < kMaxDepth) unit_002B(c, 181u, depth + 1u); else { c.pc = 0x001ADA90u; return; } if (c.pc != 0x0022F564u) [[unlikely]] return; }
L_0022F564:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022F580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022F5FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 4416u);
    set32(c.r[3], c.r[3].w[0] - 4400u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 4384u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F5CCu); st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0022F5CCu) [[unlikely]] return; }
L_0022F5CC:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F5D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0022F5D8u) [[unlikely]] return; }
L_0022F5D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F5E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x0022F5E4u) [[unlikely]] return; }
L_0022F5E4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022F600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F5FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0022F5FCu) [[unlikely]] return; }
L_0022F5FC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022F600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022F620:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F63Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x0022F63Cu) [[unlikely]] return; }
L_0022F63C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F648u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0022F648u) [[unlikely]] return; }
L_0022F648:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F654u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0022F654u) [[unlikely]] return; }
L_0022F654:
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F660u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x0022F660u) [[unlikely]] return; }
L_0022F660:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 4496u);
    set32(c.r[2], c.r[2].w[0] - 4480u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 4464u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 4448u);
    set32(c.r[3], c.r[17].w[0] + 96u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[17].w[0] + 112u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 23904u);
    st32((c.r[17].w[0] + 64u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] - 23903u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 36;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022F6FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F6F8u);  if (depth < kMaxDepth) unit_003D(c, 80u, depth + 1u); else { c.pc = 0x001F53C0u; return; } if (c.pc != 0x0022F6F8u) [[unlikely]] return; }
L_0022F6F8:
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 1;
L_0022F6FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 23936u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 148u), 0u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 144u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], c.r[2].w[0] + 208u);
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F75Cu); st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 48u, depth + 1u); else { c.pc = 0x00144FA0u; return; } if (c.pc != 0x0022F75Cu) [[unlikely]] return; }
L_0022F75C:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 23472u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[7], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[4]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
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
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[4]);
    c.f[0] = c.r[2].w[0];
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[3]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[4]);
    st128((c.r[17].w[0] + 96u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 112u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[17].w[0] + 116u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[17].w[0] + 116u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 116u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 42;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0022F810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022F8A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 4496u);
    set32(c.r[2], c.r[2].w[0] - 4480u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 4464u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 4448u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F868u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0022F868u) [[unlikely]] return; }
L_0022F868:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F874u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0022F874u) [[unlikely]] return; }
L_0022F874:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F880u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0022F880u) [[unlikely]] return; }
L_0022F880:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F88Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x0022F88Cu) [[unlikely]] return; }
L_0022F88C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022F8A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F8A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0022F8A4u) [[unlikely]] return; }
L_0022F8A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022F8A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022F8C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022FB24; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4388u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] & 63ull;  if (t) { goto L_0022FB24; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F91Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x0022F91Cu) [[unlikely]] return; }
L_0022F91C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F93Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x0022F93Cu) [[unlikely]] return; }
L_0022F93C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F95Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x0022F95Cu) [[unlikely]] return; }
L_0022F95C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F97Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x0022F97Cu) [[unlikely]] return; }
L_0022F97C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 144u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 14u);  if (t) { goto L_0022F990; } }
    set32(c.r[4], 0u + 15u);
    c.budget -= 1;
L_0022F990:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[3], c.r[16].w[0] >> 1);  if (t) { goto L_0022F9A4; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022F9BC; } }
L_0022F9A4:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 6;
L_0022F9BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[2] = ld32((c.r[1].w[0] + 26576u));
    set32(c.r[16], c.r[4].w[0] << 2);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[17].w[0] + 96u);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 26568u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[17].w[0] + 100u), c.f[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    ld128((c.r[17].w[0] + 112u) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 4388ull;
    set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st128((c.r[2].w[0] + 64u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    ld128((c.r[3].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FA28u); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x0022FA28u) [[unlikely]] return; }
L_0022FA28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4388u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FA50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022FA50u) [[unlikely]] return; }
L_0022FA50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31608u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022FA88; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4388u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FA88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022FA88u) [[unlikely]] return; }
L_0022FA88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28816u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28820u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FAACu); c.f[14] = ld32((c.r[1].w[0] + 28824u));  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x0022FAACu) [[unlikely]] return; }
L_0022FAAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28768u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28772u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28776u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FAD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x0022FAD4u) [[unlikely]] return; }
L_0022FAD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28784u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28788u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28792u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FAFCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x0022FAFCu) [[unlikely]] return; }
L_0022FAFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28800u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28804u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28808u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FB24u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x0022FB24u) [[unlikely]] return; }
L_0022FB24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0022FB40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FB64u); st32((c.r[4].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0022FB64u) [[unlikely]] return; }
L_0022FB64:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 13u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022FEBC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FB80u); st32((c.r[18].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0022FB80u) [[unlikely]] return; }
L_0022FB80:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 23u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022FC94; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28320u);  if (t) { goto L_0022FBCC; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 1;
L_0022FBA4:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022FEBC; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022FBC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0022FEC0; } }
L_0022FBC8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0022FBCC:
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022FBA4u | kUnwind; return; } goto L_0022FBA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FBE0u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0022FBE0u) [[unlikely]] return; }
L_0022FBE0:
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0022FBFC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[3], 0u + 31u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0022FCC0; } }
L_0022FBFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC04u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0022FC04u) [[unlikely]] return; }
L_0022FC04:
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0022FC20; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[3], 0u + 34u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0022FCBC; } }
L_0022FC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC28u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0022FC28u) [[unlikely]] return; }
L_0022FC28:
    set32(c.r[3], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0022FC44; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[3], 0u + 31u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0022FCBC; } }
L_0022FC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC4Cu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0022FC4Cu) [[unlikely]] return; }
L_0022FC4C:
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0022FC68; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[3], 0u + 30u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0022FCBC; } }
L_0022FC68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC70u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0022FC70u) [[unlikely]] return; }
L_0022FC70:
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0022FEBC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[3], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0022FCBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022FEBC; } }
L_0022FC94:
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], 0u + 209u);
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022FCBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FCB0u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x0022FCB0u) [[unlikely]] return; }
L_0022FCB0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022FEBC; } }
L_0022FCBC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0022FCC0:
    st32((c.r[18].w[0] + 148u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(300ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0022FCD8; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0022FCD8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st16((c.r[18].w[0] + 144u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_0022FEBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0022FEB0; } }
L_0022FCEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31184u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], ld32((c.r[4].w[0])));  if (t) { goto L_0022FEAC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0022FEAC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022FEAC; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 370u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022FEAC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    c.f[2] = ld32((c.r[16].w[0] + 228u));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[4].w[0] + 228u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022FD5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);  if (t) { goto L_0022FD64; } }
L_0022FD5C:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 2;
L_0022FD64:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022FEAC; } }
    c.f[2] = ld32((c.r[16].w[0] + 224u));
    c.f[1] = ld32((c.r[4].w[0] + 224u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022FDA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);  if (t) { goto L_0022FDA8; } }
L_0022FDA0:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 2;
L_0022FDA8:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022FEAC; } }
    c.f[1] = ld32((c.r[4].w[0] + 232u));
    c.f[2] = ld32((c.r[16].w[0] + 232u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0022FDE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);  if (t) { goto L_0022FDEC; } }
L_0022FDE4:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 2;
L_0022FDEC:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022FEAC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE0Cu); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x0022FE0Cu) [[unlikely]] return; }
L_0022FE0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022FE20; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] | 8ull;  if (t) { goto L_0022FE24; } }
L_0022FE20:
    set32(c.r[4], ld32((c.r[16].w[0] + 468u)));
    c.budget -= 1;
L_0022FE24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE2Cu);  if (depth < kMaxDepth) unit_0038(c, 30u, depth + 1u); else { c.pc = 0x001E04E0u; return; } if (c.pc != 0x0022FE2Cu) [[unlikely]] return; }
L_0022FE2C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022FE40; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_0022FE40:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0022FEAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 99u, depth + 1u); else { c.pc = 0x001D0E10u; return; } if (c.pc != 0x0022FE50u) [[unlikely]] return; }
L_0022FE50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022FEAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x0022FE60u) [[unlikely]] return; }
L_0022FE60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 80u);  if (t) { goto L_0022FE78; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022FEAC; } }
    set32(c.r[4], 0u + 80u);
    c.budget -= 1;
L_0022FE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0022FE80u) [[unlikely]] return; }
L_0022FE80:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022FEBC; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[9], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FEA4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 186u, depth + 1u); else { c.pc = 0x0022EF60u; return; } if (c.pc != 0x0022FEA4u) [[unlikely]] return; }
L_0022FEA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022FEBC; } }
L_0022FEAC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0022FEB0:
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022FCECu | kUnwind; return; } goto L_0022FCEC; } }
L_0022FEBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0022FEC0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022FEE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022FF38; } }
    c.r[1].d[0] = c.r[3].sd[0] < 212ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0022FF3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF10u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0022FF10u) [[unlikely]] return; }
L_0022FF10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022FF24; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF24u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 236u, depth + 1u); else { c.pc = 0x0022F620u; return; } if (c.pc != 0x0022FF24u) [[unlikely]] return; }
L_0022FF24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022FF3C; } }
    set32(c.r[2], c.r[2].w[0] + 36u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0022FF40; } }
L_0022FF38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022FF3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0022FF40:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022FF50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF6Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x0022FF6Cu) [[unlikely]] return; }
L_0022FF6C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0022FF78u) [[unlikely]] return; }
L_0022FF78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 4544u);
    set32(c.r[2], c.r[2].w[0] - 4528u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 255u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FFACu); st32((c.r[17].w[0] + 24u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0022FFACu) [[unlikely]] return; }
L_0022FFAC:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 17u);
    set32(c.r[6], c.r[8].w[0] << 4);
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 400u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 400u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 400u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.budget -= 21;
    [[clang::musttail]] return unit_004C(c, 1u, depth);
}

}
