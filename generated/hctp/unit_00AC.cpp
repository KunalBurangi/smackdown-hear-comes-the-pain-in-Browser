#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AC[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0,
    0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0,
    47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0,
    0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0,
    103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0,
    0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0,
    0, 0, 0, 218, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    0, 240, 0, 0, 0, 0, 241, 0, 242, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00AC(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003B0000;
    case 2u: goto L_003B000C;
    case 3u: goto L_003B0030;
    case 4u: goto L_003B0064;
    case 5u: goto L_003B0080;
    case 6u: goto L_003B00A0;
    case 7u: goto L_003B00C0;
    case 8u: goto L_003B00D0;
    case 9u: goto L_003B00D8;
    case 10u: goto L_003B00F8;
    case 11u: goto L_003B0108;
    case 12u: goto L_003B0110;
    case 13u: goto L_003B0130;
    case 14u: goto L_003B0160;
    case 15u: goto L_003B0180;
    case 16u: goto L_003B01C8;
    case 17u: goto L_003B0224;
    case 18u: goto L_003B0230;
    case 19u: goto L_003B0240;
    case 20u: goto L_003B029C;
    case 21u: goto L_003B02C0;
    case 22u: goto L_003B02E0;
    case 23u: goto L_003B02F0;
    case 24u: goto L_003B0308;
    case 25u: goto L_003B0394;
    case 26u: goto L_003B03CC;
    case 27u: goto L_003B0438;
    case 28u: goto L_003B0460;
    case 29u: goto L_003B0484;
    case 30u: goto L_003B04A0;
    case 31u: goto L_003B04C4;
    case 32u: goto L_003B04E0;
    case 33u: goto L_003B04F0;
    case 34u: goto L_003B050C;
    case 35u: goto L_003B0530;
    case 36u: goto L_003B0540;
    case 37u: goto L_003B056C;
    case 38u: goto L_003B0588;
    case 39u: goto L_003B05F8;
    case 40u: goto L_003B0658;
    case 41u: goto L_003B0688;
    case 42u: goto L_003B06B8;
    case 43u: goto L_003B06E8;
    case 44u: goto L_003B0718;
    case 45u: goto L_003B0760;
    case 46u: goto L_003B0770;
    case 47u: goto L_003B0780;
    case 48u: goto L_003B0788;
    case 49u: goto L_003B0790;
    case 50u: goto L_003B0798;
    case 51u: goto L_003B07A0;
    case 52u: goto L_003B07A8;
    case 53u: goto L_003B0808;
    case 54u: goto L_003B0810;
    case 55u: goto L_003B0818;
    case 56u: goto L_003B0820;
    case 57u: goto L_003B0828;
    case 58u: goto L_003B0830;
    case 59u: goto L_003B0838;
    case 60u: goto L_003B0840;
    case 61u: goto L_003B0858;
    case 62u: goto L_003B0860;
    case 63u: goto L_003B0868;
    case 64u: goto L_003B0870;
    case 65u: goto L_003B0878;
    case 66u: goto L_003B0888;
    case 67u: goto L_003B0890;
    case 68u: goto L_003B08B0;
    case 69u: goto L_003B08D0;
    case 70u: goto L_003B08F0;
    case 71u: goto L_003B0910;
    case 72u: goto L_003B0930;
    case 73u: goto L_003B0948;
    case 74u: goto L_003B0978;
    case 75u: goto L_003B098C;
    case 76u: goto L_003B09C0;
    case 77u: goto L_003B0A14;
    case 78u: goto L_003B0A2C;
    case 79u: goto L_003B0AC0;
    case 80u: goto L_003B0AC8;
    case 81u: goto L_003B0B50;
    case 82u: goto L_003B0B68;
    case 83u: goto L_003B0B80;
    case 84u: goto L_003B0B98;
    case 85u: goto L_003B0BC0;
    case 86u: goto L_003B0BD8;
    case 87u: goto L_003B0BE0;
    case 88u: goto L_003B0BE8;
    case 89u: goto L_003B0BF0;
    case 90u: goto L_003B0C24;
    case 91u: goto L_003B0C38;
    case 92u: goto L_003B0C7C;
    case 93u: goto L_003B0C90;
    case 94u: goto L_003B0D78;
    case 95u: goto L_003B0D80;
    case 96u: goto L_003B0DA8;
    case 97u: goto L_003B0DE0;
    case 98u: goto L_003B0E18;
    case 99u: goto L_003B0E38;
    case 100u: goto L_003B0EB0;
    case 101u: goto L_003B0FB8;
    case 102u: goto L_003B0FE4;
    case 103u: goto L_003B1000;
    case 104u: goto L_003B1008;
    case 105u: goto L_003B1030;
    case 106u: goto L_003B1038;
    case 107u: goto L_003B1050;
    case 108u: goto L_003B1058;
    case 109u: goto L_003B106C;
    case 110u: goto L_003B1088;
    case 111u: goto L_003B1138;
    case 112u: goto L_003B1160;
    case 113u: goto L_003B1174;
    case 114u: goto L_003B1198;
    case 115u: goto L_003B12B8;
    case 116u: goto L_003B1320;
    case 117u: goto L_003B13B0;
    case 118u: goto L_003B13E4;
    case 119u: goto L_003B1404;
    case 120u: goto L_003B1460;
    case 121u: goto L_003B14A0;
    case 122u: goto L_003B1504;
    case 123u: goto L_003B1528;
    case 124u: goto L_003B1540;
    case 125u: goto L_003B1550;
    case 126u: goto L_003B15A8;
    case 127u: goto L_003B15C0;
    case 128u: goto L_003B1600;
    case 129u: goto L_003B1618;
    case 130u: goto L_003B1780;
    case 131u: goto L_003B17EC;
    case 132u: goto L_003B1880;
    case 133u: goto L_003B18B4;
    case 134u: goto L_003B18D4;
    case 135u: goto L_003B1930;
    case 136u: goto L_003B1970;
    case 137u: goto L_003B19D4;
    case 138u: goto L_003B19F8;
    case 139u: goto L_003B1A2C;
    case 140u: goto L_003B1A4C;
    case 141u: goto L_003B1AB0;
    case 142u: goto L_003B1B08;
    case 143u: goto L_003B1B6C;
    case 144u: goto L_003B1B90;
    case 145u: goto L_003B1BC4;
    case 146u: goto L_003B1BE4;
    case 147u: goto L_003B1C40;
    case 148u: goto L_003B1CA0;
    case 149u: goto L_003B1D0C;
    case 150u: goto L_003B1D30;
    case 151u: goto L_003B1D50;
    case 152u: goto L_003B1D6C;
    case 153u: goto L_003B1D98;
    case 154u: goto L_003B1DF0;
    case 155u: goto L_003B1E00;
    case 156u: goto L_003B1E18;
    case 157u: goto L_003B1E30;
    case 158u: goto L_003B1E90;
    case 159u: goto L_003B1EC8;
    case 160u: goto L_003B1EE4;
    case 161u: goto L_003B1F20;
    case 162u: goto L_003B1F90;
    case 163u: goto L_003B1FC0;
    case 164u: goto L_003B1FF8;
    case 165u: goto L_003B2010;
    case 166u: goto L_003B208C;
    case 167u: goto L_003B20B8;
    case 168u: goto L_003B21B8;
    case 169u: goto L_003B2238;
    case 170u: goto L_003B22B0;
    case 171u: goto L_003B22E4;
    case 172u: goto L_003B23E8;
    case 173u: goto L_003B2440;
    case 174u: goto L_003B2648;
    case 175u: goto L_003B2690;
    case 176u: goto L_003B2840;
    case 177u: goto L_003B28A0;
    case 178u: goto L_003B28F8;
    case 179u: goto L_003B2908;
    case 180u: goto L_003B2978;
    case 181u: goto L_003B29C0;
    case 182u: goto L_003B2A78;
    case 183u: goto L_003B2B30;
    case 184u: goto L_003B2BB8;
    case 185u: goto L_003B2D10;
    case 186u: goto L_003B2DC8;
    case 187u: goto L_003B2E60;
    case 188u: goto L_003B2FB0;
    case 189u: goto L_003B2FF8;
    case 190u: goto L_003B3068;
    case 191u: goto L_003B30C8;
    case 192u: goto L_003B31D8;
    case 193u: goto L_003B3268;
    case 194u: goto L_003B3338;
    case 195u: goto L_003B35A0;
    case 196u: goto L_003B3628;
    case 197u: goto L_003B36F8;
    case 198u: goto L_003B38E8;
    case 199u: goto L_003B3958;
    case 200u: goto L_003B3974;
    case 201u: goto L_003B3990;
    case 202u: goto L_003B39AC;
    case 203u: goto L_003B39C8;
    case 204u: goto L_003B39F0;
    case 205u: goto L_003B3A14;
    case 206u: goto L_003B3A30;
    case 207u: goto L_003B3A48;
    case 208u: goto L_003B3A74;
    case 209u: goto L_003B3A84;
    case 210u: goto L_003B3AA0;
    case 211u: goto L_003B3AB8;
    case 212u: goto L_003B3B10;
    case 213u: goto L_003B3B5C;
    case 214u: goto L_003B3B80;
    case 215u: goto L_003B3BC0;
    case 216u: goto L_003B3BEC;
    case 217u: goto L_003B3BF4;
    case 218u: goto L_003B3C0C;
    case 219u: goto L_003B3C14;
    case 220u: goto L_003B3C20;
    case 221u: goto L_003B3C48;
    case 222u: goto L_003B3C68;
    case 223u: goto L_003B3CA8;
    case 224u: goto L_003B3CBC;
    case 225u: goto L_003B3CD0;
    case 226u: goto L_003B3CE4;
    case 227u: goto L_003B3D30;
    case 228u: goto L_003B3D58;
    case 229u: goto L_003B3D98;
    case 230u: goto L_003B3DAC;
    case 231u: goto L_003B3DC0;
    case 232u: goto L_003B3DF0;
    case 233u: goto L_003B3E18;
    case 234u: goto L_003B3EC8;
    case 235u: goto L_003B3ED0;
    case 236u: goto L_003B3EF8;
    case 237u: goto L_003B3F30;
    case 238u: goto L_003B3F40;
    case 239u: goto L_003B3F60;
    case 240u: goto L_003B3F84;
    case 241u: goto L_003B3F98;
    case 242u: goto L_003B3FA0;
    case 243u: goto L_003B3FA8;
    case 244u: goto L_003B3FB0;
    case 245u: goto L_003B3FE0;
    default: bad_entry(c, 0x003B0000u); return;
    }
L_003B0000:
    c.r[2].d[0] = 0ull + 0ull;
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 3;
L_003B000C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B0030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8764u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003B0064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0064u);  if (depth < kMaxDepth) unit_00AB(c, 394u, depth + 1u); else { c.pc = 0x003AFE38u; return; } if (c.pc != 0x003B0064u) [[unlikely]] return; }
L_003B0064:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 6760u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0080u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AFE78u; return; } if (c.pc != 0x003B0080u) [[unlikely]] return; }
L_003B0080:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B00A0:
    c.r[7].d[0] = ld16((c.r[5].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003B00C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B00D0u);  if (depth < kMaxDepth) unit_00B0(c, 151u, depth + 1u); else { c.pc = 0x003C0FA0u; return; } if (c.pc != 0x003B00D0u) [[unlikely]] return; }
L_003B00D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B00D8u);  if (depth < kMaxDepth) unit_00AB(c, 394u, depth + 1u); else { c.pc = 0x003AFE38u; return; } if (c.pc != 0x003B00D8u) [[unlikely]] return; }
L_003B00D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8792u);
    set32(c.r[6], 0u + 3648u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003B00F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0108u);  if (depth < kMaxDepth) unit_00B0(c, 152u, depth + 1u); else { c.pc = 0x003C0FC8u; return; } if (c.pc != 0x003B0108u) [[unlikely]] return; }
