#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002D[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27,
    0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 52, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0,
    63, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 79, 0, 0, 80, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83,
    0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0,
};

void unit_002D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001B4000;
    case 2u: goto L_001B4004;
    case 3u: goto L_001B4010;
    case 4u: goto L_001B4030;
    case 5u: goto L_001B4038;
    case 6u: goto L_001B40D0;
    case 7u: goto L_001B40DC;
    case 8u: goto L_001B4150;
    case 9u: goto L_001B415C;
    case 10u: goto L_001B4168;
    case 11u: goto L_001B41A4;
    case 12u: goto L_001B41B0;
    case 13u: goto L_001B41E0;
    case 14u: goto L_001B4260;
    case 15u: goto L_001B427C;
    case 16u: goto L_001B42B8;
    case 17u: goto L_001B42C0;
    case 18u: goto L_001B42C8;
    case 19u: goto L_001B42E8;
    case 20u: goto L_001B4368;
    case 21u: goto L_001B43D4;
    case 22u: goto L_001B43DC;
    case 23u: goto L_001B43FC;
    case 24u: goto L_001B44A8;
    case 25u: goto L_001B4540;
    case 26u: goto L_001B4554;
    case 27u: goto L_001B457C;
    case 28u: goto L_001B4584;
    case 29u: goto L_001B45A0;
    case 30u: goto L_001B45A8;
    case 31u: goto L_001B45B0;
    case 32u: goto L_001B45B8;
    case 33u: goto L_001B45D4;
    case 34u: goto L_001B45FC;
    case 35u: goto L_001B465C;
    case 36u: goto L_001B4678;
    case 37u: goto L_001B469C;
    case 38u: goto L_001B46A4;
    case 39u: goto L_001B46C0;
    case 40u: goto L_001B46D4;
    case 41u: goto L_001B46DC;
    case 42u: goto L_001B4704;
    case 43u: goto L_001B4724;
    case 44u: goto L_001B473C;
    case 45u: goto L_001B4744;
    case 46u: goto L_001B4798;
    case 47u: goto L_001B47BC;
    case 48u: goto L_001B4834;
    case 49u: goto L_001B4858;
    case 50u: goto L_001B4864;
    case 51u: goto L_001B4870;
    case 52u: goto L_001B4878;
    case 53u: goto L_001B48EC;
    case 54u: goto L_001B4918;
    case 55u: goto L_001B4924;
    case 56u: goto L_001B4930;
    case 57u: goto L_001B493C;
    case 58u: goto L_001B4948;
    case 59u: goto L_001B4950;
    case 60u: goto L_001B495C;
    case 61u: goto L_001B4968;
    case 62u: goto L_001B4974;
    case 63u: goto L_001B4980;
    case 64u: goto L_001B498C;
    case 65u: goto L_001B4998;
    case 66u: goto L_001B49B4;
    case 67u: goto L_001B49C8;
    case 68u: goto L_001B49D0;
    case 69u: goto L_001B4A3C;
    case 70u: goto L_001B4A90;
    case 71u: goto L_001B4C2C;
    case 72u: goto L_001B4C78;
    case 73u: goto L_001B4CA0;
    case 74u: goto L_001B4D90;
    case 75u: goto L_001B4DA0;
    case 76u: goto L_001B4DC4;
    case 77u: goto L_001B4DD0;
    case 78u: goto L_001B4DDC;
    case 79u: goto L_001B4DE0;
    case 80u: goto L_001B4DEC;
    case 81u: goto L_001B4DF0;
    case 82u: goto L_001B4E30;
    case 83u: goto L_001B4E7C;
    case 84u: goto L_001B4E88;
    case 85u: goto L_001B4E94;
    case 86u: goto L_001B4EAC;
    case 87u: goto L_001B4ED0;
    case 88u: goto L_001B4EF0;
    case 89u: goto L_001B4F20;
    case 90u: goto L_001B4F50;
    case 91u: goto L_001B4F7C;
    case 92u: goto L_001B4F94;
    case 93u: goto L_001B4F9C;
    case 94u: goto L_001B4FE0;
    case 95u: goto L_001B4FF0;
    case 96u: goto L_001B5028;
    case 97u: goto L_001B503C;
    case 98u: goto L_001B5050;
    case 99u: goto L_001B5078;
    case 100u: goto L_001B5094;
    case 101u: goto L_001B50C0;
    case 102u: goto L_001B50EC;
    case 103u: goto L_001B5118;
    case 104u: goto L_001B5144;
    case 105u: goto L_001B5170;
    case 106u: goto L_001B51AC;
    case 107u: goto L_001B51F0;
    case 108u: goto L_001B5220;
    case 109u: goto L_001B5264;
    case 110u: goto L_001B52C0;
    case 111u: goto L_001B5300;
    case 112u: goto L_001B5310;
    case 113u: goto L_001B5350;
    case 114u: goto L_001B5360;
    case 115u: goto L_001B5374;
    case 116u: goto L_001B53C0;
    case 117u: goto L_001B5444;
    case 118u: goto L_001B5488;
    case 119u: goto L_001B54E0;
    case 120u: goto L_001B5510;
    case 121u: goto L_001B552C;
    case 122u: goto L_001B5554;
    case 123u: goto L_001B5590;
    case 124u: goto L_001B55A8;
    case 125u: goto L_001B55BC;
    case 126u: goto L_001B55D4;
    case 127u: goto L_001B55E8;
    case 128u: goto L_001B5600;
    case 129u: goto L_001B5618;
    case 130u: goto L_001B5640;
    case 131u: goto L_001B5684;
    case 132u: goto L_001B56A4;
    case 133u: goto L_001B56C4;
    case 134u: goto L_001B56D4;
    case 135u: goto L_001B56EC;
    case 136u: goto L_001B5710;
    case 137u: goto L_001B5750;
    case 138u: goto L_001B57A0;
    case 139u: goto L_001B5A0C;
    case 140u: goto L_001B5A1C;
    case 141u: goto L_001B5A30;
    case 142u: goto L_001B5A5C;
    case 143u: goto L_001B5A9C;
    case 144u: goto L_001B5ADC;
    case 145u: goto L_001B5AEC;
    case 146u: goto L_001B5B60;
    case 147u: goto L_001B5B90;
    case 148u: goto L_001B5B9C;
    case 149u: goto L_001B5CC8;
    case 150u: goto L_001B5D8C;
    case 151u: goto L_001B5DB0;
    case 152u: goto L_001B5E5C;
    case 153u: goto L_001B5E9C;
    case 154u: goto L_001B5F00;
    case 155u: goto L_001B5F4C;
    case 156u: goto L_001B5F70;
    case 157u: goto L_001B6030;
    case 158u: goto L_001B604C;
    case 159u: goto L_001B6098;
    case 160u: goto L_001B60BC;
    case 161u: goto L_001B60C8;
    case 162u: goto L_001B6158;
    case 163u: goto L_001B6168;
    case 164u: goto L_001B6228;
    case 165u: goto L_001B62E0;
    case 166u: goto L_001B6338;
    case 167u: goto L_001B634C;
    case 168u: goto L_001B6380;
    case 169u: goto L_001B63B0;
    case 170u: goto L_001B63D8;
    case 171u: goto L_001B63F4;
    case 172u: goto L_001B641C;
    case 173u: goto L_001B6444;
    case 174u: goto L_001B6480;
    case 175u: goto L_001B64CC;
    case 176u: goto L_001B6534;
    case 177u: goto L_001B656C;
    case 178u: goto L_001B65E0;
    case 179u: goto L_001B6614;
    case 180u: goto L_001B6634;
    case 181u: goto L_001B6660;
    case 182u: goto L_001B66C0;
    case 183u: goto L_001B674C;
    case 184u: goto L_001B6954;
    case 185u: goto L_001B6960;
    case 186u: goto L_001B69D0;
    case 187u: goto L_001B6A54;
    case 188u: goto L_001B6B04;
    case 189u: goto L_001B6BD0;
    case 190u: goto L_001B6BE0;
    case 191u: goto L_001B6C40;
    case 192u: goto L_001B6C50;
    case 193u: goto L_001B6C88;
    case 194u: goto L_001B6D00;
    case 195u: goto L_001B6DE0;
    case 196u: goto L_001B6DE8;
    case 197u: goto L_001B6E48;
    case 198u: goto L_001B6E6C;
    case 199u: goto L_001B6E90;
    case 200u: goto L_001B6EB4;
    case 201u: goto L_001B6ECC;
    case 202u: goto L_001B6EF0;
    case 203u: goto L_001B6F0C;
    case 204u: goto L_001B6F34;
    case 205u: goto L_001B6F50;
    case 206u: goto L_001B6F6C;
    case 207u: goto L_001B6F88;
    case 208u: goto L_001B6FB0;
    case 209u: goto L_001B6FCC;
    case 210u: goto L_001B6FE8;
    case 211u: goto L_001B7010;
    case 212u: goto L_001B701C;
    case 213u: goto L_001B7038;
    case 214u: goto L_001B7044;
    case 215u: goto L_001B706C;
    case 216u: goto L_001B7078;
    case 217u: goto L_001B7094;
    case 218u: goto L_001B70B4;
    case 219u: goto L_001B70F0;
    case 220u: goto L_001B7100;
    case 221u: goto L_001B7220;
    case 222u: goto L_001B72A0;
    case 223u: goto L_001B73B0;
    case 224u: goto L_001B73CC;
    case 225u: goto L_001B73EC;
    case 226u: goto L_001B7410;
    case 227u: goto L_001B7434;
    case 228u: goto L_001B7494;
    case 229u: goto L_001B74B0;
    case 230u: goto L_001B7638;
    case 231u: goto L_001B7660;
    case 232u: goto L_001B7688;
    case 233u: goto L_001B76E8;
    case 234u: goto L_001B7704;
    case 235u: goto L_001B7710;
    case 236u: goto L_001B7720;
    case 237u: goto L_001B7878;
    case 238u: goto L_001B78AC;
    case 239u: goto L_001B78B8;
    case 240u: goto L_001B78C8;
    case 241u: goto L_001B7A1C;
    case 242u: goto L_001B7A50;
    case 243u: goto L_001B7A8C;
    case 244u: goto L_001B7AB0;
    case 245u: goto L_001B7B24;
    case 246u: goto L_001B7B3C;
    case 247u: goto L_001B7B90;
    case 248u: goto L_001B7BB4;
    case 249u: goto L_001B7BD8;
    case 250u: goto L_001B7BF8;
    case 251u: goto L_001B7C10;
    case 252u: goto L_001B7C20;
    case 253u: goto L_001B7F00;
    case 254u: goto L_001B7F2C;
    case 255u: goto L_001B7F64;
    case 256u: goto L_001B7FF0;
    default: bad_entry(c, 0x001B4000u); return;
    }
