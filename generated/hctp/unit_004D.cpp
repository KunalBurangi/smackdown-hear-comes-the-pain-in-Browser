#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004D[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0,
    23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 39, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0,
    0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110, 111,
    0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131,
    0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 147, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154,
    0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0,
    0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 209, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212,
    0, 213, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0,
    229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 0,
    0, 0, 244, 0, 245, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0,
    0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0,
    0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_004D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00234000;
    case 2u: goto L_00234010;
    case 3u: goto L_00234040;
    case 4u: goto L_002340B0;
    case 5u: goto L_0023416C;
    case 6u: goto L_002341C0;
    case 7u: goto L_002341CC;
    case 8u: goto L_00234250;
    case 9u: goto L_00234270;
    case 10u: goto L_0023427C;
    case 11u: goto L_00234290;
    case 12u: goto L_002342AC;
    case 13u: goto L_002342C4;
    case 14u: goto L_002342D0;
    case 15u: goto L_002342E4;
    case 16u: goto L_00234300;
    case 17u: goto L_00234318;
    case 18u: goto L_00234324;
    case 19u: goto L_00234338;
    case 20u: goto L_00234354;
    case 21u: goto L_00234368;
    case 22u: goto L_00234374;
    case 23u: goto L_00234380;
    case 24u: goto L_00234394;
    case 25u: goto L_002343B0;
    case 26u: goto L_002343C8;
    case 27u: goto L_002343D4;
    case 28u: goto L_002343E0;
    case 29u: goto L_00234400;
    case 30u: goto L_0023442C;
    case 31u: goto L_00234444;
    case 32u: goto L_0023445C;
    case 33u: goto L_00234474;
    case 34u: goto L_00234488;
    case 35u: goto L_00234530;
    case 36u: goto L_0023453C;
    case 37u: goto L_00234558;
    case 38u: goto L_00234570;
    case 39u: goto L_00234574;
    case 40u: goto L_002345B0;
    case 41u: goto L_002345E8;
    case 42u: goto L_00234610;
    case 43u: goto L_00234620;
    case 44u: goto L_00234634;
    case 45u: goto L_00234668;
    case 46u: goto L_002346DC;
    case 47u: goto L_00234734;
    case 48u: goto L_002347B8;
    case 49u: goto L_00234828;
    case 50u: goto L_00234838;
    case 51u: goto L_00234A1C;
    case 52u: goto L_00234AC4;
    case 53u: goto L_00234ADC;
    case 54u: goto L_00234AF4;
    case 55u: goto L_00234B0C;
    case 56u: goto L_00234B24;
    case 57u: goto L_00234BFC;
    case 58u: goto L_00234C88;
    case 59u: goto L_00234CBC;
    case 60u: goto L_00234CC4;
    case 61u: goto L_00234D64;
    case 62u: goto L_00234E80;
    case 63u: goto L_00235010;
    case 64u: goto L_00235030;
    case 65u: goto L_00235040;
    case 66u: goto L_00235060;
    case 67u: goto L_00235080;
    case 68u: goto L_00235088;
    case 69u: goto L_00235098;
    case 70u: goto L_002350AC;
    case 71u: goto L_002350D8;
    case 72u: goto L_00235114;
    case 73u: goto L_00235150;
    case 74u: goto L_00235180;
    case 75u: goto L_002351A0;
    case 76u: goto L_002351C0;
    case 77u: goto L_002351D4;
    case 78u: goto L_00235220;
    case 79u: goto L_00235228;
    case 80u: goto L_00235238;
    case 81u: goto L_00235280;
    case 82u: goto L_00235294;
    case 83u: goto L_002352B8;
    case 84u: goto L_002352EC;
    case 85u: goto L_00235330;
    case 86u: goto L_00235368;
    case 87u: goto L_002353A0;
    case 88u: goto L_002353F0;
    case 89u: goto L_0023540C;
    case 90u: goto L_00235420;
    case 91u: goto L_00235430;
    case 92u: goto L_00235440;
    case 93u: goto L_00235450;
    case 94u: goto L_00235460;
    case 95u: goto L_00235470;
    case 96u: goto L_00235484;
    case 97u: goto L_00235490;
    case 98u: goto L_0023549C;
    case 99u: goto L_002354C8;
    case 100u: goto L_002354E8;
    case 101u: goto L_00235508;
    case 102u: goto L_00235528;
    case 103u: goto L_00235548;
    case 104u: goto L_0023555C;
    case 105u: goto L_0023556C;
    case 106u: goto L_002355B8;
    case 107u: goto L_002355C0;
    case 108u: goto L_002355D8;
    case 109u: goto L_002355E0;
    case 110u: goto L_002355F8;
    case 111u: goto L_002355FC;
    case 112u: goto L_0023561C;
    case 113u: goto L_0023563C;
    case 114u: goto L_00235674;
    case 115u: goto L_002356A0;
    case 116u: goto L_002356AC;
    case 117u: goto L_002356C0;
    case 118u: goto L_00235710;
    case 119u: goto L_00235738;
    case 120u: goto L_00235754;
    case 121u: goto L_0023577C;
    case 122u: goto L_002357A4;
    case 123u: goto L_002357B0;
    case 124u: goto L_002357C4;
    case 125u: goto L_002357E0;
    case 126u: goto L_00235810;
    case 127u: goto L_00235834;
    case 128u: goto L_0023584C;
    case 129u: goto L_00235864;
    case 130u: goto L_00235870;
    case 131u: goto L_0023587C;
    case 132u: goto L_00235888;
    case 133u: goto L_00235894;
    case 134u: goto L_002358AC;
    case 135u: goto L_002358D0;
    case 136u: goto L_002358F0;
    case 137u: goto L_00235918;
    case 138u: goto L_00235950;
    case 139u: goto L_002359A0;
    case 140u: goto L_002359B4;
    case 141u: goto L_002359BC;
    case 142u: goto L_002359CC;
    case 143u: goto L_002359E0;
    case 144u: goto L_00235A28;
    case 145u: goto L_00235A40;
    case 146u: goto L_00235A5C;
    case 147u: goto L_00235A88;
    case 148u: goto L_00235A90;
    case 149u: goto L_00235AA4;
    case 150u: goto L_00235B20;
    case 151u: goto L_00235B2C;
    case 152u: goto L_00235B34;
    case 153u: goto L_00235B3C;
    case 154u: goto L_00235B7C;
    case 155u: goto L_00235B84;
    case 156u: goto L_00235B9C;
    case 157u: goto L_00235BBC;
    case 158u: goto L_00235C18;
    case 159u: goto L_00235CF4;
    case 160u: goto L_00235D28;
    case 161u: goto L_00235D4C;
    case 162u: goto L_00235E14;
    case 163u: goto L_00235F1C;
    case 164u: goto L_00235F4C;
    case 165u: goto L_00236010;
    case 166u: goto L_00236118;
    case 167u: goto L_00236144;
    case 168u: goto L_00236208;
    case 169u: goto L_00236310;
    case 170u: goto L_00236478;
    case 171u: goto L_00236550;
    case 172u: goto L_00236688;
    case 173u: goto L_002366B8;
    case 174u: goto L_00236780;
    case 175u: goto L_002367B8;
    case 176u: goto L_002367E8;
    case 177u: goto L_0023683C;
    case 178u: goto L_002369DC;
    case 179u: goto L_00236A28;
    case 180u: goto L_00236A78;
    case 181u: goto L_00236AA8;
    case 182u: goto L_00236D20;
    case 183u: goto L_00236D64;
    case 184u: goto L_00236D78;
    case 185u: goto L_00236DCC;
    case 186u: goto L_00236E2C;
    case 187u: goto L_00236E58;
    case 188u: goto L_00236EE0;
    case 189u: goto L_00236F00;
    case 190u: goto L_00236F2C;
    case 191u: goto L_00236FD0;
    case 192u: goto L_002371AC;
    case 193u: goto L_002371CC;
    case 194u: goto L_00237220;
    case 195u: goto L_002372BC;
    case 196u: goto L_002372D0;
    case 197u: goto L_002372FC;
    case 198u: goto L_00237324;
    case 199u: goto L_0023739C;
    case 200u: goto L_002373B0;
    case 201u: goto L_002373DC;
    case 202u: goto L_00237404;
    case 203u: goto L_00237478;
    case 204u: goto L_0023748C;
    case 205u: goto L_002374B8;
    case 206u: goto L_002374E0;
    case 207u: goto L_002374F4;
    case 208u: goto L_00237500;
    case 209u: goto L_00237520;
    case 210u: goto L_00237524;
    case 211u: goto L_00237648;
    case 212u: goto L_0023767C;
    case 213u: goto L_00237684;
    case 214u: goto L_00237698;
    case 215u: goto L_002376A0;
    case 216u: goto L_002376B8;
    case 217u: goto L_002376CC;
    case 218u: goto L_002376D8;
    case 219u: goto L_002376E0;
    case 220u: goto L_00237720;
    case 221u: goto L_0023777C;
    case 222u: goto L_0023784C;
    case 223u: goto L_00237888;
    case 224u: goto L_002378C0;
    case 225u: goto L_002378E0;
    case 226u: goto L_002378E8;
    case 227u: goto L_002378F0;
    case 228u: goto L_002378F8;
    case 229u: goto L_00237900;
    case 230u: goto L_00237908;
    case 231u: goto L_00237910;
    case 232u: goto L_00237918;
    case 233u: goto L_00237920;
    case 234u: goto L_00237928;
    case 235u: goto L_00237930;
    case 236u: goto L_00237938;
    case 237u: goto L_00237940;
    case 238u: goto L_00237948;
    case 239u: goto L_00237950;
    case 240u: goto L_00237958;
    case 241u: goto L_00237960;
    case 242u: goto L_00237968;
    case 243u: goto L_00237970;
    case 244u: goto L_00237988;
    case 245u: goto L_00237990;
    case 246u: goto L_0023799C;
    case 247u: goto L_002379A4;
    case 248u: goto L_002379C0;
    case 249u: goto L_00237A1C;
    case 250u: goto L_00237A2C;
    case 251u: goto L_00237A50;
    case 252u: goto L_00237A64;
    case 253u: goto L_00237A74;
    case 254u: goto L_00237A84;
    case 255u: goto L_00237A94;
    case 256u: goto L_00237AA8;
    case 257u: goto L_00237AD0;
    case 258u: goto L_00237B00;
    case 259u: goto L_00237B4C;
    case 260u: goto L_00237B78;
    case 261u: goto L_00237B94;
    case 262u: goto L_00237BA4;
    case 263u: goto L_00237BB4;
    case 264u: goto L_00237BC4;
    case 265u: goto L_00237BDC;
    case 266u: goto L_00237C00;
    case 267u: goto L_00237C4C;
    case 268u: goto L_00237C98;
    case 269u: goto L_00237CE4;
    case 270u: goto L_00237D30;
    case 271u: goto L_00237D7C;
    case 272u: goto L_00237DFC;
    case 273u: goto L_00237E50;
    case 274u: goto L_00237E9C;
    case 275u: goto L_00237EB0;
    case 276u: goto L_00237F08;
    case 277u: goto L_00237F18;
    case 278u: goto L_00237F28;
    case 279u: goto L_00237F3C;
    case 280u: goto L_00237F74;
    case 281u: goto L_00237F84;
    case 282u: goto L_00237F94;
    case 283u: goto L_00237FA8;
    default: bad_entry(c, 0x00234000u); return;
    }
L_00234000:
    st16((c.r[20].w[0] + 118u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 120u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 122u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00234088; } }
L_00234010:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[20].w[0] + 38u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 42u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 44u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 40u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 32u), 0u);
    st16((c.r[20].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st32((c.r[20].w[0] + 56u), 0u);
    c.budget -= 12;
L_00234040:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st16((c.r[4].w[0] + 62u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[4].w[0] + 70u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00234040u | kUnwind; return; } goto L_00234040; } }
    st32((c.r[20].w[0] + 80u), 0u);
    st16((c.r[20].w[0] + 88u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 90u), static_cast<std::uint16_t>(0u));
    st8((c.r[20].w[0] + 92u), static_cast<std::uint8_t>(0u));
    st16((c.r[20].w[0] + 94u), static_cast<std::uint16_t>(0u));
    st32((c.r[20].w[0] + 104u), 0u);
    st32((c.r[20].w[0] + 112u), 0u);
    st16((c.r[20].w[0] + 116u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 118u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 120u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 122u), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
L_00234088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002340B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[5].w[0] << 5);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[5].w[0] + 19608u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[5].w[0] + 8384u);
    set32(c.r[6], c.r[5].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[9], c.r[6].w[0] + 256u);
    set32(c.r[5], c.r[5].w[0] + 8650u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[7], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[5], 0u + 25500u);
    c.budget -= 23;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[16], c.r[7].w[0] + 18580u);  if (t) { goto L_002341A4; } }
    set32(c.r[6], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00234138; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 18577u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00234138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), 0u);  if (t) { goto L_002341A4; } }