L_003B0108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0110u);  if (depth < kMaxDepth) unit_00AB(c, 395u, depth + 1u); else { c.pc = 0x003AFE58u; return; } if (c.pc != 0x003B0110u) [[unlikely]] return; }
L_003B0110:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8792u);
    set32(c.r[6], 0u + 3648u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003B0130:
    set32(c.r[8], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    st32((c.r[5].w[0]), c.r[8].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_003B0160:
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 136u), c.r[3].w[0]);  c.pc = t; return; }
L_003B0180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[8].w[0] + 8792u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003B01EC; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_003B01C8:
    c.r[2].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 228u);  if (t) { goto L_003B01EC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B01C8u | kUnwind; return; } goto L_003B01C8; }
L_003B01EC:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B02A0; } }
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[8].w[0] + 8792u);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[6], 0u + 228u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0224u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003B0224u) [[unlikely]] return; }
L_003B0224:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0230u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00B0(c, 153u, depth + 1u); else { c.pc = 0x003C0FF0u; return; } if (c.pc != 0x003B0230u) [[unlikely]] return; }
L_003B0230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003B0248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0240u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 21u, depth + 1u); else { c.pc = 0x003B02C0u; return; } if (c.pc != 0x003B0240u) [[unlikely]] return; }
L_003B0240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B02A0; } }
L_003B0248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[7], 0u - 128u);
    set32(c.r[2], c.r[2].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] + 352u);
    st32((c.r[16].w[0] + 56u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[19].w[0]);
    set32(c.r[4], c.r[16].w[0] + 204u);
    st32((c.r[16].w[0] + 64u), c.r[17].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 68u), c.r[18].w[0]);
    set32(c.r[6], 0u + 16u);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 224u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[16].w[0] + 124u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 132u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 200u), 0u);
    st16((c.r[16].w[0] + 220u), static_cast<std::uint16_t>(0u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B029Cu); st16((c.r[16].w[0] + 222u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003B029Cu) [[unlikely]] return; }
L_003B029C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003B02A0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B02C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B02F4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B02E0u); st32((c.r[16].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_00B0(c, 163u, depth + 1u); else { c.pc = 0x003C1168u; return; } if (c.pc != 0x003B02E0u) [[unlikely]] return; }
L_003B02E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B02F0u); set32(c.r[6], 0u + 228u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003B02F0u) [[unlikely]] return; }
L_003B02F0:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_003B02F4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B0308:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 12u);
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    set32(c.r[20], c.r[16].w[0] + 24u);
    st64((c.r[29].w[0] + 120u), c.r[21].d[0]);
    set32(c.r[21], c.r[16].w[0] + 13u);
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    set32(c.r[22], c.r[16].w[0] + 14u);
    st64((c.r[29].w[0] + 136u), c.r[23].d[0]);
    set32(c.r[23], c.r[16].w[0] + 16u);
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    set32(c.r[30], c.r[16].w[0] + 15u);
    st64((c.r[29].w[0] + 152u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[16].w[0] + 20u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0]), c.r[20].w[0]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0394u); st32((c.r[29].w[0] + 8u), c.r[23].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 167u, depth + 1u); else { c.pc = 0x003B20B8u; return; } if (c.pc != 0x003B0394u) [[unlikely]] return; }
L_003B0394:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B05C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B0490; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_003B03D8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 6768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B03CCu); set32(c.r[5], c.r[5].w[0] + 6800u);  if (depth < kMaxDepth) unit_00AC(c, 207u, depth + 1u); else { c.pc = 0x003B3A48u; return; } if (c.pc != 0x003B03CCu) [[unlikely]] return; }
L_003B03CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B05C4; } }
    c.budget -= 1;
L_003B03D8:
    set32(c.r[9], 0u + 96u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[8], 0u + 10u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    set32(c.r[6], c.r[29].w[0] + 66u);
    set32(c.r[7], c.r[29].w[0] + 67u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    st8((c.r[30].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[23].w[0]), c.r[9].w[0]);
    st16((c.r[16].w[0] + 152u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0438u); st32((c.r[16].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_00AC(c, 169u, depth + 1u); else { c.pc = 0x003B2238u; return; } if (c.pc != 0x003B0438u) [[unlikely]] return; }
L_003B0438:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B0514; } }
    set32(c.r[7], ld32((c.r[20].w[0])));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 66u));
    set32(c.r[8], c.r[29].w[0] + 50u);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 67u));
    set32(c.r[9], c.r[29].w[0] + 52u);
    set32(c.r[10], c.r[29].w[0] + 54u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0460u); st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_00AC(c, 76u, depth + 1u); else { c.pc = 0x003B09C0u; return; } if (c.pc != 0x003B0460u) [[unlikely]] return; }
L_003B0460:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B05C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 8776u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));  goto L_003B0590; }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0484u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B0484u) [[unlikely]] return; }
L_003B0484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));  if (t) { goto L_003B0590; } }
    c.budget -= 1;
L_003B0490:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 66u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B04A0u); set32(c.r[7], c.r[29].w[0] + 67u);  if (depth < kMaxDepth) unit_00AC(c, 169u, depth + 1u); else { c.pc = 0x003B2238u; return; } if (c.pc != 0x003B04A0u) [[unlikely]] return; }
L_003B04A0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B0514; } }
    set32(c.r[7], ld32((c.r[20].w[0])));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 66u));
    set32(c.r[8], c.r[29].w[0] + 68u);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 67u));
    set32(c.r[9], c.r[29].w[0] + 70u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B04C4u); set32(c.r[10], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_00AC(c, 76u, depth + 1u); else { c.pc = 0x003B09C0u; return; } if (c.pc != 0x003B04C4u) [[unlikely]] return; }
L_003B04C4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[19], c.r[16].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B03CCu | kUnwind; return; } goto L_003B03CC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 68u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 70u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B04E0u); c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_00B0(c, 161u, depth + 1u); else { c.pc = 0x003C1138u; return; } if (c.pc != 0x003B04E0u) [[unlikely]] return; }
L_003B04E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B04F0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 168u, depth + 1u); else { c.pc = 0x003B21B8u; return; } if (c.pc != 0x003B04F0u) [[unlikely]] return; }
L_003B04F0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[20], c.r[29].w[0] + 32u);  if (t) { goto L_003B0514; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B050Cu); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 170u, depth + 1u); else { c.pc = 0x003B22B0u; return; } if (c.pc != 0x003B050Cu) [[unlikely]] return; }
L_003B050C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  goto L_003B0520; }
L_003B0514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B05C4; } }
    c.budget -= 1;
L_003B0520:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0530u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B0(c, 158u, depth + 1u); else { c.pc = 0x003C10C0u; return; } if (c.pc != 0x003B0530u) [[unlikely]] return; }
L_003B0530:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0540u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 159u, depth + 1u); else { c.pc = 0x003C10E8u; return; } if (c.pc != 0x003B0540u) [[unlikely]] return; }
L_003B0540:
    set32(c.r[2], c.r[16].w[0] + 52u);
    set32(c.r[6], c.r[16].w[0] + 32u);
    set32(c.r[7], c.r[16].w[0] + 36u);
    set32(c.r[8], c.r[16].w[0] + 38u);
    set32(c.r[9], c.r[16].w[0] + 40u);
    set32(c.r[10], c.r[16].w[0] + 44u);
    set32(c.r[11], c.r[16].w[0] + 48u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B056Cu); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 172u, depth + 1u); else { c.pc = 0x003B23E8u; return; } if (c.pc != 0x003B056Cu) [[unlikely]] return; }
L_003B056C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 200u);
    set32(c.r[7], c.r[16].w[0] + 204u);
    set32(c.r[8], c.r[16].w[0] + 220u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0588u); set32(c.r[9], c.r[16].w[0] + 222u);  if (depth < kMaxDepth) unit_00AC(c, 174u, depth + 1u); else { c.pc = 0x003B2648u; return; } if (c.pc != 0x003B0588u) [[unlikely]] return; }
L_003B0588:
    st16((c.r[16].w[0] + 152u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.budget -= 2;
L_003B0590:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 140u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 64u)));
    c.budget -= 13;
L_003B05C4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 136u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 152u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003B05F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 32768ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[7], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B0650; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0308u | kUnwind; return; } goto L_003B0308; }
L_003B0650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0658u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 123u, depth + 1u); else { c.pc = 0x003B1528u; return; } if (c.pc != 0x003B0658u) [[unlikely]] return; }
L_003B0658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B0680; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B12B8; }
L_003B0680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0688u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 150u, depth + 1u); else { c.pc = 0x003B1D30u; return; } if (c.pc != 0x003B0688u) [[unlikely]] return; }
L_003B0688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B06B0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B1780; }
L_003B06B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B06B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 343u, depth + 1u); else { c.pc = 0x003AED90u; return; } if (c.pc != 0x003B06B8u) [[unlikely]] return; }
L_003B06B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B06E0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEF08u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 348u, depth); }
L_003B06E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B06E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 364u, depth + 1u); else { c.pc = 0x003AF678u; return; } if (c.pc != 0x003B06E8u) [[unlikely]] return; }
L_003B06E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B0710; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF7E0u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 369u, depth); }
L_003B0710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0718u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 332u, depth + 1u); else { c.pc = 0x003AE8C0u; return; } if (c.pc != 0x003B0718u) [[unlikely]] return; }
L_003B0718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B0740; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE810u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 331u, depth); }
L_003B0740:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u - 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B0760:
    st32((c.r[4].w[0] + 124u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 120u), c.r[5].w[0]);  c.pc = t; return; }
L_003B0770:
    st32((c.r[4].w[0] + 132u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 128u), c.r[5].w[0]);  c.pc = t; return; }
L_003B0780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 60u)));  c.pc = t; return; }
L_003B0788:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 152u)));  c.pc = t; return; }
L_003B0790:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  c.pc = t; return; }
L_003B0798:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 14u)));  c.pc = t; return; }
L_003B07A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));  c.pc = t; return; }
L_003B07A8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_003B0800; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B07E0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 154u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[3].d[0] ^ 1ull;  if (t) { goto L_003B0800; } }
    set32(c.r[3], 0u + 16u);
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  c.pc = t; return; }
L_003B07E0:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 16u);  goto L_003B0800; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 154u)));
    set32(c.r[4], 0u + 16u);
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];  c.pc = t; return; }
L_003B0800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B0808:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  c.pc = t; return; }
L_003B0810:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 15u)));  c.pc = t; return; }
L_003B0818:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  c.pc = t; return; }
L_003B0820:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 28u)));  c.pc = t; return; }
L_003B0828:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  c.pc = t; return; }
L_003B0830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 36u)));  c.pc = t; return; }
L_003B0838:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 40u)));  c.pc = t; return; }
L_003B0840:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B084C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 1;
L_003B084C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B0858:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  c.pc = t; return; }
L_003B0860:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 52u)));  c.pc = t; return; }
L_003B0868:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 200u)));  c.pc = t; return; }
L_003B0870:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 220u)));  c.pc = t; return; }
L_003B0878:
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 222u)));  c.pc = t; return; }
L_003B0888:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 204u);  c.pc = t; return; }
L_003B0890:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[5], c.r[16].w[0] + 168u);
    set32(c.r[6], c.r[16].w[0] + 172u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B08B0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B0(c, 160u, depth + 1u); else { c.pc = 0x003C1110u; return; } if (c.pc != 0x003B08B0u) [[unlikely]] return; }