L_001B4000:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B4010; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4010:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B4030; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B4030; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4030u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B4030u) [[unlikely]] return; }
L_001B4030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 60u), 0u);  if (t) { goto L_001B4DDC; } }
L_001B4038:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 393u));
    set32(c.r[3], 0u + 12u);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[2].d[0] >> 61;  if (t) { goto L_001B405C; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_001B405C:
    c.r[3].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B4084; } }
    set32(c.r[4], c.r[5].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[3], ld32((c.r[17].w[0] + 396u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 396u), c.r[3].w[0]);  if (t) { goto L_001B4098; } }
L_001B4084:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 392u));
    set32(c.r[4], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] << (c.r[5].w[0] & 63u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[17].w[0] + 392u), c.r[3].d[0]);
    c.budget -= 5;
L_001B4098:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 393u));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = c.r[4].d[0] << 59;
    c.r[4].d[0] = c.r[4].d[0] >> 61;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B4DDC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4DDC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001B4DDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    c.budget -= 1;
L_001B40D0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B40DCu); c.r[5].d[0] = c.r[2].d[0] | 20304ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B40DCu) [[unlikely]] return; }
L_001B40DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B40F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B40F0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B40F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    st8((c.r[29].w[0] + 334u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 3u));
    st8((c.r[29].w[0] + 335u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 334u)));  if (t) { goto L_001B4144; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001B4134; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 200u);  if (t) { goto L_001B4144; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001B4134:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[7], 0u - 1u);  if (t) { goto L_001B4148; } }
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 200u);
    c.budget -= 2;
L_001B4144:
    set32(c.r[7], 0u - 1u);
    c.budget -= 1;
L_001B4148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4150u);  if (depth < kMaxDepth) unit_0033(c, 36u, depth + 1u); else { c.pc = 0x001CC810u; return; } if (c.pc != 0x001B4150u) [[unlikely]] return; }
L_001B4150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4DDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    c.budget -= 1;
L_001B415C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4168u); c.r[5].d[0] = c.r[2].d[0] | 20304ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B4168u) [[unlikely]] return; }
L_001B4168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B417C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B417C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B417C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[22], 0u + 5u);  if (t) { goto L_001B41A8; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    st8((c.r[29].w[0] + 332u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 3u));
    st8((c.r[29].w[0] + 333u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[7].d[0] = ld8((c.r[20].w[0] + 4u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B41A4u); c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 332u)));  if (depth < kMaxDepth) unit_0033(c, 36u, depth + 1u); else { c.pc = 0x001CC810u; return; } if (c.pc != 0x001B41A4u) [[unlikely]] return; }
L_001B41A4:
    set32(c.r[22], 0u + 5u);
    c.budget -= 1;
L_001B41A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4DDC; } }
L_001B41B0:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[2].d[0] = c.r[2].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4268; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31072u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53500000u);  if (t) { goto L_001B41D8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53500000u);
    c.budget -= 2;
L_001B41D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B41E0u); c.r[5].d[0] = c.r[2].d[0] | 17490ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B41E0u) [[unlikely]] return; }
L_001B41E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001B41F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B41F4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B41F4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] - 100u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 472u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 400u));
    set32(c.r[4], 0u - 2u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[6].w[0] + 472u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    st8((c.r[29].w[0] + 330u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 3u));
    st8((c.r[29].w[0] + 331u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 330u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4260u); set32(c.r[4], ld32((c.r[6].w[0] + 472u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001B4260u) [[unlikely]] return; }
L_001B4260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4DDC; } }
L_001B4268:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B427Cu); c.r[5].d[0] = c.r[2].d[0] | 20300ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B427Cu) [[unlikely]] return; }
L_001B427C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B4290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B4290; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4290:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    st8((c.r[29].w[0] + 328u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 3u));
    st8((c.r[29].w[0] + 329u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 328u)));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B42B8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x001B42B8u) [[unlikely]] return; }
L_001B42B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4DDC; } }
L_001B42C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B42C8u);  if (depth < kMaxDepth) unit_001A(c, 36u, depth + 1u); else { c.pc = 0x00168850u; return; } if (c.pc != 0x001B42C8u) [[unlikely]] return; }
L_001B42C8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B4354; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45560000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B42E8u); c.r[5].d[0] = c.r[2].d[0] | 17985ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B42E8u) [[unlikely]] return; }
L_001B42E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_001B42FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B42FC; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B42FC:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    c.r[3].d[0] = ld8((c.r[9].w[0] + 60u));
    set32(c.r[2], 0u + 1u);
    c.r[7].d[0] = ld8((c.r[20].w[0] + 4u));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 3u));
    c.r[6].d[0] = ld8((c.r[20].w[0] + 2u));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[8].d[0] = ld8((c.r[20].w[0] + 5u));  if (t) { goto L_001B4DDC; } }
    set32(c.r[2], c.r[6].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[2], c.r[7].w[0] << 24);
    set32(c.r[4], ld32((c.r[9].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[9].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[9].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[9].w[0] + 52u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 56u), c.r[8].w[0]);  if (t) { goto L_001B4DDC; } }
L_001B4354:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46410000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4368u); c.r[5].d[0] = c.r[2].d[0] | 17477ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B4368u) [[unlikely]] return; }
L_001B4368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_001B437C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B437C; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B437C:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    c.r[3].d[0] = ld8((c.r[9].w[0] + 60u));
    set32(c.r[2], 0u + 1u);
    c.r[7].d[0] = ld8((c.r[20].w[0] + 4u));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 3u));
    c.r[6].d[0] = ld8((c.r[20].w[0] + 2u));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[8].d[0] = ld8((c.r[20].w[0] + 5u));  if (t) { goto L_001B4DDC; } }
    set32(c.r[2], c.r[6].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[2], c.r[7].w[0] << 24);
    set32(c.r[4], ld32((c.r[9].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[9].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[9].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[9].w[0] + 52u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 56u), c.r[8].w[0]);  if (t) { goto L_001B4DDC; } }
L_001B43D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B43DCu);  if (depth < kMaxDepth) unit_001A(c, 36u, depth + 1u); else { c.pc = 0x00168850u; return; } if (c.pc != 0x001B43DCu) [[unlikely]] return; }
L_001B43DC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B4494; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45560000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B43FCu); c.r[5].d[0] = c.r[2].d[0] | 17985ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B43FCu) [[unlikely]] return; }
L_001B43FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B4410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B4410; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4410:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 60u));
    set32(c.r[8], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 6u));
    c.r[11].d[0] = ld8((c.r[20].w[0] + 5u));
    c.r[10].d[0] = ld8((c.r[20].w[0] + 4u));
    c.r[7].d[0] = ld8((c.r[20].w[0] + 3u));
    c.r[9].d[0] = ld8((c.r[20].w[0] + 2u));
    c.r[6].d[0] = ld8((c.r[20].w[0] + 1u));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[8].d[0]; c.r[3].d[0] = ld8((c.r[20].w[0] + 7u));  if (t) { goto L_001B4DDC; } }
    set32(c.r[5], c.r[9].w[0] << 8);
    set32(c.r[7], c.r[7].w[0] << 16);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[7].d[0] = c.r[7].d[0] | c.r[5].d[0];
    set32(c.r[6], c.r[10].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    set32(c.r[5], c.r[11].w[0] << 1);
    set32(c.r[7], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[4].w[0] + 48u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 76u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 92u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_001B4DDC; } }
L_001B4494:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46410000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B44A8u); c.r[5].d[0] = c.r[2].d[0] | 17477ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B44A8u) [[unlikely]] return; }
L_001B44A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B44BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B44BC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B44BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 60u));
    set32(c.r[8], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 6u));
    c.r[11].d[0] = ld8((c.r[20].w[0] + 5u));
    c.r[10].d[0] = ld8((c.r[20].w[0] + 4u));
    c.r[7].d[0] = ld8((c.r[20].w[0] + 3u));
    c.r[9].d[0] = ld8((c.r[20].w[0] + 2u));
    c.r[6].d[0] = ld8((c.r[20].w[0] + 1u));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[8].d[0]; c.r[3].d[0] = ld8((c.r[20].w[0] + 7u));  if (t) { goto L_001B4DDC; } }
    set32(c.r[5], c.r[9].w[0] << 8);
    set32(c.r[7], c.r[7].w[0] << 16);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[7].d[0] = c.r[7].d[0] | c.r[5].d[0];
    set32(c.r[6], c.r[10].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    set32(c.r[5], c.r[11].w[0] << 1);
    set32(c.r[7], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[4].w[0] + 48u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 76u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 92u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_001B4DDC; } }
L_001B4540:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x424C0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4554u); c.r[5].d[0] = c.r[2].d[0] | 21842ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B4554u) [[unlikely]] return; }
L_001B4554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B4568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B4568; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4568:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    c.r[6].d[0] = ld8((c.r[20].w[0] + 2u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B457Cu); c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));  if (depth < kMaxDepth) unit_0040(c, 79u, depth + 1u); else { c.pc = 0x00201970u; return; } if (c.pc != 0x001B457Cu) [[unlikely]] return; }
L_001B457C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4DDC; } }
L_001B4584:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    st8((c.r[29].w[0] + 326u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 3u));
    st8((c.r[29].w[0] + 327u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 1u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B45A0u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 326u)));  if (depth < kMaxDepth) unit_0045(c, 79u, depth + 1u); else { c.pc = 0x002161E0u; return; } if (c.pc != 0x001B45A0u) [[unlikely]] return; }
L_001B45A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4DDC; } }
L_001B45A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B45B0u); c.r[4].d[0] = ld8((c.r[20].w[0] + 1u));  if (depth < kMaxDepth) unit_0045(c, 82u, depth + 1u); else { c.pc = 0x00216240u; return; } if (c.pc != 0x001B45B0u) [[unlikely]] return; }
L_001B45B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4DDC; } }
L_001B45B8:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 395u));
    set32(c.r[2], 0u - 17u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001B4DDC; } }
L_001B45D4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1u));
    st16((c.r[18].w[0] + 600u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 984u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B45FCu); set32(c.r[4], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x001B45FCu) [[unlikely]] return; }
L_001B45FC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 600u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 2u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_001B4634; } }
    c.f[2] = c.f[1];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 2;
L_001B4634:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B464C; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_001B464C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 76u), c.f[2]);  if (t) { goto L_001B4DDC; } }
L_001B465C:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4DDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B410000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4678u); c.r[5].d[0] = c.r[2].d[0] | 19785ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B4678u) [[unlikely]] return; }
L_001B4678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B468C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B468C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B468C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B469Cu);  if (depth < kMaxDepth) unit_0031(c, 148u, depth + 1u); else { c.pc = 0x001C5D60u; return; } if (c.pc != 0x001B469Cu) [[unlikely]] return; }
L_001B469C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4DDC; } }
L_001B46A4:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 392u));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001B4DDC; } }
L_001B46C0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B46D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 317u, depth + 1u); else { c.pc = 0x001FF2F0u; return; } if (c.pc != 0x001B46D4u) [[unlikely]] return; }
L_001B46D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4DDC; } }
L_001B46DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31184u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_001B4DDC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001B470C; } }
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4704u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 35u, depth + 1u); else { c.pc = 0x001B0680u; return; } if (c.pc != 0x001B4704u) [[unlikely]] return; }
L_001B4704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4DDC; } }
L_001B470C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001B472C; } }
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4724u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x001B4724u) [[unlikely]] return; }
L_001B4724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4DDC; } }
L_001B472C:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B473Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x001B473Cu) [[unlikely]] return; }
L_001B473C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4DDC; } }
L_001B4744:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[4].d[0] & 7ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B4DDC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4DDC; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    st32((c.r[18].w[0] + 980u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 984u), c.r[2].w[0]);  if (t) { goto L_001B4DDC; } }
L_001B4798:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B4DDC; } }
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[18].w[0] + 980u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 984u), 0u);  if (t) { goto L_001B4DDC; } }
L_001B47BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B4DDC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.f[20] = ld32((c.r[1].w[0] + 18040u));  if (t) { goto L_001B4824; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001B4800; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B4818; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001B4800:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001B4818:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18032u));
    fpu_div(c, 20u, c.f[0], c.f[1]);
    c.budget -= 3;