L_00234138:
    c.r[5].d[0] = ld8((c.r[9].w[0] + 8u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00234154; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_002341A4; } }
L_00234154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023416Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x0023416Cu) [[unlikely]] return; }
L_0023416C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00234180; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] | 8ull;  if (t) { goto L_00234184; } }
L_00234180:
    set32(c.r[3], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 1;
L_00234184:
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023419C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_002341A4; } }
L_0023419C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 2;
L_002341A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002341C0:
    st32((c.r[4].w[0] + 19324u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 19328u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002341CC:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[5].w[0] + 19332u), 0u);
    c.r[3].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0] + 19356u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002341CCu | kUnwind; return; } goto L_002341CC; } }
    st32((c.r[4].w[0] + 19380u), 0u);
    st8((c.r[4].w[0] + 19384u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 19392u), 0u);
    st8((c.r[4].w[0] + 19396u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 19404u), 0u);
    st32((c.r[4].w[0] + 19408u), 0u);
    st32((c.r[4].w[0] + 19412u), 0u);
    st8((c.r[4].w[0] + 19416u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 19428u), 0u);
    st8((c.r[4].w[0] + 19432u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 19440u), 0u);
    st8((c.r[4].w[0] + 19444u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 19452u), 0u);
    st8((c.r[4].w[0] + 19456u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 19464u), 0u);
    st8((c.r[4].w[0] + 19468u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 19476u), 0u);
    st8((c.r[4].w[0] + 19480u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 19488u), 0u);
    st8((c.r[4].w[0] + 19492u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 19496u), 0u);
    st32((c.r[4].w[0] + 19500u), 0u);
    st8((c.r[4].w[0] + 19504u), static_cast<std::uint8_t>(0u));
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 19508u), 0u);  c.pc = t; return; }
L_00234250:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234270u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x00234270u) [[unlikely]] return; }
L_00234270:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023427Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0023427Cu) [[unlikely]] return; }
L_0023427C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_00234298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234290u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x00234290u) [[unlikely]] return; }
L_00234290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002342A0; } }
L_00234298:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002342A0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002342ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x002342ACu) [[unlikely]] return; }
L_002342AC:
    set32(c.r[25], ld32((c.r[16].w[0] + 152u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002342C4u); set32(c.r[4], c.r[16].w[0] + 152u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002342C4u) [[unlikely]] return; }
L_002342C4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002342D0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002342D0u) [[unlikely]] return; }
L_002342D0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_002342EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002342E4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x002342E4u) [[unlikely]] return; }
L_002342E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002342F4; } }
L_002342EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002342F4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234300u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x00234300u) [[unlikely]] return; }
L_00234300:
    set32(c.r[25], ld32((c.r[16].w[0] + 80u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00234318u); set32(c.r[4], c.r[16].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00234318u) [[unlikely]] return; }
L_00234318:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234324u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00234324u) [[unlikely]] return; }
L_00234324:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_00234340; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234338u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x00234338u) [[unlikely]] return; }
L_00234338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00234348; } }
L_00234340:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00234348:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234354u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x00234354u) [[unlikely]] return; }
L_00234354:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234368u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x00234368u) [[unlikely]] return; }
L_00234368:
    set32(c.r[4], c.r[16].w[0] + 17944u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234374u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0029(c, 313u, depth + 1u); else { c.pc = 0x001A7B60u; return; } if (c.pc != 0x00234374u) [[unlikely]] return; }
L_00234374:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234380u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00234380u) [[unlikely]] return; }
L_00234380:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_0023439C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234394u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x00234394u) [[unlikely]] return; }
L_00234394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002343A4; } }
L_0023439C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002343A4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002343B0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x002343B0u) [[unlikely]] return; }
L_002343B0:
    set32(c.r[25], ld32((c.r[16].w[0] + 18336u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002343C8u); set32(c.r[4], c.r[16].w[0] + 18336u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002343C8u) [[unlikely]] return; }
L_002343C8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002343D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x002343D4u) [[unlikely]] return; }
L_002343D4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002343E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x002343E0u) [[unlikely]] return; }
L_002343E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00234400:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023442Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0023442Cu) [[unlikely]] return; }
L_0023442C:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00234488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234444u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00234444u) [[unlikely]] return; }
L_00234444:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 58u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00234484; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023445Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0023445Cu) [[unlikely]] return; }
L_0023445C:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 59u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00234484; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234474u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00234474u) [[unlikely]] return; }
L_00234474:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00234574; } }
L_00234484:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00234488:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_00234540; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 19608u)));
    set32(c.r[3], c.r[18].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] << 5);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 266u));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] + 18580u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 18616u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002344E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00234510; } }
L_002344E4:
    set32(c.r[2], 0u + 25500u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00234510; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 264u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_00234514; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00234510; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00234510:
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 1;
L_00234514:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00234540; } }
    set32(c.r[19], ld32((c.r[17].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234530u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 464u, depth + 1u); else { c.pc = 0x00233E60u; return; } if (c.pc != 0x00234530u) [[unlikely]] return; }
L_00234530:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023453Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 219u, depth + 1u); else { c.pc = 0x0023B290u; return; } if (c.pc != 0x0023453Cu) [[unlikely]] return; }
L_0023453C:
    st32((c.r[17].w[0] + 56u), c.r[19].w[0]);
    c.budget -= 1;
L_00234540:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00234488u | kUnwind; return; } goto L_00234488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234558u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00234558u) [[unlikely]] return; }
L_00234558:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00234570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234570u);  if (depth < kMaxDepth) unit_004D(c, 66u, depth + 1u); else { c.pc = 0x00235060u; return; } if (c.pc != 0x00234570u) [[unlikely]] return; }
L_00234570:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00234574:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_00234620; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 19608u)));
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002345B0u); set32(c.r[19], c.r[2].w[0] + 18580u);  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x002345B0u) [[unlikely]] return; }
L_002345B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002345C4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 8ull;  if (t) { goto L_002345C8; } }
L_002345C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 1;
L_002345C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 94u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00234620; } }
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002345E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x002345E8u) [[unlikely]] return; }
L_002345E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002345FC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 8ull;  if (t) { goto L_00234600; } }
L_002345FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 1;
L_00234600:
    st16((c.r[19].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234610u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 4u, depth + 1u); else { c.pc = 0x002340B0u; return; } if (c.pc != 0x00234610u) [[unlikely]] return; }
L_00234610:
    set32(c.r[6], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234620u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 220u, depth + 1u); else { c.pc = 0x00237720u; return; } if (c.pc != 0x00234620u) [[unlikely]] return; }
L_00234620:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00234574u | kUnwind; return; } goto L_00234574; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00234634:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 19608u)));
    set32(c.r[3], c.r[4].w[0] << 5);
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 18672u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 18660u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00234634u | kUnwind; return; } goto L_00234634; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00234668:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 19608u)));
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[20], c.r[2].w[0] + 18580u);  if (t) { goto L_002347A0; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 901u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002347A0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002347A0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 912u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[4].w[0] + 19608u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00234708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002346DCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x002346DCu) [[unlikely]] return; }
L_002346DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002346F0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 8ull;  if (t) { goto L_002346F4; } }
L_002346F0:
    set32(c.r[2], ld32((c.r[19].w[0] + 468u)));
    c.budget -= 1;
L_002346F4:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] << 5);  if (t) { goto L_0023470C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0023475C; } }
L_00234708:
    set32(c.r[3], c.r[18].w[0] << 5);
    c.budget -= 1;
L_0023470C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 18612u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023475C; } }
    set32(c.r[22], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234734u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x00234734u) [[unlikely]] return; }
L_00234734:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00234748; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 8ull;  if (t) { goto L_0023474C; } }
L_00234748:
    set32(c.r[2], ld32((c.r[22].w[0] + 468u)));
    c.budget -= 1;
L_0023474C:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023475C; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0023475C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002347A0; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0; st8((c.r[20].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002347A0; } }
    c.r[1].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002347A0; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 901u));
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 18660u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 902u));
    st16((c.r[3].w[0] + 18664u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 903u));
    st16((c.r[3].w[0] + 18666u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
L_002347A0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00234668u | kUnwind; return; } goto L_00234668; } }
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[20].w[0] << 2);
    c.budget -= 2;
L_002347B8:
    set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 19608u)));
    set32(c.r[2], c.r[19].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[2].w[0] + 18580u);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002349E4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002349E4; } }
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002349B8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 38u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 684u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00234848; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 31448u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 18336u);  if (t) { goto L_00234830; } }
    set32(c.r[4], c.r[16].w[0] + 18336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234828u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 117u, depth + 1u); else { c.pc = 0x00298F00u; return; } if (c.pc != 0x00234828u) [[unlikely]] return; }
L_00234828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 19440u)));  if (t) { goto L_0023483C; } }
L_00234830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234838u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0066(c, 117u, depth + 1u); else { c.pc = 0x00298F00u; return; } if (c.pc != 0x00234838u) [[unlikely]] return; }
L_00234838:
    set32(c.r[2], ld32((c.r[16].w[0] + 19440u)));
    c.budget -= 1;
L_0023483C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00234848; } }
    st32((c.r[16].w[0] + 19440u), c.r[2].w[0]);
    c.budget -= 1;
L_00234848:
    set32(c.r[2], ld32((c.r[17].w[0] + 684u)));
    st16((c.r[18].w[0] + 38u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 688u)));
    st16((c.r[18].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 42u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 692u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00234870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00234874; } }
L_00234870:
    st8((c.r[18].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00234874:
    set32(c.r[2], ld32((c.r[17].w[0] + 692u)));
    st16((c.r[18].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 696u)));
    st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 684u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 46u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002348B0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 48u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002348B0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[18].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002348B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 684u)));
    set32(c.r[2], 0u + 1u);
    st16((c.r[18].w[0] + 46u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002348DC; } }
    c.r[3].d[0] = ld64((c.r[17].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_002348DC:
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[7].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[6].w[0] + 19356u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[5], c.r[6].w[0] + 19356u);  if (t) { goto L_00234914; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 92u));
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[7].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_00234914; } }
    c.r[7].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_00234914:
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00234938; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 19332u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00234938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_00234958; } }
L_00234938:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00234958; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 19332u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00234958; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00234958:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31480u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002349AC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 566u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00234988; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002349AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_002349AC; } }
L_00234988:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002349A8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002349AC; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002349A8:
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_002349AC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 371u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002349E4; } }
L_002349B8:
    st16((c.r[18].w[0] + 38u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[19].w[0] << 2);
    st16((c.r[18].w[0] + 40u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[18].w[0] + 42u), static_cast<std::uint16_t>(0u));
    st8((c.r[18].w[0] + 52u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0] + 19332u), 0u);
    st32((c.r[3].w[0] + 19356u), 0u);
    st16((c.r[18].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
L_002349E4:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002347B8u | kUnwind; return; } goto L_002347B8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[9], 0u + 2u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[8], c.r[8].w[0] + 8384u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u + 30u);
    set32(c.r[10], 0u + 1u);
    set32(c.r[12], c.r[2].w[0] << 2);
    c.budget -= 10;
L_00234A1C:
    set32(c.r[3], c.r[16].w[0] + c.r[12].w[0]);
    set32(c.r[11], ld32((c.r[3].w[0] + 19608u)));
    set32(c.r[3], c.r[11].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[11].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[11], c.r[3].w[0] + 18580u);
    set32(c.r[3], ld32((c.r[3].w[0] + 18676u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[10].d[0];  if (t) { goto L_00234A4C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[9].d[0];  if (t) { goto L_00234A60; } }
L_00234A4C:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 692u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[11].w[0] + 100u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00234AAC; } }
L_00234A60:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_00234A78; } }
    set32(c.r[3], c.r[8].w[0] + c.r[12].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 876u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[11].w[0] + 100u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00234AAC; } }
L_00234A78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00234A94; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 31240u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[11].w[0] + 100u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00234AAC; } }
L_00234A94:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00234AAC; } }
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 692u)));
    st16((c.r[11].w[0] + 100u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00234AAC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[12], c.r[2].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00234A1Cu | kUnwind; return; } goto L_00234A1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234AC4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00234AC4u) [[unlikely]] return; }
L_00234AC4:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 74u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00234B34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234ADCu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00234ADCu) [[unlikely]] return; }
L_00234ADC:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 57u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00234B34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234AF4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00234AF4u) [[unlikely]] return; }
L_00234AF4:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 22u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00234B34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234B0Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00234B0Cu) [[unlikely]] return; }
L_00234B0C:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 58u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00234B34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234B24u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00234B24u) [[unlikely]] return; }
L_00234B24:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 85u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00234B64; } }
L_00234B34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 8392u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], ld32((c.r[1].w[0] + 31456u)));
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 30u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);  if (t) { goto L_00234B68; } }
L_00234B64:
    set32(c.r[6], ld32((c.r[1].w[0] + 31456u)));
    c.budget -= 1;