L_003B08B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], c.r[16].w[0] + 166u);
    set32(c.r[5], c.r[16].w[0] + 162u);
    set32(c.r[6], c.r[16].w[0] + 164u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B0(c, 162u, depth); }
L_003B08D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[5], c.r[16].w[0] + 168u);
    set32(c.r[6], c.r[16].w[0] + 172u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B08F0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B0(c, 159u, depth + 1u); else { c.pc = 0x003C10E8u; return; } if (c.pc != 0x003B08F0u) [[unlikely]] return; }
L_003B08F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 162u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B0(c, 161u, depth); }
L_003B0910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0930u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003B0930u) [[unlikely]] return; }
L_003B0930:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0948u); set32(c.r[8], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AFE78u; return; } if (c.pc != 0x003B0948u) [[unlikely]] return; }
L_003B0948:
    c.r[3].d[0] = ld16((c.r[29].w[0]));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 2u));
    c.r[2].d[0] = ld16((c.r[29].w[0] + 4u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    st16((c.r[17].w[0] + 156u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 160u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 158u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B0978:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B098Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003B098Cu) [[unlikely]] return; }
L_003B098C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 8780u);
    set32(c.r[7], c.r[7].w[0] + 8782u);
    set32(c.r[8], c.r[8].w[0] + 8784u);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFE78u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 396u, depth); }
L_003B09C0:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != 0ull; c.r[6].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_003B0A98; } }
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  goto L_003B0A38; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 6840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0A14u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003B0A14u) [[unlikely]] return; }
L_003B0A14:
    set32(c.r[5], 0u + 8u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0A2Cu); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AFE78u; return; } if (c.pc != 0x003B0A2Cu) [[unlikely]] return; }
L_003B0A2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003B0AA8; } }
    c.budget -= 1;
L_003B0A38:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  goto L_003B0A9C; }
    set32(c.r[2], ld32((c.r[11].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[11].w[0] + 156u));  goto L_003B0A80; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[11].w[0] + 156u));  goto L_003B0A80; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 8780u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st16((c.r[11].w[0] + 156u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8782u));
    st16((c.r[11].w[0] + 158u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 8784u));
    st16((c.r[11].w[0] + 160u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[11].w[0] + 156u));
    c.budget -= 10;
L_003B0A80:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[11].w[0] + 158u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[11].w[0] + 160u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003B0AA4; } }
L_003B0A98:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_003B0A9C:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_003B0AA4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003B0AA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B0AC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  c.pc = t; return; }
L_003B0AC8:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 152u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003B0B08; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 15u)));
    st32((c.r[7].w[0] + 72u), c.r[8].w[0]);
    mmi::div(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003B0AE8u);  goto L_003B0AEC; }
L_003B0AEC:
    st32((c.r[7].w[0] + 116u), 0u);
    st32((c.r[7].w[0] + 148u), 0u);
    st32((c.r[7].w[0] + 144u), 0u);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0] + 76u), c.r[3].w[0]);  c.pc = t; return; }
L_003B0B08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 13u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 14u)));
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], c.r[2].w[0] + 7u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    st32((c.r[7].w[0] + 72u), c.r[8].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 1, c.r[6].w[0], c.r[2].w[0]);
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003B0B30u);  goto L_003B0B34; }
L_003B0B34:
    st32((c.r[7].w[0] + 148u), 0u);
    st32((c.r[7].w[0] + 116u), 0u);
    st32((c.r[7].w[0] + 144u), 0u);
    c.r[3].d[0] = c.lo.d[1];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0] + 76u), c.r[3].w[0]);  c.pc = t; return; }
L_003B0B50:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B0B60; } }
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_003B0B60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B0B68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0B80u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B0(c, 169u, depth + 1u); else { c.pc = 0x003C1230u; return; } if (c.pc != 0x003B0B80u) [[unlikely]] return; }
L_003B0B80:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B0B98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B0BCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0BC0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B0(c, 170u, depth + 1u); else { c.pc = 0x003C1258u; return; } if (c.pc != 0x003B0BC0u) [[unlikely]] return; }
L_003B0BC0:
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003B0BCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B0BD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 148u)));  c.pc = t; return; }
L_003B0BE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 144u)));  c.pc = t; return; }
L_003B0BE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_003B0BF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[4].w[0] + 72u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0C24u); set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);  if (depth < kMaxDepth) unit_00B0(c, 166u, depth + 1u); else { c.pc = 0x003C11B0u; return; } if (c.pc != 0x003B0C24u) [[unlikely]] return; }
L_003B0C24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B0(c, 168u, depth); }
L_003B0C38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[4].w[0] + 72u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[8], c.r[8].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0C7Cu); set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);  if (depth < kMaxDepth) unit_00B0(c, 167u, depth + 1u); else { c.pc = 0x003C11E0u; return; } if (c.pc != 0x003B0C7Cu) [[unlikely]] return; }
L_003B0C7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B0(c, 168u, depth); }
L_003B0C90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[4].w[0] + 72u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[14], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[14].d[0] == 0ull) { breakpoint(c, 0x003B0CA8u);  goto L_003B0CAC; }
L_003B0CAC:
    set32(c.r[15], ld32((c.r[5].w[0] + 24u)));
    mmi::div(c, 0, c.r[6].w[0], c.r[14].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[9], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[2], c.r[15].w[0] - c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[12], ld32((c.r[5].w[0] + 36u)));
    c.r[7].d[0] = c.r[7].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[9].w[0]);
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[9].w[0]);
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    c.r[13].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[11].w[0], c.r[9].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[9].w[0] - c.r[5].w[0]);
    c.r[2].d[0] = c.r[13].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 26;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);  if (t) { goto L_003B0D20; } }
    set32(c.r[2], c.r[8].w[0] - c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[15].sd[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_003B0D20:
    mmi::mult(c, 0, c.r[7].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    if (c.r[9].d[0] == 0ull) { breakpoint(c, 0x003B0D2Cu);  goto L_003B0D30; }
L_003B0D30:
    set32(c.r[12], c.r[2].w[0] + c.r[12].w[0]);
    mmi::div(c, 0, c.r[12].w[0], c.r[9].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[5].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[10].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[13].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[10].d[0] = c.r[13].d[0];
    c.r[2].d[0] = c.r[11].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[14].d[0] != c.r[6].d[0]; if (c.r[2].d[0] != 0) c.r[10].d[0] = c.r[11].d[0];  if (t) { goto L_003B0D68; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0C38u | kUnwind; return; } goto L_003B0C38; }
L_003B0D68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0BF0u | kUnwind; return; } goto L_003B0BF0; }
L_003B0D78:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_003B0D9C; } }
L_003B0D80:
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0D80u | kUnwind; return; } goto L_003B0D80; } }
L_003B0D9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B0DA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] << 1);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0DE0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B0D78u; return; } if (c.pc != 0x003B0DE0u) [[unlikely]] return; }
L_003B0DE0:
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] + c.r[18].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[16], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[17].w[0] + c.r[16].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0D78u | kUnwind; return; } goto L_003B0D78; }
L_003B0E18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[5].w[0] << 1);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0D78u | kUnwind; return; } goto L_003B0D78; }
L_003B0E38:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    set32(c.r[22], c.r[20].w[0] + 72u);
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[22].w[0] + 16u)));
    set32(c.r[18], ld32((c.r[22].w[0] + 40u)));
    c.budget -= 17;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x003B0E78u);  goto L_003B0E7C; }
L_003B0E7C:
    set32(c.r[18], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[23], ld32((c.r[20].w[0] + 64u)));
    mmi::div(c, 0, c.r[18].w[0], c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[30], ld32((c.r[22].w[0] + 20u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[22].w[0] + 12u)));
    c.r[16].d[0] = c.hi.d[0];
    c.r[18].d[0] = c.lo.d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0EB0u); set32(c.r[21], ld32((c.r[22].w[0] + 32u)));  if (depth < kMaxDepth) unit_00B0(c, 171u, depth + 1u); else { c.pc = 0x003C1270u; return; } if (c.pc != 0x003B0EB0u) [[unlikely]] return; }
L_003B0EB0:
    set32(c.r[3], ld32((c.r[22].w[0] + 8u)));
    set32(c.r[16], c.r[17].w[0] - c.r[16].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] - 1u);
    mmi::mult(c, 1, c.r[2].w[0], c.r[19].w[0]);
    c.r[19].d[0] = c.lo.d[1];
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003B0ECCu);  goto L_003B0ED0; }
L_003B0ED0:
    set32(c.r[4], 0u + 2u);
    mmi::div(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[20].w[0] + 148u), c.r[19].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[17].w[0] - c.r[16].w[0]);
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[17].d[0];
    set32(c.r[21], c.r[21].w[0] + c.r[16].w[0]);
    st32((c.r[20].w[0] + 144u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] - c.r[23].w[0]);  if (t) { goto L_003B0F88; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_003B0F48; } }
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 15;
    { set32(c.r[29], c.r[29].w[0] + 96u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0DA8u | kUnwind; return; } goto L_003B0DA8; }
L_003B0F48:
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 15;
    { set32(c.r[29], c.r[29].w[0] + 96u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0E18u | kUnwind; return; } goto L_003B0E18; }
L_003B0F88:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003B0FB8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 9;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_003B1020; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B0FE4u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B0(c, 165u, depth + 1u); else { c.pc = 0x003C11A8u; return; } if (c.pc != 0x003B0FE4u) [[unlikely]] return; }
L_003B0FE4:
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[16].w[0] + 112u);  if (t) { goto L_003B1018; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1000u); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B1000u) [[unlikely]] return; }
L_003B1000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1008u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 93u, depth + 1u); else { c.pc = 0x003B0C90u; return; } if (c.pc != 0x003B1008u) [[unlikely]] return; }
L_003B1008:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003B1020; } }
L_003B1018:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_003B1020:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B1074; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1030u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B0(c, 173u, depth + 1u); else { c.pc = 0x003C1288u; return; } if (c.pc != 0x003B1030u) [[unlikely]] return; }
L_003B1030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1038u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B0(c, 165u, depth + 1u); else { c.pc = 0x003C11A8u; return; } if (c.pc != 0x003B1038u) [[unlikely]] return; }
L_003B1038:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B1070; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1050u);  if (depth < kMaxDepth) unit_00AC(c, 99u, depth + 1u); else { c.pc = 0x003B0E38u; return; } if (c.pc != 0x003B1050u) [[unlikely]] return; }
L_003B1050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1058u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B0(c, 170u, depth + 1u); else { c.pc = 0x003C1258u; return; } if (c.pc != 0x003B1058u) [[unlikely]] return; }
L_003B1058:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B106Cu); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B106Cu) [[unlikely]] return; }
L_003B106C:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_003B1070:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B1074:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B1088:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 152u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_003B10A8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B0FB8u | kUnwind; return; } goto L_003B0FB8; }
L_003B10A8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_003B10C0; }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE9A8u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 337u, depth); }
L_003B10C0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_003B10D8; }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B13B0; }
L_003B10D8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_003B10F0; }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF338u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 362u, depth); }
L_003B10F0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_003B1108; }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFDA0u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 389u, depth); }
L_003B1108:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 15u);  goto L_003B1120; }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B1D98; }
L_003B1120:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B1130; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE7E0u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 329u, depth); }
L_003B1130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B1138:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 8792u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_003B1160:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003B1178; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1174u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 110u, depth + 1u); else { c.pc = 0x003B1088u; return; } if (c.pc != 0x003B1174u) [[unlikely]] return; }
L_003B1174:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003B1178:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 228u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1160u | kUnwind; return; } goto L_003B1160; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B1198:
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[15], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[12].w[0] + 7u));
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[13], ld32((c.r[29].w[0] + 8u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[14], ld32((c.r[29].w[0])));
    c.r[2].d[0] = ld8((c.r[12].w[0] + 9u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[12].w[0] + 42u));
    st32((c.r[11].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[12].w[0] + 8u));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == c.r[15].d[0]; c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003B1238; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;  goto L_003B11F8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 16u);  goto L_003B1208; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003B1280; } }
    c.budget -= 1;