L_001B4824:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C460000u);
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4834u); c.r[5].d[0] = c.r[2].d[0] | 16707ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B4834u) [[unlikely]] return; }
L_001B4834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B4848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B4848; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4848:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.f[12] = c.f[20];  if (t) { goto L_001B485C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4858u);  if (depth < kMaxDepth) unit_000F(c, 43u, depth + 1u); else { c.pc = 0x0013C510u; return; } if (c.pc != 0x001B4858u) [[unlikely]] return; }
L_001B4858:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_001B485C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4864u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 288u, depth + 1u); else { c.pc = 0x001DBB30u; return; } if (c.pc != 0x001B4864u) [[unlikely]] return; }
L_001B4864:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4870u); set32(c.r[4], c.r[18].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001B4870u) [[unlikely]] return; }
L_001B4870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4DDC; } }
L_001B4878:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B4DDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1u));
    c.f[20] = ld32((c.r[1].w[0] + 18032u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001B48DC; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001B48B8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B48D0; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001B48B8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001B48D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18032u));
    fpu_div(c, 20u, c.f[0], c.f[1]);
    c.budget -= 3;
L_001B48DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C460000u);
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B48ECu); c.r[5].d[0] = c.r[2].d[0] | 16707ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B48ECu) [[unlikely]] return; }
L_001B48EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B48FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B4900; } }
L_001B48FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    st32((c.r[2].w[0] + 92u), c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 96u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001B4DDC; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001B4918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001B4DDC; } }
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_001B4924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001B4DDC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001B4930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001B4DDC; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_001B493C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001B4DDC; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 1;
L_001B4948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001B4DDC; } }
L_001B4950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_001B4DDC; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_001B495C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001B4DDC; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
L_001B4968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001B4DDC; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001B4974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001B4DDC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B4980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001B4DDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 1;
L_001B498C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4998u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B4998u) [[unlikely]] return; }
L_001B4998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B49AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B49AC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B49AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B49B4u);  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001CD4B0u; return; } if (c.pc != 0x001B49B4u) [[unlikely]] return; }
L_001B49B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001B4DDC; } }
L_001B49C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), 0u);  if (t) { goto L_001B4DDC; } }
L_001B49D0:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18024u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[29].w[0] + 324u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    st8((c.r[29].w[0] + 325u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 3u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 324u)));
    st8((c.r[29].w[0] + 322u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 4u));
    c.f[1] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[1]);
    st8((c.r[29].w[0] + 323u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 5u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 322u)));
    st8((c.r[29].w[0] + 320u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = ld8((c.r[20].w[0] + 6u));
    c.f[22] = fp::cvt_s_w(c.f[1]);
    st8((c.r[29].w[0] + 321u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 320u)));
    c.f[22] = fp::mul(c.f[22], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4A3Cu); c.f[21] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0038(c, 66u, depth + 1u); else { c.pc = 0x001E0DC0u; return; } if (c.pc != 0x001B4A3Cu) [[unlikely]] return; }
L_001B4A3C:
    c.f[2] = ld32((c.r[17].w[0] + 228u));
    c.f[1] = 0u;
    c.f[2] = fp::add(c.f[2], c.f[22]);
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B4A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001B4A68; } }
L_001B4A60:
    c.f[2] = c.f[2] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_001B4A68:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B4A84; } }
    c.f[1] = ld32((c.r[17].w[0] + 228u));
    c.f[22] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 2;
L_001B4A84:
    c.f[12] = ld32((c.r[17].w[0] + 212u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4A90u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001B4A90u) [[unlikely]] return; }
L_001B4A90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[29].w[0] + 288u);
    c.f[0] = ld32((c.r[1].w[0] + 18024u));
    st32((c.r[29].w[0] + 300u), 0u);
    st32((c.r[29].w[0] + 292u), c.f[22]);
    set32(c.r[2], c.r[29].w[0] + 224u);
    c.f[1] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    st32((c.r[29].w[0] + 288u), c.f[1]);
    st32((c.r[29].w[0] + 296u), c.f[0]);
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
    c.f[0] = 0u;
    set32(c.r[2], c.r[17].w[0] + 224u);
    set32(c.r[3], c.r[29].w[0] + 288u);
    st32((c.r[29].w[0] + 300u), c.f[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], c.r[29].w[0] + 288u);
    set32(c.r[2], ld32((c.r[2].w[0] + 240u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 8u));
    c.f[1] = ld32((c.r[1].w[0] + 18048u));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 7u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[1].w[0] + 18016u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 308u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 308u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 63;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B4BA0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18008u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 308u), c.f[0]);  if (t) { goto L_001B4BC4; } }
L_001B4BA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18000u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B4BC4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18008u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 308u), c.f[0]);
    c.budget -= 4;
L_001B4BC4:
    c.f[2] = ld32((c.r[17].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 308u));
    c.f[0] = ld32((c.r[1].w[0] + 18016u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 308u), c.f[1]);  if (t) { goto L_001B4BF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18008u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 308u), c.f[0]);  if (t) { goto L_001B4C1C; } }
L_001B4BF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18000u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B4C1C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18008u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 308u), c.f[0]);
    c.budget -= 4;
L_001B4C1C:
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4C2Cu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001B4C2Cu) [[unlikely]] return; }
L_001B4C2C:
    set32(c.r[3], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[29].w[0] + 208u);
    set32(c.r[4], c.r[29].w[0] + 208u);
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
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);
    c.r[5].d[0] = c.r[2].d[0] | 18543ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4C78u); st32((c.r[29].w[0] + 220u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B4C78u) [[unlikely]] return; }
L_001B4C78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001B4C8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B4C8C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4C8C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4D04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B4CF8; } }
    set32(c.r[6], c.r[2].w[0] << 2);
    c.budget -= 1;
L_001B4CA0:
    set32(c.r[5], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[17].w[0]);
    set32(c.r[7], c.r[5].w[0] + 288u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] + 208u);
    st32((c.r[4].w[0] + 224u), c.f[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + 64u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + 80u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + 48u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 22;
L_001B4CF8:
    c.r[4].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[2].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4CA0u | kUnwind; return; } goto L_001B4CA0; } }
L_001B4D04:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 7u));
    c.f[1] = ld32((c.r[1].w[0] + 18048u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[1].w[0] + 18016u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 304u), c.f[1]);  if (t) { goto L_001B4D5C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18008u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 304u), c.f[0]);  if (t) { goto L_001B4D80; } }
L_001B4D5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18000u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B4D80; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18008u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 304u), c.f[0]);
    c.budget -= 4;
L_001B4D80:
    c.f[12] = ld32((c.r[29].w[0] + 304u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4D90u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 350u, depth + 1u); else { c.pc = 0x001CBD30u; return; } if (c.pc != 0x001B4D90u) [[unlikely]] return; }
L_001B4D90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4DA0u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B4DA0u) [[unlikely]] return; }
L_001B4DA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B4DB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B4DB4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4DB4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B4DDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4DC4u);  if (depth < kMaxDepth) unit_0033(c, 4u, depth + 1u); else { c.pc = 0x001CC060u; return; } if (c.pc != 0x001B4DC4u) [[unlikely]] return; }
L_001B4DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4DDC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 192ll ? 1ull : 0ull;
    c.budget -= 1;
L_001B4DD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4DDC; } }
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_001B4DDC:
    set32(c.r[30], c.r[30].w[0] - c.r[22].w[0]);
    c.budget -= 1;
L_001B4DE0:
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] > 0; set32(c.r[20], c.r[20].w[0] + c.r[22].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B3198u | kUnwind; return; } [[clang::musttail]] return unit_002C(c, 480u, depth); } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B4DEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_001B4DF0:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_001B4E30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B4EAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 9680u);
    set32(c.r[3], c.r[3].w[0] - 9664u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 9648u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4E7Cu); st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001B4E7Cu) [[unlikely]] return; }
L_001B4E7C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4E88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x001B4E88u) [[unlikely]] return; }
L_001B4E88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4E94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x001B4E94u) [[unlikely]] return; }
L_001B4E94:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B4EB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4EACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B4EACu) [[unlikely]] return; }
L_001B4EAC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B4EB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B4ED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 10144u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0]));  c.pc = t; return; }
L_001B4EF0:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[29], c.r[29].w[0] - 16u);
    st8((c.r[29].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[29].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    st8((c.r[29].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    st8((c.r[29].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B4F20:
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10176u);
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x001B4000u < 16384u) { entry = entries_002D[(t - 0x001B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001B4F50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F7Cu); c.r[5].d[0] = c.r[2].d[0] | 19780ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001B4F7Cu) [[unlikely]] return; }
L_001B4F7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9824u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
L_001B4F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 89u, depth + 1u); else { c.pc = 0x001B4F20u; return; } if (c.pc != 0x001B4F9Cu) [[unlikely]] return; }
L_001B4F9C:
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st16((c.r[3].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[18].sd[0] < 29ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4F94u | kUnwind; return; } goto L_001B4F94; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B4FE0:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 36u)));  c.pc = t; return; }
L_001B4FF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B5034; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[3].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5028u); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x001B5028u) [[unlikely]] return; }
L_001B5028:
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    st128((c.r[2].w[0] + 64u) & ~15u, c.r[3]);
    c.budget -= 3;
L_001B5034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B503Cu); set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_0014(c, 69u, depth + 1u); else { c.pc = 0x00151160u; return; } if (c.pc != 0x001B503Cu) [[unlikely]] return; }
L_001B503C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B5050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5078u); c.r[5].d[0] = c.r[2].d[0] | 21580ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001B5078u) [[unlikely]] return; }
L_001B5078:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9840u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5094u); c.r[5].d[0] = c.r[2].d[0] | 16722ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B5094u) [[unlikely]] return; }
L_001B5094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B50A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B50A8; } }
L_001B50A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B50A8:
    set32(c.r[2], c.r[2].w[0] + 164u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B50C0u); c.r[5].d[0] = c.r[2].d[0] | 16722ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B50C0u) [[unlikely]] return; }
L_001B50C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B50D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B50D4; } }
L_001B50D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B50D4:
    set32(c.r[2], c.r[2].w[0] + 168u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B50ECu); c.r[5].d[0] = c.r[2].d[0] | 16722ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B50ECu) [[unlikely]] return; }