L_00234B68:
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[6].w[0], c.r[2].w[0]);  if (t) { goto L_00234B78; } }
    breakpoint(c, 0x00234B74u);
    c.budget -= 1;
L_00234B78:
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], 0u + 60u);
    set32(c.r[2], 0u + 3600u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[6].w[0], c.r[2].w[0]);  if (t) { goto L_00234BA0; } }
    breakpoint(c, 0x00234B9Cu);
    c.budget -= 1;
L_00234BA0:
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);  if (t) { goto L_00234BB4; } }
    breakpoint(c, 0x00234BB0u);
    c.budget -= 1;
L_00234BB4:
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    st32((c.r[16].w[0] + 19512u), c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 19516u), c.r[2].w[0]);  if (t) { goto L_00234BDC; } }
    breakpoint(c, 0x00234BD8u);
    c.budget -= 1;
L_00234BDC:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    st32((c.r[16].w[0] + 19520u), c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234BFCu); st32((c.r[16].w[0] + 19524u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0078(c, 83u, depth + 1u); else { c.pc = 0x002E0CC0u; return; } if (c.pc != 0x00234BFCu) [[unlikely]] return; }
L_00234BFC:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[4].d[0];  if (t) { goto L_00234D28; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 18312u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00234D28; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 19528u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00234D28; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 31472u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00234D28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31480u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00234C90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00234D14; } }
    set32(c.r[3], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[5], c.r[3].w[0] + 19552u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 19552u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00234D14; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], 0u + 400u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234C88u); st32((c.r[2].w[0] + 19564u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00234C88u) [[unlikely]] return; }
L_00234C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] & 255ull;  if (t) { goto L_00234D18; } }
L_00234C90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00234CB4; } }
    c.r[18].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 19560u), 0u);  if (t) { goto L_00234D14; } }
L_00234CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_00234D0C; } }
L_00234CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234CC4u);  if (depth < kMaxDepth) unit_003D(c, 84u, depth + 1u); else { c.pc = 0x001F5400u; return; } if (c.pc != 0x00234CC4u) [[unlikely]] return; }
L_00234CC4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00234D04; } }
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00234D04; } }
    st32((c.r[16].w[0] + 19560u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00234D14; } }
L_00234D04:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 2;
L_00234D0C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00234CBCu | kUnwind; return; } goto L_00234CBC; } }
L_00234D14:
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 1;
L_00234D18:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00234D2C; } }
    st32((c.r[16].w[0] + 18312u), c.r[3].w[0]);
    c.budget -= 1;
L_00234D28:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00234D2C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[4].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_00234D68; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 19528u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00234D68; } }
    set32(c.r[4], ld32((c.r[1].w[0] + 31472u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00234D68; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31480u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 18224u);  if (t) { goto L_00234D68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234D64u);  if (depth < kMaxDepth) unit_0068(c, 193u, depth + 1u); else { c.pc = 0x002A2DA0u; return; } if (c.pc != 0x00234D64u) [[unlikely]] return; }
L_00234D64:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00234D68:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], 0u - 1u);  if (t) { goto L_00234DD8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 19576u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00234DD4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 19568u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_00234DB8; } }
    st32((c.r[16].w[0] + 19568u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 19572u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_00234DA0; } }
    st32((c.r[16].w[0] + 19572u), c.r[3].w[0]);
    c.budget -= 1;
L_00234DA0:
    set32(c.r[5], ld32((c.r[16].w[0] + 18312u)));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[4], 0u + 6u);  if (t) { goto L_00234DD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 18312u), c.r[4].w[0]);  if (t) { goto L_00234DD4; } }
L_00234DB8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00234DD4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 18312u)));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[4], 0u + 6u);  if (t) { goto L_00234DD4; } }
    st32((c.r[16].w[0] + 18312u), c.r[4].w[0]);
    c.budget -= 1;
L_00234DD4:
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_00234DD8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00234E50; } }
    c.f[0] = ld32((c.r[16].w[0] + 18308u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00234E50; } }
    c.f[0] = ld32((c.r[16].w[0] + 18316u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00234E50; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 18304u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00234E50; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 18312u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00234E50; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 19576u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_00234E40; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 19576u), c.r[3].w[0]);  if (t) { goto L_00234E54; } }
L_00234E40:
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0] + 18304u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 19568u), c.r[3].w[0]);  if (t) { goto L_00234E54; } }
L_00234E50:
    st32((c.r[16].w[0] + 19576u), 0u);
    c.budget -= 1;
L_00234E54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00234E80:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_00234EAC; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0] + 19404u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 19408u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 19440u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00234FBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 19440u), c.r[3].w[0]);  if (t) { goto L_00234FBC; } }
L_00234EAC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00234ED4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 19452u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00234FBC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 19476u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00234FBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 19444u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00234FBC; } }
L_00234ED4:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_00234EF0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 19416u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 19424u), c.r[7].w[0]);  if (t) { goto L_00234FBC; } }
L_00234EF0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[7], 0u + 3u);  if (t) { goto L_00234F14; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[4].w[0] + 19432u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 19428u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00234FBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 19428u), c.r[5].w[0]);  if (t) { goto L_00234FBC; } }
L_00234F14:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[7].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_00234F3C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 19452u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00234FBC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 19476u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00234FBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 19396u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00234FBC; } }
L_00234F3C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00234F54; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 19480u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 19528u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00234FBC; } }
L_00234F54:
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00234F70; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 19456u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 19528u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00234FBC; } }
L_00234F70:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00234F84; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 19384u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00234FBC; } }
L_00234F84:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_00234FAC; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0] + 19488u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 19500u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00234FBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 19500u), c.r[7].w[0]);  if (t) { goto L_00234FBC; } }
L_00234FAC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00234FBC; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 19504u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00234FBC:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 19456u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 19480u));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00235000; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 19440u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00234FE0; } }
    st32((c.r[4].w[0] + 19440u), c.r[3].w[0]);
    c.budget -= 1;
L_00234FE0:
    set32(c.r[3], ld32((c.r[4].w[0] + 19500u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00234FF0; } }
    st32((c.r[4].w[0] + 19500u), c.r[3].w[0]);
    c.budget -= 1;
L_00234FF0:
    set32(c.r[3], ld32((c.r[4].w[0] + 19392u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00235000; } }
    st32((c.r[4].w[0] + 19392u), c.r[3].w[0]);
    c.budget -= 1;
L_00235000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00235010:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 19580u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 10u);
    st32((c.r[4].w[0] + 19584u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 19588u), 0u);  c.pc = t; return; }
L_00235030:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 19580u));  c.pc = t; return; }
L_00235040:
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 19592u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    st32((c.r[4].w[0] + 19596u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 19600u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 19604u), 0u);  c.pc = t; return; }
L_00235060:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00235148; } }
L_00235080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235088u);  if (depth < kMaxDepth) unit_003D(c, 84u, depth + 1u); else { c.pc = 0x001F5400u; return; } if (c.pc != 0x00235088u) [[unlikely]] return; }
L_00235088:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0] + 80u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235098u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 74u, depth + 1u); else { c.pc = 0x00235180u; return; } if (c.pc != 0x00235098u) [[unlikely]] return; }
L_00235098:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023510C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002350ACu);  if (depth < kMaxDepth) unit_003D(c, 84u, depth + 1u); else { c.pc = 0x001F5400u; return; } if (c.pc != 0x002350ACu) [[unlikely]] return; }
L_002350AC:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 80u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 18148u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00235144; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002350D8u);  if (depth < kMaxDepth) unit_003D(c, 84u, depth + 1u); else { c.pc = 0x001F5400u; return; } if (c.pc != 0x002350D8u) [[unlikely]] return; }
L_002350D8:
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 80u));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 18148u), c.r[16].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 18156u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00235144; } }
L_0023510C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235114u);  if (depth < kMaxDepth) unit_003D(c, 84u, depth + 1u); else { c.pc = 0x001F5400u; return; } if (c.pc != 0x00235114u) [[unlikely]] return; }
L_00235114:
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 80u));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 18148u), 0u);
    st8((c.r[2].w[0] + 18156u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
L_00235144:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00235148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235150u);  if (depth < kMaxDepth) unit_003D(c, 84u, depth + 1u); else { c.pc = 0x001F5400u; return; } if (c.pc != 0x00235150u) [[unlikely]] return; }
L_00235150:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 7u));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00235080u | kUnwind; return; } goto L_00235080; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00235180:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00235200; } }
L_002351A0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002351FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002351C0u);  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x002351C0u) [[unlikely]] return; }
L_002351C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002351FC; } }
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002351D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x002351D4u) [[unlikely]] return; }
L_002351D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002351E8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 8ull;  if (t) { goto L_002351EC; } }
L_002351E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 468u)));
    c.budget -= 1;
L_002351EC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002351FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00235260; } }
L_002351FC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00235200:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002351A0u | kUnwind; return; } goto L_002351A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], c.r[17].w[0] << 1);
    set32(c.r[2], ld32((c.r[1].w[0] + 31240u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + 1u);  if (t) { goto L_00235254; } }
L_00235220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235228u);  if (depth < kMaxDepth) unit_003D(c, 84u, depth + 1u); else { c.pc = 0x001F5400u; return; } if (c.pc != 0x00235228u) [[unlikely]] return; }
L_00235228:
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235238u); c.r[18].d[0] = ld16((c.r[2].w[0] + 8u));  if (depth < kMaxDepth) unit_003D(c, 84u, depth + 1u); else { c.pc = 0x001F5400u; return; } if (c.pc != 0x00235238u) [[unlikely]] return; }
L_00235238:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 68u));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00235250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00235260; } }
L_00235250:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00235254:
    c.r[2].d[0] = c.r[17].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00235220u | kUnwind; return; } goto L_00235220; } }
L_00235260:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00235280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
L_00235294:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 19608u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00235294u | kUnwind; return; } goto L_00235294; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002352B8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002352B8u) [[unlikely]] return; }
L_002352B8:
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002352E4; } }
    st32((c.r[16].w[0] + 19608u), 0u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[16].w[0] + 19612u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 19616u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 19620u), c.r[3].w[0]);  if (t) { goto L_002353DC; } }
L_002352E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002352ECu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002352ECu) [[unlikely]] return; }
L_002352EC:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00235328; } }
    st32((c.r[16].w[0] + 19608u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 19612u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 19616u), c.r[3].w[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 19620u), c.r[3].w[0]);
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 19624u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 19628u), c.r[3].w[0]);  if (t) { goto L_002353DC; } }
L_00235328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235330u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00235330u) [[unlikely]] return; }
L_00235330:
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00235360; } }
    st32((c.r[16].w[0] + 19608u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 19612u), c.r[3].w[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 19616u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 19620u), c.r[3].w[0]);  if (t) { goto L_002353DC; } }
L_00235360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235368u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00235368u) [[unlikely]] return; }
L_00235368:
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00235398; } }
    st32((c.r[16].w[0] + 19608u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 19612u), c.r[3].w[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 19616u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 19620u), c.r[3].w[0]);  if (t) { goto L_002353DC; } }
L_00235398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002353A0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002353A0u) [[unlikely]] return; }
L_002353A0:
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002353DC; } }
    st32((c.r[16].w[0] + 19608u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 19612u), c.r[3].w[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 19616u), c.r[3].w[0]);
    set32(c.r[3], 0u + 5u);
    st32((c.r[16].w[0] + 19620u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 19624u), c.r[3].w[0]);
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 19628u), c.r[3].w[0]);
    c.budget -= 11;
L_002353DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002353F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 18388u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023540C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023540Cu); set32(c.r[4], c.r[4].w[0] + 18336u);  if (depth < kMaxDepth) unit_0066(c, 135u, depth + 1u); else { c.pc = 0x00299360u; return; } if (c.pc != 0x0023540Cu) [[unlikely]] return; }
L_0023540C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00235420:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00233D70u | kUnwind; return; } [[clang::musttail]] return unit_004C(c, 453u, depth); }
L_00235430:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00234400u | kUnwind; return; } goto L_00234400; }
L_00235440:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00233D70u | kUnwind; return; } [[clang::musttail]] return unit_004C(c, 453u, depth); }
L_00235450:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002353F0u | kUnwind; return; } goto L_002353F0; }
L_00235460:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00233D70u | kUnwind; return; } [[clang::musttail]] return unit_004C(c, 453u, depth); }
L_00235470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235484u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x00235484u) [[unlikely]] return; }
L_00235484:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235490u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00235490u) [[unlikely]] return; }
L_00235490:
    set32(c.r[4], c.r[16].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023549Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0023549Cu) [[unlikely]] return; }
L_0023549C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 4032u);
    set32(c.r[3], c.r[3].w[0] - 4016u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 72u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 4000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002354C8u); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004C(c, 401u, depth + 1u); else { c.pc = 0x00233780u; return; } if (c.pc != 0x002354C8u) [[unlikely]] return; }