L_003B11F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 2u);  goto L_003B1280; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_003B1258; } }
L_003B1208:
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[2], c.r[2].w[0] << 1);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[13].w[0]), c.r[15].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[12].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_003B1278; } }
    c.budget -= 1;
L_003B1238:
    set32(c.r[2], 0u + 8u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[13].w[0]), c.r[4].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[12].w[0] + 12u)));  if (t) { goto L_003B1278; } }
L_003B1258:
    set32(c.r[4], 0u + 2u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[13].w[0]), c.r[4].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[12].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 8;
L_003B1278:
    st32((c.r[14].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 2;
L_003B1280:
    set32(c.r[4], 0u + 1u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 16u);
    st32((c.r[13].w[0]), c.r[4].w[0]);
    set32(c.r[6], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[12].w[0] + 12u)));
    set32(c.r[4], c.r[3].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[14].w[0]), c.r[3].w[0]);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_003B12B8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 14u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 16u);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 15u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[16].w[0] + 24u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[16].w[0] + 154u);
    set32(c.r[7], c.r[16].w[0] + 12u);
    set32(c.r[8], c.r[16].w[0] + 13u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[11], c.r[16].w[0] + 20u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1320u); st32((c.r[29].w[0] + 8u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 114u, depth + 1u); else { c.pc = 0x003B1198u; return; } if (c.pc != 0x003B1320u) [[unlikely]] return; }
L_003B1320:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[16].w[0] + 52u), 0u);  goto L_003B1330; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B1390; } }
L_003B1330:
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    set32(c.r[7], ld32((c.r[16].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    st32((c.r[16].w[0] + 84u), c.r[4].w[0]);
    st16((c.r[16].w[0] + 152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[16].w[0] + 92u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 24;
L_003B1390:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003B13B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_003B14E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B13E4u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B0(c, 165u, depth + 1u); else { c.pc = 0x003C11A8u; return; } if (c.pc != 0x003B13E4u) [[unlikely]] return; }
L_003B13E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_003B14E4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1404u); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B1404u) [[unlikely]] return; }
L_003B1404:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[9], c.r[4].w[0] - c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[11], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[5].d[0];
    set32(c.r[10], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003B1498; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[9].sd[0] <= 0; set32(c.r[11], c.r[11].w[0] + c.r[2].w[0]);  if (t) { goto L_003B14C4; } }
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003B1460:
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[4], c.r[3].w[0] + c.r[10].w[0]);
    c.r[6].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld16((c.r[7].w[0] + 2u));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1460u | kUnwind; return; } goto L_003B1460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003B14C4; } }
    c.budget -= 1;
L_003B1498:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003B14C4; } }
L_003B14A0:
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    c.r[5].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B14A0u | kUnwind; return; } goto L_003B14A0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_003B14C4:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 8;
L_003B14E4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B1510; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1504u); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B1504u) [[unlikely]] return; }
L_003B1504:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003B1510:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B1528:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1540u); set32(c.r[5], c.r[5].w[0] + 6848u);  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x003B1540u) [[unlikely]] return; }
L_003B1540:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B1550:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[7].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[11].w[0]);
    c.budget -= 22;
L_003B15A8:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 12440u)));  if (t) { goto L_003B15C8; } }
    set32(c.r[4], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B15C0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x003B15C0u) [[unlikely]] return; }
L_003B15C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B15A8u | kUnwind; return; } goto L_003B15A8; }
L_003B15C8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[18].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B1750; } }
    c.r[3].d[0] = c.r[16].d[0] & 3ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003B1754; }
    set32(c.r[4], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[17], c.r[4].w[0] + 8u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003B1754; }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
L_003B1600:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[21].w[0] + 12444u)));  if (t) { goto L_003B1620; } }
    set32(c.r[4], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1618u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x003B1618u) [[unlikely]] return; }
L_003B1618:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1600u | kUnwind; return; } goto L_003B1600; }
L_003B1620:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[18].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B1750; } }
    set32(c.r[2], c.r[16].w[0] + 8u);
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], 0u - 1u);
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[8], 0u + 16u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 14u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 12u));
    set32(c.r[2], c.r[3].w[0] << 24);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    mmi::div(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.budget -= 23;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003B1680u);  goto L_003B1684; }
L_003B1684:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[4].w[0]), c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[8].d[0]; c.r[3].d[0] = ld8((c.r[20].w[0]));  if (t) { goto L_003B16B0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_003B1718; } }
L_003B16B0:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_003B16C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_003B1718; } }
L_003B16C8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_003B171C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    set32(c.r[3], c.r[6].w[0] >> 31);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003B16FCu);  goto L_003B1700; }
L_003B1700:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
L_003B1718:
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    c.budget -= 1;
L_003B171C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B1750; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003B1754; } }
    c.r[3].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));  if (t) { goto L_003B1758; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 3;
L_003B1750:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003B1754:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 1;
L_003B1758:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003B1780:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[20], 0u + 1u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 14u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 16u);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 15u);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[2], c.r[16].w[0] + 24u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[16].w[0] + 154u);
    set32(c.r[7], c.r[16].w[0] + 12u);
    set32(c.r[8], c.r[16].w[0] + 13u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[11], c.r[16].w[0] + 20u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B17ECu); st32((c.r[29].w[0] + 8u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 125u, depth + 1u); else { c.pc = 0x003B1550u; return; } if (c.pc != 0x003B17ECu) [[unlikely]] return; }
L_003B17EC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[16].w[0] + 52u), 0u);  goto L_003B1800; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B185C; } }
    c.budget -= 1;
L_003B1800:
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    st32((c.r[16].w[0] + 84u), c.r[4].w[0]);
    st16((c.r[16].w[0] + 152u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[16].w[0] + 92u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 23;
L_003B185C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003B1880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_003B19B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B18B4u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B0(c, 165u, depth + 1u); else { c.pc = 0x003C11A8u; return; } if (c.pc != 0x003B18B4u) [[unlikely]] return; }
L_003B18B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_003B19B4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B18D4u); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B18D4u) [[unlikely]] return; }
L_003B18D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[9], c.r[4].w[0] - c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[11], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[5].d[0];
    set32(c.r[10], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003B1968; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[9].sd[0] <= 0; set32(c.r[11], c.r[11].w[0] + c.r[2].w[0]);  if (t) { goto L_003B1994; } }
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003B1930:
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[4], c.r[3].w[0] + c.r[10].w[0]);
    c.r[6].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld16((c.r[7].w[0] + 2u));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1930u | kUnwind; return; } goto L_003B1930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003B1994; } }
    c.budget -= 1;
L_003B1968:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003B1994; } }
L_003B1970:
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    c.r[5].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1970u | kUnwind; return; } goto L_003B1970; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_003B1994:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 8;
L_003B19B4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B19E0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B19D4u); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B19D4u) [[unlikely]] return; }
L_003B19D4:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003B19E0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B19F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_003B1B4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1A2Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B0(c, 165u, depth + 1u); else { c.pc = 0x003C11A8u; return; } if (c.pc != 0x003B1A2Cu) [[unlikely]] return; }
L_003B1A2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_003B1B4C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1A4Cu); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B1A4Cu) [[unlikely]] return; }
L_003B1A4C:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[9], c.r[4].w[0] - c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[10], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[5].d[0];
    set32(c.r[11], c.r[10].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003B1AF8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[9].sd[0] <= 0; set32(c.r[12], c.r[10].w[0] + c.r[2].w[0]);  if (t) { goto L_003B1B30; } }
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = 0ull | 65408ull;
    c.budget -= 3;
L_003B1AB0:
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[6].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 15;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1AB0u | kUnwind; return; } goto L_003B1AB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003B1B30; } }
    c.budget -= 1;
L_003B1AF8:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003B1B30; } }
    c.r[5].d[0] = c.r[11].d[0] + 0ull;
    c.r[6].d[0] = 0ull | 65408ull;
    c.budget -= 2;
L_003B1B08:
    set32(c.r[2], c.r[18].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1B08u | kUnwind; return; } goto L_003B1B08; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_003B1B30:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 7;
L_003B1B4C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B1B78; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1B6Cu); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B1B6Cu) [[unlikely]] return; }
L_003B1B6C:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003B1B78:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B1B90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_003B1CEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1BC4u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B0(c, 165u, depth + 1u); else { c.pc = 0x003C11A8u; return; } if (c.pc != 0x003B1BC4u) [[unlikely]] return; }
L_003B1BC4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_003B1CEC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1BE4u); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B1BE4u) [[unlikely]] return; }
L_003B1BE4:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[9], c.r[4].w[0] - c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[11], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[5].d[0];
    set32(c.r[10], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003B1C90; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[9].sd[0] <= 0; set32(c.r[11], c.r[11].w[0] + c.r[2].w[0]);  if (t) { goto L_003B1CCC; } }
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003B1C40:
    c.r[2].d[0] = ld8((c.r[7].w[0] + 2u));
    set32(c.r[4], c.r[8].w[0] << 1);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[5], c.r[4].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[11].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[6].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[7].w[0] + 3u));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 17;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1C40u | kUnwind; return; } goto L_003B1C40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_003B1CCC; } }
    c.budget -= 1;
L_003B1C90:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003B1CCC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 2;
L_003B1CA0:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[4].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1CA0u | kUnwind; return; } goto L_003B1CA0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_003B1CCC:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 8;
L_003B1CEC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B1D18; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1D0Cu); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B1D0Cu) [[unlikely]] return; }
L_003B1D0C:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003B1D18:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B1D30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + 6872u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1D50u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x003B1D50u) [[unlikely]] return; }
L_003B1D50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 6880u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_003B1D80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1D6Cu);  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x003B1D6Cu) [[unlikely]] return; }
L_003B1D6C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003B1D84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B1D84; } }
    c.budget -= 1;
L_003B1D80:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B1D84:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B1D98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 154u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B1DC0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1B90u | kUnwind; return; } goto L_003B1B90; }
L_003B1DC0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B1DD0; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B19F8u | kUnwind; return; } goto L_003B19F8; }
L_003B1DD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B1DE8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1880u | kUnwind; return; } goto L_003B1880; }
L_003B1DE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B1DF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 12448u), 0u);  c.pc = t; return; }
L_003B1E00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 316u, depth); }
L_003B1E18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 317u, depth); }
L_003B1E30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st32((c.r[29].w[0] + 56u), c.f[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[22] = c.r[1].w[0];
    st32((c.r[29].w[0] + 40u), c.f[20]);
    c.f[20] = fp::sqrt(c.f[22]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[12] = c.f[22];
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[20]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = c.f[20];  if (t) { goto L_003B1E94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1E90u);  if (depth < kMaxDepth) unit_0006(c, 220u, depth + 1u); else { c.pc = 0x0011A5F0u; return; } if (c.pc != 0x003B1E90u) [[unlikely]] return; }
L_003B1E90:
    c.f[21] = c.f[0];
    c.budget -= 1;
L_003B1E94:
    c.f[12] = c.r[16].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    fpu_div(c, 12u, c.f[12], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1EC8u);  if (depth < kMaxDepth) unit_0006(c, 197u, depth + 1u); else { c.pc = 0x0011A1D8u; return; } if (c.pc != 0x003B1EC8u) [[unlikely]] return; }
L_003B1EC8:
    c.f[12] = c.f[22];
    c.f[1] = c.f[20];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = fp::sub(c.f[21], c.f[0]);  if (t) { goto L_003B1EE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1EE4u);  if (depth < kMaxDepth) unit_0006(c, 220u, depth + 1u); else { c.pc = 0x0011A5F0u; return; } if (c.pc != 0x003B1EE4u) [[unlikely]] return; }