L_001B50EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B50FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B5100; } }
L_001B50FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B5100:
    set32(c.r[2], c.r[2].w[0] + 172u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5118u); c.r[5].d[0] = c.r[2].d[0] | 16722ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B5118u) [[unlikely]] return; }
L_001B5118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B512C; } }
L_001B5128:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B512C:
    set32(c.r[2], c.r[2].w[0] + 176u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5144u); c.r[5].d[0] = c.r[2].d[0] | 16722ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B5144u) [[unlikely]] return; }
L_001B5144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5154; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B5158; } }
L_001B5154:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B5158:
    set32(c.r[2], c.r[2].w[0] + 180u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5170u); c.r[5].d[0] = c.r[2].d[0] | 19780ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B5170u) [[unlikely]] return; }
L_001B5170:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B5184; } }
L_001B5180:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B5184:
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st32((c.r[17].w[0] + 72u), 0u);
    c.r[5].d[0] = c.r[2].d[0] | 16722ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B51ACu); st32((c.r[17].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B51ACu) [[unlikely]] return; }
L_001B51AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B51BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B51C0; } }
L_001B51BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B51C0:
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 76u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B51F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 21580ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5220u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001B5220u) [[unlikely]] return; }
L_001B5220:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9840u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 164u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 168u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 172u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 176u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 180u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5264u); c.r[5].d[0] = c.r[2].d[0] | 19780ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B5264u) [[unlikely]] return; }
L_001B5264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5274; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B5278; } }
L_001B5274:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B5278:
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 64u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 40u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 76u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B52C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001B5300; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[3].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    st32((c.r[3].w[0]), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[3].w[0]), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_001B5300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5300u);  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001B5300u) [[unlikely]] return; }
L_001B5300:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B5310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001B5350; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[3].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    st32((c.r[3].w[0]), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[3].w[0]), c.r[8].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B5350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5350u);  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001B5350u) [[unlikely]] return; }
L_001B5350:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B5360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x494B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5374u); c.r[5].d[0] = c.r[2].d[0] | 21573ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B5374u) [[unlikely]] return; }
L_001B5374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001B5380; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001B5380:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B5390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001B53B8; } }
L_001B5390:
    set32(c.r[2], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B53B4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B53B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B53B4; } }
L_001B53B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B53B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B53B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B53C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 395u));
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_001B5418; } }
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[1].w[0] + 18608u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[20] = fp::mul(c.f[20], c.f[0]);  if (t) { goto L_001B54B8; } }
L_001B5418:
    set32(c.r[4], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] << 62;  if (t) { goto L_001B547C; } }
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B547C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.f[21] = ld32((c.r[4].w[0] + 356u));  if (t) { goto L_001B543C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001B543C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5444u);  if (depth < kMaxDepth) unit_002D(c, 114u, depth + 1u); else { c.pc = 0x001B5360u; return; } if (c.pc != 0x001B5444u) [[unlikely]] return; }
L_001B5444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B545C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.f[0] = ld32((c.r[2].w[0] + 360u));
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 4;
L_001B545C:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18608u));
    c.f[1] = fp::sub(c.f[21], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[20] = fp::mul(c.f[20], c.f[0]);  if (t) { goto L_001B54B8; } }
L_001B547C:
    c.f[21] = ld32((c.r[5].w[0] + 356u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5488u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 114u, depth + 1u); else { c.pc = 0x001B5360u; return; } if (c.pc != 0x001B5488u) [[unlikely]] return; }
L_001B5488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B549C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.f[0] = ld32((c.r[2].w[0] + 360u));
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 3;
L_001B549C:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18608u));
    c.f[1] = fp::sub(c.f[21], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 7;
L_001B54B8:
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = c.f[20];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B54E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 18543ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5510u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001B5510u) [[unlikely]] return; }
L_001B5510:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9856u);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B552Cu); c.r[5].d[0] = c.r[2].d[0] | 21580ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B552Cu) [[unlikely]] return; }
L_001B552C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B553C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B5540; } }
L_001B553C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B5540:
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5554u); c.r[5].d[0] = c.r[2].d[0] | 19780ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B5554u) [[unlikely]] return; }
L_001B5554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5564; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B5568; } }
L_001B5564:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B5568:
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[16].w[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5590u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001B5590u) [[unlikely]] return; }
L_001B5590:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B55A8u); set32(c.r[7], 0u + 304u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x001B55A8u) [[unlikely]] return; }
L_001B55A8:
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[16].w[0] << 6);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B55BCu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001B55BCu) [[unlikely]] return; }
L_001B55BC:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B55D4u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x001B55D4u) [[unlikely]] return; }
L_001B55D4:
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[16].w[0] << 6);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B55E8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001B55E8u) [[unlikely]] return; }
L_001B55E8:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5600u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x001B5600u) [[unlikely]] return; }
L_001B5600:
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 31520u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5618u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 136u, depth + 1u); else { c.pc = 0x001B5710u; return; } if (c.pc != 0x001B5618u) [[unlikely]] return; }
L_001B5618:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B5640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B56EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 9856u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5684; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_001B5684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5684u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001B5684u) [[unlikely]] return; }
L_001B5684:
    st32((c.r[17].w[0] + 44u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B56A4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_001B56A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B56A4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001B56A4u) [[unlikely]] return; }
L_001B56A4:
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B56C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_001B56C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B56C4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001B56C4u) [[unlikely]] return; }
L_001B56C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B56C8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B56D4u); st32((c.r[17].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001B56D4u) [[unlikely]] return; }
L_001B56D4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B56F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B56ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B56ECu) [[unlikely]] return; }
L_001B56EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B56F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B5710:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B5740; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B5740:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5750u); c.r[5].d[0] = c.r[2].d[0] | 16722ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B5750u) [[unlikely]] return; }
L_001B5750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001B575C; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001B575C:
    c.r[15].d[0] = 0ull << 48;
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 48);
    c.r[25].d[0] = 0ull + 0ull;
    c.r[14].d[0] = c.r[15].d[0] + 0ull;
    set32(c.r[9], 0u + 6u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 10u);
    set32(c.r[10], 0u + 7u);
    set32(c.r[12], c.r[12].w[0] + 10144u);
    c.r[13].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 14u);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 23u);  if (t) { goto L_001B59F4; } }
L_001B57A0:
    set32(c.r[11], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[20], c.r[25].w[0] << 3);
    set32(c.r[20], c.r[20].w[0] + c.r[25].w[0]);
    set32(c.r[20], c.r[20].w[0] << 1);
    set32(c.r[20], c.r[20].w[0] + c.r[25].w[0]);
    set32(c.r[20], c.r[20].w[0] << 4);
    set32(c.r[24], c.r[11].w[0] + c.r[20].w[0]);
    st128((c.r[24].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[11], c.r[24].w[0] + 16u);
    st128((c.r[11].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[11], c.r[24].w[0] + 32u);
    st128((c.r[11].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[11], c.r[24].w[0] + 48u);
    st128((c.r[11].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[11], c.r[24].w[0] + 64u);
    st128((c.r[11].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[11], c.r[24].w[0] + 80u);
    st128((c.r[11].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[11], c.r[24].w[0] + 96u);
    st128((c.r[11].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[11].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[11].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[11].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[11], c.r[24].w[0] + 160u);
    st128((c.r[11].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[11].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[11].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[11].w[0]) & ~15u, c.vu0.vf[3]);
    st16((c.r[24].w[0] + 298u), static_cast<std::uint16_t>(0u));
    set32(c.r[11], c.r[24].w[0] + 224u);
    st16((c.r[24].w[0] + 296u), static_cast<std::uint16_t>(c.r[15].w[0]));
    st16((c.r[24].w[0] + 294u), static_cast<std::uint16_t>(c.r[14].w[0]));
    st16((c.r[24].w[0] + 292u), static_cast<std::uint16_t>(c.r[13].w[0]));
    st128((c.r[11].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[11].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[11].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[11].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[11], c.r[25].w[0] << 3);
    st32((c.r[24].w[0] + 288u), 0u);
    set32(c.r[20], c.r[11].w[0] + c.r[25].w[0]);
    set32(c.r[21], c.r[20].w[0] << 1);
    set32(c.r[11], c.r[12].w[0] + c.r[25].w[0]);
    set32(c.r[20], c.r[25].w[0] << 3);
    set32(c.r[21], c.r[21].w[0] + c.r[25].w[0]);
    set32(c.r[20], c.r[20].w[0] + c.r[25].w[0]);
    set32(c.r[21], c.r[21].w[0] << 4);
    set32(c.r[24], c.r[20].w[0] << 1);
    set32(c.r[20], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[24], c.r[24].w[0] + c.r[25].w[0]);
    set32(c.r[24], c.r[24].w[0] << 4);
    set32(c.r[20], c.r[21].w[0] + c.r[20].w[0]);
    st8((c.r[20].w[0] + 301u), static_cast<std::uint8_t>(0u));
    c.r[20].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[11], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[11], c.r[24].w[0] + c.r[11].w[0]);
    c.budget -= 66;
    { const bool t = c.r[18].d[0] == 0ull; st8((c.r[11].w[0] + 300u), static_cast<std::uint8_t>(c.r[20].w[0]));  if (t) { goto L_001B58EC; } }
    set32(c.r[11], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[11], c.r[24].w[0] + c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[11].w[0] + 300u));
    c.budget -= 5;
    { const bool t = c.r[11].d[0] != c.r[10].d[0];  if (t) { goto L_001B58EC; } }
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == c.r[9].d[0];  if (t) { goto L_001B58CC; } }
    c.budget -= 2;
    { const bool t = c.r[25].d[0] != c.r[8].d[0];  if (t) { goto L_001B58EC; } }
L_001B58CC:
    set32(c.r[24], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[11], c.r[25].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] + c.r[25].w[0]);
    set32(c.r[11], c.r[11].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[25].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] + c.r[24].w[0]);
    st8((c.r[11].w[0] + 301u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 8;
L_001B58EC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001B594C; } }
    set32(c.r[24], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[11], c.r[25].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] + c.r[25].w[0]);
    set32(c.r[11], c.r[11].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[25].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] + c.r[24].w[0]);
    c.r[11].d[0] = ld8((c.r[11].w[0] + 300u));
    c.budget -= 10;
    { const bool t = c.r[11].d[0] != c.r[6].d[0];  if (t) { goto L_001B594C; } }
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == c.r[10].d[0];  if (t) { goto L_001B592C; } }
    c.budget -= 2;
    { const bool t = c.r[25].d[0] != c.r[5].d[0];  if (t) { goto L_001B594C; } }