L_002354C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00150000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[4], c.r[16].w[0] + 3840u);
    set32(c.r[5], c.r[5].w[0] - 28672u);
    set32(c.r[6], c.r[6].w[0] - 28624u);
    set32(c.r[7], 0u + 80u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002354E8u); set32(c.r[8], 0u + 18u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x002354E8u) [[unlikely]] return; }
L_002354E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00140000u);
    set32(c.r[4], c.r[16].w[0] + 5280u);
    set32(c.r[5], c.r[5].w[0] - 8080u);
    set32(c.r[6], c.r[6].w[0] - 20016u);
    set32(c.r[7], 0u + 256u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235508u); set32(c.r[8], 0u + 21u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x00235508u) [[unlikely]] return; }
L_00235508:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[4], c.r[16].w[0] + 10656u);
    set32(c.r[5], c.r[5].w[0] + 2000u);
    set32(c.r[6], c.r[6].w[0] + 2144u);
    set32(c.r[7], 0u + 368u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235528u); set32(c.r[8], 0u + 19u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x00235528u) [[unlikely]] return; }
L_00235528:
    st32((c.r[16].w[0] + 17852u), 0u);
    set32(c.r[3], 0u + 4096u);
    st32((c.r[16].w[0] + 17856u), 0u);
    set32(c.r[2], 0u + 6655u);
    st32((c.r[16].w[0] + 17860u), 0u);
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235548u); st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00235548u) [[unlikely]] return; }
L_00235548:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 17864u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023555Cu); set32(c.r[6], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_002A(c, 7u, depth + 1u); else { c.pc = 0x001A80E0u; return; } if (c.pc != 0x0023555Cu) [[unlikely]] return; }
L_0023555C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023556Cu); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x0023556Cu) [[unlikely]] return; }
L_0023556C:
    set32(c.r[3], 0u + 6208u);
    set32(c.r[2], 0u + 16320u);
    st32((c.r[16].w[0] + 18048u), c.r[3].w[0]);
    set32(c.r[7], 0u + 8128u);
    st32((c.r[16].w[0] + 18052u), c.r[2].w[0]);
    set32(c.r[6], 0u + 16344u);
    set32(c.r[8], ld32((c.r[16].w[0] + 18048u)));
    set32(c.r[3], 0u + 16350u);
    set32(c.r[2], 0u + 16383u);
    set32(c.r[4], c.r[16].w[0] + 17864u);
    set32(c.r[5], c.r[29].w[0] + 36u);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    st32((c.r[16].w[0] + 18056u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 18052u)));
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    st32((c.r[16].w[0] + 18060u), c.r[6].w[0]);
    st16((c.r[29].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002355B8u); st16((c.r[29].w[0] + 38u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0029(c, 350u, depth + 1u); else { c.pc = 0x001A7FD0u; return; } if (c.pc != 0x002355B8u) [[unlikely]] return; }
L_002355B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002355C0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002355C0u) [[unlikely]] return; }
L_002355C0:
    set32(c.r[25], ld32((c.r[16].w[0] + 72u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 72u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002355D8u); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002355D8u) [[unlikely]] return; }
L_002355D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002355E0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002355E0u) [[unlikely]] return; }
L_002355E0:
    set32(c.r[25], ld32((c.r[16].w[0] + 72u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 72u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002355F8u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002355F8u) [[unlikely]] return; }
L_002355F8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002355FC:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 3080u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 189ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002355FCu | kUnwind; return; } goto L_002355FC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023561C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 17944u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023561Cu | kUnwind; return; } goto L_0023561C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023563C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 17648u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023563Cu | kUnwind; return; } goto L_0023563C; } }
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 255u);
    st8((c.r[16].w[0] + 53u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 7;
L_00235674:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 18068u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 18072u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00235674u | kUnwind; return; } goto L_00235674; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002356A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 198u, depth + 1u); else { c.pc = 0x0023AF20u; return; } if (c.pc != 0x002356A0u) [[unlikely]] return; }
L_002356A0:
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002356ACu); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002356ACu) [[unlikely]] return; }
L_002356AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002356C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002358AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 4032u);
    set32(c.r[3], c.r[3].w[0] - 4016u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 4000u);
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 11;
L_00235710:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 17944u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 17944u);  if (t) { goto L_0023573C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00235738; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00235738u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00235738u) [[unlikely]] return; }
L_00235738:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_0023573C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00235710u | kUnwind; return; } goto L_00235710; } }
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 2;
L_00235754:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 3080u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 3080u);  if (t) { goto L_00235780; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023577C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023577Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023577Cu) [[unlikely]] return; }
L_0023577C:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00235780:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 189ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00235754u | kUnwind; return; } goto L_00235754; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 17848u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002357A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002357A4u);  if (depth < kMaxDepth) unit_001F(c, 476u, depth + 1u); else { c.pc = 0x0017FD40u; return; } if (c.pc != 0x002357A4u) [[unlikely]] return; }
L_002357A4:
    st32((c.r[18].w[0] + 17848u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 5);
    c.budget -= 3;
L_002357B0:
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002357C4u); set32(c.r[4], c.r[2].w[0] + 104u);  if (depth < kMaxDepth) unit_004C(c, 390u, depth + 1u); else { c.pc = 0x002335E0u; return; } if (c.pc != 0x002357C4u) [[unlikely]] return; }
L_002357C4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002357B0u | kUnwind; return; } goto L_002357B0; } }
    set32(c.r[4], c.r[18].w[0] + 17864u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002357E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 11u, depth + 1u); else { c.pc = 0x001A8150u; return; } if (c.pc != 0x002357E0u) [[unlikely]] return; }
L_002357E0:
    set32(c.r[2], c.r[18].w[0] + 17852u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023581C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023581C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 17852u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023581C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_00235810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235810u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00235810u) [[unlikely]] return; }
L_00235810:
    st32((c.r[18].w[0] + 17860u), 0u);
    st32((c.r[18].w[0] + 17856u), 0u);
    st32((c.r[18].w[0] + 17852u), 0u);
    c.budget -= 3;
L_0023581C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[4], c.r[18].w[0] + 10656u);
    set32(c.r[5], c.r[5].w[0] + 2144u);
    set32(c.r[6], 0u + 368u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235834u); set32(c.r[7], 0u + 19u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x00235834u) [[unlikely]] return; }
L_00235834:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00140000u);
    set32(c.r[4], c.r[18].w[0] + 5280u);
    set32(c.r[5], c.r[5].w[0] - 20016u);
    set32(c.r[6], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023584Cu); set32(c.r[7], 0u + 21u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x0023584Cu) [[unlikely]] return; }
L_0023584C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[4], c.r[18].w[0] + 3840u);
    set32(c.r[5], c.r[5].w[0] - 28624u);
    set32(c.r[6], 0u + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235864u); set32(c.r[7], 0u + 18u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x00235864u) [[unlikely]] return; }
L_00235864:
    set32(c.r[4], c.r[18].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235870u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004C(c, 404u, depth + 1u); else { c.pc = 0x002337E0u; return; } if (c.pc != 0x00235870u) [[unlikely]] return; }
L_00235870:
    set32(c.r[4], c.r[18].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023587Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0023587Cu) [[unlikely]] return; }
L_0023587C:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235888u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00235888u) [[unlikely]] return; }
L_00235888:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235894u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x00235894u) [[unlikely]] return; }
L_00235894:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002358B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002358ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002358ACu) [[unlikely]] return; }
L_002358AC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002358B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002358D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 8;
L_002358F0:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 17944u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 17944u);  if (t) { goto L_0023591C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00235918; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00235918u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00235918u) [[unlikely]] return; }
L_00235918:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0023591C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002358F0u | kUnwind; return; } goto L_002358F0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00235950:
    set32(c.r[29], c.r[29].w[0] - 2704u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002359A0u); st32((c.r[29].w[0] + 2700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x002359A0u) [[unlikely]] return; }
L_002359A0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 2680u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002359B4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x002359B4u) [[unlikely]] return; }
L_002359B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002359BCu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002359BCu) [[unlikely]] return; }
L_002359BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002359CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002359CCu);  if (depth < kMaxDepth) unit_001F(c, 475u, depth + 1u); else { c.pc = 0x0017FD30u; return; } if (c.pc != 0x002359CCu) [[unlikely]] return; }
L_002359CC:
    st32((c.r[21].w[0] + 17848u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 2680u);
    set32(c.r[4], ld32((c.r[21].w[0] + 17848u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002359E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 494u, depth + 1u); else { c.pc = 0x0017FF40u; return; } if (c.pc != 0x002359E0u) [[unlikely]] return; }
L_002359E0:
    set32(c.r[3], ld32((c.r[21].w[0] + 17848u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 17852u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 17860u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_00235A04; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00235A04:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00235A70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 5);  if (t) { goto L_00235A38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00235A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235A28u); set32(c.r[4], c.r[4].w[0] - 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00235A28u) [[unlikely]] return; }
L_00235A28:
    st32((c.r[21].w[0] + 17860u), 0u);
    st32((c.r[21].w[0] + 17856u), 0u);
    st32((c.r[21].w[0] + 17852u), 0u);
    set32(c.r[2], c.r[16].w[0] << 5);
    c.budget -= 4;
L_00235A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235A40u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00235A40u) [[unlikely]] return; }
L_00235A40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 176u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235A5Cu); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x00235A5Cu) [[unlikely]] return; }
L_00235A5C:
    st32((c.r[21].w[0] + 17852u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[2], ld32((c.r[21].w[0] + 17852u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[21].w[0] + 17856u), c.r[2].w[0]);
    c.budget -= 5;
L_00235A70:
    set32(c.r[2], ld32((c.r[21].w[0] + 17852u)));
    set32(c.r[3], c.r[16].w[0] << 5);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 17860u), c.r[2].w[0]);  if (t) { goto L_00235AA8; } }
L_00235A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235A90u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 8u, depth + 1u); else { c.pc = 0x00180090u; return; } if (c.pc != 0x00235A90u) [[unlikely]] return; }
L_00235A90:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[2], ld32((c.r[21].w[0] + 17852u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235AA4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0020(c, 10u, depth + 1u); else { c.pc = 0x001800D0u; return; } if (c.pc != 0x00235AA4u) [[unlikely]] return; }
L_00235AA4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00235AA8:
    set32(c.r[4], ld32((c.r[21].w[0] + 17848u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00235A88u | kUnwind; return; } goto L_00235A88; } }
    c.r[3].d[0] = ld16((c.r[21].w[0] + 18056u));
    set32(c.r[2], ld32((c.r[21].w[0] + 18048u)));
    st16((c.r[29].w[0] + 2696u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[29].w[0] + 2698u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[21].w[0] + 18060u));
    set32(c.r[2], ld32((c.r[21].w[0] + 18052u)));
    st16((c.r[29].w[0] + 2692u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[29].w[0] + 2694u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 17860u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 17852u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 19;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_00235B10; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00235B10:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 2696u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235B20u); set32(c.r[6], c.r[29].w[0] + 2692u);  if (depth < kMaxDepth) unit_0020(c, 20u, depth + 1u); else { c.pc = 0x00180280u; return; } if (c.pc != 0x00235B20u) [[unlikely]] return; }
L_00235B20:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235B2Cu); set32(c.r[5], c.r[21].w[0] + 17852u);  if (depth < kMaxDepth) unit_0020(c, 43u, depth + 1u); else { c.pc = 0x00180690u; return; } if (c.pc != 0x00235B2Cu) [[unlikely]] return; }
L_00235B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235B34u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0020(c, 46u, depth + 1u); else { c.pc = 0x00180720u; return; } if (c.pc != 0x00235B34u) [[unlikely]] return; }
L_00235B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235B3Cu); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0020(c, 48u, depth + 1u); else { c.pc = 0x00180760u; return; } if (c.pc != 0x00235B3Cu) [[unlikely]] return; }
L_00235B3C:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 2482u));
    set32(c.r[3], 0u + 8128u);
    set32(c.r[2], 0u + 16344u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 31u);
    c.r[4].d[0] = c.r[4].d[0] & 65504ull;
    st32((c.r[21].w[0] + 18048u), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[29].w[0] + 2484u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[21].w[0] + 18052u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 18048u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[21].w[0] + 18056u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 18052u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[21].w[0] + 18060u), c.r[2].w[0]);
    c.budget -= 16;
L_00235B7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235B84u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00235B84u) [[unlikely]] return; }
L_00235B84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_00235BA0; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 17852u)));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235B9Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00235B9Cu) [[unlikely]] return; }
L_00235B9C:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_00235BA0:
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 3080u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 189ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00235B7Cu | kUnwind; return; } goto L_00235B7C; } }
    set32(c.r[18], c.r[20].w[0] << 2);
    c.budget -= 1;