L_003B1EE4:
    c.f[1] = c.f[0];
    c.budget -= 1;
L_003B1EE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[21], c.f[20]);
    c.f[12] = fp::add(c.f[21], c.f[20]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.f[0] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[0]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[21], c.f[0]);  goto L_003B1F24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B1F20u);  if (depth < kMaxDepth) unit_0006(c, 220u, depth + 1u); else { c.pc = 0x0011A5F0u; return; } if (c.pc != 0x003B1F20u) [[unlikely]] return; }
L_003B1F20:
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 1;
L_003B1F24:
    c.f[21] = ld32((c.r[29].w[0] + 48u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[3] = c.r[1].w[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    fpu_div(c, 0u, c.f[0], c.f[20]);
    c.f[20] = ld32((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[2] = fp::add(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B1F90:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    set32(c.r[9], 0u + 128u);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003B1FEC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[9].d[0]) { set32(c.r[7], c.r[7].w[0] + 2u);  goto L_003B1FC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003B1FEC; } }
    c.budget -= 1;
L_003B1FC0:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);  if (t) { goto L_003B1FEC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[9].d[0]) { set32(c.r[7], c.r[7].w[0] + 2u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B1FC0u | kUnwind; return; } goto L_003B1FC0; }
    c.r[2].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[7].d[0];
    c.budget -= 2;
L_003B1FEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 4;
    if (c.r[8].d[0] == c.r[2].d[0]) { st16((c.r[6].w[0]), static_cast<std::uint16_t>(0u));  goto L_003B2008; }
    goto L_003B1FFC;
L_003B1FF8:
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_003B1FFC:
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003B2008:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_003B2010:
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[8].sd[0] < 16ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B20A0; } }
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B20A4; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 2u));
    set32(c.r[5], 0u + 32767u);
    c.r[4].d[0] = ld8((c.r[7].w[0] + 3u));
    c.r[5].d[0] = c.r[5].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[4], c.r[3].w[0] - 2u);
    set32(c.r[16], c.r[3].w[0] + 4u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  if (t) { goto L_003B20A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B208Cu); set32(c.r[5], c.r[5].w[0] + 6888u);  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x003B208Cu) [[unlikely]] return; }
L_003B208C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B20A0; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));  goto L_003B209C; }
L_003B209C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003B20A0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B20A4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B20B8:
    c.r[5].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[13], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B21B0; } }
    c.r[3].d[0] = ld8((c.r[12].w[0]));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = ld8((c.r[12].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_003B21B0; } }
    c.r[3].d[0] = ld8((c.r[12].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[12].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[12].w[0] + 4u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[12].w[0] + 5u));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[12].w[0] + 6u));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[12].w[0] + 7u));
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[12].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[12].w[0] + 10u));
    c.r[4].d[0] = ld8((c.r[12].w[0] + 9u));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[5].d[0] = ld8((c.r[12].w[0] + 11u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[11].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[12].w[0] + 13u));
    c.r[2].d[0] = ld8((c.r[12].w[0] + 12u));
    c.r[4].d[0] = ld8((c.r[12].w[0] + 14u));
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[5].d[0] = ld8((c.r[12].w[0] + 15u));
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 40;
    if (c.r[8].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));  goto L_003B2190; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[13].w[0]), 0u);  if (t) { goto L_003B21AC; } }
L_003B2190:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { breakpoint(c, 0x003B2194u);  goto L_003B2198; }
L_003B2198:
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 16u);
    mmi::div(c, 0, c.r[2].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[13].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_003B21AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B21B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B21B8:
    c.r[5].d[0] = c.r[5].sd[0] < 18ll ? 1ull : 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B2230; } }
    c.r[3].d[0] = ld16((c.r[7].w[0]));
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[8], 0u - 256u);
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_003B2230; } }
    c.r[4].d[0] = ld16((c.r[7].w[0] + 2u));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[3].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B2230; } }
    c.r[4].d[0] = ld16((c.r[7].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 7;
L_003B2230:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B2238:
    c.r[5].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B22A8; } }
    c.r[3].d[0] = ld16((c.r[8].w[0]));
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_003B22A8; } }
    c.r[3].d[0] = ld16((c.r[8].w[0] + 2u));
    set32(c.r[5], 0u - 256u);
    c.r[4].d[0] = ld8((c.r[8].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[4].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B22A8; } }
    c.r[4].d[0] = ld8((c.r[8].w[0] + 18u));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 19u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_003B22A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B22B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 1u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B22E4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 169u, depth + 1u); else { c.pc = 0x003B2238u; return; } if (c.pc != 0x003B22E4u) [[unlikely]] return; }
L_003B22E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B23C8; } }
    c.r[2].d[0] = ld8((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(0u));  goto L_003B23B8; }
    c.r[3].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B23C8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[6], 0u - 256u);
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_003B23C8; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 2u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[3].d[0] = c.r[3].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B23C8; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 24u));
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 26u));
    set32(c.r[2], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 30u));
    set32(c.r[2], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003B23C4; } }
L_003B23B8:
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_003B23C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B23C8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B23E8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 1u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2440u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 169u, depth + 1u); else { c.pc = 0x003B2238u; return; } if (c.pc != 0x003B2440u) [[unlikely]] return; }
L_003B2440:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003B2620; }
    c.r[3].d[0] = ld8((c.r[29].w[0]));
    set32(c.r[6], 0u + 48u);
    set32(c.r[4], 0u + 60u);
    c.r[7].d[0] = c.r[3].d[0] ^ 4ull;
    if (c.r[7].d[0] == 0) c.r[6].d[0] = c.r[4].d[0];
    c.r[3].d[0] = c.r[17].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u - 1u);  goto L_003B261C; }
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[14], 0u - 256u);  if (t) { goto L_003B2520; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[5], c.r[6].w[0] - 4u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[14].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[4].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_003B24C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B261C; } }
    c.budget -= 1;
L_003B24C0:
    set32(c.r[13], 0u + 20u);
    if (c.r[7].d[0] == 0) c.r[13].d[0] = c.r[3].d[0];
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], c.r[16].w[0] + c.r[13].w[0]);
    set32(c.r[13], c.r[13].w[0] + 2u);
    set32(c.r[7], c.r[16].w[0] + c.r[13].w[0]);
    set32(c.r[13], c.r[13].w[0] + 2u);
    c.r[5].d[0] = ld16((c.r[6].w[0]));
    c.r[4].d[0] = ld16((c.r[7].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] & c.r[14].d[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[14].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[4], c.r[6].w[0] << 16);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 24;
    { const bool t = c.r[4].d[0] == c.r[8].d[0]; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_003B2528; } }
L_003B2520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_003B261C; } }
L_003B2528:
    set32(c.r[13], c.r[13].w[0] + 2u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[10], c.r[16].w[0] + c.r[13].w[0]);
    set32(c.r[13], c.r[13].w[0] + 2u);
    set32(c.r[3], c.r[16].w[0] + c.r[13].w[0]);
    set32(c.r[13], c.r[13].w[0] + 4u);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[11], c.r[16].w[0] + c.r[13].w[0]);
    set32(c.r[13], c.r[13].w[0] + 4u);
    c.r[7].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 8));
    set32(c.r[4], c.r[5].w[0] << 8);
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    set32(c.r[3], c.r[5].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[9].d[0];
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[12], c.r[16].w[0] + c.r[13].w[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[13], c.r[13].w[0] + c.r[16].w[0]);
    c.r[8].d[0] = ld8((c.r[10].w[0] + 1u));
    set32(c.r[7], c.r[7].w[0] << 8);
    set32(c.r[5], ld32((c.r[11].w[0])));
    c.r[7].d[0] = c.r[7].d[0] & c.r[14].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[7].d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 8));
    set32(c.r[4], c.r[5].w[0] << 8);
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    set32(c.r[3], c.r[5].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[9].d[0];
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[12].w[0])));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    set32(c.r[5], c.r[4].w[0] << 8);
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    set32(c.r[3], c.r[4].w[0] >> 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[9].d[0];
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[23].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[13].w[0] + 4u)));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    set32(c.r[5], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[4].w[0] >> 24);
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[9].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 61;
L_003B261C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003B2620:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003B2648:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[18].w[0]), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B2690u); set32(c.r[7], c.r[29].w[0] + 1u);  if (depth < kMaxDepth) unit_00AC(c, 169u, depth + 1u); else { c.pc = 0x003B2238u; return; } if (c.pc != 0x003B2690u) [[unlikely]] return; }
L_003B2690:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003B281C; }
    c.r[3].d[0] = ld8((c.r[29].w[0]));
    set32(c.r[6], 0u + 60u);
    set32(c.r[4], 0u + 72u);
    c.r[7].d[0] = c.r[3].d[0] ^ 4ull;
    if (c.r[7].d[0] == 0) c.r[6].d[0] = c.r[4].d[0];
    c.r[3].d[0] = c.r[17].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u - 1u);  goto L_003B2818; }
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[10], 0u - 256u);  if (t) { goto L_003B2758; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[5], c.r[6].w[0] - 4u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[4].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_003B2710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B2818; } }
    c.budget -= 1;
L_003B2710:
    set32(c.r[9], 0u + 20u);
    if (c.r[7].d[0] == 0) c.r[9].d[0] = c.r[3].d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41490000u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.r[8].d[0] = c.r[8].d[0] | 20038ull;
    set32(c.r[5], c.r[16].w[0] + c.r[9].w[0]);
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[7].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == c.r[8].d[0]; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { goto L_003B2760; } }
L_003B2758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_003B2818; } }
L_003B2760:
    set32(c.r[3], c.r[16].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[8], c.r[16].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] + 16u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 8));
    set32(c.r[4], c.r[5].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    set32(c.r[3], c.r[5].w[0] >> 24);
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[5], c.r[16].w[0] + c.r[9].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[6], c.r[16].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[9].w[0] + c.r[16].w[0]);
    ldl(c.r[3], (c.r[8].w[0] + 7u));
    ldr(c.r[3], (c.r[8].w[0]));
    ldl(c.r[4], (c.r[8].w[0] + 15u));
    ldr(c.r[4], (c.r[8].w[0] + 8u));
    sdl(c.r[3], (c.r[20].w[0] + 7u));
    sdr(c.r[3], (c.r[20].w[0]));
    sdl(c.r[4], (c.r[20].w[0] + 15u));
    sdr(c.r[4], (c.r[20].w[0] + 8u));
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[7].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 46;
L_003B2818:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003B281C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B2840:
    c.r[5].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B2894; } }
    c.r[3].d[0] = ld16((c.r[7].w[0]));
    c.r[5].d[0] = 0ull | 32769ull;
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_003B2894; } }
    c.r[3].d[0] = ld16((c.r[7].w[0] + 2u));
    set32(c.r[5], 0u - 256u);
    c.r[4].d[0] = ld8((c.r[7].w[0] + 3u));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] + 4u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 9;
L_003B2894:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B28A0:
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003B28D0; } }
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    if (c.r[7].d[0] == 0ull) { breakpoint(c, 0x003B28B4u);  goto L_003B28B8; }
L_003B28B8:
    set32(c.r[2], c.r[2].w[0] + 33u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);  c.pc = t; return; }
L_003B28D0:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[7].d[0] == 0ull) { breakpoint(c, 0x003B28D8u);  goto L_003B28DC; }
L_003B28DC:
    set32(c.r[2], c.r[2].w[0] + 57u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);  c.pc = t; return; }