L_001B592C:
    set32(c.r[24], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[11], c.r[25].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] + c.r[25].w[0]);
    set32(c.r[11], c.r[11].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[25].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] + c.r[24].w[0]);
    st8((c.r[11].w[0] + 301u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 8;
L_001B594C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[7].d[0];  if (t) { goto L_001B59BC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001B5988; } }
    set32(c.r[24], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[11], c.r[25].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] + c.r[25].w[0]);
    set32(c.r[11], c.r[11].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[25].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[24], c.r[11].w[0] + c.r[24].w[0]);
    c.r[11].d[0] = ld8((c.r[24].w[0] + 300u));
    c.budget -= 10;
    { const bool t = c.r[11].d[0] != c.r[8].d[0];  if (t) { goto L_001B5988; } }
    st8((c.r[24].w[0] + 300u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_001B5988:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001B59BC; } }
    set32(c.r[24], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[11], c.r[25].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] + c.r[25].w[0]);
    set32(c.r[11], c.r[11].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[25].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[24], c.r[11].w[0] + c.r[24].w[0]);
    c.r[11].d[0] = ld8((c.r[24].w[0] + 300u));
    c.budget -= 10;
    { const bool t = c.r[11].d[0] != c.r[3].d[0];  if (t) { goto L_001B59BC; } }
    st8((c.r[24].w[0] + 300u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 1;
L_001B59BC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001B59F0; } }
    set32(c.r[24], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[11], c.r[25].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] + c.r[25].w[0]);
    set32(c.r[11], c.r[11].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[25].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[24], c.r[11].w[0] + c.r[24].w[0]);
    c.r[11].d[0] = ld8((c.r[24].w[0] + 300u));
    c.budget -= 10;
    { const bool t = c.r[11].d[0] != c.r[10].d[0];  if (t) { goto L_001B59F0; } }
    st8((c.r[24].w[0] + 300u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 1;
L_001B59F0:
    set32(c.r[25], c.r[25].w[0] + 1u);
    c.budget -= 1;
L_001B59F4:
    set32(c.r[11], ld32((c.r[17].w[0] + 36u)));
    c.r[11].d[0] = c.r[25].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B57A0u | kUnwind; return; } goto L_001B57A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001B5B2C; } }
L_001B5A0C:
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B5A1Cu) [[unlikely]] return; }
L_001B5A1C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001B5A64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A30u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B5A30u) [[unlikely]] return; }
L_001B5A30:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 64u);
    set32(c.r[2], ld32((c.r[3].w[0] + 240u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A5Cu); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 53u, depth + 1u); else { c.pc = 0x00145110u; return; } if (c.pc != 0x001B5A5Cu) [[unlikely]] return; }
L_001B5A5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 56u)));  if (t) { goto L_001B5A90; } }
L_001B5A64:
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 64u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 11;
L_001B5A90:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B5A9Cu) [[unlikely]] return; }
L_001B5A9C:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 240u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 224u);
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5ADCu); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 53u, depth + 1u); else { c.pc = 0x00145110u; return; } if (c.pc != 0x001B5ADCu) [[unlikely]] return; }
L_001B5ADC:
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5AECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B5AECu) [[unlikely]] return; }
L_001B5AEC:
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[6], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 240u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 272u) & ~15u, c.r[3]);
    c.budget -= 16;
L_001B5B2C:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5A0Cu | kUnwind; return; } goto L_001B5A0C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001B5B60:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_001B630C; } }
L_001B5B90:
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B5B9Cu) [[unlikely]] return; }
L_001B5B9C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001B6308; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 294u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 292u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B5BE0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 294u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001B5BE0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 294u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 292u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B5C2C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 300u));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B60C8; } }
    set32(c.r[2], c.r[16].w[0] + 160u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[18].w[0]) & ~15u, c.r[6]);
    st128((c.r[18].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[18].w[0] + 32u) & ~15u, c.r[8]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st128((c.r[18].w[0] + 48u) & ~15u, c.r[9]);  if (t) { goto L_001B60C8; } }
L_001B5C2C:
    c.f[1] = c.r[5].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[16].w[0] + 300u));
    c.f[2] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], 0u + 7u);
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 20u, c.f[2], c.f[1]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = fp::sub(c.f[0], c.f[20]);  if (t) { goto L_001B5E00; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_001B5C94; } }
    set32(c.r[2], c.r[16].w[0] + 160u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[18].w[0]) & ~15u, c.r[6]);
    st128((c.r[18].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[18].w[0] + 32u) & ~15u, c.r[8]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st128((c.r[18].w[0] + 48u) & ~15u, c.r[9]);  if (t) { goto L_001B5D40; } }
L_001B5C94:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5CC8u); st32((c.r[16].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 40u, depth + 1u); else { c.pc = 0x00144A40u; return; } if (c.pc != 0x001B5CC8u) [[unlikely]] return; }
L_001B5CC8:
    set32(c.r[3], c.r[29].w[0] + 320u);
    set32(c.r[2], c.r[16].w[0] + 160u);
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
    c.budget -= 30;
L_001B5D40:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 301u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 96u);  if (t) { goto L_001B5DDC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 294u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 292u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B5D68; } }
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_001B5D80; } }
L_001B5D68:
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 6;
L_001B5D80:
    c.f[12] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5D8Cu); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0011(c, 30u, depth + 1u); else { c.pc = 0x001446D0u; return; } if (c.pc != 0x001B5D8Cu) [[unlikely]] return; }
L_001B5D8C:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 26u);  if (t) { goto L_001B5DA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 25u);  if (t) { goto L_001B5DA4; } }
    set32(c.r[5], 0u + 26u);
    c.budget -= 1;
L_001B5DA4:
    set32(c.r[20], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5DB0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B5DB0u) [[unlikely]] return; }
L_001B5DB0:
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[4], c.r[2].w[0] << 6);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[3].w[0] + 204u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[16].w[0] + 96u);
    c.budget -= 11;
L_001B5DDC:
    ld128((c.r[18].w[0]) & ~15u, c.r[6]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[18].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[18].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);  if (t) { goto L_001B60C8; } }
L_001B5E00:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001B5E14; } }
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[16].w[0]) & ~15u, c.r[2]);
    c.budget -= 3;
L_001B5E14:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 300u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B5E30; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_001B5E68; } }
L_001B5E30:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001B5E50; } }
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 6;
L_001B5E50:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5E5Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001B5E5Cu) [[unlikely]] return; }
L_001B5E5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B60C8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001B5E68:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_001B5EA8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001B5E90; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 6;
L_001B5E90:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5E9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 31u, depth + 1u); else { c.pc = 0x00144760u; return; } if (c.pc != 0x001B5E9Cu) [[unlikely]] return; }
L_001B5E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B60C8; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_001B5EA8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B5EBC; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[7], 0u + 3u);  if (t) { goto L_001B5F0C; } }
L_001B5EBC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001B5EF8; } }
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 13;
L_001B5EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5F00u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 56u, depth + 1u); else { c.pc = 0x001452D0u; return; } if (c.pc != 0x001B5F00u) [[unlikely]] return; }
L_001B5F00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B60C8; } }
    set32(c.r[7], 0u + 3u);
    c.budget -= 1;
L_001B5F0C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_001B60A0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 301u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B6054; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001B5F40; } }
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 6;
L_001B5F40:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5F4Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001B5F4Cu) [[unlikely]] return; }
L_001B5F4C:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5F70u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0011(c, 30u, depth + 1u); else { c.pc = 0x001446D0u; return; } if (c.pc != 0x001B5F70u) [[unlikely]] return; }
L_001B5F70:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 28u);  if (t) { goto L_001B5F88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 27u);  if (t) { goto L_001B5F88; } }
    set32(c.r[5], 0u + 28u);
    c.budget -= 1;
L_001B5F88:
    set32(c.r[2], c.r[29].w[0] + 128u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[3], c.r[29].w[0] + 192u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[29].w[0] + 128u);
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
    set32(c.r[20], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6030u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B6030u) [[unlikely]] return; }
L_001B6030:
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[6], 0u + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 204u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B604Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001B604Cu) [[unlikely]] return; }
L_001B604C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B60C8; } }
L_001B6054:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B6090; } }
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
L_001B6090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6098u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 105u, depth + 1u); else { c.pc = 0x00146300u; return; } if (c.pc != 0x001B6098u) [[unlikely]] return; }
L_001B6098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B60C8; } }
L_001B60A0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B60C0; } }
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B60BCu); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 18u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x001B60BCu) [[unlikely]] return; }
L_001B60BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B60C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B60C8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 105u, depth + 1u); else { c.pc = 0x00146300u; return; } if (c.pc != 0x001B60C8u) [[unlikely]] return; }
L_001B60C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001B60DC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 296u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B6188; } }
L_001B60DC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 298u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 296u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B60F8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 298u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001B60F8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 298u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 296u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_001B611C; } }
    ld128((c.r[16].w[0] + 80u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);  if (t) { goto L_001B6158; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001B611C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B6158; } }
    c.f[1] = c.r[4].w[0];
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[6], c.r[16].w[0] + 64u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[7], 0u + 3u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6158u);  if (depth < kMaxDepth) unit_0011(c, 18u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x001B6158u) [[unlikely]] return; }
L_001B6158:
    set32(c.r[20], ld32((c.r[19].w[0] + 56u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6168u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B6168u) [[unlikely]] return; }
L_001B6168:
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 204u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    c.budget -= 8;
L_001B6188:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 294u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 292u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] << 6);  if (t) { goto L_001B6258; } }
    set32(c.r[2], c.r[17].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 64u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[13]);
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
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6228u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B6228u) [[unlikely]] return; }
L_001B6228:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[2].w[0] << 6);
    ld128((c.r[18].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[3].w[0] + 204u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[18].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 32u) & ~15u, c.r[2]);  if (t) { goto L_001B6308; } }
    set32(c.r[2], c.r[17].w[0] << 6);
    c.budget -= 1;
L_001B6258:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 64u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[13]);
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
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B62E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B62E0u) [[unlikely]] return; }
L_001B62E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[2].w[0] << 6);
    ld128((c.r[18].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[3].w[0] + 204u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[18].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 10;
L_001B6308:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001B630C:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5B90u | kUnwind; return; } goto L_001B5B90; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], c.r[29].w[0] + 112u);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[12] = ld32((c.r[29].w[0] + 116u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6338u); set32(c.r[4], ld32((c.r[19].w[0] + 52u)));  if (depth < kMaxDepth) unit_002D(c, 116u, depth + 1u); else { c.pc = 0x001B53C0u; return; } if (c.pc != 0x001B6338u) [[unlikely]] return; }
L_001B6338:
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B634Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B634Cu) [[unlikely]] return; }
L_001B634C:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[2].w[0] << 6);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6380u); set32(c.r[5], c.r[2].w[0] + 208u);  if (depth < kMaxDepth) unit_002D(c, 95u, depth + 1u); else { c.pc = 0x001B4FF0u; return; } if (c.pc != 0x001B6380u) [[unlikely]] return; }
L_001B6380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_001B63B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B63D8u); c.r[5].d[0] = c.r[2].d[0] | 17524ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001B63D8u) [[unlikely]] return; }
L_001B63D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9872u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B63F4u); c.r[5].d[0] = c.r[2].d[0] | 21580ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B63F4u) [[unlikely]] return; }
L_001B63F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B6404; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B6408; } }
L_001B6404:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B6408:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B641Cu); c.r[5].d[0] = c.r[2].d[0] | 18543ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B641Cu) [[unlikely]] return; }
L_001B641C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B642C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B6430; } }
L_001B642C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B6430:
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53340000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6444u); c.r[5].d[0] = c.r[2].d[0] | 16724ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B6444u) [[unlikely]] return; }
L_001B6444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B6454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B6458; } }
L_001B6454:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B6458:
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 40u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B6480:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[20], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B64CC; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_001B6638; } }
L_001B64CC:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < 7000ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001B64FC; } }
    c.r[1].d[0] = c.r[5].sd[0] < 7230ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B64FC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28312u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001B653C; } }