L_00235BBC:
    set32(c.r[2], c.r[21].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[2].w[0] + 3080u);
    set32(c.r[2], ld32((c.r[2].w[0] + 3080u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[20].sd[0] < 30ll ? 1ull : 0ull;  if (t) { goto L_00236D64; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[20].sd[0] < 60ll ? 1ull : 0ull;  if (t) { goto L_00235D30; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] - 30u);  if (t) { goto L_00235D30; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00235BF0; } }
    breakpoint(c, 0x00235BECu);
    c.budget -= 1;
L_00235BF0:
    c.r[19].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[20].w[0] - 30u);
    set32(c.r[2], 0u + 5u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235C18u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 207u, depth + 1u); else { c.pc = 0x0023B0C0u; return; } if (c.pc != 0x00235C18u) [[unlikely]] return; }
L_00235C18:
    set32(c.r[7], ld32((c.r[21].w[0] + 17852u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 26960u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[29].w[0] + 2672u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[5], c.r[29].w[0] + 2664u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    set32(c.r[4], 0u + 1u);
    c.r[7].d[0] = ld64((c.r[7].w[0] + 48u));
    c.f[0] = c.r[9].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = c.r[19].d[0] & 1ull;
    c.f[1] = fp::cvt_s_w(c.f[0]);
    st64((c.r[29].w[0] + 2672u), c.r[7].d[0]);
    set32(c.r[8], ld32((c.r[16].w[0])));
    c.f[0] = c.r[2].w[0];
    st64((c.r[8].w[0] + 256u), c.r[7].d[0]);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = ld64((c.r[6].w[0]));
    st64((c.r[5].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 2667u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[8].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 2664u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 39;
    { const bool t = c.r[19].sd[0] >= 0; st32((c.r[8].w[0] + 164u), c.f[0]);  if (t) { goto L_00235CC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00235CC0; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_00235CC0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00235CFC; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00235CF4u); c.f[12] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00235CF4u) [[unlikely]] return; }
L_00235CF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_00236D68; } }
L_00235CFC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00235D28u); c.f[12] = fp::sub(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00235D28u) [[unlikely]] return; }
L_00235D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00236D64; } }
L_00235D30:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.r[3].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_00235F2C; } }
    c.r[1].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00235F2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235D4Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 207u, depth + 1u); else { c.pc = 0x0023B0C0u; return; } if (c.pc != 0x00235D4Cu) [[unlikely]] return; }
L_00235D4C:
    set32(c.r[7], ld32((c.r[21].w[0] + 17852u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] + 26896u);
    set32(c.r[6], c.r[21].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[5], c.r[29].w[0] + 2656u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[4], c.r[29].w[0] + 2648u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[22], c.r[6].w[0] + 3080u);
    c.r[7].d[0] = ld64((c.r[7].w[0] + 80u));
    c.f[0] = c.r[9].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], 0u + 1u);
    c.f[21] = fp::cvt_s_w(c.f[0]);
    st64((c.r[29].w[0] + 2656u), c.r[7].d[0]);
    set32(c.r[8], ld32((c.r[6].w[0] + 3080u)));
    c.f[0] = c.r[2].w[0];
    st64((c.r[8].w[0] + 256u), c.r[7].d[0]);
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    st64((c.r[4].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 2651u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[8].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 2648u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[8].w[0] + 164u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27424u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 3080u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27426u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27428u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], c.r[5].w[0] + c.r[19].w[0]);
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27430u)));
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235E14u); set32(c.r[8], c.r[6].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0017(c, 190u, depth + 1u); else { c.pc = 0x0015EE00u; return; } if (c.pc != 0x00235E14u) [[unlikely]] return; }
L_00235E14:
    c.f[1] = c.r[19].w[0];
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.f[0] = c.r[18].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 160u), c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[2].w[0] + 164u), c.f[0]);  if (t) { goto L_00235E44; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00235E6C; } }
L_00235E44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 28896u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 28888u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00235EFC; } }
L_00235E6C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00235E80; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00235EA4; } }
L_00235E80:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 28880u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 28888u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00235EFC; } }
L_00235EA4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00235ED0; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 28896u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 28872u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00235EFC; } }
L_00235ED0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00235EFC; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 28880u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 28872u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 8;
L_00235EFC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    c.f[12] = c.f[21];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00235F1Cu); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00235F1Cu) [[unlikely]] return; }
L_00235F1C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 204u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_00236D64; } }
L_00235F2C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[20].sd[0] < 12ll ? 1ull : 0ull;  if (t) { goto L_00236120; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[20].sd[0] < 12ll ? 1ull : 0ull;  if (t) { goto L_00236124; } }
    set32(c.r[19], c.r[20].w[0] - 6u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235F4Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 207u, depth + 1u); else { c.pc = 0x0023B0C0u; return; } if (c.pc != 0x00235F4Cu) [[unlikely]] return; }
L_00235F4C:
    set32(c.r[6], ld32((c.r[21].w[0] + 17852u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 26896u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[29].w[0] + 2640u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[4], c.r[29].w[0] + 2632u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = ld64((c.r[6].w[0] + 80u));
    c.f[0] = c.r[8].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], 0u + 1u);
    c.f[21] = fp::cvt_s_w(c.f[0]);
    st64((c.r[29].w[0] + 2640u), c.r[6].d[0]);
    set32(c.r[7], ld32((c.r[16].w[0])));
    c.f[0] = c.r[2].w[0];
    st64((c.r[7].w[0] + 256u), c.r[6].d[0]);
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    st64((c.r[4].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 2635u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 2632u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 164u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27440u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27442u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27444u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], c.r[5].w[0] + c.r[18].w[0]);
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27446u)));
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236010u); set32(c.r[8], c.r[6].w[0] + c.r[22].w[0]);  if (depth < kMaxDepth) unit_0017(c, 190u, depth + 1u); else { c.pc = 0x0015EE00u; return; } if (c.pc != 0x00236010u) [[unlikely]] return; }
L_00236010:
    c.f[1] = c.r[18].w[0];
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = c.r[22].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 160u), c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 164u), c.f[0]);  if (t) { goto L_00236040; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00236068; } }
L_00236040:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 28896u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 28888u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002360F8; } }
L_00236068:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0023607C; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002360A0; } }
L_0023607C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 28880u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 28888u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002360F8; } }
L_002360A0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_002360CC; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 28896u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 28872u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002360F8; } }
L_002360CC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_002360F8; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 28880u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 28872u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 8;
L_002360F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    c.f[12] = c.f[21];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00236118u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00236118u) [[unlikely]] return; }
L_00236118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00236D64; } }
L_00236120:
    c.r[3].d[0] = c.r[20].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 1;
L_00236124:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[20].sd[0] < 18ll ? 1ull : 0ull;  if (t) { goto L_00236318; } }
    c.r[1].d[0] = c.r[20].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], c.r[20].w[0] - 12u);  if (t) { goto L_00236318; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236144u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 207u, depth + 1u); else { c.pc = 0x0023B0C0u; return; } if (c.pc != 0x00236144u) [[unlikely]] return; }
L_00236144:
    set32(c.r[6], ld32((c.r[21].w[0] + 17852u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 26896u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[29].w[0] + 2624u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[4], c.r[29].w[0] + 2616u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = ld64((c.r[6].w[0] + 80u));
    c.f[0] = c.r[8].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], 0u + 1u);
    c.f[21] = fp::cvt_s_w(c.f[0]);
    st64((c.r[29].w[0] + 2624u), c.r[6].d[0]);
    set32(c.r[7], ld32((c.r[16].w[0])));
    c.f[0] = c.r[2].w[0];
    st64((c.r[7].w[0] + 256u), c.r[6].d[0]);
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    st64((c.r[4].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 2619u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 2616u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 164u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27432u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27434u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27436u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], c.r[5].w[0] + c.r[18].w[0]);
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27438u)));
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236208u); set32(c.r[8], c.r[6].w[0] + c.r[22].w[0]);  if (depth < kMaxDepth) unit_0017(c, 190u, depth + 1u); else { c.pc = 0x0015EE00u; return; } if (c.pc != 0x00236208u) [[unlikely]] return; }
L_00236208:
    c.f[1] = c.r[18].w[0];
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = c.r[22].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 160u), c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 164u), c.f[0]);  if (t) { goto L_00236238; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00236260; } }
L_00236238:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 28896u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 28888u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002362F0; } }
L_00236260:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00236274; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00236298; } }
L_00236274:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 28880u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 28888u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002362F0; } }
L_00236298:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_002362C4; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 28896u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 28872u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002362F0; } }
L_002362C4:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_002362F0; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 28880u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 28872u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 8;
L_002362F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    c.f[12] = c.f[21];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00236310u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00236310u) [[unlikely]] return; }
L_00236310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00236D64; } }
L_00236318:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[20].sd[0] < 24ll ? 1ull : 0ull;  if (t) { goto L_002363C0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[20].sd[0] < 24ll ? 1ull : 0ull;  if (t) { goto L_002363C4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] + 28864u));
    set32(c.r[6], c.r[29].w[0] + 2608u);
    set32(c.r[5], c.r[29].w[0] + 2600u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 204u);
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 28864u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    st32((c.r[2].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 17852u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 112u));
    st64((c.r[29].w[0] + 2608u), c.r[2].d[0]);
    set32(c.r[7], ld32((c.r[16].w[0])));
    st64((c.r[7].w[0] + 256u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[6].w[0]));
    st64((c.r[5].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 2603u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 2600u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 164u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 38;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_00236D64; } }
L_002363C0:
    c.r[3].d[0] = c.r[20].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 1;
L_002363C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[20].sd[0] < 60ll ? 1ull : 0ull;  if (t) { goto L_00236480; } }
    c.r[1].d[0] = c.r[20].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00236480; } }
    set32(c.r[5], c.r[20].w[0] - 24u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[9], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[21].w[0] + 17852u)));
    set32(c.r[8], c.r[29].w[0] + 2592u);
    set32(c.r[7], c.r[29].w[0] + 2584u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 19608u)));
    c.r[9].d[0] = ld64((c.r[2].w[0] + 144u));
    st64((c.r[29].w[0] + 2592u), c.r[9].d[0]);
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[10], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    st64((c.r[10].w[0] + 256u), c.r[9].d[0]);
    c.r[2].d[0] = ld64((c.r[8].w[0]));
    st64((c.r[7].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 2587u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[6].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[10].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 2584u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[6].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[10].w[0] + 164u), c.f[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 18612u)));
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236478u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 220u, depth + 1u); else { c.pc = 0x00237720u; return; } if (c.pc != 0x00236478u) [[unlikely]] return; }
L_00236478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00236D64; } }
L_00236480:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[20].sd[0] < 65ll ? 1ull : 0ull;  if (t) { goto L_002364FC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[20].sd[0] < 75ll ? 1ull : 0ull;  if (t) { goto L_00236500; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 17852u)));
    set32(c.r[2], c.r[29].w[0] + 2576u);
    set32(c.r[4], c.r[29].w[0] + 2568u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld64((c.r[5].w[0] + 144u));
    st64((c.r[29].w[0] + 2576u), c.r[5].d[0]);
    set32(c.r[6], ld32((c.r[16].w[0])));
    st64((c.r[6].w[0] + 256u), c.r[5].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[4].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 2571u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 2568u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 164u), c.f[0]);  if (t) { goto L_00236D64; } }
L_002364FC:
    c.r[3].d[0] = c.r[20].sd[0] < 75ll ? 1ull : 0ull;
    c.budget -= 1;
L_00236500:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[20].sd[0] < 111ll ? 1ull : 0ull;  if (t) { goto L_002367F0; } }
    c.r[1].d[0] = c.r[20].sd[0] < 111ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002367F0; } }
    set32(c.r[3], c.r[20].w[0] - 75u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00236528; } }
    breakpoint(c, 0x00236524u);
    c.budget -= 1;
L_00236528:
    c.r[19].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[20].w[0] - 75u);
    set32(c.r[2], 0u + 6u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236550u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 207u, depth + 1u); else { c.pc = 0x0023B0C0u; return; } if (c.pc != 0x00236550u) [[unlikely]] return; }
L_00236550:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00236564; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_0023657C; } }
L_00236564:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] > 0; set32(c.r[2], 0u + 10u);  if (t) { goto L_00236578; } }
    c.r[1].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023657C; } }