L_003B28F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 12456u), c.r[4].w[0]);  c.pc = t; return; }
L_003B2908:
    set32(c.r[8], c.r[8].w[0] << 16);
    set32(c.r[9], c.r[9].w[0] << 16);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 12));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 12));
    c.f[1] = c.r[9].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[9].d[0] = 0ull + 0ull;
    c.f[2] = c.r[8].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.f[8] = fp::mul(c.f[1], c.f[0]);
    c.f[5] = c.r[3].w[0];
    c.f[5] = fp::cvt_s_w(c.f[5]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 23;
    { const bool t = c.r[5].sd[0] <= 0; c.f[7] = fp::mul(c.f[2], c.f[0]);  if (t) { goto L_003B2A4C; } }
    set32(c.r[14], 0u - 256u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].d[0] = ld16((c.r[8].w[0]));
    c.budget -= 5;
L_003B2978:
    c.r[4].d[0] = ld8((c.r[8].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[14].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003B2A70; } }
    c.r[2].d[0] = c.r[4].d[0] & 8191ull;
    set32(c.r[4], 0u + 30u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 2u);
    c.f[6] = c.r[2].w[0];
    c.f[6] = fp::cvt_s_w(c.f[6]);
    set32(c.r[11], c.r[13].w[0] + 9448u);
    set32(c.r[10], c.r[12].w[0] + 10472u);
    c.budget -= 9;
L_003B29C0:
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.f[0] = fp::mul(c.f[8], c.f[5]);
    c.f[5] = c.f[1];
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[2] = fp::mul(c.f[7], c.f[1]);
    set32(c.r[3], c.r[2].w[0] + c.r[11].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[4] = fp::mul(c.f[8], c.f[5]);
    set32(c.r[4], c.r[4].w[0] - 2u);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[6]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[3] = fp::mul(c.f[3], c.f[6]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[7], c.f[1]);
    c.f[5] = c.f[1];
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[4]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.f[1] = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 31;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B29C0u | kUnwind; return; } goto L_003B29C0; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[8].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2978u | kUnwind; return; } goto L_003B2978; }
L_003B2A4C:
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = fp::cvt_w_s(c.f[5]);
    set32(c.r[3], c.f[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
L_003B2A70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B2A78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[10], c.r[10].w[0] << 16);
    set32(c.r[11], c.r[11].w[0] << 16);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 12));
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 12));
    c.r[15].d[0] = c.r[5].d[0] + 0ull;
    c.r[13].d[0] = c.r[7].d[0] + 0ull;
    c.r[14].d[0] = c.r[9].d[0] + 0ull;
    c.f[2] = c.r[10].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = c.r[11].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0])));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] + 2u)));
    set32(c.r[2], c.r[15].w[0] >> 31);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0])));
    set32(c.r[2], c.r[15].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[9], c.r[9].w[0] << 16);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.f[14] = fp::mul(c.f[1], c.f[0]);
    c.f[8] = c.r[3].w[0];
    c.f[8] = fp::cvt_s_w(c.f[8]);
    c.r[12].d[0] = 0ull + 0ull;
    c.f[11] = c.r[7].w[0];
    c.f[11] = fp::cvt_s_w(c.f[11]);
    c.f[9] = c.r[9].w[0];
    c.f[9] = fp::cvt_s_w(c.f[9]);
    c.f[10] = c.r[5].w[0];
    c.f[10] = fp::cvt_s_w(c.f[10]);
    c.budget -= 40;
    { const bool t = c.r[2].sd[0] <= 0; c.f[13] = fp::mul(c.f[2], c.f[0]);  if (t) { goto L_003B2CB8; } }
    c.r[25].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[24], 0u - 256u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 6;
L_003B2B30:
    set32(c.r[10], c.r[10].w[0] + 18u);
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[24].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[12].w[0] << 1);  if (t) { goto L_003B2CFC; } }
    c.r[3].d[0] = ld16((c.r[10].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & 8191ull;
    c.r[4].d[0] = ld8((c.r[10].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.f[15] = c.r[2].w[0];
    c.f[15] = fp::cvt_s_w(c.f[15]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[24].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[12].w[0] << 1);  if (t) { goto L_003B2CFC; } }
    c.r[2].d[0] = c.r[4].d[0] & 8191ull;
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] + 2u);
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[11], c.r[17].w[0] + 9448u);
    set32(c.r[9], c.r[16].w[0] + 10472u);
    set32(c.r[7], 0u + 30u);
    c.budget -= 9;
L_003B2BB8:
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[2] = fp::mul(c.f[14], c.f[11]);
    c.f[11] = c.f[8];
    set32(c.r[4], c.r[4].w[0] << 2);
    c.f[0] = fp::mul(c.f[13], c.f[8]);
    set32(c.r[2], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[3] = fp::mul(c.f[14], c.f[10]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[2] = fp::mul(c.f[4], c.f[15]);
    c.f[4] = ld32((c.r[4].w[0]));
    c.f[1] = fp::mul(c.f[13], c.f[9]);
    set32(c.r[2], c.r[3].w[0] + c.r[11].w[0]);
    c.f[7] = ld32((c.r[2].w[0]));
    c.f[10] = c.f[9];
    c.f[6] = fp::mul(c.f[14], c.f[11]);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.f[8] = fp::add(c.f[0], c.f[2]);
    set32(c.r[7], c.r[7].w[0] - 2u);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[3] = fp::mul(c.f[7], c.f[12]);
    c.f[7] = ld32((c.r[3].w[0]));
    c.f[5] = fp::mul(c.f[14], c.f[10]);
    c.f[0] = fp::mul(c.f[13], c.f[8]);
    c.f[11] = c.f[8];
    c.f[4] = fp::mul(c.f[4], c.f[15]);
    c.f[9] = fp::add(c.f[1], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[8]);
    set32(c.r[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[6]);
    c.f[2] = fp::mul(c.f[7], c.f[12]);
    c.f[1] = fp::mul(c.f[13], c.f[9]);
    c.f[10] = c.f[9];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.f[3] = fp::cvt_w_s(c.f[9]);
    set32(c.r[3], c.f[3]);
    c.f[8] = fp::add(c.f[0], c.f[4]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.f[1] = fp::add(c.f[1], c.f[5]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[8], c.r[8].w[0] + 2u);
    c.f[0] = fp::cvt_w_s(c.f[8]);
    set32(c.r[3], c.f[0]);
    c.f[9] = fp::add(c.f[1], c.f[2]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.f[0] = fp::cvt_w_s(c.f[9]);
    set32(c.r[3], c.f[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 60;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2BB8u | kUnwind; return; } goto L_003B2BB8; } }
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[2].d[0] = c.r[12].sd[0] < c.r[25].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2B30u | kUnwind; return; } goto L_003B2B30; } }
L_003B2CB8:
    c.f[0] = fp::cvt_w_s(c.f[8]);
    set32(c.r[3], c.f[0]);
    c.r[2].d[0] = c.r[15].d[0] + 0ull;
    c.f[0] = fp::cvt_w_s(c.f[11]);
    set32(c.r[4], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[9]);
    set32(c.r[5], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[10]);
    set32(c.r[6], c.f[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    st16((c.r[13].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    st16((c.r[13].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st16((c.r[14].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[14].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 17;
L_003B2CFC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B2D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[10], c.r[10].w[0] << 16);
    set32(c.r[11], c.r[11].w[0] << 16);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 12));
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 12));
    c.r[24].d[0] = c.r[5].d[0] + 0ull;
    c.r[14].d[0] = c.r[7].d[0] + 0ull;
    c.r[15].d[0] = c.r[9].d[0] + 0ull;
    c.f[2] = c.r[10].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = c.r[11].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0])));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0] + 2u)));
    set32(c.r[2], c.r[24].w[0] >> 31);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0])));
    set32(c.r[2], c.r[24].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[9], c.r[9].w[0] << 16);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.f[14] = fp::mul(c.f[1], c.f[0]);
    c.f[9] = c.r[3].w[0];
    c.f[9] = fp::cvt_s_w(c.f[9]);
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    c.f[11] = c.r[7].w[0];
    c.f[11] = fp::cvt_s_w(c.f[11]);
    c.r[13].d[0] = 0ull + 0ull;
    c.f[8] = c.r[9].w[0];
    c.f[8] = fp::cvt_s_w(c.f[8]);
    c.f[10] = c.r[5].w[0];
    c.f[10] = fp::cvt_s_w(c.f[10]);
    c.budget -= 41;
    { const bool t = c.r[2].sd[0] <= 0; c.f[12] = fp::mul(c.f[2], c.f[0]);  if (t) { goto L_003B2F58; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], 0u - 256u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 5;
L_003B2DC8:
    set32(c.r[10], c.r[10].w[0] + 18u);
    c.r[3].d[0] = ld16((c.r[7].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[25].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[13].w[0] << 1);  if (t) { goto L_003B2F9C; } }
    c.r[3].d[0] = ld16((c.r[10].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & 8191ull;
    c.r[4].d[0] = ld8((c.r[10].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.f[15] = c.r[2].w[0];
    c.f[15] = fp::cvt_s_w(c.f[15]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[25].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[13].w[0] << 1);  if (t) { goto L_003B2F9C; } }
    c.r[2].d[0] = c.r[4].d[0] & 8191ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[1].d[0] = c.r[1].d[0] | 13107ull;
    c.f[16] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    set32(c.r[10], c.r[10].w[0] + 2u);
    set32(c.r[12], c.r[18].w[0] + 9448u);
    set32(c.r[11], c.r[17].w[0] + 10472u);
    set32(c.r[9], 0u + 30u);
    c.budget -= 13;
L_003B2E60:
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.f[1] = fp::mul(c.f[14], c.f[11]);
    c.f[11] = c.f[9];
    c.f[3] = fp::mul(c.f[14], c.f[10]);
    c.f[10] = c.f[8];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[2] = fp::mul(c.f[12], c.f[9]);
    set32(c.r[4], c.r[2].w[0] + c.r[12].w[0]);
    c.f[0] = fp::mul(c.f[12], c.f[8]);
    set32(c.r[5], c.r[3].w[0] + c.r[12].w[0]);
    c.f[7] = ld32((c.r[4].w[0]));
    c.f[6] = fp::mul(c.f[14], c.f[11]);
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[5] = fp::mul(c.f[14], c.f[10]);
    c.f[2] = fp::add(c.f[2], c.f[1]);
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    set32(c.r[2], c.r[2].w[0] + c.r[11].w[0]);
    c.f[3] = fp::mul(c.f[7], c.f[15]);
    c.f[7] = ld32((c.r[2].w[0]));
    c.f[1] = fp::mul(c.f[4], c.f[13]);
    c.f[4] = ld32((c.r[3].w[0]));
    set32(c.r[9], c.r[9].w[0] - 2u);
    c.f[4] = fp::mul(c.f[4], c.f[13]);
    c.f[9] = fp::add(c.f[2], c.f[3]);
    c.f[8] = fp::add(c.f[0], c.f[1]);
    c.f[3] = fp::mul(c.f[7], c.f[15]);
    c.f[2] = fp::mul(c.f[12], c.f[9]);
    c.f[11] = c.f[9];
    c.f[1] = fp::mul(c.f[12], c.f[8]);
    c.f[10] = c.f[8];
    c.f[0] = fp::add(c.f[9], c.f[8]);
    c.f[2] = fp::add(c.f[2], c.f[6]);
    c.f[1] = fp::add(c.f[1], c.f[5]);
    c.f[0] = fp::mul(c.f[0], c.f[16]);
    c.f[9] = fp::add(c.f[2], c.f[3]);
    c.f[8] = fp::add(c.f[1], c.f[4]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.f[1] = fp::add(c.f[9], c.f[8]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[8], c.r[8].w[0] + 2u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.f[1] = fp::mul(c.f[1], c.f[16]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[8], c.r[8].w[0] + 2u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 58;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2E60u | kUnwind; return; } goto L_003B2E60; } }
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[2].d[0] = c.r[13].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2DC8u | kUnwind; return; } goto L_003B2DC8; } }
L_003B2F58:
    c.f[0] = fp::cvt_w_s(c.f[9]);
    set32(c.r[3], c.f[0]);
    c.r[2].d[0] = c.r[24].d[0] + 0ull;
    c.f[0] = fp::cvt_w_s(c.f[11]);
    set32(c.r[4], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[8]);
    set32(c.r[5], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[10]);
    set32(c.r[6], c.f[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    st16((c.r[14].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    st16((c.r[14].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    st16((c.r[15].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[15].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 17;
L_003B2F9C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B2FB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[10], c.r[10].w[0] << 16);
    set32(c.r[11], c.r[11].w[0] << 16);
    set32(c.r[3], ld32((c.r[2].w[0] + 12456u)));
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 16));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 16));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[11].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_003B2FE8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2A78u | kUnwind; return; } goto L_003B2A78; }
L_003B2FE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B2D10u | kUnwind; return; } goto L_003B2D10; }
L_003B2FF8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[8], c.r[8].w[0] << 16);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[9], c.r[9].w[0] << 16);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 16));
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    set32(c.r[11], c.r[11].w[0] << 16);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 16));
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    c.r[13].d[0] = c.r[4].d[0] + 0ull;
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 80u)));
    c.r[10].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.budget -= 25;
    { const bool t = c.r[19].sd[0] <= 0; c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2u)));  if (t) { goto L_003B319C; } }
    set32(c.r[30], 0u - 256u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].d[0] = ld16((c.r[13].w[0]));
    c.budget -= 3;