L_001B64FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B6570; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[9], c.r[29].w[0] + 124u);
    set32(c.r[6], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[10], c.r[29].w[0] + 120u);
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6534u); set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (depth < kMaxDepth) unit_001A(c, 45u, depth + 1u); else { c.pc = 0x00168AA0u; return; } if (c.pc != 0x001B6534u) [[unlikely]] return; }
L_001B6534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B6570; } }
L_001B653C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B6570; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[9], c.r[29].w[0] + 124u);
    set32(c.r[6], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[10], c.r[29].w[0] + 120u);
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B656Cu); set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (depth < kMaxDepth) unit_001A(c, 45u, depth + 1u); else { c.pc = 0x00168AA0u; return; } if (c.pc != 0x001B656Cu) [[unlikely]] return; }
L_001B656C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B6570:
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[18], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[18].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_001B659C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B6638; } }
L_001B659C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001B65B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_001B663C; } }
L_001B65B0:
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B661C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.r[17].d[0] = c.r[3].d[0] & 127ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[19].w[0] + 1u);  if (t) { goto L_001B65F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53340000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B65E0u); c.r[5].d[0] = c.r[2].d[0] | 16724ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B65E0u) [[unlikely]] return; }
L_001B65E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B65F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B65F4; } }
L_001B65F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B65F4:
    st32((c.r[21].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_001B65F8:
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B661C; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 120u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6614u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 478u, depth + 1u); else { c.pc = 0x001B3120u; return; } if (c.pc != 0x001B6614u) [[unlikely]] return; }
L_001B6614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B64CCu | kUnwind; return; } goto L_001B64CC; } }
L_001B661C:
    set32(c.r[6], ld32((c.r[29].w[0] + 124u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6634u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_002D(c, 221u, depth + 1u); else { c.pc = 0x001B7220u; return; } if (c.pc != 0x001B6634u) [[unlikely]] return; }
L_001B6634:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B6638:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001B663C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001B6660:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[3].d[0] | 224ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[3].d[0] | 64ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[3].d[0] | 128ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[3].d[0] | 192ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[3].d[0] | 208ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[23], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[3].d[0] | 240ull;  if (t) { goto L_001B66D0; } }
L_001B66C0:
    set32(c.r[3], c.r[17].w[0] + c.r[7].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_001B66D0:
    c.r[3].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[6].w[0] + c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B66C0u | kUnwind; return; } goto L_001B66C0; } }
    set32(c.r[4], ld32((c.r[23].w[0] + 32u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[3], 0u + 10u);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[16], c.r[4].w[0] + c.r[7].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 300u));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 14u);  if (t) { goto L_001B6710; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B6734; } }
L_001B6710:
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 2u));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_001B6734:
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B6768; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B674Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 195u, depth + 1u); else { c.pc = 0x001B6DE0u; return; } if (c.pc != 0x001B674Cu) [[unlikely]] return; }
L_001B674C:
    set32(c.r[3], ld32((c.r[23].w[0] + 32u)));
    set32(c.r[4], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
L_001B6768:
    st16((c.r[16].w[0] + 292u), static_cast<std::uint16_t>(c.r[30].w[0]));
    set32(c.r[2], c.r[16].w[0] + 32u);
    st16((c.r[16].w[0] + 294u), static_cast<std::uint16_t>(0u));
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], 0u + 4u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 300u));
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[23], 0u + 2u);  if (t) { goto L_001B68A0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[23].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_001B6884; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001B684C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001B6814; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 14u);  if (t) { goto L_001B67F4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001B67C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001B68C0; } }
L_001B67C0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_001B6908; } }
L_001B67F4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[23], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_001B6908; } }
L_001B6814:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_001B6908; } }
L_001B684C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_001B6908; } }
L_001B6884:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_001B6908; } }
L_001B68A0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[23], 0u + 2u);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_001B6908; } }
L_001B68C0:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 5u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 18;
L_001B6908:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 300u));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001B6CF8; } }
    set32(c.r[2], c.r[16].w[0] + 96u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[21].w[0]) & ~15u, c.r[6]);
    st128((c.r[21].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[21].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[21].w[0] + 48u) & ~15u, c.r[9]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 301u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 160u);  if (t) { goto L_001B6A4C; } }
    set32(c.r[4], c.r[16].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6954u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001454F0u; return; } if (c.pc != 0x001B6954u) [[unlikely]] return; }
L_001B6954:
    set32(c.r[4], c.r[16].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6960u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0011(c, 32u, depth + 1u); else { c.pc = 0x001447F0u; return; } if (c.pc != 0x001B6960u) [[unlikely]] return; }
L_001B6960:
    c.f[2] = ld32((c.r[29].w[0] + 184u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[1].w[0] + 18600u));
    c.f[20] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B698C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18592u));
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 3;
L_001B698C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18584u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B69AC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18592u));
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 3;
L_001B69AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[16].w[0] + 160u);
    c.f[1] = ld32((c.r[1].w[0] + 18576u));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B69D0u); st32((c.r[29].w[0] + 184u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 40u, depth + 1u); else { c.pc = 0x00144A40u; return; } if (c.pc != 0x001B69D0u) [[unlikely]] return; }
L_001B69D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18568u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[2] = c.f[0];
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[16].w[0] + 28u);  if (t) { goto L_001B6A24; } }
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18600u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001B6A54; } }
    c.f[0] = ld32((c.r[1].w[0] + 18592u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_001B6A54; } }
L_001B6A24:
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18600u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001B6A54; } }
    c.f[0] = ld32((c.r[1].w[0] + 18592u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_001B6A54; } }
L_001B6A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6A54u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001454F0u; return; } if (c.pc != 0x001B6A54u) [[unlikely]] return; }
L_001B6A54:
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[19].w[0]), c.f[0]);
    c.f[2] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = 0u;
    st32((c.r[19].w[0] + 4u), c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[1]);
    st32((c.r[19].w[0] + 12u), c.f[0]);
    c.f[3] = c.r[2].w[0];
    c.f[2] = 0u;
    st32((c.r[18].w[0]), c.f[3]);
    c.f[1] = 0u;
    st32((c.r[18].w[0] + 4u), c.f[2]);
    c.f[0] = 0u;
    st32((c.r[18].w[0] + 8u), c.f[1]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    ld128((c.r[21].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[21].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[21].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[21].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[12]);
    ld128((c.r[21].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[21].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[21].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[21].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[12]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6B04u); set32(c.r[5], c.r[16].w[0] + 160u);  if (depth < kMaxDepth) unit_0000(c, 350u, depth + 1u); else { c.pc = 0x00103970u; return; } if (c.pc != 0x001B6B04u) [[unlikely]] return; }
L_001B6B04:
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[20].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[12]);
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[20].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[1].w[0] + 18560u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 26;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B6BC0; } }
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001B6BC0; } }
    c.f[0] = ld32((c.r[1].w[0] + 18552u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B6BC0; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B6BC0; } }
    st32((c.r[22].w[0]), 0u);
    c.f[1] = 0u;
    st32((c.r[22].w[0] + 4u), 0u);
    c.f[0] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001B6C78; } }
    c.f[0] = ld32((c.r[1].w[0] + 18600u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 4u), c.f[0]);  if (t) { goto L_001B6C78; } }
L_001B6BC0:
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[12] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6BD0u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 97u, depth + 1u); else { c.pc = 0x00145DD0u; return; } if (c.pc != 0x001B6BD0u) [[unlikely]] return; }
L_001B6BD0:
    st32((c.r[22].w[0]), c.f[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6BE0u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 30u, depth + 1u); else { c.pc = 0x001446D0u; return; } if (c.pc != 0x001B6BE0u) [[unlikely]] return; }
L_001B6BE0:
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[20].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[12]);
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[20].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[12]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[13] = ld32((c.r[18].w[0]));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6C40u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 97u, depth + 1u); else { c.pc = 0x00145DD0u; return; } if (c.pc != 0x001B6C40u) [[unlikely]] return; }
L_001B6C40:
    st32((c.r[22].w[0] + 4u), c.f[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6C50u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001B6C50u) [[unlikely]] return; }
L_001B6C50:
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[20].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[12]);
    c.budget -= 10;
L_001B6C78:
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[12] = ld32((c.r[19].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6C88u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 97u, depth + 1u); else { c.pc = 0x00145DD0u; return; } if (c.pc != 0x001B6C88u) [[unlikely]] return; }
L_001B6C88:
    c.f[1] = ld32((c.r[22].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[22].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 18600u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001B6CBC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18592u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 8u), c.f[0]);  if (t) { goto L_001B6CDC; } }
L_001B6CBC:
    c.f[0] = ld32((c.r[1].w[0] + 18584u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B6CDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18592u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[22].w[0] + 8u), c.f[0]);
    c.budget -= 4;
L_001B6CDC:
    c.f[0] = ld32((c.r[22].w[0]));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 4u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 8u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.f[0]);  if (t) { goto L_001B6DA8; } }
L_001B6CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001B6D9C; } }
L_001B6D00:
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_001B6D98; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    c.f[0] = ld32((c.r[1].w[0] + 18544u));
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.f[2] = c.f[0];
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[2].w[0] + 16u);  if (t) { goto L_001B6D74; } }
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18600u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001B6D98; } }
    c.f[0] = ld32((c.r[1].w[0] + 18592u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { goto L_001B6D98; } }
L_001B6D74:
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18600u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001B6D98; } }
    c.f[0] = ld32((c.r[1].w[0] + 18592u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 3;
L_001B6D98:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001B6D9C:
    c.r[2].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << (c.r[6].w[0] & 31u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6D00u | kUnwind; return; } goto L_001B6D00; } }
L_001B6DA8:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001B6DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001B6DE8:
    set32(c.r[3], c.r[10].w[0] << 1);
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[3].w[0] + c.r[29].w[0]);
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[9], c.r[8].w[0] + 8u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[10].sd[0] < 3ll ? 1ull : 0ull;
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[9].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6DE8u | kUnwind; return; } goto L_001B6DE8; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(21ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B70A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 18368u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001B4000u < 16384u) { entry = entries_002D[(t - 0x001B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001B6E48:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 8u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 12u));
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], c.r[7].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B70AC; } }
L_001B6E6C:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 8u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 12u));
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], c.r[7].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B70AC; } }
L_001B6E90:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 8u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 12u));
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], c.r[7].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B70AC; } }
L_001B6EB4:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 10u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B70AC; } }
L_001B6ECC:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 8u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 12u));
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], c.r[7].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B70AC; } }
L_001B6EF0:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 10u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 9u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B70AC; } }
L_001B6F0C:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 8u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 12u));
    set32(c.r[4], 0u + 10u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], c.r[7].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B70AC; } }