L_00236578:
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 1;
L_0023657C:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], c.r[29].w[0] + 2552u);
    set32(c.r[6], ld32((c.r[21].w[0] + 17852u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 10u);
    set32(c.r[7], c.r[2].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[29].w[0] + 2560u);
    c.r[6].d[0] = ld64((c.r[6].w[0] + 16u));
    st64((c.r[29].w[0] + 2560u), c.r[6].d[0]);
    set32(c.r[7], ld32((c.r[16].w[0])));
    st64((c.r[7].w[0] + 256u), c.r[6].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[5].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 2555u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 2552u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 164u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 33;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_002366A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = ld32((c.r[1].w[0] + 27604u));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.f[3] = c.r[2].w[0];
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[4], 0u + 255u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 27520u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 27608u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 27600u));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    set32(c.r[7], c.f[2]);
    st32((c.r[5].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[6], c.f[1]);
    st32((c.r[5].w[0] + 52u), c.r[7].w[0]);
    st32((c.r[5].w[0] + 56u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 60u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[7], c.r[5].w[0] + c.r[22].w[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236688u); set32(c.r[8], c.r[6].w[0] + c.r[23].w[0]);  if (depth < kMaxDepth) unit_0017(c, 190u, depth + 1u); else { c.pc = 0x0015EE00u; return; } if (c.pc != 0x00236688u) [[unlikely]] return; }
L_00236688:
    c.f[1] = c.r[22].w[0];
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = c.r[23].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 160u), c.f[1]);
    st32((c.r[2].w[0] + 164u), c.f[0]);
    c.budget -= 8;
L_002366A8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0023670C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002366B8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002366B8u) [[unlikely]] return; }
L_002366B8:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[3].w[0] + 48u) & ~15u, c.r[4]);  if (t) { goto L_002366EC; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 28856u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0023670C; } }
L_002366EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 28856u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 8;
L_0023670C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 27568u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 27488u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[3], c.r[30].w[0] + c.r[2].w[0]);  if (t) { goto L_002367C0; } }
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00236788; } }
    c.f[1] = c.r[4].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00236780u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00236780u) [[unlikely]] return; }
L_00236780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00236D64; } }
L_00236788:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 512u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002367B8u); c.f[12] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002367B8u) [[unlikely]] return; }
L_002367B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00236D64; } }
L_002367C0:
    c.f[1] = c.r[4].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002367E8u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002367E8u) [[unlikely]] return; }
L_002367E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00236D64; } }
L_002367F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[20].sd[0] < 165ll ? 1ull : 0ull;  if (t) { goto L_00236AB0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[20].sd[0] < 165ll ? 1ull : 0ull;  if (t) { goto L_00236AB4; } }
    set32(c.r[3], c.r[20].w[0] - 111u);
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00236814; } }
    breakpoint(c, 0x00236810u);
    c.budget -= 1;
L_00236814:
    c.r[18].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[20].w[0] - 111u);
    set32(c.r[2], 0u + 9u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023683Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 207u, depth + 1u); else { c.pc = 0x0023B0C0u; return; } if (c.pc != 0x0023683Cu) [[unlikely]] return; }
L_0023683C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0023684C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 9u);  if (t) { goto L_002368D4; } }
L_0023684C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_0023685C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 11u);  if (t) { goto L_002368D4; } }
L_0023685C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00236870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 4u);  if (t) { goto L_002368D4; } }
L_00236870:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 4u);  if (t) { goto L_00236880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 4u);  if (t) { goto L_002368D4; } }
L_00236880:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_00236890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 12u);  if (t) { goto L_002368D4; } }
L_00236890:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_002368A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002368D4; } }
L_002368A0:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_002368B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002368D4; } }
L_002368B4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_002368C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 13u);  if (t) { goto L_002368D4; } }
L_002368C4:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_002368D4; } }
    set32(c.r[17], 0u + 14u);
    c.budget -= 1;
L_002368D4:
    set32(c.r[7], ld32((c.r[21].w[0] + 17852u)));
    set32(c.r[8], c.r[17].w[0] << 5);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[18].d[0] & 1ull;
    set32(c.r[6], c.r[19].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + 27696u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[18].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[9], c.r[29].w[0] + 2544u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + 28016u);
    c.r[11].d[0] = ld64((c.r[7].w[0] + 16u));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[10], c.r[29].w[0] + 2536u);
    set32(c.r[3], 0u + 1u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 2544u), c.r[11].d[0]);
    set32(c.r[7], 0u + 5u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    st64((c.r[6].w[0] + 256u), c.r[11].d[0]);
    c.r[9].d[0] = ld64((c.r[9].w[0]));
    st64((c.r[10].w[0]), c.r[9].d[0]);
    c.r[9].d[0] = ld8((c.r[29].w[0] + 2539u));
    c.r[9].d[0] = c.r[9].d[0] << 58;
    c.r[9].d[0] = c.r[9].d[0] >> 60;
    set32(c.r[9], c.r[3].w[0] << (c.r[9].w[0] & 31u));
    c.f[0] = c.r[9].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 160u), c.f[0]);
    c.r[9].d[0] = ld64((c.r[29].w[0] + 2536u));
    c.r[9].d[0] = c.r[9].d[0] << 30;
    c.r[9].d[0] = c.r[9].d[0] >> 60;
    set32(c.r[3], c.r[3].w[0] << (c.r[9].w[0] & 31u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 164u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    set32(c.r[18], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[22], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    st32((c.r[5].w[0] + 20u), c.f[1]);
    st32((c.r[5].w[0] + 24u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 58;
    { const bool t = c.r[19].d[0] == c.r[7].d[0]; st32((c.r[2].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_002369C8; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00236A48; } }
L_002369C8:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002369F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002369DCu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002369DCu) [[unlikely]] return; }
L_002369DC:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 84u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002369F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002369F8; } }
L_002369F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002369F8:
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 28048u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    set32(c.r[7], c.r[5].w[0] + c.r[23].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236A28u); set32(c.r[8], c.r[6].w[0] + c.r[30].w[0]);  if (depth < kMaxDepth) unit_0017(c, 190u, depth + 1u); else { c.pc = 0x0015EE00u; return; } if (c.pc != 0x00236A28u) [[unlikely]] return; }
L_00236A28:
    c.f[1] = c.r[23].w[0];
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = c.r[30].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 160u), c.f[1]);
    st32((c.r[2].w[0] + 164u), c.f[0]);
    c.budget -= 8;
L_00236A48:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00236A80; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[1] = c.r[18].w[0];
    c.f[0] = c.r[22].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00236A78u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00236A78u) [[unlikely]] return; }
L_00236A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00236D64; } }
L_00236A80:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[1] = c.r[18].w[0];
    c.f[0] = c.r[22].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00236AA8u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00236AA8u) [[unlikely]] return; }
L_00236AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00236D64; } }
L_00236AB0:
    c.r[3].d[0] = c.r[20].sd[0] < 165ll ? 1ull : 0ull;
    c.budget -= 1;
L_00236AB4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[20].sd[0] < 173ll ? 1ull : 0ull;  if (t) { goto L_00236D64; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] - 165u);  if (t) { goto L_00236D64; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00236AD4; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_00236AD4:
    set32(c.r[3], c.r[20].w[0] - 165u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[6].d[0] = c.r[3].d[0] & 3ull;  if (t) { goto L_00236AEC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00236AEC; } }
    set32(c.r[6], c.r[6].w[0] - 4u);
    c.budget -= 1;
L_00236AEC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], 0u + 15u);  if (t) { goto L_00236B04; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00236B0C; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 1;
L_00236B04:
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 2;
L_00236B0C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_00236B24; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[7].w[0] << 5);  if (t) { goto L_00236B2C; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00236B24:
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] << 5);
    c.budget -= 2;
L_00236B2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[8], c.r[5].w[0] << 2);
    set32(c.r[5], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0] + 18676u)));
    c.budget -= 9;
    { const bool t = c.r[8].d[0] != c.r[5].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00236B68; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], 0u - 158u);  if (t) { goto L_00236B60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u - 166u);  if (t) { goto L_00236BC0; } }
L_00236B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00236BC0; } }
L_00236B68:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00236B88; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_00236B88; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00236BAC; } }
L_00236B88:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], 0u + 28u);  if (t) { goto L_00236B94; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00236B94:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[4], 0u - 18u);  if (t) { goto L_00236BA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 18u);  if (t) { goto L_00236BC0; } }
L_00236BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00236BC0; } }
L_00236BAC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_00236BBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[6].d[0] == 0) c.r[5].d[0] = 0ull;  if (t) { goto L_00236BC0; } }
L_00236BBC:
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_00236BC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[8], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 28256u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[8], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[10], c.r[29].w[0] + 2528u);
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[9], c.r[29].w[0] + 2520u);
    set32(c.r[15], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.f[1] = ld32((c.r[15].w[0] + 8u));
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0])));
    c.f[0] = ld32((c.r[15].w[0] + 4u));
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0] + 2u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[11], c.r[3].w[0] << 5);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0] + 12u)));
    set32(c.r[4], c.r[14].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[13].w[0] - c.r[5].w[0]);
    st32((c.r[2].w[0] + 16u), c.f[0]);
    st32((c.r[2].w[0] + 20u), c.f[1]);
    st32((c.r[2].w[0] + 24u), c.r[12].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 17852u)));
    set32(c.r[2], c.r[2].w[0] + c.r[11].w[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st64((c.r[29].w[0] + 2528u), c.r[2].d[0]);
    set32(c.r[11], ld32((c.r[16].w[0])));
    st64((c.r[11].w[0] + 256u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[10].w[0]));
    st64((c.r[9].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 2523u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[8].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[11].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 2520u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[8].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 49;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[11].w[0] + 164u), c.f[0]);  if (t) { goto L_00236C8C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[8].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00236D28; } }
L_00236C8C:
    c.f[0] = c.r[4].w[0];
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 28464u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    st32((c.r[6].w[0] + 48u), c.r[2].w[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[2]);
    c.f[0] = c.r[5].w[0];
    set32(c.r[4], c.f[1]);
    st32((c.r[6].w[0] + 52u), c.r[7].w[0]);
    st32((c.r[6].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 37;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00236D20u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00236D20u) [[unlikely]] return; }
L_00236D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00236D64; } }
L_00236D28:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_00236D3C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00236D64; } }
L_00236D3C:
    c.f[1] = c.r[4].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = c.r[5].w[0];
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00236D64u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00236D64u) [[unlikely]] return; }
L_00236D64:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00236D68:
    c.r[2].d[0] = c.r[20].sd[0] < 189ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[20].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00235BBCu | kUnwind; return; } goto L_00235BBC; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00236D78:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00236DD4; } }
    set32(c.r[3], c.r[20].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44000000u);
    set32(c.r[5], c.r[21].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[5].w[0] + 5440u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[5].w[0] + 5444u), c.r[3].w[0]);
    c.f[12] = 0u;
    st32((c.r[5].w[0] + 5328u), 0u);
    set32(c.r[2], 0u + 255u);
    st32((c.r[5].w[0] + 5332u), 0u);
    set32(c.r[4], c.r[5].w[0] + 5280u);
    st32((c.r[5].w[0] + 5336u), 0u);
    st32((c.r[5].w[0] + 5340u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[5].w[0] + 5456u)));
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00236DCCu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00236DCCu) [[unlikely]] return; }
L_00236DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_002371C0; } }
L_00236DD4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_00236E34; } }
    set32(c.r[2], c.r[20].w[0] << 8);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44000000u);
    set32(c.r[5], c.r[21].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[5].w[0] + 5440u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[5].w[0] + 5444u), c.r[2].w[0]);
    set32(c.r[3], 0u + 255u);
    st32((c.r[5].w[0] + 5328u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43AE0000u);
    st32((c.r[5].w[0] + 5332u), 0u);
    c.f[12] = 0u;
    st32((c.r[5].w[0] + 5336u), 0u);
    c.f[13] = c.r[2].w[0];
    st32((c.r[5].w[0] + 5340u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[5].w[0] + 5456u)));
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00236E2Cu); set32(c.r[4], c.r[5].w[0] + 5280u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00236E2Cu) [[unlikely]] return; }
L_00236E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002371BC; } }
L_00236E34:
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[20].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_00236F0C; } }
    c.r[1].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], c.r[20].w[0] - 2u);  if (t) { goto L_00236F0C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236E58u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 207u, depth + 1u); else { c.pc = 0x0023B0C0u; return; } if (c.pc != 0x00236E58u) [[unlikely]] return; }
L_00236E58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 26992u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[20].w[0] << 8);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    set32(c.r[7], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[7].w[0] + 5340u);
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    c.f[0] = c.r[6].w[0];
    st32((c.r[7].w[0] + 5440u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 5444u), 0u);
    st32((c.r[7].w[0] + 5328u), 0u);
    set32(c.r[4], 0u + 255u);
    st32((c.r[7].w[0] + 5332u), 0u);
    st32((c.r[7].w[0] + 5336u), 0u);
    st32((c.r[7].w[0] + 5340u), c.r[4].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 23;
    { const bool t = c.r[17].sd[0] >= 0; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00236EC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00236EC0; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_00236EC0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00236EE8; } }
    set32(c.r[25], ld32((c.r[7].w[0] + 5456u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00236EE0u); set32(c.r[4], c.r[7].w[0] + 5280u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00236EE0u) [[unlikely]] return; }
L_00236EE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 204u);  if (t) { goto L_00236F04; } }
L_00236EE8:
    set32(c.r[25], ld32((c.r[7].w[0] + 5456u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00236F00u); set32(c.r[4], c.r[7].w[0] + 5280u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00236F00u) [[unlikely]] return; }
L_00236F00:
    set32(c.r[2], 0u + 204u);
    c.budget -= 1;
L_00236F04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002371BC; } }
L_00236F0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[20].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_00236FE4; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[20].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_00236FE8; } }
    set32(c.r[16], c.r[20].w[0] - 10u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236F2Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 207u, depth + 1u); else { c.pc = 0x0023B0C0u; return; } if (c.pc != 0x00236F2Cu) [[unlikely]] return; }