L_003B3068:
    c.r[4].d[0] = ld8((c.r[13].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[30].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_003B31A8; } }
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    set32(c.r[13], c.r[13].w[0] + 2u);
    c.r[9].d[0] = 0ull | 32768ull;
    c.r[8].d[0] = 0ull | 65535ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 8191ull;
    set32(c.r[25], 0u + 32767u);
    set32(c.r[15], c.r[2].w[0] + 1u);
    set32(c.r[11], c.r[23].w[0] + 6896u);
    set32(c.r[3], c.r[7].w[0] + c.r[21].w[0]);
    set32(c.r[7], 0u + 30u);
    c.r[3].d[0] = c.r[3].d[0] & 32767ull;
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 15;
L_003B30C8:
    c.r[3].d[0] = ld8((c.r[13].w[0]));
    set32(c.r[13], c.r[13].w[0] + 1u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[14].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[14].d[0] = c.r[5].d[0] + 0ull;
    mmi::mult(c, 1, c.r[17].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], c.r[3].w[0] << 24);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 28));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    mmi::mult(c, 0, c.r[5].w[0], c.r[15].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[16].w[0], c.r[14].w[0]);
    c.r[24].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 12));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[12], c.r[2].w[0] + c.r[11].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = c.r[4].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[8].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[25].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] ^ 0ull;  if (t) { goto L_003B312C; } }
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[25].d[0];
    set32(c.r[2], 0u - 32768u);
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.budget -= 3;
L_003B312C:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[12].w[0])));
    mmi::mult(c, 0, c.r[17].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    mmi::mult(c, 0, c.r[3].w[0], c.r[15].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[14].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + c.r[24].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[25].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; c.r[12].d[0] = c.r[2].d[0] ^ 0ull;  if (t) { goto L_003B3178; } }
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[25].d[0];
    set32(c.r[2], 0u - 32768u);
    if (c.r[12].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.budget -= 3;
L_003B3178:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 2u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 5;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B30C8u | kUnwind; return; } goto L_003B30C8; } }
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[10].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[13].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3068u | kUnwind; return; } goto L_003B3068; }
L_003B319C:
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 3;
L_003B31A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B31D8:
    set32(c.r[2], c.r[5].w[0] >> 31);
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[9].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 120u)));
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 128u)));
    set32(c.r[10], c.r[10].w[0] << 16);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[11], c.r[11].w[0] << 16);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 16));
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    c.r[23].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 16));
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[15].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.r[24].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    c.r[25].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 35;
    { const bool t = c.r[6].sd[0] <= 0; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));  if (t) { goto L_003B3554; } }
    c.budget -= 1;
L_003B3268:
    c.r[3].d[0] = ld16((c.r[15].w[0]));
    set32(c.r[5], 0u - 256u);
    c.r[4].d[0] = ld8((c.r[15].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[3].d[0] = c.r[5].d[0] & 32768ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[23].w[0] << 1);  if (t) { goto L_003B3570; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 112u)));
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    c.lo.d[0] = c.r[6].d[0];
    set32(c.r[6], ld32((c.r[29].w[0] + 12u)));
    mmi::madd(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 8191ull;
    set32(c.r[5], 0u - 256u);
    set32(c.r[21], c.r[3].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.r[6].d[0] = c.r[4].d[0] & 32767ull;
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld16((c.r[15].w[0] + 18u));
    c.r[4].d[0] = ld8((c.r[15].w[0] + 19u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[3].d[0] = c.r[5].d[0] & 32768ull;
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003B3570; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[30], c.r[4].w[0] + 6896u);
    set32(c.r[15], c.r[15].w[0] + 2u);
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    c.r[16].d[0] = 0ull | 32768ull;
    c.r[11].d[0] = 0ull | 65535ull;
    mmi::madd(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[6].d[0];
    set32(c.r[5], ld32((c.r[29].w[0] + 112u)));
    c.r[3].d[0] = c.r[3].d[0] & 8191ull;
    set32(c.r[20], c.r[3].w[0] + 1u);
    set32(c.r[13], 0u + 32767u);
    set32(c.r[10], 0u + 10u);
    set32(c.r[22], 0u + 30u);
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_003B3338:
    c.r[2].d[0] = ld8((c.r[15].w[0]));
    mmi::mult(c, 0, c.r[18].w[0], c.r[12].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[19].w[0], c.r[24].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[4].d[0] = ld8((c.r[15].w[0] + 18u));
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 28));
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    mmi::mult(c, 0, c.r[5].w[0], c.r[21].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 28));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[11].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));  if (t) { goto L_003B3398; } }
    c.r[2].d[0] = c.r[6].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[13].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[6].d[0] = c.r[13].d[0];
    set32(c.r[3], 0u - 32768u);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    c.budget -= 6;
L_003B3398:
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[19].w[0], c.r[25].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[12].w[0], c.r[20].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[12].d[0] = c.r[24].d[0] + 0ull;
    c.r[24].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[11].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[25].d[0] + 0ull;  if (t) { goto L_003B33E0; } }
    c.r[2].d[0] = c.r[6].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[13].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[6].d[0] = c.r[13].d[0];
    set32(c.r[3], 0u - 32768u);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    c.budget -= 6;
L_003B33E0:
    c.r[25].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], c.r[24].w[0] + c.r[25].w[0]);
    c.budget -= 4;
    if (c.r[10].d[0] == 0ull) { breakpoint(c, 0x003B33ECu);  goto L_003B33F0; }
L_003B33F0:
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[10].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[6].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = c.r[11].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[14].d[0] & 15ull;  if (t) { goto L_003B3430; } }
    c.r[2].d[0] = c.r[6].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[13].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[6].d[0] = c.r[13].d[0];
    set32(c.r[3], 0u - 32768u);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[14].d[0] & 15ull;
    c.budget -= 7;
L_003B3430:
    mmi::mult(c, 0, c.r[18].w[0], c.r[12].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[19].w[0], c.r[24].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[14], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[7].d[0] & 15ull;
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    mmi::mult(c, 0, c.r[14].w[0], c.r[21].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 12));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[30].w[0]);
    set32(c.r[8], c.r[8].w[0] + 2u);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[11].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], ld32((c.r[3].w[0])));  if (t) { goto L_003B3498; } }
    c.r[2].d[0] = c.r[6].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[13].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[6].d[0] = c.r[13].d[0];
    set32(c.r[3], 0u - 32768u);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    c.budget -= 6;
L_003B3498:
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[19].w[0], c.r[25].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[7].w[0], c.r[20].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[12].d[0] = c.r[24].d[0] + 0ull;
    c.r[24].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[11].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[25].d[0] + 0ull;  if (t) { goto L_003B34E0; } }
    c.r[2].d[0] = c.r[6].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[13].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[6].d[0] = c.r[13].d[0];
    set32(c.r[3], 0u - 32768u);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    c.budget -= 6;
L_003B34E0:
    c.r[25].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], c.r[24].w[0] + c.r[25].w[0]);
    c.budget -= 4;
    if (c.r[10].d[0] == 0ull) { breakpoint(c, 0x003B34ECu);  goto L_003B34F0; }
L_003B34F0:
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[10].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[6].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = c.r[11].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[22], c.r[22].w[0] - 2u);  if (t) { goto L_003B352C; } }
    c.r[2].d[0] = c.r[6].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[13].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[6].d[0] = c.r[13].d[0];
    set32(c.r[3], 0u - 32768u);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    c.budget -= 6;
L_003B352C:
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.budget -= 5;
    { const bool t = c.r[22].sd[0] >= 0; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3338u | kUnwind; return; } goto L_003B3338; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.r[2].d[0] = c.r[23].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[15], c.r[15].w[0] + 18u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3268u | kUnwind; return; } goto L_003B3268; } }
L_003B3554:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[12].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0])));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[24].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));
    c.budget -= 7;
L_003B3570:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003B35A0:
    set32(c.r[2], c.r[5].w[0] >> 31);
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 120u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.r[15].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 128u)));
    set32(c.r[10], c.r[10].w[0] << 16);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 16));
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[11], c.r[11].w[0] << 16);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[25].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 16));
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.budget -= 34;
    { const bool t = c.r[4].sd[0] <= 0; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 2u)));  if (t) { goto L_003B38A0; } }
L_003B3628:
    c.r[3].d[0] = ld16((c.r[15].w[0]));
    set32(c.r[6], 0u - 256u);
    c.r[4].d[0] = ld8((c.r[15].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[3].d[0] = c.r[5].d[0] & 32768ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_003B38BC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    c.lo.d[0] = c.r[6].d[0];
    set32(c.r[6], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[4].w[0] << 1);
    mmi::madd(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 8191ull;
    set32(c.r[5], 0u - 256u);
    set32(c.r[23], c.r[3].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.r[6].d[0] = c.r[4].d[0] & 32767ull;
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld16((c.r[15].w[0] + 18u));
    c.r[4].d[0] = ld8((c.r[15].w[0] + 19u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[3].d[0] = c.r[5].d[0] & 32768ull;
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003B38BC; } }
    set32(c.r[15], c.r[15].w[0] + 2u);
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    c.r[22].d[0] = 0ull | 32768ull;
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    c.r[21].d[0] = 0ull | 65535ull;
    set32(c.r[24], 0u + 32767u);
    mmi::madd(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 8191ull;
    set32(c.r[30], 0u + 30u);
    set32(c.r[20], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 15;
L_003B36F8:
    c.r[3].d[0] = ld8((c.r[15].w[0]));
    mmi::mult(c, 0, c.r[18].w[0], c.r[10].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[19].w[0], c.r[13].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    c.r[6].d[0] = ld8((c.r[15].w[0] + 18u));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[10].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 28));
    set32(c.r[6], c.r[6].w[0] << 24);
    mmi::mult(c, 0, c.r[5].w[0], c.r[23].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[12].d[0] & 15ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 28));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 24));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 12));
    mmi::mult(c, 0, c.r[3].w[0], c.r[20].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 6896u);
    set32(c.r[11], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[22].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[10].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.r[4].d[0] = c.r[24].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.budget -= 30;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].d[0] = c.r[6].d[0] & 15ull;  if (t) { goto L_003B377C; } }
    if (c.r[4].d[0] != 0) c.r[5].d[0] = c.r[24].d[0];
    set32(c.r[2], 0u - 32768u);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 3;