L_001B6F34:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 11u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B70AC; } }
L_001B6F50:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 10u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 12u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B70AC; } }
L_001B6F6C:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 10u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B70AC; } }
L_001B6F88:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 8u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 12u));
    set32(c.r[4], 0u + 6u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], c.r[7].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B70AC; } }
L_001B6FB0:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 7u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B70AC; } }
L_001B6FCC:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 10u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B70AC; } }
L_001B6FE8:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 8u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 12u));
    set32(c.r[4], 0u + 17u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], c.r[7].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B70AC; } }
L_001B7010:
    set32(c.r[4], 0u + 18u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B70AC; } }
L_001B701C:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 10u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 19u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B70AC; } }
L_001B7038:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B70AC; } }
L_001B7044:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 8u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 12u));
    set32(c.r[4], 0u + 13u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], c.r[7].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    st16((c.r[29].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B70AC; } }
L_001B706C:
    set32(c.r[4], 0u + 14u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B70AC; } }
L_001B7078:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 10u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 15u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B70AC; } }
L_001B7094:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B70AC; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_001B70A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[29].w[0] + 16u);  if (t) { goto L_001B70E8; } }
L_001B70AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001B70D4; } }
L_001B70B4:
    set32(c.r[3], c.r[7].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[8], c.r[3].w[0]);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 1u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_001B70D4:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[5].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B70B4u | kUnwind; return; } goto L_001B70B4; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_001B70E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B70F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_001B7100:
    c.f[2] = ld32((c.r[4].w[0] + 64u));
    c.f[1] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B7128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_001B7130; } }
L_001B7128:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 2;
L_001B7130:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B71CC; } }
    c.f[2] = ld32((c.r[4].w[0] + 68u));
    c.f[1] = ld32((c.r[4].w[0] + 84u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B716C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_001B7174; } }
L_001B716C:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 2;
L_001B7174:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B71CC; } }
    c.f[2] = ld32((c.r[4].w[0] + 72u));
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B71B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_001B71B8; } }
L_001B71B0:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 2;
L_001B71B8:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B71E0; } }
L_001B71CC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 296u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001B71E0; } }
    st16((c.r[4].w[0] + 296u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001B71E0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B720C; } }
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_001B720C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7220:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 240u), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001B7288; } }
    c.r[2].d[0] = c.r[3].d[0] & 127ull;
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 6;
L_001B7288:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[23], ld32((c.r[30].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 188u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_001B7B44; } }
L_001B72A0:
    set32(c.r[3], 0u + 126u);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 127u);  if (t) { goto L_001B73D4; } }
    set32(c.r[20], ld32((c.r[23].w[0] + 32u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    c.f[0] = ld32((c.r[1].w[0] + 18536u));
    st8((c.r[29].w[0] + 286u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 3u));
    st8((c.r[29].w[0] + 287u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 286u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 80u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[1].w[0] + 18536u));
    st8((c.r[29].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 5u));
    st8((c.r[29].w[0] + 285u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 284u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 84u), c.f[0]);
    st32((c.r[20].w[0] + 84u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    c.f[0] = ld32((c.r[1].w[0] + 18536u));
    st8((c.r[29].w[0] + 282u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 7u));
    st8((c.r[29].w[0] + 283u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 282u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 88u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 41;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + 80u);  if (t) { goto L_001B7360; } }
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 3;
L_001B7360:
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st32((c.r[20].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    st32((c.r[20].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    st32((c.r[20].w[0] + 72u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] << 1);  if (t) { goto L_001B73A0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B73A0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_001B73A0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001B73B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B73B0u);  if (depth < kMaxDepth) unit_002D(c, 219u, depth + 1u); else { c.pc = 0x001B70F0u; return; } if (c.pc != 0x001B73B0u) [[unlikely]] return; }
L_001B73B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B73B4:
    st16((c.r[20].w[0] + 298u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st16((c.r[20].w[0] + 296u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 76u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B73CCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 220u, depth + 1u); else { c.pc = 0x001B7100u; return; } if (c.pc != 0x001B73CCu) [[unlikely]] return; }
L_001B73CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { goto L_001B7B44; } }
L_001B73D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B74B8; } }
    set32(c.r[20], ld32((c.r[23].w[0] + 32u)));
    set32(c.r[4], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B73ECu); set32(c.r[21], c.r[20].w[0] + 80u);  if (depth < kMaxDepth) unit_002D(c, 88u, depth + 1u); else { c.pc = 0x001B4EF0u; return; } if (c.pc != 0x001B73ECu) [[unlikely]] return; }
L_001B73EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[20].w[0] + 84u);
    c.f[1] = ld32((c.r[1].w[0] + 18536u));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] + 6u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7410u); st32((c.r[21].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_002D(c, 88u, depth + 1u); else { c.pc = 0x001B4EF0u; return; } if (c.pc != 0x001B7410u) [[unlikely]] return; }
L_001B7410:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[1].w[0] + 18536u));
    set32(c.r[4], c.r[2].w[0] + 10u);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[21], c.r[20].w[0] + 88u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7434u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_002D(c, 88u, depth + 1u); else { c.pc = 0x001B4EF0u; return; } if (c.pc != 0x001B7434u) [[unlikely]] return; }
L_001B7434:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);
    c.f[1] = ld32((c.r[1].w[0] + 18536u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st32((c.r[21].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    st32((c.r[20].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    st32((c.r[20].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    st32((c.r[20].w[0] + 72u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] << 1);  if (t) { goto L_001B7484; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B7484; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_001B7484:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001B7498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7494u);  if (depth < kMaxDepth) unit_002D(c, 219u, depth + 1u); else { c.pc = 0x001B70F0u; return; } if (c.pc != 0x001B7494u) [[unlikely]] return; }
L_001B7494:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B7498:
    st16((c.r[20].w[0] + 298u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st16((c.r[20].w[0] + 296u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 76u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B74B0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 220u, depth + 1u); else { c.pc = 0x001B7100u; return; } if (c.pc != 0x001B74B0u) [[unlikely]] return; }
L_001B74B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 14u);  if (t) { goto L_001B7B44; } }
L_001B74B8:
    set32(c.r[3], 0u + 123u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 125u);  if (t) { goto L_001B7610; } }
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[3], ld32((c.r[23].w[0] + 36u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[6].w[0] << 3);  if (t) { goto L_001B7608; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[23].w[0] + 32u)));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 3u));
    c.f[0] = ld32((c.r[1].w[0] + 18536u));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[29].w[0] + 280u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[6], c.r[3].w[0] + 80u);
    set32(c.r[5], c.r[3].w[0] + 272u);
    st8((c.r[29].w[0] + 281u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 280u)));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 80u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 5u));
    c.f[0] = ld32((c.r[1].w[0] + 18536u));
    st8((c.r[29].w[0] + 278u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 6u));
    st8((c.r[29].w[0] + 279u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 278u)));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 84u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 7u));
    c.f[0] = ld32((c.r[1].w[0] + 18536u));
    st8((c.r[29].w[0] + 276u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    st8((c.r[29].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 276u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 88u), c.f[0]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[9], c.r[3].w[0] + 48u);
    set32(c.r[8], c.r[3].w[0] + 64u);
    set32(c.r[7], c.r[3].w[0] + 52u);
    set32(c.r[5], c.r[3].w[0] + 56u);
    set32(c.r[4], c.r[3].w[0] + 72u);
    set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.f[0] = ld32((c.r[9].w[0]));
    set32(c.r[6], c.r[3].w[0] + 68u);
    st32((c.r[8].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 70;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[3].w[0] + 296u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001B7604; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 296u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B7604; } }
    st16((c.r[3].w[0] + 296u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001B7604:
    st16((c.r[3].w[0] + 298u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001B7608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 9u);  if (t) { goto L_001B7B44; } }
L_001B7610:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B773C; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[4], c.r[2].w[0] + 2u);
    set32(c.r[20], ld32((c.r[23].w[0] + 32u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[21], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[20].w[0] + 80u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7638u); st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 88u, depth + 1u); else { c.pc = 0x001B4EF0u; return; } if (c.pc != 0x001B7638u) [[unlikely]] return; }
L_001B7638:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[20].w[0] + 84u);
    c.f[1] = ld32((c.r[1].w[0] + 18536u));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] + 6u);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7660u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_002D(c, 88u, depth + 1u); else { c.pc = 0x001B4EF0u; return; } if (c.pc != 0x001B7660u) [[unlikely]] return; }
L_001B7660:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[20].w[0] + 88u);
    c.f[1] = ld32((c.r[1].w[0] + 18536u));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] + 10u);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7688u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_002D(c, 88u, depth + 1u); else { c.pc = 0x001B4EF0u; return; } if (c.pc != 0x001B7688u) [[unlikely]] return; }
L_001B7688:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.f[1] = ld32((c.r[1].w[0] + 18536u));
    set32(c.r[3], 0u - 1u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    st32((c.r[20].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    st32((c.r[20].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    c.budget -= 13;
    { const bool t = c.r[22].d[0] == c.r[3].d[0]; st32((c.r[20].w[0] + 72u), c.f[0]);  if (t) { goto L_001B76C0; } }
    set32(c.r[21], c.r[22].w[0] << 1);
    c.budget -= 1;
L_001B76C0:
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001B76D8; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_001B76D8; } }
    set32(c.r[21], 0u + 1u);
    c.budget -= 1;
L_001B76D8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001B76EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B76E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 219u, depth + 1u); else { c.pc = 0x001B70F0u; return; } if (c.pc != 0x001B76E8u) [[unlikely]] return; }
L_001B76E8:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B76EC:
    st16((c.r[20].w[0] + 298u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st16((c.r[20].w[0] + 296u), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 76u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7704u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 220u, depth + 1u); else { c.pc = 0x001B7100u; return; } if (c.pc != 0x001B7704u) [[unlikely]] return; }
L_001B7704:
    set32(c.r[16], c.r[16].w[0] + 14u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001B7728; } }
L_001B7710:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7720u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 181u, depth + 1u); else { c.pc = 0x001B6660u; return; } if (c.pc != 0x001B7720u) [[unlikely]] return; }
L_001B7720:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_001B7728:
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(21ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[19].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B7710u | kUnwind; return; } goto L_001B7710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 240u)));  if (t) { goto L_001B7B48; } }
L_001B773C:
    set32(c.r[2], 0u + 124u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[16].w[0] + c.r[19].w[0]);  if (t) { goto L_001B7764; } }
    c.r[2].d[0] = c.r[4].sd[0] < 96ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);  if (t) { goto L_001B78E4; } }
    c.r[1].d[0] = c.r[4].sd[0] < 112ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 122u);  if (t) { goto L_001B78E8; } }
    set32(c.r[3], c.r[16].w[0] + c.r[19].w[0]);
    c.budget -= 1;
L_001B7764:
    set32(c.r[2], 0u + 124u);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[21], c.r[4].w[0] << 1);  if (t) { goto L_001B7788; } }
    set32(c.r[2], c.r[3].w[0] - 95u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[2].w[0] << 1);  if (t) { goto L_001B778C; } }