L_00236F2C:
    c.r[6].d[0] = c.r[16].d[0] & 1ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 27984u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] + 28016u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[10], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[20].w[0] << 8);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 6u)));
    set32(c.r[16], c.r[21].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 2u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 8u)));
    c.f[0] = c.r[9].w[0];
    set32(c.r[4], c.r[16].w[0] + 5280u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[16].w[0] + 5440u), c.f[1]);
    st32((c.r[16].w[0] + 5444u), c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 5456u)));
    c.f[1] = c.r[7].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    c.budget -= 41;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00236FD0u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00236FD0u) [[unlikely]] return; }
L_00236FD0:
    st32((c.r[16].w[0] + 5328u), 0u);
    st32((c.r[16].w[0] + 5332u), 0u);
    st32((c.r[16].w[0] + 5336u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 5340u), c.r[17].w[0]);  if (t) { goto L_002371BC; } }
L_00236FE4:
    c.r[2].d[0] = c.r[20].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 1;
L_00236FE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[20].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_002371BC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[20].w[0] - 16u);  if (t) { goto L_002371BC; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00237008; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00237008:
    set32(c.r[2], c.r[20].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[9].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_00237020; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_00237020; } }
    set32(c.r[9], c.r[9].w[0] - 2u);
    c.budget -= 1;
L_00237020:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[7], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[8], c.r[4].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[7].w[0] + 18676u)));
    c.budget -= 12;
    { const bool t = c.r[8].d[0] != c.r[4].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0023705C; } }
    set32(c.r[5], 0u - 166u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_002370C4; } }
L_0023705C:
    set32(c.r[7], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[7].d[0]; set32(c.r[7], 0u + 1u);  if (t) { goto L_0023707C; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_0023707C; } }
    set32(c.r[7], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[7].d[0]; set32(c.r[7], 0u + 2u);  if (t) { goto L_002370B0; } }
L_0023707C:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[4], 0u + 28u);  if (t) { goto L_00237088; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 1;
L_00237088:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_002370A0; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002370A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 18u);  if (t) { goto L_002370C4; } }
L_002370A0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_002370C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 18u);  if (t) { goto L_002370C4; } }
L_002370B0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002370C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[9].w[0] << 2);  if (t) { goto L_002370C8; } }
L_002370C0:
    set32(c.r[4], 0u + 8u);
    c.budget -= 1;
L_002370C4:
    set32(c.r[7], c.r[9].w[0] << 2);
    c.budget -= 1;
L_002370C8:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] + 28416u);
    set32(c.r[7], c.r[6].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[12], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[6].w[0] << 1);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0])));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 2u)));
    set32(c.r[7], c.r[6].w[0] << 2);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 6u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] + 28464u);
    set32(c.r[11], c.r[6].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[11].w[0] + 4u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = ld32((c.r[11].w[0] + 8u));
    set32(c.r[10], c.r[10].w[0] - c.r[2].w[0]);
    c.f[3] = c.r[7].w[0];
    set32(c.r[2], c.r[20].w[0] << 8);
    c.f[2] = ld32((c.r[11].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 4u)));
    set32(c.r[16], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[9].w[0] - c.r[5].w[0]);
    set32(c.r[5], c.r[8].w[0] - c.r[4].w[0]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    set32(c.r[4], c.r[16].w[0] + 5280u);
    set32(c.r[2], c.r[6].w[0] - c.r[3].w[0]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[1]);
    set32(c.r[22], c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[16].w[0] + 5440u), c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 5444u), c.f[0]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    set32(c.r[25], ld32((c.r[16].w[0] + 5456u)));
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[1] = c.r[10].w[0];
    c.f[0] = c.r[7].w[0];
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[18], c.f[2]);
    c.budget -= 57;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002371ACu); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002371ACu) [[unlikely]] return; }
L_002371AC:
    st32((c.r[16].w[0] + 5328u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 5332u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 5336u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 5340u), c.r[19].w[0]);
    c.budget -= 4;
L_002371BC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002371C0:
    c.r[2].d[0] = c.r[20].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00236D78u | kUnwind; return; } goto L_00236D78; } }
L_002371CC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[1].d[0] = c.r[16].sd[0] < 18ll ? 1ull : 0ull;  if (t) { goto L_002374E0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002374E0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);  if (t) { goto L_002371E8; } }
    breakpoint(c, 0x002371E4u);
    c.budget -= 1;
L_002371E8:
    c.r[19].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 3u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[19].sd[0] >= 0; c.r[18].d[0] = c.r[19].d[0] & 1ull;  if (t) { goto L_00237214; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00237218; } }
    set32(c.r[18], c.r[18].w[0] - 2u);
    c.budget -= 1;
L_00237214:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_00237218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237220u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 207u, depth + 1u); else { c.pc = 0x0023B0C0u; return; } if (c.pc != 0x00237220u) [[unlikely]] return; }
L_00237220:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 27088u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] + 27120u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[21] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 14;
    { const bool t = c.r[17].d[0] != 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0023732C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 23328u);
    set32(c.r[10], c.r[29].w[0] + 288u);
    ld128((c.r[2].w[0]) & ~15u, c.r[9]);
    set32(c.r[7], c.r[7].w[0] - 23312u);
    set32(c.r[8], c.r[29].w[0] + 272u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43620000u);
    set32(c.r[5], 0u + 121u);
    set32(c.r[6], 0u + 105u);
    st128((c.r[10].w[0]) & ~15u, c.r[9]);
    set32(c.r[2], c.r[16].w[0] << 1);
    ld128((c.r[7].w[0]) & ~15u, c.r[7]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[9], c.r[21].w[0] + c.r[4].w[0]);
    set32(c.r[17], c.r[9].w[0] + 10656u);
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[9].w[0] + 10816u), c.r[3].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002372BCu); st32((c.r[9].w[0] + 10820u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 17u, depth + 1u); else { c.pc = 0x00160A20u; return; } if (c.pc != 0x002372BCu) [[unlikely]] return; }
L_002372BC:
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002372D0u); set32(c.r[7], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x002372D0u) [[unlikely]] return; }
L_002372D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002372FC; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002372FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002372FCu) [[unlikely]] return; }
L_002372FC:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    c.f[13] = fp::add(c.f[0], c.f[20]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00237324u); c.f[12] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00237324u) [[unlikely]] return; }
L_00237324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_002374E4; } }
L_0023732C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0023740C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 23296u);
    set32(c.r[10], c.r[29].w[0] + 256u);
    ld128((c.r[2].w[0]) & ~15u, c.r[9]);
    set32(c.r[7], c.r[7].w[0] - 23280u);
    set32(c.r[8], c.r[29].w[0] + 240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43620000u);
    set32(c.r[5], 0u + 121u);
    set32(c.r[6], 0u + 105u);
    st128((c.r[10].w[0]) & ~15u, c.r[9]);
    set32(c.r[2], c.r[16].w[0] << 1);
    ld128((c.r[7].w[0]) & ~15u, c.r[7]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42140000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[9], c.r[21].w[0] + c.r[4].w[0]);
    set32(c.r[17], c.r[9].w[0] + 10656u);
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[9].w[0] + 10816u), c.r[3].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023739Cu); st32((c.r[9].w[0] + 10820u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 17u, depth + 1u); else { c.pc = 0x00160A20u; return; } if (c.pc != 0x0023739Cu) [[unlikely]] return; }
L_0023739C:
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002373B0u); set32(c.r[7], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x002373B0u) [[unlikely]] return; }
L_002373B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002373DC; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002373DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002373DCu) [[unlikely]] return; }
L_002373DC:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    c.f[13] = fp::add(c.f[0], c.f[20]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00237404u); c.f[12] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00237404u) [[unlikely]] return; }
L_00237404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002374E0; } }
L_0023740C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002374E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 23264u);
    set32(c.r[10], c.r[29].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[9]);
    set32(c.r[7], c.r[7].w[0] - 23248u);
    set32(c.r[8], c.r[29].w[0] + 208u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43620000u);
    set32(c.r[5], 0u + 121u);
    set32(c.r[6], 0u + 105u);
    st128((c.r[10].w[0]) & ~15u, c.r[9]);
    set32(c.r[2], c.r[16].w[0] << 1);
    ld128((c.r[7].w[0]) & ~15u, c.r[7]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[9], c.r[21].w[0] + c.r[4].w[0]);
    set32(c.r[17], c.r[9].w[0] + 10656u);
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[9].w[0] + 10816u), c.r[3].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237478u); st32((c.r[9].w[0] + 10820u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 17u, depth + 1u); else { c.pc = 0x00160A20u; return; } if (c.pc != 0x00237478u) [[unlikely]] return; }
L_00237478:
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023748Cu); set32(c.r[7], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x0023748Cu) [[unlikely]] return; }
L_0023748C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002374B8; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002374B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002374B8u) [[unlikely]] return; }
L_002374B8:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42500000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    c.f[13] = fp::add(c.f[0], c.f[20]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002374E0u); c.f[12] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002374E0u) [[unlikely]] return; }
L_002374E0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002374E4:
    c.r[2].d[0] = c.r[16].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002371CCu | kUnwind; return; } goto L_002371CC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002374F4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237500u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 219u, depth + 1u); else { c.pc = 0x0023B290u; return; } if (c.pc != 0x00237500u) [[unlikely]] return; }
L_00237500:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002374F4u | kUnwind; return; } goto L_002374F4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27904u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237520u); set32(c.r[4], c.r[2].w[0] + 18224u);  if (depth < kMaxDepth) unit_0068(c, 9u, depth + 1u); else { c.pc = 0x002A0130u; return; } if (c.pc != 0x00237520u) [[unlikely]] return; }
L_00237520:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00237524:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[2], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[7], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 18676u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + 16u);  if (t) { goto L_00237650; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[21].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], ld32((c.r[6].w[0] + 2668u)));
    st32((c.r[6].w[0] + 17648u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 18676u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 17648u);  if (t) { goto L_00237594; } }
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] + 28712u);
    set32(c.r[2], 0u - 166u);
    st32((c.r[4].w[0] + 352u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 356u), 0u);  if (t) { goto L_002375E0; } }
L_00237594:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002375B8; } }
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] + 28720u);
    st32((c.r[4].w[0] + 352u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 356u), 0u);  if (t) { goto L_002375E0; } }
L_002375B8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002375CC; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002375E0; } }
L_002375CC:
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] + 28728u);
    st32((c.r[4].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 356u), 0u);
    c.budget -= 5;
L_002375E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[18].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 28256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[6].w[0] + 17648u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 128u)));
    c.f[2] = ld32((c.r[7].w[0] + 136u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 130u)));
    c.f[1] = ld32((c.r[7].w[0] + 132u));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 140u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[5].w[0];
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0] + 17648u)));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 16u), c.f[1]);
    st32((c.r[7].w[0] + 20u), c.f[2]);
    st32((c.r[7].w[0] + 24u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[6].w[0] + 17648u)));
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00237648u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00237648u) [[unlikely]] return; }
L_00237648:
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[17].w[0]);
    c.budget -= 2;
L_00237650:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00237524u | kUnwind; return; } goto L_00237524; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27904u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19580u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0023767C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023767Cu);  if (depth < kMaxDepth) unit_004E(c, 238u, depth + 1u); else { c.pc = 0x0023BA10u; return; } if (c.pc != 0x0023767Cu) [[unlikely]] return; }
L_0023767C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237684u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00237684u) [[unlikely]] return; }
L_00237684:
    set32(c.r[2], ld32((c.r[2].w[0] + 872u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00237698; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237698u);  if (depth < kMaxDepth) unit_004E(c, 247u, depth + 1u); else { c.pc = 0x0023BE70u; return; } if (c.pc != 0x00237698u) [[unlikely]] return; }
L_00237698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002376A0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002376A0u) [[unlikely]] return; }
L_002376A0:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002376B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002376B8u);  if (depth < kMaxDepth) unit_004F(c, 9u, depth + 1u); else { c.pc = 0x0023C1B0u; return; } if (c.pc != 0x002376B8u) [[unlikely]] return; }
L_002376B8:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    st8((c.r[21].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002376CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0020(c, 26u, depth + 1u); else { c.pc = 0x00180340u; return; } if (c.pc != 0x002376CCu) [[unlikely]] return; }
L_002376CC:
    set32(c.r[4], c.r[29].w[0] + 2680u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002376D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x002376D8u) [[unlikely]] return; }