L_003B377C:
    mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[16].d[0] = c.r[14].d[0] + 0ull;
    mmi::mult(c, 1, c.r[19].w[0], c.r[14].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    mmi::mult(c, 0, c.r[19].w[0], c.r[13].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[10].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[12].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    set32(c.r[3], c.r[5].w[0] + c.r[22].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[24].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull; c.r[12].d[0] = c.r[2].d[0] ^ 0ull;  if (t) { goto L_003B37D0; } }
    if (c.r[4].d[0] != 0) c.r[5].d[0] = c.r[24].d[0];
    set32(c.r[2], 0u - 32768u);
    if (c.r[12].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 3;
L_003B37D0:
    set32(c.r[12], ld32((c.r[11].w[0])));
    c.r[14].d[0] = c.r[5].d[0] + 0ull;
    mmi::mult(c, 0, c.r[19].w[0], c.r[14].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    mmi::mult(c, 0, c.r[12].w[0], c.r[23].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 6896u);
    set32(c.r[3], c.r[9].w[0] << 2);
    st16((c.r[25].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[16].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    set32(c.r[5], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    set32(c.r[2], c.r[5].w[0] + c.r[22].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[25], c.r[25].w[0] + 2u);
    set32(c.r[8], c.r[8].w[0] + 2u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[20].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[24].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] ^ 0ull;  if (t) { goto L_003B383C; } }
    if (c.r[4].d[0] != 0) c.r[5].d[0] = c.r[24].d[0];
    set32(c.r[2], 0u - 32768u);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 3;
L_003B383C:
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[12].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[22].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[24].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] ^ 0ull;  if (t) { goto L_003B3868; } }
    if (c.r[4].d[0] != 0) c.r[5].d[0] = c.r[24].d[0];
    set32(c.r[2], 0u - 32768u);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 3;
L_003B3868:
    c.r[14].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[30], c.r[30].w[0] - 2u);
    st16((c.r[25].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[25], c.r[25].w[0] + 2u);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.budget -= 7;
    { const bool t = c.r[30].sd[0] >= 0; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B36F8u | kUnwind; return; } goto L_003B36F8; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[15], c.r[15].w[0] + 18u);
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3628u | kUnwind; return; } goto L_003B3628; } }
L_003B38A0:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0])));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.budget -= 7;
L_003B38BC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003B38E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[10], c.r[10].w[0] << 16);
    set32(c.r[11], c.r[11].w[0] << 16);
    set32(c.r[3], ld32((c.r[2].w[0] + 12456u)));
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 16));
    set32(c.r[13], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 16));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[10].d[0] = c.r[12].d[0] + 0ull;
    c.r[11].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[14], ld32((c.r[29].w[0] + 48u)));
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 56u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 64u)));  if (t) { goto L_003B3938; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[15].w[0]);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B35A0u | kUnwind; return; } goto L_003B35A0; }
L_003B3938:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[10].d[0] = c.r[12].d[0] + 0ull;
    c.r[11].d[0] = c.r[13].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[15].w[0]);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B31D8u | kUnwind; return; } goto L_003B31D8; }
L_003B3958:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12472u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3974u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003B3974u) [[unlikely]] return; }
L_003B3974:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[3].w[0] + 12464u), 0u);
    st32((c.r[2].w[0] + 12468u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B3990:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12472u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B39ACu); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003B39ACu) [[unlikely]] return; }
L_003B39AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[3].w[0] + 12464u), 0u);
    st32((c.r[2].w[0] + 12468u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B39C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[2].w[0] + 12464u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 12468u), c.r[5].w[0]);
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 369u, depth); }
L_003B39F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 12472u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3A14u); set32(c.r[6], 0u + 255u);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x003B3A14u) [[unlikely]] return; }
L_003B3A14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 12464u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B3A30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3A30u); set32(c.r[4], ld32((c.r[2].w[0] + 12468u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B3A30u) [[unlikely]] return; }
L_003B3A30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 329u, depth); }
L_003B3A48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] + 12472u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 255u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3A74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x003B3A74u) [[unlikely]] return; }
L_003B3A74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3A84u); set32(c.r[6], 0u + 255u);  if (depth < kMaxDepth) unit_0009(c, 243u, depth + 1u); else { c.pc = 0x00127E88u; return; } if (c.pc != 0x003B3A84u) [[unlikely]] return; }
L_003B3A84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 12464u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B3AA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3AA0u); set32(c.r[4], ld32((c.r[2].w[0] + 12468u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B3AA0u) [[unlikely]] return; }
L_003B3AA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00B4(c, 329u, depth); }
L_003B3AB8:
    set32(c.r[2], 0u + 10u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], 0u + 10u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003B3AE8u);  goto L_003B3AEC; }
L_003B3AEC:
    c.r[8].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_003B3B10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003B3B4C; } }
    c.budget -= 1;
L_003B3B10:
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_003B3B4C; } }
    set32(c.r[2], 0u + 10u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003B3B2Cu);  goto L_003B3B30; }
L_003B3B30:
    c.r[8].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3B10u | kUnwind; return; } goto L_003B3B10; }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003B3B4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[17], c.r[2].w[0] - 12968u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3B5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003B3B5Cu) [[unlikely]] return; }
L_003B3B5C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] - 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[7].d[0] = c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[7].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B3B9C; } }
    set32(c.r[2], c.r[7].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 3;
L_003B3B80:
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3B80u | kUnwind; return; } goto L_003B3B80; } }
L_003B3B9C:
    set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B3BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3BECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 211u, depth + 1u); else { c.pc = 0x003B3AB8u; return; } if (c.pc != 0x003B3BECu) [[unlikely]] return; }
L_003B3BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3BF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003B3BF4u) [[unlikely]] return; }
L_003B3BF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 6960u);
    set32(c.r[6], c.r[17].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3C0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 243u, depth + 1u); else { c.pc = 0x00127E88u; return; } if (c.pc != 0x003B3C0Cu) [[unlikely]] return; }
L_003B3C0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3C14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003B3C14u) [[unlikely]] return; }
L_003B3C14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3C20u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003B3C20u) [[unlikely]] return; }
L_003B3C20:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 4u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3AB8u | kUnwind; return; } goto L_003B3AB8; }
L_003B3C48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C658u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 66u, depth); }
L_003B3C68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 12732u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + 12728u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_003B3D18; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3CA8u); set32(c.r[6], 0u + 1088u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003B3CA8u) [[unlikely]] return; }
L_003B3CA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[4].w[0] + 13824u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3CBCu); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003B3CBCu) [[unlikely]] return; }
L_003B3CBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[4].w[0] + 14856u);
    set32(c.r[5], 0u + 255u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3CD0u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003B3CD0u) [[unlikely]] return; }
L_003B3CD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[4].w[0] + 15112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3CE4u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003B3CE4u) [[unlikely]] return; }
L_003B3CE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 15144u), 0u);
    st32((c.r[3].w[0] + 15156u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 14848u), 0u);
    st32((c.r[6].w[0] + 15148u), 0u);
    st32((c.r[7].w[0] + 15152u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 13;
L_003B3D18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B3D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 12732u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003B3DE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3D58u);  if (depth < kMaxDepth) unit_00AD(c, 83u, depth + 1u); else { c.pc = 0x003B4D28u; return; } if (c.pc != 0x003B3D58u) [[unlikely]] return; }
L_003B3D58:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15112u);
    set32(c.r[6], 0u + 32u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0] + 15152u), 0u);
    st32((c.r[10].w[0] + 15156u), c.r[2].w[0]);
    st32((c.r[7].w[0] + 15148u), 0u);
    st32((c.r[8].w[0] + 14848u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3D98u); st32((c.r[9].w[0] + 15144u), 0u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003B3D98u) [[unlikely]] return; }
L_003B3D98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + 14856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3DACu); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003B3DACu) [[unlikely]] return; }
L_003B3DAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[4].w[0] + 13824u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3DC0u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003B3DC0u) [[unlikely]] return; }
L_003B3DC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 12736u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1088u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003B3DE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B3DF0:
    c.r[3].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[4].w[0] + 2047u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    set32(c.r[3], c.r[2].w[0] << 11);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);  c.pc = t; return; }
L_003B3E18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[12], c.r[2].w[0] + 15144u);
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[12].w[0])));
    set32(c.r[9], c.r[10].w[0] << 1);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[11], c.r[11].w[0] + 15112u);
    set32(c.r[11], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[3].w[0] + 15u);
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] + 14856u);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 22;
    { const bool t = c.r[13].d[0] != 0ull; st32((c.r[12].w[0]), c.r[3].w[0]);  if (t) { goto L_003B3E88; } }
    c.r[2].d[0] = ld16((c.r[11].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003B3E90; } }
    c.budget -= 1;
L_003B3E88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[9], c.r[10].w[0] << 1);
    c.budget -= 2;
L_003B3E90:
    set32(c.r[3], ld32((c.r[12].w[0])));
    set32(c.r[4], c.r[4].w[0] + 15112u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st32((c.r[5].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[12].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003B3EC8:
    c.r[2].d[0] = 0ull | 50000ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 2;
L_003B3ED0:
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3ED0u | kUnwind; return; } goto L_003B3ED0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B3EF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B3F18; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 7024u);  if (t) { goto L_003B3F28; } }
    c.budget -= 1;
L_003B3F18:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B3F34; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 7080u);
    c.budget -= 2;
L_003B3F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3F30u);  if (depth < kMaxDepth) unit_00AC(c, 204u, depth + 1u); else { c.pc = 0x003B39F0u; return; } if (c.pc != 0x003B3F30u) [[unlikely]] return; }
L_003B3F30:
    set32(c.r[2], 0u - 3u);
    c.budget -= 1;
L_003B3F34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B3F40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B3F60; }
L_003B3F60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3F84u); set32(c.r[18], 0u + 3u);  if (depth < kMaxDepth) unit_00AC(c, 245u, depth + 1u); else { c.pc = 0x003B3FE0u; return; } if (c.pc != 0x003B3F84u) [[unlikely]] return; }
L_003B3F84:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003B3FA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B3FC8; } }
    c.budget -= 1;
L_003B3F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3FA0u);  if (depth < kMaxDepth) unit_00AD(c, 490u, depth + 1u); else { c.pc = 0x003B7FB0u; return; } if (c.pc != 0x003B3FA0u) [[unlikely]] return; }
L_003B3FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3FA8u);  if (depth < kMaxDepth) unit_00AC(c, 234u, depth + 1u); else { c.pc = 0x003B3EC8u; return; } if (c.pc != 0x003B3FA8u) [[unlikely]] return; }
L_003B3FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B3FB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 29u, depth + 1u); else { c.pc = 0x003B4438u; return; } if (c.pc != 0x003B3FB0u) [[unlikely]] return; }
L_003B3FB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003B3FC0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[3], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3F98u | kUnwind; return; } goto L_003B3F98; } }
L_003B3FC0:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003B3FC8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B3FE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u - 64u);
    set32(c.r[8], c.r[8].w[0] + 15312u);
    set32(c.r[9], 0u + 2048u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[8].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.budget -= 8;
    [[clang::musttail]] return unit_00AD(c, 1u, depth);
}

}