L_001B7788:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001B778C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[20], ld32((c.r[23].w[0] + 32u)));
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.f[0] = ld32((c.r[1].w[0] + 18536u));
    st8((c.r[29].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1u));
    st8((c.r[29].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 274u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 80u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.f[0] = ld32((c.r[1].w[0] + 18536u));
    st8((c.r[29].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3u));
    st8((c.r[29].w[0] + 273u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 272u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 84u), c.f[0]);
    st32((c.r[20].w[0] + 84u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[1].w[0] + 18536u));
    st8((c.r[29].w[0] + 270u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5u));
    st8((c.r[29].w[0] + 271u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 270u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 88u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 43;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + 80u);  if (t) { goto L_001B7844; } }
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 3;
L_001B7844:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { goto L_001B7854; } }
    set32(c.r[21], c.r[22].w[0] << 1);
    c.budget -= 1;
L_001B7854:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001B7868; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_001B7868; } }
    set32(c.r[21], 0u + 1u);
    c.budget -= 1;
L_001B7868:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001B787C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7878u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 219u, depth + 1u); else { c.pc = 0x001B70F0u; return; } if (c.pc != 0x001B7878u) [[unlikely]] return; }
L_001B7878:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B787C:
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    st32((c.r[20].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    st32((c.r[20].w[0] + 72u), c.f[0]);
    st16((c.r[20].w[0] + 298u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 296u), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 76u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B78ACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 220u, depth + 1u); else { c.pc = 0x001B7100u; return; } if (c.pc != 0x001B78ACu) [[unlikely]] return; }
L_001B78AC:
    set32(c.r[16], c.r[16].w[0] + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001B78D0; } }
L_001B78B8:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B78C8u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 181u, depth + 1u); else { c.pc = 0x001B6660u; return; } if (c.pc != 0x001B78C8u) [[unlikely]] return; }
L_001B78C8:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_001B78D0:
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(21ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[19].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B78B8u | kUnwind; return; } goto L_001B78B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7B44; } }
L_001B78E4:
    set32(c.r[2], 0u + 122u);
    c.budget -= 1;
L_001B78E8:
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;  if (t) { goto L_001B7904; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 96ll ? 1ull : 0ull;  if (t) { goto L_001B7ACC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);  if (t) { goto L_001B7AD0; } }
L_001B7904:
    set32(c.r[3], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[2], 0u + 122u);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[21], c.r[4].w[0] << 1);  if (t) { goto L_001B792C; } }
    set32(c.r[2], c.r[3].w[0] - 79u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[2].w[0] << 1);  if (t) { goto L_001B7930; } }
L_001B792C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001B7930:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { goto L_001B7940; } }
    set32(c.r[21], c.r[22].w[0] << 1);
    c.budget -= 1;
L_001B7940:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001B7954; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_001B7954; } }
    set32(c.r[21], 0u + 1u);
    c.budget -= 1;
L_001B7954:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[20], ld32((c.r[23].w[0] + 32u)));
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.f[0] = ld32((c.r[1].w[0] + 18536u));
    st8((c.r[29].w[0] + 268u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1u));
    st8((c.r[29].w[0] + 269u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 268u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 80u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.f[0] = ld32((c.r[1].w[0] + 18536u));
    st8((c.r[29].w[0] + 266u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3u));
    st8((c.r[29].w[0] + 267u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 266u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 84u), c.f[0]);
    st32((c.r[20].w[0] + 84u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[1].w[0] + 18536u));
    st8((c.r[29].w[0] + 264u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5u));
    st8((c.r[29].w[0] + 265u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 264u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 88u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 43;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + 80u);  if (t) { goto L_001B7A0C; } }
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 3;
L_001B7A0C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001B7A20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7A1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 219u, depth + 1u); else { c.pc = 0x001B70F0u; return; } if (c.pc != 0x001B7A1Cu) [[unlikely]] return; }
L_001B7A1C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B7A20:
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    st32((c.r[20].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    st32((c.r[20].w[0] + 72u), c.f[0]);
    st16((c.r[20].w[0] + 298u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 296u), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 76u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7A50u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 220u, depth + 1u); else { c.pc = 0x001B7100u; return; } if (c.pc != 0x001B7A50u) [[unlikely]] return; }
L_001B7A50:
    set32(c.r[16], c.r[16].w[0] + 6u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1u));
    set32(c.r[16], c.r[16].w[0] + 3u);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2u));
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_001B7AB8; } }
L_001B7A8C:
    set32(c.r[3], c.r[2].w[0] << (c.r[20].w[0] & 31u));
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[19].w[0] + c.r[16].w[0]);  if (t) { goto L_001B7AB4; } }
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7AB0u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 181u, depth + 1u); else { c.pc = 0x001B6660u; return; } if (c.pc != 0x001B7AB0u) [[unlikely]] return; }
L_001B7AB0:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_001B7AB4:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001B7AB8:
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(21ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B7A8Cu | kUnwind; return; } goto L_001B7A8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7B44; } }
L_001B7ACC:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_001B7AD0:
    c.r[20].d[0] = ld8((c.r[2].w[0]));
    c.r[1].d[0] = c.r[20].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B7B58; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[22].d[0] == c.r[3].d[0]; set32(c.r[2], c.r[2].w[0] << 1);  if (t) { goto L_001B7AF8; } }
    set32(c.r[2], c.r[22].w[0] << 1);
    c.budget -= 1;
L_001B7AF8:
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001B7B10; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B7B10; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B7B10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);  if (t) { goto L_001B7B28; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7B24u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 219u, depth + 1u); else { c.pc = 0x001B70F0u; return; } if (c.pc != 0x001B7B24u) [[unlikely]] return; }
L_001B7B24:
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_001B7B28:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[3].w[0] + 2u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7B3Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 181u, depth + 1u); else { c.pc = 0x001B6660u; return; } if (c.pc != 0x001B7B3Cu) [[unlikely]] return; }
L_001B7B3C:
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001B7B44:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 1;
L_001B7B48:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B72A0u | kUnwind; return; } goto L_001B72A0; } }
L_001B7B58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_001B7B90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B7BC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7BB4u); c.r[5].d[0] = c.r[2].d[0] | 18543ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B7BB4u) [[unlikely]] return; }
L_001B7BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001B7BC0; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001B7BC0:
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 1;
L_001B7BC4:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B7C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7BD8u);  if (depth < kMaxDepth) unit_002D(c, 174u, depth + 1u); else { c.pc = 0x001B6480u; return; } if (c.pc != 0x001B7BD8u) [[unlikely]] return; }
L_001B7BD8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001B7C10; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B7BF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7BF8u);  if (depth < kMaxDepth) unit_002D(c, 174u, depth + 1u); else { c.pc = 0x001B6480u; return; } if (c.pc != 0x001B7BF8u) [[unlikely]] return; }
L_001B7BF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B7C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7C10u);  if (depth < kMaxDepth) unit_002D(c, 174u, depth + 1u); else { c.pc = 0x001B6480u; return; } if (c.pc != 0x001B7C10u) [[unlikely]] return; }
L_001B7C10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B7C20:
    set32(c.r[2], 0u + 3u);
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001B7C6C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B7C64; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001B7C5C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001B7C54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7C70; } }
L_001B7C54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 6u);  if (t) { goto L_001B7C70; } }
L_001B7C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 9u);  if (t) { goto L_001B7C70; } }
L_001B7C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 11u);  if (t) { goto L_001B7C70; } }
L_001B7C6C:
    set32(c.r[7], 0u + 13u);
    c.budget -= 1;
L_001B7C70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 26656u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[7].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = c.r[5].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 18464u);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[2], 0u + 4u);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[1].w[0] + 26656u), c.f[0]);  if (t) { goto L_001B7CEC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001B7CD8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B7CCC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B7CCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[7].w[0] << 6);  if (t) { goto L_001B7CF0; } }
L_001B7CCC:
    set32(c.r[2], ld32((c.r[4].w[0] + 2020u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[2].w[0] + 356u));  if (t) { goto L_001B7CEC; } }
L_001B7CD8:
    set32(c.r[2], ld32((c.r[4].w[0] + 2020u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B7CEC; } }
    c.f[1] = ld32((c.r[2].w[0] + 356u));
    c.budget -= 1;
L_001B7CEC:
    set32(c.r[2], c.r[7].w[0] << 6);
    c.budget -= 1;
L_001B7CF0:
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 896u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.r[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B7E38; } }
    set32(c.r[2], c.r[4].w[0] + 1008u);
    set32(c.r[7], c.r[29].w[0] + 16u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    set32(c.r[5], c.r[29].w[0]);
    set32(c.r[8], c.r[29].w[0]);
    set32(c.r[2], c.r[29].w[0] + 16u);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[4].w[0] + 2020u)));
    set32(c.r[2], c.r[2].w[0] + 224u);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B7D88; } }
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.budget -= 3;
L_001B7D88:
    set32(c.r[2], ld32((c.r[4].w[0] + 2020u)));
    set32(c.r[5], c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 224u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[29].w[0] + 80u);  if (t) { goto L_001B7DD8; } }
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.f[0]);  if (t) { goto L_001B7DF0; } }
L_001B7DD8:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[1]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 6;
L_001B7DF0:
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[29].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] + 26656u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[1]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26668u), c.f[0]);
    c.budget -= 18;
L_001B7E38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 26656u);
    set32(c.r[6], c.r[6].w[0] + 26656u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B7EE4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 2020u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B7EE4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[1].w[0] + 26660u));
    c.f[1] = ld32((c.r[3].w[0] + 228u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[1].w[0] + 26660u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 2020u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = ld32((c.r[1].w[0] + 26660u));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[2].w[0] + 356u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 26660u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 2020u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[1].w[0] + 26660u));
    c.f[1] = ld32((c.r[2].w[0] + 228u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[1].w[0] + 26660u), c.f[0]);
    c.budget -= 21;
L_001B7EE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 26656u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B7F00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 2016u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 2020u), 0u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7F2Cu); c.r[5].d[0] = c.r[2].d[0] | 16722ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B7F2Cu) [[unlikely]] return; }
L_001B7F2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B7F3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B7F40; } }
L_001B7F3C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B7F40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B7F4C; } }
    st32((c.r[16].w[0] + 2020u), c.r[2].w[0]);
    c.budget -= 1;
L_001B7F4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.f[0] = c.r[2].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 10304u);  if (t) { goto L_001B7FC8; } }
L_001B7F64:
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[2].w[0] + 1792u);
    st128((c.r[2].w[0] + 1792u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[16].w[0] + 2016u));
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[1]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[6].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 1804u), c.f[0]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 25;
L_001B7FC8:
    c.r[2].d[0] = c.r[6].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B7F64u | kUnwind; return; } goto L_001B7F64; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B7FF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[29], c.r[29].w[0] - 896u);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 10528u);
    c.budget -= 4;
    [[clang::musttail]] return unit_002E(c, 1u, depth);
}

}