L_002376D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002376E0u); set32(c.r[4], ld32((c.r[29].w[0] + 2700u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002376E0u) [[unlikely]] return; }
L_002376E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2704u);  c.pc = t; return; }
L_00237720:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 19608u)));
    set32(c.r[2], c.r[16].w[0] << 5);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 18612u), c.r[17].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023777Cu); set32(c.r[19], c.r[2].w[0] + 18580u);  if (depth < kMaxDepth) unit_004E(c, 207u, depth + 1u); else { c.pc = 0x0023B0C0u; return; } if (c.pc != 0x0023777Cu) [[unlikely]] return; }
L_0023777C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 26928u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + 26930u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 94u)));
    c.f[0] = c.r[5].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[21] = fp::cvt_s_w(c.f[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00237814; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00237814; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 27024u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 27026u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 27028u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 27030u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { goto L_00237834; } }
L_00237814:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27074u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27076u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27078u)));
    c.budget -= 8;
L_00237834:
    set32(c.r[2], c.r[7].w[0] + c.r[18].w[0]);
    set32(c.r[8], c.r[6].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 3176u)));
    set32(c.r[7], c.r[5].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023784Cu); set32(c.r[16], c.r[2].w[0] + 3176u);  if (depth < kMaxDepth) unit_0017(c, 190u, depth + 1u); else { c.pc = 0x0015EE00u; return; } if (c.pc != 0x0023784Cu) [[unlikely]] return; }
L_0023784C:
    c.f[1] = c.r[19].w[0];
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = c.r[17].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 160u), c.f[1]);
    st32((c.r[2].w[0] + 164u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[14] = ld32((c.r[1].w[0] + 28904u));
    c.f[12] = c.f[21];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00237888u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00237888u) [[unlikely]] return; }
L_00237888:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    ld128((c.r[1].w[0] + 28112u) & ~15u, c.r[4]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[4]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002378C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002379A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002378E0u);  if (depth < kMaxDepth) unit_004D(c, 248u, depth + 1u); else { c.pc = 0x002379C0u; return; } if (c.pc != 0x002378E0u) [[unlikely]] return; }
L_002378E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002378E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 257u, depth + 1u); else { c.pc = 0x00237AD0u; return; } if (c.pc != 0x002378E8u) [[unlikely]] return; }
L_002378E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002378F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 273u, depth + 1u); else { c.pc = 0x00237E50u; return; } if (c.pc != 0x002378F0u) [[unlikely]] return; }
L_002378F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002378F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 12u, depth + 1u); else { c.pc = 0x002381E0u; return; } if (c.pc != 0x002378F8u) [[unlikely]] return; }
L_002378F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237900u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 21u, depth + 1u); else { c.pc = 0x00238380u; return; } if (c.pc != 0x00237900u) [[unlikely]] return; }
L_00237900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237908u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 30u, depth + 1u); else { c.pc = 0x00238550u; return; } if (c.pc != 0x00237908u) [[unlikely]] return; }
L_00237908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237910u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 39u, depth + 1u); else { c.pc = 0x00238710u; return; } if (c.pc != 0x00237910u) [[unlikely]] return; }
L_00237910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237918u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 48u, depth + 1u); else { c.pc = 0x002388B0u; return; } if (c.pc != 0x00237918u) [[unlikely]] return; }
L_00237918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237920u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 57u, depth + 1u); else { c.pc = 0x00238A50u; return; } if (c.pc != 0x00237920u) [[unlikely]] return; }
L_00237920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237928u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 66u, depth + 1u); else { c.pc = 0x00238C00u; return; } if (c.pc != 0x00237928u) [[unlikely]] return; }
L_00237928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237930u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 78u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00237930u) [[unlikely]] return; }
L_00237930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237938u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 87u, depth + 1u); else { c.pc = 0x00238FE0u; return; } if (c.pc != 0x00237938u) [[unlikely]] return; }
L_00237938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237940u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 105u, depth + 1u); else { c.pc = 0x002392F0u; return; } if (c.pc != 0x00237940u) [[unlikely]] return; }
L_00237940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237948u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 128u, depth + 1u); else { c.pc = 0x002396F0u; return; } if (c.pc != 0x00237948u) [[unlikely]] return; }
L_00237948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237950u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 134u, depth + 1u); else { c.pc = 0x00239C60u; return; } if (c.pc != 0x00237950u) [[unlikely]] return; }
L_00237950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237958u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 144u, depth + 1u); else { c.pc = 0x0023A0F0u; return; } if (c.pc != 0x00237958u) [[unlikely]] return; }
L_00237958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237960u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 232u, depth + 1u); else { c.pc = 0x0023B760u; return; } if (c.pc != 0x00237960u) [[unlikely]] return; }
L_00237960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237968u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A210u; return; } if (c.pc != 0x00237968u) [[unlikely]] return; }
L_00237968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237970u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00237970u) [[unlikely]] return; }
L_00237970:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00237994; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237988u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 148u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x00237988u) [[unlikely]] return; }
L_00237988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237990u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 159u, depth + 1u); else { c.pc = 0x0023A5B0u; return; } if (c.pc != 0x00237990u) [[unlikely]] return; }
L_00237990:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00237994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023799Cu);  if (depth < kMaxDepth) unit_004E(c, 206u, depth + 1u); else { c.pc = 0x0023B010u; return; } if (c.pc != 0x0023799Cu) [[unlikely]] return; }
L_0023799C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002379A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 97u, depth + 1u); else { c.pc = 0x002391E0u; return; } if (c.pc != 0x002379A4u) [[unlikely]] return; }
L_002379A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002379C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27904u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 19328u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00237AB8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 19324u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[16].w[0] + 17864u);  if (t) { goto L_00237A24; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 17944u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00237AB8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00237A1C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00237A1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00237A1Cu) [[unlikely]] return; }
L_00237A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 17944u), 0u);  if (t) { goto L_00237AB8; } }
L_00237A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237A2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 351u, depth + 1u); else { c.pc = 0x001A7FE0u; return; } if (c.pc != 0x00237A2Cu) [[unlikely]] return; }
L_00237A2C:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00237AB8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 17944u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_00237A94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237A50u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00237A50u) [[unlikely]] return; }
L_00237A50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00237A64; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237A64u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x00237A64u) [[unlikely]] return; }
L_00237A64:
    st32((c.r[16].w[0] + 17944u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237A74u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00237A74u) [[unlikely]] return; }
L_00237A74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237A84u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00237A84u) [[unlikely]] return; }
L_00237A84:
    set32(c.r[4], ld32((c.r[16].w[0] + 17944u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237A94u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00237A94u) [[unlikely]] return; }
L_00237A94:
    set32(c.r[4], ld32((c.r[16].w[0] + 17944u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00237AA8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00237AA8u) [[unlikely]] return; }
L_00237AA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 17944u)));
    c.f[0] = ld32((c.r[1].w[0] + 28904u));
    st32((c.r[3].w[0] + 104u), c.f[0]);
    c.budget -= 4;
L_00237AB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00237AD0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
L_00237B00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[4], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[3].w[0] + 19608u)));
    set32(c.r[16], c.r[20].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 19356u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00237DC8; } }
    set32(c.r[4], c.r[22].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 19332u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 17948u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[23], c.r[4].w[0] + 17948u);  if (t) { goto L_00237E10; } }
    set32(c.r[17], c.r[22].w[0] + 17864u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237B4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 351u, depth + 1u); else { c.pc = 0x001A7FE0u; return; } if (c.pc != 0x00237B4Cu) [[unlikely]] return; }
L_00237B4C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00237B68; } }
    set32(c.r[3], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 19332u), 0u);  if (t) { goto L_00237E10; } }
L_00237B68:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00237BC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237B78u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00237B78u) [[unlikely]] return; }
L_00237B78:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00237B9C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237B94u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x00237B94u) [[unlikely]] return; }
L_00237B94:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00237B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237BA4u); set32(c.r[5], 0u + 10001u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00237BA4u) [[unlikely]] return; }
L_00237BA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237BB4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00237BB4u) [[unlikely]] return; }
L_00237BB4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237BC4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00237BC4u) [[unlikely]] return; }
L_00237BC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 28128u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237BDCu); set32(c.r[17], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_004E(c, 207u, depth + 1u); else { c.pc = 0x0023B0C0u; return; } if (c.pc != 0x00237BDCu) [[unlikely]] return; }
L_00237BDC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != 0ull; set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_00237C30; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00237C00u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00237C00u) [[unlikely]] return; }
L_00237C00:
    c.f[1] = c.r[17].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = c.r[18].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 96u), c.f[1]);
    st32((c.r[19].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 28904u));
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00237DA8; } }
L_00237C30:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[5].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00237C7C; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00237C4Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00237C4Cu) [[unlikely]] return; }
L_00237C4C:
    c.f[1] = c.r[17].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = c.r[18].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 96u), c.f[1]);
    st32((c.r[19].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 28904u));
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00237DA8; } }
L_00237C7C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_00237CC8; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00237C98u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00237C98u) [[unlikely]] return; }
L_00237C98:
    c.f[1] = c.r[17].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = c.r[18].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 96u), c.f[1]);
    st32((c.r[19].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 28904u));
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00237DA8; } }
L_00237CC8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_00237D14; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00237CE4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00237CE4u) [[unlikely]] return; }
L_00237CE4:
    c.f[1] = c.r[17].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = c.r[18].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 96u), c.f[1]);
    st32((c.r[19].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 28904u));
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00237DA8; } }
L_00237D14:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_00237D60; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00237D30u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00237D30u) [[unlikely]] return; }
L_00237D30:
    c.f[1] = c.r[17].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = c.r[18].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 96u), c.f[1]);
    st32((c.r[19].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 28904u));
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00237DA8; } }
L_00237D60:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00237DAC; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00237D7Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00237D7Cu) [[unlikely]] return; }
L_00237D7C:
    c.f[1] = c.r[17].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = c.r[18].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 96u), c.f[1]);
    st32((c.r[19].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 28904u));
    st32((c.r[19].w[0] + 104u), c.f[0]);
    st32((c.r[19].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 11;
L_00237DA8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00237DAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[19].w[0] + 136u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 19332u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[23].w[0]), c.r[19].w[0]);  if (t) { goto L_00237E10; } }
L_00237DC8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00237E10; } }
    set32(c.r[4], c.r[22].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 19332u)));
    set32(c.r[17], c.r[4].w[0] + 17948u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 17948u)));  if (t) { goto L_00237E10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00237DFC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00237DFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00237DFCu) [[unlikely]] return; }
L_00237DFC:
    st32((c.r[17].w[0]), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 19332u), 0u);
    c.budget -= 5;
L_00237E10:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00237B00u | kUnwind; return; } goto L_00237B00; } }
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
L_00237E50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 19404u)));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] <= 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00237FD8; } }
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00237FD8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 17972u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 17864u);  if (t) { goto L_00237ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237E9Cu); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00237E9Cu) [[unlikely]] return; }
L_00237E9C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_00237EB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237EB0u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x00237EB0u) [[unlikely]] return; }
L_00237EB0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00237EB4:
    st32((c.r[17].w[0] + 17972u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 17972u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    c.f[0] = ld32((c.r[1].w[0] + 28904u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 9;
L_00237ED8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 19408u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00237F3C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 19404u)));
    set32(c.r[5], 0u + 10008u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237F08u); c.r[19].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00237F08u) [[unlikely]] return; }
L_00237F08:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237F18u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00237F18u) [[unlikely]] return; }
L_00237F18:
    set32(c.r[4], ld32((c.r[17].w[0] + 17972u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237F28u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00237F28u) [[unlikely]] return; }
L_00237F28:
    set32(c.r[4], ld32((c.r[17].w[0] + 17972u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00237F3Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00237F3Cu) [[unlikely]] return; }
L_00237F3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 50u);
    set32(c.r[5], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 19408u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00237FA8; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 19404u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[5], 0u + 10008u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237F74u); c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00237F74u) [[unlikely]] return; }
L_00237F74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237F84u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00237F84u) [[unlikely]] return; }
L_00237F84:
    set32(c.r[4], ld32((c.r[17].w[0] + 17972u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237F94u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00237F94u) [[unlikely]] return; }
L_00237F94:
    set32(c.r[4], ld32((c.r[17].w[0] + 17972u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00237FA8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00237FA8u) [[unlikely]] return; }
L_00237FA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 19408u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 19408u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 19408u)));
    c.r[3].d[0] = c.r[3].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00237FD8; } }
    st32((c.r[4].w[0] + 19404u), 0u);
    c.budget -= 1;
L_00237FD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27904u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 19404u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_004E(c, 3u, depth); } }
    set32(c.r[4], ld32((c.r[17].w[0] + 17972u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_004E(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_004E(c, 2u, depth); } }
    [[clang::musttail]] return unit_004E(c, 1u, depth);
}

}
