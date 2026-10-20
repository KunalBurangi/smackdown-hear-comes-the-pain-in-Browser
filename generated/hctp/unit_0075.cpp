#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0075[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29,
    30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 128,
    0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 137,
    0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0,
    0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 172, 0, 0, 173, 0, 0, 174,
    0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218,
    0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248,
    0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0,
    0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0,
    0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0,
    298, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0,
    0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0,
};

void unit_0075(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002D4000;
    case 2u: goto L_002D406C;
    case 3u: goto L_002D4078;
    case 4u: goto L_002D40F4;
    case 5u: goto L_002D4104;
    case 6u: goto L_002D412C;
    case 7u: goto L_002D413C;
    case 8u: goto L_002D4160;
    case 9u: goto L_002D4188;
    case 10u: goto L_002D41A8;
    case 11u: goto L_002D41E0;
    case 12u: goto L_002D4218;
    case 13u: goto L_002D43DC;
    case 14u: goto L_002D440C;
    case 15u: goto L_002D4438;
    case 16u: goto L_002D4460;
    case 17u: goto L_002D448C;
    case 18u: goto L_002D44B0;
    case 19u: goto L_002D454C;
    case 20u: goto L_002D4558;
    case 21u: goto L_002D4564;
    case 22u: goto L_002D4588;
    case 23u: goto L_002D4594;
    case 24u: goto L_002D45AC;
    case 25u: goto L_002D45E0;
    case 26u: goto L_002D4624;
    case 27u: goto L_002D4644;
    case 28u: goto L_002D4650;
    case 29u: goto L_002D467C;
    case 30u: goto L_002D4680;
    case 31u: goto L_002D469C;
    case 32u: goto L_002D46A8;
    case 33u: goto L_002D46D4;
    case 34u: goto L_002D4704;
    case 35u: goto L_002D4710;
    case 36u: goto L_002D4738;
    case 37u: goto L_002D4760;
    case 38u: goto L_002D4780;
    case 39u: goto L_002D4798;
    case 40u: goto L_002D47E0;
    case 41u: goto L_002D4800;
    case 42u: goto L_002D4828;
    case 43u: goto L_002D485C;
    case 44u: goto L_002D486C;
    case 45u: goto L_002D4890;
    case 46u: goto L_002D48D0;
    case 47u: goto L_002D4908;
    case 48u: goto L_002D4938;
    case 49u: goto L_002D4950;
    case 50u: goto L_002D4990;
    case 51u: goto L_002D49A0;
    case 52u: goto L_002D49D4;
    case 53u: goto L_002D49F0;
    case 54u: goto L_002D4A48;
    case 55u: goto L_002D4A60;
    case 56u: goto L_002D4B00;
    case 57u: goto L_002D4B08;
    case 58u: goto L_002D4B18;
    case 59u: goto L_002D4B34;
    case 60u: goto L_002D4B40;
    case 61u: goto L_002D4B80;
    case 62u: goto L_002D4B90;
    case 63u: goto L_002D4BAC;
    case 64u: goto L_002D4BB8;
    case 65u: goto L_002D4BCC;
    case 66u: goto L_002D4BE0;
    case 67u: goto L_002D4C00;
    case 68u: goto L_002D4C10;
    case 69u: goto L_002D4C44;
    case 70u: goto L_002D4C90;
    case 71u: goto L_002D4DCC;
    case 72u: goto L_002D4E10;
    case 73u: goto L_002D4E28;
    case 74u: goto L_002D4E44;
    case 75u: goto L_002D4E90;
    case 76u: goto L_002D4EC0;
    case 77u: goto L_002D4EE8;
    case 78u: goto L_002D4F50;
    case 79u: goto L_002D4FB0;
    case 80u: goto L_002D50BC;
    case 81u: goto L_002D50F0;
    case 82u: goto L_002D5184;
    case 83u: goto L_002D5210;
    case 84u: goto L_002D524C;
    case 85u: goto L_002D52A8;
    case 86u: goto L_002D52E0;
    case 87u: goto L_002D5330;
    case 88u: goto L_002D5350;
    case 89u: goto L_002D5360;
    case 90u: goto L_002D54B8;
    case 91u: goto L_002D54E0;
    case 92u: goto L_002D5530;
    case 93u: goto L_002D555C;
    case 94u: goto L_002D5574;
    case 95u: goto L_002D55B0;
    case 96u: goto L_002D55C8;
    case 97u: goto L_002D5690;
    case 98u: goto L_002D5908;
    case 99u: goto L_002D5940;
    case 100u: goto L_002D5984;
    case 101u: goto L_002D5994;
    case 102u: goto L_002D59BC;
    case 103u: goto L_002D59EC;
    case 104u: goto L_002D5A10;
    case 105u: goto L_002D5A20;
    case 106u: goto L_002D5A3C;
    case 107u: goto L_002D5A9C;
    case 108u: goto L_002D5AA8;
    case 109u: goto L_002D5AD0;
    case 110u: goto L_002D5B90;
    case 111u: goto L_002D5BC4;
    case 112u: goto L_002D5C08;
    case 113u: goto L_002D5C40;
    case 114u: goto L_002D5C78;
    case 115u: goto L_002D5CB0;
    case 116u: goto L_002D5CE0;
    case 117u: goto L_002D5D00;
    case 118u: goto L_002D5D38;
    case 119u: goto L_002D5D98;
    case 120u: goto L_002D5DD8;
    case 121u: goto L_002D5DE4;
    case 122u: goto L_002D5E60;
    case 123u: goto L_002D5E90;
    case 124u: goto L_002D5FF0;
    case 125u: goto L_002D6054;
    case 126u: goto L_002D6068;
    case 127u: goto L_002D6070;
    case 128u: goto L_002D607C;
    case 129u: goto L_002D6094;
    case 130u: goto L_002D60A0;
    case 131u: goto L_002D60D8;
    case 132u: goto L_002D60E0;
    case 133u: goto L_002D6150;
    case 134u: goto L_002D6184;
    case 135u: goto L_002D61D8;
    case 136u: goto L_002D61EC;
    case 137u: goto L_002D61FC;
    case 138u: goto L_002D6208;
    case 139u: goto L_002D6210;
    case 140u: goto L_002D6224;
    case 141u: goto L_002D6238;
    case 142u: goto L_002D624C;
    case 143u: goto L_002D62A8;
    case 144u: goto L_002D62B4;
    case 145u: goto L_002D62CC;
    case 146u: goto L_002D62F4;
    case 147u: goto L_002D6304;
    case 148u: goto L_002D6358;
    case 149u: goto L_002D6398;
    case 150u: goto L_002D63D4;
    case 151u: goto L_002D641C;
    case 152u: goto L_002D6464;
    case 153u: goto L_002D6474;
    case 154u: goto L_002D64BC;
    case 155u: goto L_002D6550;
    case 156u: goto L_002D6564;
    case 157u: goto L_002D6590;
    case 158u: goto L_002D6598;
    case 159u: goto L_002D65A4;
    case 160u: goto L_002D65C0;
    case 161u: goto L_002D6608;
    case 162u: goto L_002D6628;
    case 163u: goto L_002D6638;
    case 164u: goto L_002D6650;
    case 165u: goto L_002D665C;
    case 166u: goto L_002D6674;
    case 167u: goto L_002D6690;
    case 168u: goto L_002D66A0;
    case 169u: goto L_002D66C8;
    case 170u: goto L_002D66D4;
    case 171u: goto L_002D66DC;
    case 172u: goto L_002D66E4;
    case 173u: goto L_002D66F0;
    case 174u: goto L_002D66FC;
    case 175u: goto L_002D6704;
    case 176u: goto L_002D6710;
    case 177u: goto L_002D6720;
    case 178u: goto L_002D6754;
    case 179u: goto L_002D6770;
    case 180u: goto L_002D6790;
    case 181u: goto L_002D67A4;
    case 182u: goto L_002D67BC;
    case 183u: goto L_002D67CC;
    case 184u: goto L_002D67E4;
    case 185u: goto L_002D6804;
    case 186u: goto L_002D6870;
    case 187u: goto L_002D68A0;
    case 188u: goto L_002D68D4;
    case 189u: goto L_002D68F4;
    case 190u: goto L_002D6910;
    case 191u: goto L_002D6958;
    case 192u: goto L_002D6960;
    case 193u: goto L_002D697C;
    case 194u: goto L_002D69A0;
    case 195u: goto L_002D69B4;
    case 196u: goto L_002D69CC;
    case 197u: goto L_002D6A6C;
    case 198u: goto L_002D6A74;
    case 199u: goto L_002D6A84;
    case 200u: goto L_002D6AA0;
    case 201u: goto L_002D6AAC;
    case 202u: goto L_002D6AEC;
    case 203u: goto L_002D6AFC;
    case 204u: goto L_002D6B28;
    case 205u: goto L_002D6B64;
    case 206u: goto L_002D6B78;
    case 207u: goto L_002D6BA0;
    case 208u: goto L_002D6BD0;
    case 209u: goto L_002D6C0C;
    case 210u: goto L_002D6C1C;
    case 211u: goto L_002D6C2C;
    case 212u: goto L_002D6C3C;
    case 213u: goto L_002D6C54;
    case 214u: goto L_002D6C70;
    case 215u: goto L_002D6CBC;
    case 216u: goto L_002D6CD4;
    case 217u: goto L_002D6CE4;
    case 218u: goto L_002D6CFC;
    case 219u: goto L_002D6D20;
    case 220u: goto L_002D6D3C;
    case 221u: goto L_002D6D60;
    case 222u: goto L_002D6D80;
    case 223u: goto L_002D6DA0;
    case 224u: goto L_002D6DB8;
    case 225u: goto L_002D6DC0;
    case 226u: goto L_002D6DD0;
    case 227u: goto L_002D6DE8;
    case 228u: goto L_002D6E00;
    case 229u: goto L_002D6E24;
    case 230u: goto L_002D6E88;
    case 231u: goto L_002D6EA0;
    case 232u: goto L_002D6EC4;
    case 233u: goto L_002D6F20;
    case 234u: goto L_002D719C;
    case 235u: goto L_002D72D0;
    case 236u: goto L_002D72E4;
    case 237u: goto L_002D7314;
    case 238u: goto L_002D732C;
    case 239u: goto L_002D736C;
    case 240u: goto L_002D73BC;
    case 241u: goto L_002D7400;
    case 242u: goto L_002D744C;
    case 243u: goto L_002D7474;
    case 244u: goto L_002D749C;
    case 245u: goto L_002D74AC;
    case 246u: goto L_002D74C4;
    case 247u: goto L_002D74E0;
    case 248u: goto L_002D74FC;
    case 249u: goto L_002D750C;
    case 250u: goto L_002D753C;
    case 251u: goto L_002D7560;
    case 252u: goto L_002D7570;
    case 253u: goto L_002D7580;
    case 254u: goto L_002D75A8;
    case 255u: goto L_002D75C0;
    case 256u: goto L_002D75D0;
    case 257u: goto L_002D7600;
    case 258u: goto L_002D76A4;
    case 259u: goto L_002D76EC;
    case 260u: goto L_002D7704;
    case 261u: goto L_002D771C;
    case 262u: goto L_002D7778;
    case 263u: goto L_002D779C;
    case 264u: goto L_002D77C4;
    case 265u: goto L_002D7808;
    case 266u: goto L_002D78B8;
    case 267u: goto L_002D7930;
    case 268u: goto L_002D7938;
    case 269u: goto L_002D7940;
    case 270u: goto L_002D7950;
    case 271u: goto L_002D7960;
    case 272u: goto L_002D7980;
    case 273u: goto L_002D79A8;
    case 274u: goto L_002D79CC;
    case 275u: goto L_002D79E0;
    case 276u: goto L_002D79FC;
    case 277u: goto L_002D7A20;
    case 278u: goto L_002D7A50;
    case 279u: goto L_002D7A9C;
    case 280u: goto L_002D7AAC;
    case 281u: goto L_002D7AC4;
    case 282u: goto L_002D7AE0;
    case 283u: goto L_002D7B08;
    case 284u: goto L_002D7B10;
    case 285u: goto L_002D7B50;
    case 286u: goto L_002D7B6C;
    case 287u: goto L_002D7B7C;
    case 288u: goto L_002D7BD0;
    case 289u: goto L_002D7BE4;
    case 290u: goto L_002D7C24;
    case 291u: goto L_002D7C48;
    case 292u: goto L_002D7C60;
    case 293u: goto L_002D7C90;
    case 294u: goto L_002D7CB0;
    case 295u: goto L_002D7CD0;
    case 296u: goto L_002D7CE0;
    case 297u: goto L_002D7CF0;
    case 298u: goto L_002D7D00;
    case 299u: goto L_002D7D10;
    case 300u: goto L_002D7D24;
    case 301u: goto L_002D7D8C;
    case 302u: goto L_002D7DB0;
    case 303u: goto L_002D7DF0;
    case 304u: goto L_002D7E3C;
    case 305u: goto L_002D7E64;
    case 306u: goto L_002D7E88;
    case 307u: goto L_002D7EA0;
    case 308u: goto L_002D7EC0;
    case 309u: goto L_002D7EF0;
    case 310u: goto L_002D7F04;
    case 311u: goto L_002D7F20;
    case 312u: goto L_002D7F30;
    case 313u: goto L_002D7F8C;
    case 314u: goto L_002D7FA4;
    case 315u: goto L_002D7FC0;
    case 316u: goto L_002D7FF4;
    default: bad_entry(c, 0x002D4000u); return;
    }
L_002D4000:
    c.f[1] = ld32((c.r[10].w[0] + 4u));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D406C; } }
    c.f[1] = ld32((c.r[10].w[0] + 8u));
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D406C; } }
    c.f[1] = ld32((c.r[9].w[0]));
    c.f[0] = ld32((c.r[7].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D406C; } }
    c.f[1] = ld32((c.r[9].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D406C; } }
    c.f[1] = ld32((c.r[9].w[0] + 8u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D406C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4088; } }
L_002D406C:
    set32(c.r[10], c.r[10].w[0] + 16u);
    set32(c.r[9], c.r[9].w[0] + 16u);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 3;
L_002D4078:
    c.r[3].d[0] = c.r[11].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3FECu | kUnwind; return; } [[clang::musttail]] return unit_0074(c, 386u, depth); } }
    set32(c.r[11], 0u - 1u);
    c.budget -= 1;
L_002D4088:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[24].d[0]; set32(c.r[3], c.r[15].w[0] << 2);  if (t) { goto L_002D40E4; } }
    ld128((c.r[8].w[0]) & ~15u, c.r[8]);
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 176u);
    st128((c.r[25].w[0]) & ~15u, c.r[8]);
    ld128((c.r[7].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[11], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[11].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], c.r[15].w[0] << 2);
    c.budget -= 21;
L_002D40E4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[11].w[0]);
    c.budget -= 4;
L_002D40F4:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[19].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3FC4u | kUnwind; return; } [[clang::musttail]] return unit_0074(c, 385u, depth); } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002D4104:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 6);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3FA8u | kUnwind; return; } [[clang::musttail]] return unit_0074(c, 384u, depth); } }
    st32((c.r[23].w[0]), c.r[17].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[29].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] + 208u);
    set32(c.r[17], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D412Cu); set32(c.r[4], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002D412Cu) [[unlikely]] return; }
L_002D412C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[20].w[0] << 16);  if (t) { goto L_002D4154; } }
L_002D413C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[4].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_002D4154:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D413Cu | kUnwind; return; } goto L_002D413C; } }
L_002D4160:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[20].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3EB0u | kUnwind; return; } [[clang::musttail]] return unit_0074(c, 378u, depth); } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[16], 0u - 1u);
    c.f[1] = 0u;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[4].w[0] << 2);
    c.budget -= 6;
L_002D4188:
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[9], c.r[3].w[0] + 304u);
    set32(c.r[2], ld32((c.r[9].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], c.r[3].w[0] + 208u);  if (t) { goto L_002D43C4; } }
    set32(c.r[7], c.r[4].w[0] << 16);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_002D43B8; } }
L_002D41A8:
    set32(c.r[5], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[5].w[0] + 304u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D43B4; } }
    set32(c.r[10], ld32((c.r[9].w[0])));
    set32(c.r[5], c.r[5].w[0] + 208u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[12], ld32((c.r[10].w[0] + 8u)));
    set32(c.r[11], ld32((c.r[10].w[0])));
    set32(c.r[10], ld32((c.r[10].w[0] + 4u)));
    set32(c.r[10], c.r[10].w[0] << 4);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);  if (t) { goto L_002D43A8; } }
L_002D41E0:
    set32(c.r[13], ld32((c.r[8].w[0])));
    set32(c.r[14], c.r[2].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    set32(c.r[13], ld32((c.r[13].w[0])));
    set32(c.r[13], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[13].w[0]) >> 16));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[13].d[0];  if (t) { goto L_002D43A4; } }
    set32(c.r[22], ld32((c.r[6].w[0])));
    set32(c.r[15], c.r[2].w[0] << 4);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[22].w[0])));
    set32(c.r[14], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[11].w[0] + c.r[15].w[0]);  if (t) { goto L_002D42A0; } }
L_002D4218:
    c.f[7] = ld32((c.r[18].w[0]));
    c.f[6] = ld32((c.r[17].w[0]));
    c.f[5] = ld32((c.r[18].w[0] + 4u));
    c.f[4] = ld32((c.r[17].w[0] + 4u));
    c.f[3] = ld32((c.r[18].w[0] + 8u));
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[6] = fp::sub(c.f[7], c.f[6]);
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[3] = fp::sub(c.f[3], c.f[2]);  if (t) { goto L_002D4248; } }
    c.f[6] = c.f[6] ^ fp::kSign;
    c.budget -= 1;
L_002D4248:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4258; } }
    c.f[4] = c.f[4] ^ fp::kSign;
    c.budget -= 1;
L_002D4258:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4268; } }
    c.f[3] = c.f[3] ^ fp::kSign;
    c.budget -= 1;
L_002D4268:
    c.f[2] = ld32((c.r[22].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4298; } }
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4298; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D42B0; } }
L_002D4298:
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_002D42A0:
    c.r[13].d[0] = c.r[19].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4218u | kUnwind; return; } goto L_002D4218; } }
    set32(c.r[19], 0u - 1u);
    c.budget -= 1;
L_002D42B0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[16].d[0]; set32(c.r[20], c.r[19].w[0] << 4);  if (t) { goto L_002D43A4; } }
    set32(c.r[14], c.r[19].w[0] << 2);
    set32(c.r[19], c.r[11].w[0] + c.r[15].w[0]);
    set32(c.r[17], ld32((c.r[22].w[0])));
    c.f[4] = ld32((c.r[19].w[0] + 12u));
    set32(c.r[13], ld32((c.r[22].w[0] + 4u)));
    c.f[2] = ld32((c.r[19].w[0]));
    set32(c.r[18], c.r[10].w[0] + c.r[15].w[0]);
    c.r[15].d[0] = c.r[2].d[0] | c.r[7].d[0];
    set32(c.r[17], c.r[17].w[0] + c.r[20].w[0]);
    c.f[3] = ld32((c.r[17].w[0]));
    set32(c.r[13], c.r[13].w[0] << 4);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    set32(c.r[13], c.r[17].w[0] + c.r[13].w[0]);
    c.f[3] = fp::add(c.f[3], c.f[2]);
    c.f[2] = fp::add(c.f[0], c.f[4]);
    fpu_div(c, 2u, c.f[0], c.f[2]);
    c.f[3] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[19].w[0]), c.f[3]);
    c.f[4] = ld32((c.r[19].w[0] + 4u));
    c.f[3] = ld32((c.r[19].w[0] + 12u));
    c.f[5] = ld32((c.r[17].w[0] + 4u));
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[3] = fp::add(c.f[5], c.f[3]);
    c.f[3] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[19].w[0] + 4u), c.f[3]);
    c.f[4] = ld32((c.r[19].w[0] + 8u));
    c.f[3] = ld32((c.r[19].w[0] + 12u));
    c.f[5] = ld32((c.r[17].w[0] + 8u));
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[3] = fp::add(c.f[5], c.f[3]);
    c.f[3] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[19].w[0] + 8u), c.f[3]);
    c.f[5] = ld32((c.r[18].w[0]));
    c.f[4] = ld32((c.r[19].w[0] + 12u));
    c.f[3] = ld32((c.r[13].w[0]));
    c.f[4] = fp::mul(c.f[5], c.f[4]);
    c.f[3] = fp::add(c.f[3], c.f[4]);
    c.f[3] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[18].w[0]), c.f[3]);
    c.f[4] = ld32((c.r[18].w[0] + 4u));
    c.f[3] = ld32((c.r[19].w[0] + 12u));
    c.f[5] = ld32((c.r[13].w[0] + 4u));
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[3] = fp::add(c.f[5], c.f[3]);
    c.f[3] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[3]);
    c.f[4] = ld32((c.r[18].w[0] + 8u));
    c.f[3] = ld32((c.r[19].w[0] + 12u));
    c.f[5] = ld32((c.r[13].w[0] + 8u));
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[3] = fp::add(c.f[5], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[18].w[0] + 8u), c.f[2]);
    c.f[2] = ld32((c.r[19].w[0] + 12u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[19].w[0] + 12u), c.f[2]);
    set32(c.r[13], ld32((c.r[5].w[0])));
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    st32((c.r[13].w[0]), c.r[15].w[0]);
    c.budget -= 59;
L_002D43A4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002D43A8:
    c.r[13].d[0] = c.r[2].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D41E0u | kUnwind; return; } goto L_002D41E0; } }
L_002D43B4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002D43B8:
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D41A8u | kUnwind; return; } goto L_002D41A8; } }
L_002D43C4:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4188u | kUnwind; return; } goto L_002D4188; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 2;
L_002D43DC:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 304u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4448; } }
    set32(c.r[20], ld32((c.r[2].w[0] + 8u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_002D443C; } }
L_002D440C:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[19].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[2].w[0] + 12u);  if (t) { goto L_002D4438; } }
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4438u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x002D4438u) [[unlikely]] return; }
L_002D4438:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002D443C:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D440Cu | kUnwind; return; } goto L_002D440C; } }
L_002D4448:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D43DCu | kUnwind; return; } goto L_002D43DC; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[4].w[0] << 2);
    c.budget -= 2;
L_002D4460:
    set32(c.r[3], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 304u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[21].w[0] + c.r[5].w[0]);  if (t) { goto L_002D4534; } }
    set32(c.r[12], ld32((c.r[3].w[0] + 256u)));
    set32(c.r[14], ld32((c.r[2].w[0] + 68u)));
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], ld32((c.r[3].w[0] + 208u)));
    set32(c.r[13], ld32((c.r[14].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002D4528; } }
L_002D448C:
    set32(c.r[5], ld32((c.r[14].w[0] + 28u)));
    set32(c.r[6], c.r[3].w[0] << 6);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[9], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D4518; } }
L_002D44B0:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[5], c.r[12].w[0] + c.r[5].w[0]);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[15], ld32((c.r[5].w[0])));
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[15], c.r[15].w[0] << 2);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[15], c.r[11].w[0] + c.r[15].w[0]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[15], ld32((c.r[15].w[0])));
    c.r[16].d[0] = c.r[15].d[0] & 65535ull;
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 16));
    set32(c.r[17], c.r[16].w[0] << 4);
    set32(c.r[15], c.r[15].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[15], ld32((c.r[15].w[0] + 304u)));
    set32(c.r[16], ld32((c.r[15].w[0])));
    set32(c.r[15], ld32((c.r[15].w[0] + 4u)));
    set32(c.r[17], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[15].w[0] << 4);
    ld128((c.r[17].w[0]) & ~15u, c.r[15]);
    set32(c.r[16], c.r[17].w[0] + c.r[16].w[0]);
    st128((c.r[6].w[0]) & ~15u, c.r[15]);
    ld128((c.r[16].w[0]) & ~15u, c.r[6]);
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    c.budget -= 26;
L_002D4518:
    c.r[5].d[0] = c.r[2].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[10].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D44B0u | kUnwind; return; } goto L_002D44B0; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002D4528:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D448Cu | kUnwind; return; } goto L_002D448C; } }
L_002D4534:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4460u | kUnwind; return; } goto L_002D4460; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[16].w[0] << 2);
    c.budget -= 2;
L_002D454C:
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4558u); set32(c.r[4], ld32((c.r[2].w[0] + 256u)));  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002D4558u) [[unlikely]] return; }
L_002D4558:
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4564u); set32(c.r[4], ld32((c.r[2].w[0] + 208u)));  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002D4564u) [[unlikely]] return; }
L_002D4564:
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 304u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002D4594; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D458C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4588u); set32(c.r[4], c.r[2].w[0] - 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002D4588u) [[unlikely]] return; }
L_002D4588:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D458C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4594u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002D4594u) [[unlikely]] return; }
L_002D4594:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D454Cu | kUnwind; return; } goto L_002D454C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D45ACu); set32(c.r[4], ld32((c.r[29].w[0] + 348u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002D45ACu) [[unlikely]] return; }
L_002D45AC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_002D45E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 15;
    { const bool t = c.r[18].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D4738; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] + 48u);
    c.budget -= 2;
L_002D4624:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st8((c.r[1].w[0] - 12555u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] - 12560u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4644u); st8((c.r[1].w[0] - 12547u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 116u, depth + 1u); else { c.pc = 0x00141720u; return; } if (c.pc != 0x002D4644u) [[unlikely]] return; }
L_002D4644:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4650u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0074(c, 335u, depth + 1u); else { c.pc = 0x002D3960u; return; } if (c.pc != 0x002D4650u) [[unlikely]] return; }
L_002D4650:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[2].w[0] << 2);  if (t) { goto L_002D46E4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 80u);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D467Cu); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002D467Cu) [[unlikely]] return; }
L_002D467C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D4680:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[16].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st8((c.r[1].w[0] - 12544u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D469Cu); set32(c.r[5], c.r[5].w[0] - 12552u);  if (depth < kMaxDepth) unit_0010(c, 116u, depth + 1u); else { c.pc = 0x00141720u; return; } if (c.pc != 0x002D469Cu) [[unlikely]] return; }
L_002D469C:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D46A8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0074(c, 335u, depth + 1u); else { c.pc = 0x002D3960u; return; } if (c.pc != 0x002D46A8u) [[unlikely]] return; }
L_002D46A8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[2].w[0] << 2);  if (t) { goto L_002D46D4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 80u);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D46D4u); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002D46D4u) [[unlikely]] return; }
L_002D46D4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4680u | kUnwind; return; } goto L_002D4680; } }
L_002D46E4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4624u | kUnwind; return; } goto L_002D4624; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4704u); set32(c.r[5], c.r[5].w[0] - 24560u);  if (depth < kMaxDepth) unit_0010(c, 116u, depth + 1u); else { c.pc = 0x00141720u; return; } if (c.pc != 0x002D4704u) [[unlikely]] return; }
L_002D4704:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4710u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0074(c, 335u, depth + 1u); else { c.pc = 0x002D3960u; return; } if (c.pc != 0x002D4710u) [[unlikely]] return; }
L_002D4710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] << 2);  if (t) { goto L_002D4738; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 80u);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4738u); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002D4738u) [[unlikely]] return; }
L_002D4738:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002D4760:
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], c.r[8].w[0] << 2);
    c.budget -= 8;
L_002D4780:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002D47BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[7].w[0] + 16u)));  if (t) { goto L_002D47B0; } }
L_002D4798:
    set32(c.r[3], ld32((c.r[7].w[0] + 28u)));
    set32(c.r[5], c.r[6].w[0] << 6);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    c.budget -= 6;
L_002D47B0:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4798u | kUnwind; return; } goto L_002D4798; } }
L_002D47BC:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4780u | kUnwind; return; } goto L_002D4780; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D47E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  c.pc = t; return; }
L_002D4800:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 10;
L_002D4828:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4840; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_002D4840:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4828u | kUnwind; return; } goto L_002D4828; } }
    st32((c.r[18].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D485Cu); set32(c.r[4], c.r[4].w[0] << 6);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002D485Cu) [[unlikely]] return; }
L_002D485C:
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 4;
L_002D486C:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002D489C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4890u); set32(c.r[6], c.r[2].w[0] << 6);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002D4890u) [[unlikely]] return; }
L_002D4890:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_002D489C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D486Cu | kUnwind; return; } goto L_002D486C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D48D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[18], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_002D4958; } }
L_002D4908:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[19], c.r[2].w[0] << 4);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[21], c.r[4].w[0] + 16u);
    set32(c.r[20], c.r[3].w[0] + 16u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4938u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002D4938u) [[unlikely]] return; }
L_002D4938:
    set32(c.r[21], c.r[21].w[0] + c.r[19].w[0]);
    set32(c.r[20], c.r[20].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4950u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002D4950u) [[unlikely]] return; }
L_002D4950:
    set32(c.r[17], c.r[17].w[0] + 64u);
    set32(c.r[18], c.r[18].w[0] + 64u);
    c.budget -= 2;
L_002D4958:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4908u | kUnwind; return; } goto L_002D4908; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D4990:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D49A0:
    set32(c.r[29], c.r[29].w[0] - 10512u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], c.r[19].w[0] + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D49D4u); set32(c.r[4], c.r[29].w[0] + 10336u);  if (depth < kMaxDepth) unit_0074(c, 341u, depth + 1u); else { c.pc = 0x002D3AD0u; return; } if (c.pc != 0x002D49D4u) [[unlikely]] return; }
L_002D49D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] - 12528u);
    c.r[4].d[0] = 0ull + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (t) { goto L_002D4A28; } }
L_002D49F0:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2144u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[2], c.r[4].w[0] << 4);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st128((c.r[2].w[0] + 96u) & ~15u, c.r[3]);
    c.budget -= 14;
L_002D4A28:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 6);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D49F0u | kUnwind; return; } goto L_002D49F0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 10336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A48u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 76u, depth + 1u); else { c.pc = 0x002D4EC0u; return; } if (c.pc != 0x002D4A48u) [[unlikely]] return; }
L_002D4A48:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 4u);
    set32(c.r[7], c.r[29].w[0] + 10336u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A60u); set32(c.r[8], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0075(c, 79u, depth + 1u); else { c.pc = 0x002D4FB0u; return; } if (c.pc != 0x002D4A60u) [[unlikely]] return; }
L_002D4A60:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 155u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_002D4A78; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D4A90; } }
L_002D4A78:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_002D4A90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 156u));
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002D4AC0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D4ADC; } }
L_002D4AC0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_002D4ADC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[19].w[0] + 4u);
    fpu_div(c, 13u, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B00u);  if (depth < kMaxDepth) unit_0075(c, 68u, depth + 1u); else { c.pc = 0x002D4C10u; return; } if (c.pc != 0x002D4B00u) [[unlikely]] return; }
L_002D4B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B08u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 72u, depth + 1u); else { c.pc = 0x002D4E10u; return; } if (c.pc != 0x002D4B08u) [[unlikely]] return; }
L_002D4B08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 254u, depth + 1u); else { c.pc = 0x0014FB50u; return; } if (c.pc != 0x002D4B18u) [[unlikely]] return; }
L_002D4B18:
    set32(c.r[7], ld32((c.r[18].w[0] + 212u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 2144u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[8], c.r[29].w[0] + 10336u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B34u); c.r[9].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 86u, depth + 1u); else { c.pc = 0x002D52E0u; return; } if (c.pc != 0x002D4B34u) [[unlikely]] return; }
L_002D4B34:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B40u); set32(c.r[5], c.r[29].w[0] + 2144u);  if (depth < kMaxDepth) unit_0075(c, 99u, depth + 1u); else { c.pc = 0x002D5940u; return; } if (c.pc != 0x002D4B40u) [[unlikely]] return; }
L_002D4B40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 158u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 10336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B80u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0075(c, 113u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x002D4B80u) [[unlikely]] return; }
L_002D4B80:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 10336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B90u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0075(c, 124u, depth + 1u); else { c.pc = 0x002D5FF0u; return; } if (c.pc != 0x002D4B90u) [[unlikely]] return; }
L_002D4B90:
    set32(c.r[25], ld32((c.r[18].w[0] + 152u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4BACu); set32(c.r[5], c.r[19].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D4BACu) [[unlikely]] return; }
L_002D4BAC:
    set32(c.r[4], c.r[29].w[0] + 10336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4BB8u); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0074(c, 341u, depth + 1u); else { c.pc = 0x002D3AD0u; return; } if (c.pc != 0x002D4BB8u) [[unlikely]] return; }
L_002D4BB8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4BCCu); set32(c.r[7], c.r[29].w[0] + 10336u);  if (depth < kMaxDepth) unit_0075(c, 122u, depth + 1u); else { c.pc = 0x002D5E60u; return; } if (c.pc != 0x002D4BCCu) [[unlikely]] return; }
L_002D4BCC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4BE0u); set32(c.r[6], c.r[29].w[0] + 10336u);  if (depth < kMaxDepth) unit_0097(c, 32u, depth + 1u); else { c.pc = 0x0035C4B0u; return; } if (c.pc != 0x002D4BE0u) [[unlikely]] return; }
L_002D4BE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 10512u);  c.pc = t; return; }
L_002D4C00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4C10:
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[12], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[11], ld32((c.r[4].w[0] + 32u)));
    c.f[0] = c.r[6].w[0];
    set32(c.r[3], c.r[29].w[0]);
    set32(c.r[14], 0u + 3u);
    set32(c.r[6], c.r[7].w[0] << 6);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[11].w[0] + c.r[6].w[0]);  if (t) { goto L_002D4DF4; } }
L_002D4C44:
    set32(c.r[7], ld32((c.r[11].w[0] + 24u)));
    set32(c.r[13], ld32((c.r[12].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[12].w[0] + 20u)));
    set32(c.r[9], ld32((c.r[11].w[0] + 40u)));
    set32(c.r[8], ld32((c.r[7].w[0])));
    set32(c.r[7], ld32((c.r[13].w[0])));
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != c.r[14].d[0]; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { goto L_002D4DBC; } }
    set32(c.r[6], ld32((c.r[13].w[0] + 4u)));
    c.r[15].d[0] = 0ull + 0ull;
    set32(c.r[13], ld32((c.r[13].w[0] + 8u)));
    c.f[3] = ld32((c.r[6].w[0]));
    c.f[2] = ld32((c.r[13].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.f[3] = fp::mul(c.f[3], c.f[12]);
    set32(c.r[24], c.r[13].w[0] + 4u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[2] = fp::mul(c.f[2], c.f[12]);  if (t) { goto L_002D4DA8; } }
L_002D4C90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[1]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[3]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[24].w[0])));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[24].w[0] + 1u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[24].w[0] + 2u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[2]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[13]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 3u);
    set32(c.r[24], c.r[24].w[0] + 3u);
    st32((c.r[29].w[0] + 12u), c.f[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[13]);
    st128((c.r[8].w[0]) & ~15u, c.r[13]);
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.budget -= 70;
L_002D4DA8:
    c.r[13].d[0] = c.r[15].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4C90u | kUnwind; return; } goto L_002D4C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] + 64u);  if (t) { goto L_002D4DF0; } }
L_002D4DBC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[7].d[0]; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_002D4DEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[13].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;  if (t) { goto L_002D4DE4; } }
L_002D4DCC:
    ld128((c.r[7].w[0]) & ~15u, c.r[6]);
    set32(c.r[13], c.r[13].w[0] + 1u);
    st128((c.r[8].w[0]) & ~15u, c.r[6]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.r[6].d[0] = c.r[13].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
L_002D4DE4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4DCCu | kUnwind; return; } goto L_002D4DCC; } }
L_002D4DEC:
    set32(c.r[11], c.r[11].w[0] + 64u);
    c.budget -= 1;
L_002D4DF0:
    set32(c.r[12], c.r[12].w[0] + 64u);
    c.budget -= 1;
L_002D4DF4:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[10].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4C44u | kUnwind; return; } goto L_002D4C44; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D4E10:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    set32(c.r[7], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);  if (t) { goto L_002D4E6C; } }
L_002D4E28:
    set32(c.r[5], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_002D4E60; } }
L_002D4E44:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
L_002D4E60:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4E44u | kUnwind; return; } goto L_002D4E44; } }
    set32(c.r[7], c.r[7].w[0] + 64u);
    c.budget -= 1;
L_002D4E6C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4E28u | kUnwind; return; } goto L_002D4E28; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_002D4EAC; } }
L_002D4E90:
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[5].w[0] + 80u);
    c.budget -= 7;
L_002D4EAC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4E90u | kUnwind; return; } goto L_002D4E90; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4EC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[11], 0u - 1u);
    c.f[2] = c.r[4].w[0];
    set32(c.r[12], c.r[12].w[0] - 24240u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[10], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 10;
L_002D4EE8:
    set32(c.r[3], c.r[8].w[0] << 3);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 107u)));
    set32(c.r[4], c.r[12].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    c.f[0] = c.r[9].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0]), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 123u)));
    c.f[0] = c.r[9].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 139u)));
    c.f[0] = c.r[9].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 8u), c.f[0]);  if (t) { goto L_002D4F88; } }
L_002D4F50:
    set32(c.r[9], ld32((c.r[4].w[0])));
    set32(c.r[10], c.r[3].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0])));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 9;
    { const bool t = c.r[9].d[0] == c.r[11].d[0];  if (t) { goto L_002D4F84; } }
    ld128((c.r[29].w[0]) & ~15u, c.r[10]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[5].w[0] + c.r[9].w[0]);
    st128((c.r[9].w[0]) & ~15u, c.r[10]);
    c.budget -= 4;
L_002D4F84:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002D4F88:
    set32(c.r[9], ld32((c.r[4].w[0] + 4u)));
    c.r[9].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4F50u | kUnwind; return; } goto L_002D4F50; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[7].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4EE8u | kUnwind; return; } goto L_002D4EE8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D4FB0:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 157u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[29], c.r[29].w[0] - 96u);  if (t) { goto L_002D4FC8; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D4FE4; } }
L_002D4FC8:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_002D4FE4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_002D4FFC; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002D4FFC:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D5014; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002D5014:
    c.f[2] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 3u, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002D5048; } }
    c.f[3] = c.f[2];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_002D5048:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x445D0000u);  if (t) { goto L_002D5060; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_002D5060:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45610000u);
    c.f[1] = c.r[5].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 116u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002D50A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
L_002D50A8:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[10], c.r[10].w[0] - 12512u);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[9], c.r[29].w[0]);
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
L_002D50BC:
    ld128((c.r[10].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st128((c.r[9].w[0]) & ~15u, c.r[3]);
    set32(c.r[10], c.r[10].w[0] + 16u);
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D50BCu | kUnwind; return; } goto L_002D50BC; } }
    c.f[0] = ld32((c.r[10].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[3].w[0];
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0]), c.f[0]);  if (t) { goto L_002D5154; } }
L_002D50F0:
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[10], c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[10].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_002D5128; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[9], c.r[10].w[0] + 8u);
    c.f[0] = ld32((c.r[1].w[0] - 23880u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0] + 8u), c.f[0]);  if (t) { goto L_002D5148; } }
L_002D5128:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[9], c.r[10].w[0] + 8u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[10].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_002D5148:
    c.f[0] = ld32((c.r[9].w[0]));
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.f[4] = fp::add(c.f[4], c.f[0]);
    c.budget -= 3;
L_002D5154:
    c.r[3].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[11].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D50F0u | kUnwind; return; } goto L_002D50F0; } }
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 68u);
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[10].d[0] = 0ull + 0ull;
    c.f[2] = c.r[3].w[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[3] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_002D51C4; } }
L_002D5184:
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[9], c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0])));
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[9].w[0] + 8u), c.f[0]);
    c.budget -= 16;
L_002D51C4:
    c.r[3].d[0] = c.r[10].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[10].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5184u | kUnwind; return; } goto L_002D5184; } }
    fpu_div(c, 1u, c.f[4], c.f[2]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D5210:
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
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[20].w[0] + 1u);  if (t) { goto L_002D52AC; } }
L_002D524C:
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 8;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_002D52A8; } }
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    ld128((c.r[18].w[0]) & ~15u, c.r[6]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[18].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[18].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D52A8u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 83u, depth + 1u); else { c.pc = 0x002D5210u; return; } if (c.pc != 0x002D52A8u) [[unlikely]] return; }
L_002D52A8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002D52AC:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D524Cu | kUnwind; return; } goto L_002D524C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D52E0:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_002D54BC; } }
L_002D5330:
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[16].w[0] << 4);  if (t) { goto L_002D54B8; } }
    set32(c.r[4], c.r[29].w[0] + 576u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5350u); set32(c.r[5], c.r[30].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 76u, depth + 1u); else { c.pc = 0x00145720u; return; } if (c.pc != 0x002D5350u) [[unlikely]] return; }
L_002D5350:
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5360u); set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 352u, depth + 1u); else { c.pc = 0x001039B8u; return; } if (c.pc != 0x002D5360u) [[unlikely]] return; }
L_002D5360:
    set32(c.r[3], c.r[29].w[0] + 512u);
    set32(c.r[2], c.r[29].w[0] + 576u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
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
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 512u);
    set32(c.r[3], c.r[29].w[0] + 512u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
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
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 512u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 76;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002D54A8; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_002D54A4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002D54B8; } }
L_002D54A4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002D54A8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D54B8u); set32(c.r[7], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_0075(c, 83u, depth + 1u); else { c.pc = 0x002D5210u; return; } if (c.pc != 0x002D54B8u) [[unlikely]] return; }
L_002D54B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002D54BC:
    c.r[1].d[0] = c.r[17].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5330u | kUnwind; return; } goto L_002D5330; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D54E0u); c.r[8].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 43u, depth + 1u); else { c.pc = 0x0035CBB0u; return; } if (c.pc != 0x002D54E0u) [[unlikely]] return; }
L_002D54E0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 158u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[4].w[0];
    set32(c.r[3], c.r[29].w[0] + 448u);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[20] = fp::add(c.f[0], c.f[1]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[3]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 448u), c.f[20]);  if (t) { goto L_002D5578; } }
L_002D5530:
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_002D5574; } }
    set32(c.r[2], c.r[17].w[0] << 6);
    set32(c.r[6], c.r[29].w[0] + 448u);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D555Cu); set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0097(c, 41u, depth + 1u); else { c.pc = 0x0035CA10u; return; } if (c.pc != 0x002D555Cu) [[unlikely]] return; }
L_002D555C:
    set32(c.r[2], c.r[17].w[0] << 6);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[20].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5574u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 83u, depth + 1u); else { c.pc = 0x002D5210u; return; } if (c.pc != 0x002D5574u) [[unlikely]] return; }
L_002D5574:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002D5578:
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5530u | kUnwind; return; } goto L_002D5530; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D55B0; } }
    set32(c.r[2], c.r[4].w[0] << 6);
    set32(c.r[6], c.r[29].w[0] + 448u);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 468u), c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D55B0u); st32((c.r[29].w[0] + 488u), c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 41u, depth + 1u); else { c.pc = 0x0035CA10u; return; } if (c.pc != 0x002D55B0u) [[unlikely]] return; }
L_002D55B0:
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002D57C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { goto L_002D57C0; } }
L_002D55C8:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 24112u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[23], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[23].d[0] == c.r[3].d[0];  if (t) { goto L_002D57B8; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[2], c.r[23].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[7], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[29].w[0] + 416u);
    set32(c.r[8], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[9], c.r[29].w[0] + 416u);
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[9].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mul(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[9].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[29].w[0] + 416u);
    set32(c.r[2], c.r[29].w[0] + 432u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 352u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5690u); st128((c.r[29].w[0] + 400u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 352u, depth + 1u); else { c.pc = 0x001039B8u; return; } if (c.pc != 0x002D5690u) [[unlikely]] return; }
L_002D5690:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[3], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    set32(c.r[3], c.r[16].w[0] << 6);
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 288u);
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
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    set32(c.r[3], c.r[23].w[0] << 6);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 288u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[9]);
    c.budget -= 74;
L_002D57B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002D57C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D55C8u | kUnwind; return; } goto L_002D55C8; } }
L_002D57C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002D5908; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 272u);
    set32(c.r[2], c.r[2].w[0] - 12416u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[7], c.r[29].w[0] + 256u);
    set32(c.r[2], c.r[29].w[0] + 272u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[21].w[0] + 108u));
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[6], c.r[29].w[0] + 256u);
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[7], c.r[29].w[0] + 240u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[3] = c.r[2].w[0];
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[5] = ld32((c.r[22].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 107u)));
    c.f[1] = ld32((c.r[29].w[0] + 240u));
    c.f[4] = c.r[2].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    fpu_div(c, 3u, c.f[4], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[5] = fp::mul(c.f[5], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 240u), c.f[1]);
    c.f[1] = ld32((c.r[22].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 52;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[29].w[0] + 176u);  if (t) { goto L_002D58B4; } }
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.budget -= 3;
L_002D58B4:
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[6], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 6);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 4);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5908u); set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0097(c, 41u, depth + 1u); else { c.pc = 0x0035CA10u; return; } if (c.pc != 0x002D5908u) [[unlikely]] return; }
L_002D5908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_002D5940:
    set32(c.r[29], c.r[29].w[0] - 528u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[21], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[21].w[0] + c.r[3].w[0]);  if (t) { goto L_002D5B50; } }
L_002D5984:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_002D5B3C; } }
L_002D5994:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[20].w[0] << 5);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[18], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D59BCu); set32(c.r[23], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0074(c, 337u, depth + 1u); else { c.pc = 0x002D39D0u; return; } if (c.pc != 0x002D59BCu) [[unlikely]] return; }
L_002D59BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002D5A34; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002D59DC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D59DC:
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[5], c.r[29].w[0] + 464u);
    set32(c.r[6], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
L_002D59EC:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D59ECu | kUnwind; return; } goto L_002D59EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5A24; } }
L_002D5A10:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5A20u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x002D5A20u) [[unlikely]] return; }
L_002D5A20:
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 1;
L_002D5A24:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[23].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5A10u | kUnwind; return; } goto L_002D5A10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_002D5B3C; } }
L_002D5A34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_002D5A8C; } }
L_002D5A3C:
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[5], c.r[3].w[0] << 6);  if (t) { goto L_002D5A54; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D5A54:
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[22].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 208u);
    ld128((c.r[4].w[0]) & ~15u, c.r[6]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 14;
L_002D5A8C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5A3Cu | kUnwind; return; } goto L_002D5A3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5B30; } }
L_002D5A9C:
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002D5B14; } }
L_002D5AA8:
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002D5B10; } }
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5AD0u); set32(c.r[5], c.r[2].w[0] + 208u);  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x002D5AD0u) [[unlikely]] return; }
L_002D5AD0:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[29].w[0] + 176u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 16;
L_002D5B10:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002D5B14:
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5AA8u | kUnwind; return; } goto L_002D5AA8; } }
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    set32(c.r[17], c.r[17].w[0] + 16u);
    st128((c.r[18].w[0]) & ~15u, c.r[3]);
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 4;
L_002D5B30:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[23].d[0]; set32(c.r[3], c.r[29].w[0] + 192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5A9Cu | kUnwind; return; } goto L_002D5A9C; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002D5B3C:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5994u | kUnwind; return; } goto L_002D5994; } }
    set32(c.r[21], c.r[21].w[0] + 64u);
    c.budget -= 1;
L_002D5B50:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[30].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5984u | kUnwind; return; } goto L_002D5984; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 528u);  c.pc = t; return; }
L_002D5B90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + 1u);  if (t) { goto L_002D5C0C; } }
L_002D5BC4:
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { goto L_002D5C08; } }
    set32(c.r[2], c.r[4].w[0] + 16u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mul(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5C08u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 110u, depth + 1u); else { c.pc = 0x002D5B90u; return; } if (c.pc != 0x002D5C08u) [[unlikely]] return; }
L_002D5C08:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002D5C0C:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5BC4u | kUnwind; return; } goto L_002D5BC4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D5C40:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[12];  if (t) { goto L_002D5CB4; } }
L_002D5C78:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 24104u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D5CB0; } }
    set32(c.r[2], c.r[5].w[0] << 4);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5CB0u); set32(c.r[6], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0075(c, 110u, depth + 1u); else { c.pc = 0x002D5B90u; return; } if (c.pc != 0x002D5CB0u) [[unlikely]] return; }
L_002D5CB0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002D5CB4:
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5C78u | kUnwind; return; } goto L_002D5C78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[3].w[0] - 12400u);
    c.r[19].d[0] = 0ull + 0ull;
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 128u), c.f[20]);  if (t) { goto L_002D5D04; } }
L_002D5CE0:
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002D5D00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5D00u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0075(c, 110u, depth + 1u); else { c.pc = 0x002D5B90u; return; } if (c.pc != 0x002D5D00u) [[unlikely]] return; }
L_002D5D00:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002D5D04:
    c.r[3].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5CE0u | kUnwind; return; } goto L_002D5CE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002D5D90; } }
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 24088u);  if (t) { goto L_002D5D80; } }
L_002D5D38:
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_002D5D7C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mul(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 10;
L_002D5D7C:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_002D5D80:
    c.r[3].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[9].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5D38u | kUnwind; return; } goto L_002D5D38; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D5D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { goto L_002D5E30; } }
L_002D5D98:
    set32(c.r[5], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 24080u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_002D5E28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 12384u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5DD8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0010(c, 116u, depth + 1u); else { c.pc = 0x00141720u; return; } if (c.pc != 0x002D5DD8u) [[unlikely]] return; }
L_002D5DD8:
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5DE4u); set32(c.r[4], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0074(c, 335u, depth + 1u); else { c.pc = 0x002D3960u; return; } if (c.pc != 0x002D5DE4u) [[unlikely]] return; }
L_002D5DE4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[19].w[0] << 4);  if (t) { goto L_002D5E28; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.f[1] = ld32((c.r[1].w[0] - 23888u));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 24u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[1]);
    st32((c.r[3].w[0] + 24u), c.f[2]);
    c.budget -= 14;
L_002D5E28:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002D5E30:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5D98u | kUnwind; return; } goto L_002D5D98; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002D5E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[14], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 2u);
    set32(c.r[24], 0u + 19u);
    set32(c.r[15], 0u + 23u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], 0u + 20u);
    set32(c.r[10], 0u + 16u);
    set32(c.r[11], 0u + 10u);
    set32(c.r[12], 0u + 4u);
    c.budget -= 12;
L_002D5E90:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[12].d[0];  if (t) { goto L_002D5FC8; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[11].d[0];  if (t) { goto L_002D5FC8; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[10].d[0];  if (t) { goto L_002D5FC8; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[9].d[0]; set32(c.r[13], c.r[14].w[0] << 2);  if (t) { goto L_002D5FC8; } }
    set32(c.r[13], c.r[7].w[0] + c.r[13].w[0]);
    set32(c.r[16], ld32((c.r[13].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[8].d[0];  if (t) { goto L_002D5FC8; } }
    set32(c.r[13], c.r[14].w[0] + 1u);
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[13], c.r[7].w[0] + c.r[13].w[0]);
    set32(c.r[25], ld32((c.r[13].w[0])));
    c.budget -= 6;
    { const bool t = c.r[25].d[0] == c.r[8].d[0]; set32(c.r[13], c.r[16].w[0] << 4);  if (t) { goto L_002D5FC8; } }
    set32(c.r[16], c.r[25].w[0] << 2);
    set32(c.r[13], c.r[6].w[0] + c.r[13].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[25].w[0]);
    set32(c.r[17], c.r[16].w[0] << 4);
    set32(c.r[25], c.r[25].w[0] << 6);
    set32(c.r[16], ld32((c.r[4].w[0] + 36u)));
    c.f[1] = ld32((c.r[13].w[0]));
    set32(c.r[17], c.r[16].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    set32(c.r[16], ld32((c.r[5].w[0] + 204u)));
    c.f[0] = c.f[0];
    set32(c.r[16], c.r[16].w[0] + c.r[25].w[0]);
    c.budget -= 16;
    { const bool t = c.r[14].d[0] != c.r[3].d[0]; st32((c.r[16].w[0] + 48u), c.f[0]);  if (t) { goto L_002D5F9C; } }
    set32(c.r[25], ld32((c.r[7].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[25].d[0] == c.r[8].d[0];  if (t) { goto L_002D5F58; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[17], c.r[25].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + c.r[25].w[0]);
    set32(c.r[17], c.r[17].w[0] << 4);
    set32(c.r[25], c.r[25].w[0] << 6);
    c.f[1] = ld32((c.r[13].w[0]));
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    set32(c.r[16], ld32((c.r[5].w[0] + 204u)));
    set32(c.r[16], c.r[16].w[0] + c.r[25].w[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.budget -= 13;
L_002D5F58:
    set32(c.r[16], ld32((c.r[7].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[8].d[0];  if (t) { goto L_002D5FC8; } }
    c.f[1] = ld32((c.r[13].w[0]));
    set32(c.r[25], c.r[16].w[0] << 6);
    set32(c.r[13], c.r[16].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[13].w[0] << 4);
    set32(c.r[13], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[13], c.r[13].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[13].w[0] + 16u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[13].w[0] + 16u), c.f[0]);
    set32(c.r[13], ld32((c.r[5].w[0] + 204u)));
    set32(c.r[13], c.r[13].w[0] + c.r[25].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[13].w[0] + 48u), c.f[0]);  if (t) { goto L_002D5FC8; } }
L_002D5F9C:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[24].d[0];  if (t) { goto L_002D5FAC; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] != c.r[15].d[0];  if (t) { goto L_002D5FC8; } }
L_002D5FAC:
    c.f[1] = ld32((c.r[13].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    set32(c.r[13], ld32((c.r[5].w[0] + 204u)));
    set32(c.r[13], c.r[13].w[0] + c.r[25].w[0]);
    st32((c.r[13].w[0] + 56u), c.f[0]);
    c.budget -= 7;
L_002D5FC8:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[1].d[0] = c.r[14].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5E90u | kUnwind; return; } goto L_002D5E90; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D5FF0:
    set32(c.r[29], c.r[29].w[0] - 784u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 752u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 12368u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[4].w[0]) & ~15u, c.r[6]);
    c.r[4].d[0] = ld64((c.r[4].w[0] + 16u));
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    st64((c.r[7].w[0] + 16u), c.r[4].d[0]);
    set32(c.r[22], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 23;
    { const bool t = c.r[22].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D6520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6054u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002D6054u) [[unlikely]] return; }
L_002D6054:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6068u); st32((c.r[29].w[0] + 780u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002D6068u) [[unlikely]] return; }
L_002D6068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6070u); set32(c.r[4], 0u + 10240u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002D6070u) [[unlikely]] return; }
L_002D6070:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D607Cu); set32(c.r[4], 0u + 2064u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002D607Cu) [[unlikely]] return; }
L_002D607C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6094u); set32(c.r[8], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x002D6094u) [[unlikely]] return; }
L_002D6094:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D60BC; } }
L_002D60A0:
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 752u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[3].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 7;
L_002D60BC:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D60A0u | kUnwind; return; } goto L_002D60A0; } }
    set32(c.r[23], ld32((c.r[21].w[0] + 24u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002D6170; } }
L_002D60D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002D60FC; } }
L_002D60E0:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002D60F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D6108; } }
L_002D60F8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002D60FC:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D60E0u | kUnwind; return; } goto L_002D60E0; } }
L_002D6108:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { goto L_002D6120; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 240u), c.r[22].w[0]);  if (t) { goto L_002D616C; } }
L_002D6120:
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[3].w[0] + 240u), c.r[19].w[0]);
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 80u);
    set32(c.r[2], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6150u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002D6150u) [[unlikely]] return; }
L_002D6150:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.budget -= 7;
L_002D616C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002D6170:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D60D8u | kUnwind; return; } goto L_002D60D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D61B4; } }
L_002D6184:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002D61B0; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 240u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_002D61B0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002D61B4:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6184u | kUnwind; return; } goto L_002D6184; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D61D8u); set32(c.r[6], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002D61D8u) [[unlikely]] return; }
L_002D61D8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] << 4);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D61ECu); st32((c.r[21].w[0] + 24u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002D61ECu) [[unlikely]] return; }
L_002D61EC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002D6200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D61FCu); set32(c.r[4], c.r[17].w[0] - 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002D61FCu) [[unlikely]] return; }
L_002D61FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002D6200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6208u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002D6208u) [[unlikely]] return; }
L_002D6208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6210u); set32(c.r[4], ld32((c.r[29].w[0] + 780u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002D6210u) [[unlikely]] return; }
L_002D6210:
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[9], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[9].w[0] + c.r[3].w[0]);  if (t) { goto L_002D628C; } }
L_002D6224:
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[7], ld32((c.r[9].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);  if (t) { goto L_002D6280; } }
L_002D6238:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[5], c.r[7].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_002D6274; } }
L_002D624C:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002D6270; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 240u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_002D6270:
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 1;
L_002D6274:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D624Cu | kUnwind; return; } goto L_002D624C; } }
    set32(c.r[7], c.r[7].w[0] + 32u);
    c.budget -= 1;
L_002D6280:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6238u | kUnwind; return; } goto L_002D6238; } }
    set32(c.r[9], c.r[9].w[0] + 64u);
    c.budget -= 1;
L_002D628C:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6224u | kUnwind; return; } goto L_002D6224; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[20], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[20].w[0] + c.r[3].w[0]);  if (t) { goto L_002D6518; } }
L_002D62A8:
    set32(c.r[18], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002D6508; } }
L_002D62B4:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[17].w[0] << 5);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D62CCu); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0074(c, 339u, depth + 1u); else { c.pc = 0x002D3A50u; return; } if (c.pc != 0x002D62CCu) [[unlikely]] return; }
L_002D62CC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D6504; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_002D6504; } }
    set32(c.r[11], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_002D633C; } }
L_002D62F4:
    set32(c.r[10], 0u - 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[16].w[0] + c.r[7].w[0]);  if (t) { goto L_002D6324; } }
L_002D6304:
    set32(c.r[6], ld32((c.r[8].w[0] + 16u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002D6320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_002D6330; } }
L_002D6320:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_002D6324:
    c.r[3].d[0] = c.r[9].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[9].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6304u | kUnwind; return; } goto L_002D6304; } }
L_002D6330:
    set32(c.r[3], c.r[7].w[0] + c.r[29].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    st32((c.r[3].w[0] + 192u), c.r[10].w[0]);
    c.budget -= 3;
L_002D633C:
    c.r[3].d[0] = c.r[11].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[11].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D62F4u | kUnwind; return; } goto L_002D62F4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u - 1u);  if (t) { goto L_002D6370; } }
L_002D6358:
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 192u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_002D636C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002D636C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002D6370:
    c.r[6].d[0] = c.r[8].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6358u | kUnwind; return; } goto L_002D6358; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002D6504; } }
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u - 1u);  if (t) { goto L_002D63BC; } }
L_002D6398:
    set32(c.r[8], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 192u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_002D63B4; } }
    st32((c.r[8].w[0] + 176u), c.r[10].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { goto L_002D63B8; } }
L_002D63B4:
    st32((c.r[8].w[0] + 176u), c.r[7].w[0]);
    c.budget -= 1;
L_002D63B8:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_002D63BC:
    c.r[6].d[0] = c.r[9].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], c.r[9].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6398u | kUnwind; return; } goto L_002D6398; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u - 1u);  if (t) { goto L_002D6404; } }
L_002D63D4:
    set32(c.r[6], c.r[7].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 176u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[8].d[0];  if (t) { goto L_002D6400; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[6].d[0];  if (t) { goto L_002D6400; } }
    set32(c.r[7], c.r[16].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    st32((c.r[6].w[0] + 16u), c.r[7].w[0]);
    c.budget -= 5;
L_002D6400:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_002D6404:
    c.r[6].d[0] = c.r[9].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[7], c.r[9].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D63D4u | kUnwind; return; } goto L_002D63D4; } }
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u - 1u);  if (t) { goto L_002D642C; } }
L_002D641C:
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[6].w[0] + 16u), c.r[7].w[0]);
    c.budget -= 4;
L_002D642C:
    c.r[6].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D641Cu | kUnwind; return; } goto L_002D641C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D6454; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_002D6454:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[8], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u - 1u);  if (t) { goto L_002D64FC; } }
L_002D6464:
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[8].w[0]) & ~15u, c.r[6]);  if (t) { goto L_002D64A4; } }
L_002D6474:
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[10], ld32((c.r[6].w[0] + 192u)));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == c.r[7].d[0]; set32(c.r[9], c.r[6].w[0] + 160u);  if (t) { goto L_002D64A0; } }
    set32(c.r[6], c.r[10].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 160u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 160u), c.f[0]);
    st32((c.r[9].w[0]), 0u);
    c.budget -= 7;
L_002D64A0:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_002D64A4:
    c.r[6].d[0] = c.r[11].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], c.r[11].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6474u | kUnwind; return; } goto L_002D6474; } }
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_002D64E0; } }
L_002D64BC:
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[9], ld32((c.r[6].w[0] + 176u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[7].d[0];  if (t) { goto L_002D64DC; } }
    c.f[0] = ld32((c.r[6].w[0] + 160u));
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    st32((c.r[6].w[0] + 144u), c.f[0]);
    c.budget -= 4;
L_002D64DC:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_002D64E0:
    c.r[6].d[0] = c.r[10].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], c.r[10].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D64BCu | kUnwind; return; } goto L_002D64BC; } }
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[6]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 4;
L_002D64FC:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6464u | kUnwind; return; } goto L_002D6464; } }
L_002D6504:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002D6508:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D62B4u | kUnwind; return; } goto L_002D62B4; } }
    set32(c.r[20], c.r[20].w[0] + 64u);
    c.budget -= 1;
L_002D6518:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D62A8u | kUnwind; return; } goto L_002D62A8; } }
L_002D6520:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 784u);  c.pc = t; return; }
L_002D6550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6564u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 345u, depth + 1u); else { c.pc = 0x002D3B60u; return; } if (c.pc != 0x002D6564u) [[unlikely]] return; }
L_002D6564:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[2], c.r[2].w[0] + 12224u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[4], c.r[16].w[0] + 120u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15200u);
    set32(c.r[6], c.r[6].w[0] + 15312u);
    set32(c.r[7], 0u + 120u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6590u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x002D6590u) [[unlikely]] return; }
L_002D6590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6598u); set32(c.r[4], c.r[16].w[0] + 360u);  if (depth < kMaxDepth) unit_0074(c, 345u, depth + 1u); else { c.pc = 0x002D3B60u; return; } if (c.pc != 0x002D6598u) [[unlikely]] return; }
L_002D6598:
    set32(c.r[4], c.r[16].w[0] + 484u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D65A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 341u, depth + 1u); else { c.pc = 0x002D3AD0u; return; } if (c.pc != 0x002D65A4u) [[unlikely]] return; }
L_002D65A4:
    st32((c.r[16].w[0] + 656u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 660u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D65C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D6674; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 12224u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 660u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6608; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_002D6608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6608u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002D6608u) [[unlikely]] return; }
L_002D6608:
    st32((c.r[17].w[0] + 660u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 656u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 360u);  if (t) { goto L_002D662C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_002D6628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6628u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002D6628u) [[unlikely]] return; }
L_002D6628:
    set32(c.r[4], c.r[17].w[0] + 360u);
    c.budget -= 1;
L_002D662C:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6638u); st32((c.r[17].w[0] + 656u), 0u);  if (depth < kMaxDepth) unit_0074(c, 348u, depth + 1u); else { c.pc = 0x002D3BD0u; return; } if (c.pc != 0x002D6638u) [[unlikely]] return; }
L_002D6638:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[4], c.r[17].w[0] + 120u);
    set32(c.r[5], c.r[5].w[0] + 15312u);
    set32(c.r[6], 0u + 120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6650u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x002D6650u) [[unlikely]] return; }
L_002D6650:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D665Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 348u, depth + 1u); else { c.pc = 0x002D3BD0u; return; } if (c.pc != 0x002D665Cu) [[unlikely]] return; }
L_002D665C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D6678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6674u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002D6674u) [[unlikely]] return; }
L_002D6674:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D6678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D6690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), 0u);  c.pc = t; return; }
L_002D66A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0] + 360u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D66C8u); set32(c.r[4], c.r[17].w[0] + 360u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D66C8u) [[unlikely]] return; }
L_002D66C8:
    set32(c.r[4], c.r[17].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D66D4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 364u, depth + 1u); else { c.pc = 0x002D3D50u; return; } if (c.pc != 0x002D66D4u) [[unlikely]] return; }
L_002D66D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D66DCu); set32(c.r[4], c.r[17].w[0] + 120u);  if (depth < kMaxDepth) unit_0075(c, 25u, depth + 1u); else { c.pc = 0x002D45E0u; return; } if (c.pc != 0x002D66DCu) [[unlikely]] return; }
L_002D66DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D66E4u); set32(c.r[4], c.r[17].w[0] + 120u);  if (depth < kMaxDepth) unit_0075(c, 41u, depth + 1u); else { c.pc = 0x002D4800u; return; } if (c.pc != 0x002D66E4u) [[unlikely]] return; }
L_002D66E4:
    set32(c.r[4], c.r[17].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D66F0u); set32(c.r[5], c.r[17].w[0] + 360u);  if (depth < kMaxDepth) unit_0075(c, 46u, depth + 1u); else { c.pc = 0x002D48D0u; return; } if (c.pc != 0x002D66F0u) [[unlikely]] return; }
L_002D66F0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D66FCu); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_0074(c, 364u, depth + 1u); else { c.pc = 0x002D3D50u; return; } if (c.pc != 0x002D66FCu) [[unlikely]] return; }
L_002D66FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6704u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_0075(c, 41u, depth + 1u); else { c.pc = 0x002D4800u; return; } if (c.pc != 0x002D6704u) [[unlikely]] return; }
L_002D6704:
    set32(c.r[4], c.r[17].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6710u); set32(c.r[5], c.r[17].w[0] + 360u);  if (depth < kMaxDepth) unit_0075(c, 46u, depth + 1u); else { c.pc = 0x002D48D0u; return; } if (c.pc != 0x002D6710u) [[unlikely]] return; }
L_002D6710:
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[5], c.r[17].w[0] + 364u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6720u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002D6720u) [[unlikely]] return; }
L_002D6720:
    st32((c.r[17].w[0] + 480u), 0u);
    set32(c.r[4], c.r[17].w[0] + 484u);
    set32(c.r[3], ld32((c.r[17].w[0] + 480u)));
    set32(c.r[5], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6754u); st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0074(c, 341u, depth + 1u); else { c.pc = 0x002D3AD0u; return; } if (c.pc != 0x002D6754u) [[unlikely]] return; }
L_002D6754:
    set32(c.r[2], ld32((c.r[17].w[0] + 660u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6770; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_002D6770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6770u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002D6770u) [[unlikely]] return; }
L_002D6770:
    st32((c.r[17].w[0] + 660u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 656u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6790; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_002D6790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6790u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002D6790u) [[unlikely]] return; }
L_002D6790:
    st32((c.r[17].w[0] + 656u), 0u);
    set32(c.r[16], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[16].w[0] << 6);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D67A4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002D67A4u) [[unlikely]] return; }
L_002D67A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D67BCu); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x002D67BCu) [[unlikely]] return; }
L_002D67BC:
    st32((c.r[17].w[0] + 656u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D67CCu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002D67CCu) [[unlikely]] return; }
L_002D67CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D67E4u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x002D67E4u) [[unlikely]] return; }
L_002D67E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[17].w[0] + 660u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 12336u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0]) & ~15u, c.r[3]);  if (t) { goto L_002D6844; } }
L_002D6804:
    set32(c.r[3], ld32((c.r[17].w[0] + 656u)));
    set32(c.r[4], c.r[6].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 660u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 16;
L_002D6844:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6804u | kUnwind; return; } goto L_002D6804; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D6870:
    set32(c.r[3], ld32((c.r[4].w[0] + 480u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st32((c.r[4].w[0] + 480u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 480u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 152u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[3].w[0]);  c.pc = t; return; }
L_002D68A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 272u)));
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D68D4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D68D4u) [[unlikely]] return; }
L_002D68D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 152u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D68F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D68F4u) [[unlikely]] return; }
L_002D68F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D6910:
    set32(c.r[29], c.r[29].w[0] - 8288u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 208u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[6], c.r[16].w[0] << 6);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[5].w[0] + 204u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6958u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002D6958u) [[unlikely]] return; }
L_002D6958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002D6988; } }
L_002D6960:
    set32(c.r[3], ld32((c.r[19].w[0] + 396u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
L_002D697C:
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 3;
L_002D6988:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6960u | kUnwind; return; } goto L_002D6960; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D69A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 254u, depth + 1u); else { c.pc = 0x0014FB50u; return; } if (c.pc != 0x002D69A0u) [[unlikely]] return; }
L_002D69A0:
    set32(c.r[5], ld32((c.r[19].w[0] + 660u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 484u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D69B4u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 76u, depth + 1u); else { c.pc = 0x002D4EC0u; return; } if (c.pc != 0x002D69B4u) [[unlikely]] return; }
L_002D69B4:
    set32(c.r[8], ld32((c.r[19].w[0] + 660u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 364u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D69CCu); set32(c.r[7], c.r[19].w[0] + 484u);  if (depth < kMaxDepth) unit_0075(c, 79u, depth + 1u); else { c.pc = 0x002D4FB0u; return; } if (c.pc != 0x002D69CCu) [[unlikely]] return; }
L_002D69CC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 155u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_002D69E4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D69FC; } }
L_002D69E4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_002D69FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 156u));
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002D6A2C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D6A48; } }
L_002D6A2C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_002D6A48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[19].w[0] + 364u);
    fpu_div(c, 13u, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6A6Cu);  if (depth < kMaxDepth) unit_0075(c, 68u, depth + 1u); else { c.pc = 0x002D4C10u; return; } if (c.pc != 0x002D6A6Cu) [[unlikely]] return; }
L_002D6A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6A74u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 72u, depth + 1u); else { c.pc = 0x002D4E10u; return; } if (c.pc != 0x002D6A74u) [[unlikely]] return; }
L_002D6A74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6A84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 254u, depth + 1u); else { c.pc = 0x0014FB50u; return; } if (c.pc != 0x002D6A84u) [[unlikely]] return; }
L_002D6A84:
    set32(c.r[5], ld32((c.r[19].w[0] + 656u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 660u)));
    set32(c.r[8], c.r[19].w[0] + 484u);
    set32(c.r[7], ld32((c.r[18].w[0] + 212u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6AA0u); c.r[9].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 86u, depth + 1u); else { c.pc = 0x002D52E0u; return; } if (c.pc != 0x002D6AA0u) [[unlikely]] return; }
L_002D6AA0:
    set32(c.r[5], ld32((c.r[19].w[0] + 656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6AACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 99u, depth + 1u); else { c.pc = 0x002D5940u; return; } if (c.pc != 0x002D6AACu) [[unlikely]] return; }
L_002D6AAC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 158u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[19].w[0] + 660u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 484u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6AECu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0075(c, 113u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x002D6AECu) [[unlikely]] return; }
L_002D6AEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6AFCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 254u, depth + 1u); else { c.pc = 0x0014FB50u; return; } if (c.pc != 0x002D6AFCu) [[unlikely]] return; }
L_002D6AFC:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[4]);
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[3], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[4]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[18].w[0] + 208u)));
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[4]);
    set32(c.r[4], ld32((c.r[18].w[0] + 204u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_002D6B48; } }
L_002D6B28:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 64u);
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.budget -= 8;
L_002D6B48:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6B28u | kUnwind; return; } goto L_002D6B28; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 660u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6B64u); set32(c.r[7], c.r[19].w[0] + 484u);  if (depth < kMaxDepth) unit_0075(c, 122u, depth + 1u); else { c.pc = 0x002D5E60u; return; } if (c.pc != 0x002D6B64u) [[unlikely]] return; }
L_002D6B64:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6B78u); set32(c.r[6], c.r[19].w[0] + 484u);  if (depth < kMaxDepth) unit_0097(c, 32u, depth + 1u); else { c.pc = 0x0035C4B0u; return; } if (c.pc != 0x002D6B78u) [[unlikely]] return; }
L_002D6B78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 8288u);  c.pc = t; return; }
L_002D6BA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45440000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 19531ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6BD0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x002D6BD0u) [[unlikely]] return; }
L_002D6BD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 12208u);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    st32((c.r[18].w[0] + 32u), 0u);
    st32((c.r[18].w[0] + 36u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 308u)));
    st32((c.r[18].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 44u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 272u)));
    c.budget -= 13;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st32((c.r[18].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_002D6C24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C0Cu); set32(c.r[4], 0u + 664u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D6C0Cu) [[unlikely]] return; }
L_002D6C0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D6C1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C1Cu);  if (depth < kMaxDepth) unit_0075(c, 155u, depth + 1u); else { c.pc = 0x002D6550u; return; } if (c.pc != 0x002D6C1Cu) [[unlikely]] return; }
L_002D6C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_002D6C40; } }
L_002D6C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C2Cu); set32(c.r[4], 0u + 120u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D6C2Cu) [[unlikely]] return; }
L_002D6C2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D6C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C3Cu);  if (depth < kMaxDepth) unit_0074(c, 345u, depth + 1u); else { c.pc = 0x002D3B60u; return; } if (c.pc != 0x002D6C3Cu) [[unlikely]] return; }
L_002D6C3C:
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 1;
L_002D6C40:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C54u); set32(c.r[5], c.r[17].w[0] + 156u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D6C54u) [[unlikely]] return; }
L_002D6C54:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D6C70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D6CFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 12208u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D6CBC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D6CBC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6CBCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D6CBCu) [[unlikely]] return; }
L_002D6CBC:
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002D6CD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6CD4u);  if (depth < kMaxDepth) unit_0028(c, 149u, depth + 1u); else { c.pc = 0x001A0E00u; return; } if (c.pc != 0x002D6CD4u) [[unlikely]] return; }
L_002D6CD4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6CE4u); st32((c.r[17].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x002D6CE4u) [[unlikely]] return; }
L_002D6CE4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D6D00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6CFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002D6CFCu) [[unlikely]] return; }
L_002D6CFC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D6D00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D6D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D3Cu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D6D3Cu) [[unlikely]] return; }
L_002D6D3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D6D64; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D60u); set32(c.r[5], c.r[3].w[0] + 4u);  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x002D6D60u) [[unlikely]] return; }
L_002D6D60:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D6D64:
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D80u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D6D80u) [[unlikely]] return; }
L_002D6D80:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D6DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DB8u); set32(c.r[4], ld32((c.r[4].w[0] + 36u)));  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A46B0u; return; } if (c.pc != 0x002D6DB8u) [[unlikely]] return; }
L_002D6DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DC0u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0029(c, 36u, depth + 1u); else { c.pc = 0x001A4820u; return; } if (c.pc != 0x002D6DC0u) [[unlikely]] return; }
L_002D6DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D6DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DE8u); set32(c.r[4], ld32((c.r[4].w[0] + 36u)));  if (depth < kMaxDepth) unit_0029(c, 70u, depth + 1u); else { c.pc = 0x001A4D50u; return; } if (c.pc != 0x002D6DE8u) [[unlikely]] return; }
L_002D6DE8:
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D6E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D6E88; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6E24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x002D6E24u) [[unlikely]] return; }
L_002D6E24:
    set32(c.r[6], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld16((c.r[6].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 3u));
    c.r[4].d[0] = ld16((c.r[6].w[0]));
    c.r[8].d[0] = ld64((c.r[6].w[0]));
    set32(c.r[9], ld32((c.r[6].w[0] + 8u)));
    c.r[5].d[0] = c.r[5].d[0] << 54;
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[7], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[6].d[0] = c.r[5].d[0] >> 58;
    c.r[2].d[0] = c.r[8].d[0] << 30;
    c.r[5].d[0] = c.r[4].d[0] & 16383ull;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    c.r[4].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[6].d[0] = c.r[8].d[0] << 44;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] >> 58;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    set32(c.r[8], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6E88u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0012(c, 324u, depth + 1u); else { c.pc = 0x0014BE30u; return; } if (c.pc != 0x002D6E88u) [[unlikely]] return; }
L_002D6E88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D6EA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 21071ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6EC4u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002D6EC4u) [[unlikely]] return; }
L_002D6EC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6ED4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002D6ED8; } }
L_002D6ED4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D6ED8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6EE4; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 378u)));
    c.budget -= 1;
L_002D6EE4:
    c.r[2].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6F00; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002D6F00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D6F20:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002D72C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 23896u));
    c.f[1] = c.r[3].w[0];
    c.f[2] = 0u;
    st32((c.r[5].w[0] + 160u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 164u), 0u);
    c.f[0] = ld32((c.r[1].w[0] - 23904u));
    st32((c.r[5].w[0] + 168u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 172u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23912u));
    st32((c.r[5].w[0] + 304u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23872u));
    st32((c.r[5].w[0] + 308u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23920u));
    st32((c.r[5].w[0] + 312u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 316u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23928u));
    st32((c.r[5].w[0] + 320u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 324u), 0u);
    c.f[0] = ld32((c.r[1].w[0] - 23936u));
    st32((c.r[5].w[0] + 328u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 332u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23944u));
    st32((c.r[5].w[0] + 464u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23952u));
    st32((c.r[5].w[0] + 468u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23960u));
    st32((c.r[5].w[0] + 472u), c.f[0]);
    st32((c.r[5].w[0] + 476u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 41;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D7014; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = ld32((c.r[1].w[0] - 23968u));
    st32((c.r[5].w[0] + 480u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 484u), c.f[2]);
    c.f[0] = ld32((c.r[1].w[0] - 23976u));
    st32((c.r[5].w[0] + 488u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 492u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 23984u));
    st32((c.r[5].w[0] + 624u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 628u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23992u));
    st32((c.r[5].w[0] + 632u), c.f[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 636u), c.f[1]);  if (t) { goto L_002D7058; } }
L_002D7014:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = ld32((c.r[1].w[0] - 24000u));
    st32((c.r[5].w[0] + 480u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 484u), c.f[2]);
    c.f[0] = ld32((c.r[1].w[0] - 24008u));
    st32((c.r[5].w[0] + 488u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 492u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 24016u));
    st32((c.r[5].w[0] + 624u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 628u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 24024u));
    st32((c.r[5].w[0] + 632u), c.f[0]);
    st32((c.r[5].w[0] + 636u), c.f[1]);
    c.budget -= 17;
L_002D7058:
    set32(c.r[9], ld32((c.r[4].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[5] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[3].w[0];
    c.f[1] = ld32((c.r[5].w[0] + 160u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 123u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 107u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 109u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 139u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 141u)));
    c.f[2] = c.r[7].w[0];
    c.f[3] = c.r[8].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 7u, c.f[2], c.f[5]);
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[0]));
    c.f[0] = c.r[4].w[0];
    c.f[2] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 6u, c.f[0], c.f[5]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 3u, c.f[3], c.f[5]);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[2], c.f[5]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 5u, c.f[0], c.f[5]);
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[0] = fp::mul(c.f[1], c.f[3]);
    st32((c.r[5].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 304u));
    c.f[1] = fp::add(c.f[4], c.f[2]);
    c.f[2] = fp::add(c.f[4], c.f[7]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[5].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 308u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[5].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 168u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 168u), c.f[0]);
    c.f[1] = ld32((c.r[1].w[0] - 24032u));
    c.f[0] = ld32((c.r[5].w[0] + 312u));
    c.f[1] = fp::mul(c.f[1], c.f[7]);
    c.f[1] = fp::add(c.f[4], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 51;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[5].w[0] + 312u), c.f[0]);  if (t) { goto L_002D7140; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[5].w[0] + 472u));
    c.f[1] = fp::mul(c.f[1], c.f[7]);
    c.f[1] = fp::add(c.f[4], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 472u), c.f[0]);
    c.budget -= 7;
L_002D7140:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[4] = c.r[3].w[0];
    c.f[1] = ld32((c.r[5].w[0] + 624u));
    c.f[2] = fp::add(c.f[4], c.f[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0] + 624u), c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[3] = ld32((c.r[1].w[0] - 24040u));
    c.f[1] = fp::add(c.f[4], c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 632u));
    c.f[0] = fp::mul(c.f[3], c.f[5]);
    c.f[0] = fp::add(c.f[4], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[5].w[0] + 632u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 480u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 480u), c.f[0]);  if (t) { goto L_002D72B8; } }
L_002D719C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    ld128((c.r[4].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[10], c.r[4].w[0] + 656u);
    set32(c.r[9], c.r[4].w[0] + 176u);
    st128((c.r[4].w[0] + 640u) & ~15u, c.r[2]);
    ld128((c.r[9].w[0]) & ~15u, c.r[6]);
    ld128((c.r[9].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[9].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[9].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    st128((c.r[10].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[10].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[10].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + 720u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 240u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[4].w[0] + 304u) & ~15u, c.r[6]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    st128((c.r[4].w[0] + 784u) & ~15u, c.r[6]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[2].w[0] + 160u);
    set32(c.r[2], ld32((c.r[5].w[0] + 128u)));
    c.f[0] = ld32((c.r[2].w[0] + 356u));
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 304u);
    set32(c.r[2], ld32((c.r[5].w[0] + 128u)));
    c.f[0] = ld32((c.r[2].w[0] + 356u));
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 71;
L_002D72B8:
    c.r[4].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D719Cu | kUnwind; return; } goto L_002D719C; } }
L_002D72C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D72D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D72E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 117u, depth + 1u); else { c.pc = 0x00198E50u; return; } if (c.pc != 0x002D72E4u) [[unlikely]] return; }
L_002D72E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 12384u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7314u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 252u, depth + 1u); else { c.pc = 0x00191E60u; return; } if (c.pc != 0x002D7314u) [[unlikely]] return; }
L_002D7314:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D732Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002D732Cu) [[unlikely]] return; }
L_002D732C:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D736Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002D736Cu) [[unlikely]] return; }
L_002D736C:
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 140u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 141u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 144u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D73B0; } }
    set32(c.r[4], c.r[4].w[0] + 416u);
    c.budget -= 1;
L_002D73B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53330000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D73BCu); c.r[5].d[0] = c.r[2].d[0] | 19799ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002D73BCu) [[unlikely]] return; }
L_002D73BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002D73C8; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002D73C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    c.f[0] = ld32((c.r[1].w[0] - 23824u));
    set32(c.r[4], 0u + 2u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 340u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    st16((c.r[3].w[0] + 596u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D7400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D74C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 12384u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D744C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D744C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D744Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D744Cu) [[unlikely]] return; }
L_002D744C:
    st32((c.r[17].w[0] + 128u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D7474; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D7474; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7474u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7474u) [[unlikely]] return; }
L_002D7474:
    st32((c.r[17].w[0] + 132u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D749C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D749C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D749Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D749Cu) [[unlikely]] return; }
L_002D749C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D74ACu); st32((c.r[17].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_0026(c, 119u, depth + 1u); else { c.pc = 0x00198EB0u; return; } if (c.pc != 0x002D74ACu) [[unlikely]] return; }
L_002D74AC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D74C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D74C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002D74C4u) [[unlikely]] return; }
L_002D74C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D74C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D74E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D74FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x002D74FCu) [[unlikely]] return; }
L_002D74FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D750Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x002D750Cu) [[unlikely]] return; }
L_002D750C:
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    set32(c.r[6], c.r[16].w[0] + 32u);
    c.f[0] = c.r[2].w[0];
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D753Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 89u, depth + 1u); else { c.pc = 0x002253B0u; return; } if (c.pc != 0x002D753Cu) [[unlikely]] return; }
L_002D753C:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D7560; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7560u); set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002D7560u) [[unlikely]] return; }
L_002D7560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D7570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 128u)));  c.pc = t; return; }
L_002D7580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D75A8u); set32(c.r[4], ld32((c.r[4].w[0] + 136u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002D75A8u) [[unlikely]] return; }
L_002D75A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D75C0u); set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002D75C0u) [[unlikely]] return; }
L_002D75C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D75D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 140u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D766C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7600u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7600u) [[unlikely]] return; }
L_002D7600:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D766C; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u - 9u);
    st8((c.r[18].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    st32((c.r[18].w[0] + 100u), 0u);
    set32(c.r[3], 0u - 5u);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[8]);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[7], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[2], 0u + 120u);
    st128((c.r[7].w[0] + 224u) & ~15u, c.r[8]);
    ld128((c.r[18].w[0] + 32u) & ~15u, c.r[8]);
    set32(c.r[7], ld32((c.r[18].w[0] + 116u)));
    st128((c.r[7].w[0] + 208u) & ~15u, c.r[8]);
    set32(c.r[8], ld32((c.r[18].w[0] + 116u)));
    c.r[7].d[0] = ld8((c.r[8].w[0] + 397u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 397u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[18].w[0] + 116u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 392u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 25;
L_002D766C:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 141u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D78F8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 136u)));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D7758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D76A4u);  if (depth < kMaxDepth) unit_005B(c, 361u, depth + 1u); else { c.pc = 0x0026F2F0u; return; } if (c.pc != 0x002D76A4u) [[unlikely]] return; }
L_002D76A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D76C8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 7;
L_002D76C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002D78F8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D76ECu); set32(c.r[4], ld32((c.r[18].w[0] + 136u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002D76ECu) [[unlikely]] return; }
L_002D76EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7704u); set32(c.r[4], ld32((c.r[18].w[0] + 132u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002D7704u) [[unlikely]] return; }
L_002D7704:
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D771Cu); set32(c.r[4], ld32((c.r[18].w[0] + 116u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002D771Cu) [[unlikely]] return; }
L_002D771C:
    set32(c.r[7], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[4], 0u - 9u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 397u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 397u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 116u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 392u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D78F8; } }
L_002D7758:
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D78F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7778u);  if (depth < kMaxDepth) unit_005B(c, 361u, depth + 1u); else { c.pc = 0x0026F2F0u; return; } if (c.pc != 0x002D7778u) [[unlikely]] return; }
L_002D7778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D78F8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D779Cu); set32(c.r[6], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D779Cu) [[unlikely]] return; }
L_002D779C:
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[4], 0u - 1u);
    c.f[14] = ld32((c.r[29].w[0] + 136u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = 0u;
    set32(c.r[6], 0u + 55u);
    c.f[15] = c.f[13];
    c.f[16] = c.f[13];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D77C4u); c.f[17] = c.f[13];  if (depth < kMaxDepth) unit_003E(c, 165u, depth + 1u); else { c.pc = 0x001F9D70u; return; } if (c.pc != 0x002D77C4u) [[unlikely]] return; }
L_002D77C4:
    c.f[1] = ld32((c.r[2].w[0] + 224u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.f[0] = c.r[3].w[0];
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 224u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 232u));
    c.f[0] = ld32((c.r[1].w[0] - 23832u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[2].w[0] + 232u), c.f[0]);  if (t) { goto L_002D77FC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002D77FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53330000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7808u); c.r[5].d[0] = c.r[2].d[0] | 19799ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002D7808u) [[unlikely]] return; }
L_002D7808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002D7814; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002D7814:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.f[0] = ld32((c.r[1].w[0] - 23840u));
    set32(c.r[6], 0u + 10u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u - 2u);
    st32((c.r[3].w[0] + 52u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23840u));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[3].w[0] + 68u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23840u));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[3].w[0] + 84u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23848u));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23848u));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[3].w[0] + 36u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23856u));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23856u));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[3].w[0] + 40u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st16((c.r[3].w[0] + 292u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st16((c.r[3].w[0] + 294u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 44u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 41;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D78B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D78B8u) [[unlikely]] return; }
L_002D78B8:
    st32((c.r[16].w[0] + 44u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    st16((c.r[4].w[0] + 292u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    st16((c.r[4].w[0] + 294u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 395u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 141u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 16;
L_002D78F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7930; } }
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[2].w[0];
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 128u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7930u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0042(c, 78u, depth + 1u); else { c.pc = 0x00209290u; return; } if (c.pc != 0x002D7930u) [[unlikely]] return; }
L_002D7930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7938u); set32(c.r[4], ld32((c.r[18].w[0] + 132u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002D7938u) [[unlikely]] return; }
L_002D7938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7940u); set32(c.r[4], ld32((c.r[18].w[0] + 136u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002D7940u) [[unlikely]] return; }
L_002D7940:
    set32(c.r[2], ld32((c.r[18].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7950u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x002D7950u) [[unlikely]] return; }
L_002D7950:
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7960u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x002D7960u) [[unlikely]] return; }
L_002D7960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002D7980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 132u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D79A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D79A8u) [[unlikely]] return; }
L_002D79A8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 141u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D79CC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D79CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D79CCu) [[unlikely]] return; }
L_002D79CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D79E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D79FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002D79FCu) [[unlikely]] return; }
L_002D79FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 12320u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002D7A28; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7A20u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 318u, depth + 1u); else { c.pc = 0x0026EB20u; return; } if (c.pc != 0x002D7A20u) [[unlikely]] return; }
L_002D7A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_002D7A2C; } }
L_002D7A28:
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 1;
L_002D7A2C:
    st32((c.r[16].w[0] + 100u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D7A50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D7AC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 12320u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D7A9C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D7A9C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7A9Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7A9Cu) [[unlikely]] return; }
L_002D7A9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7AACu); st32((c.r[17].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002D7AACu) [[unlikely]] return; }
L_002D7AAC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D7AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7AC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002D7AC4u) [[unlikely]] return; }
L_002D7AC4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D7AC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D7AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7B08u); set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002D7B08u) [[unlikely]] return; }
L_002D7B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7B10u);  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x002D7B10u) [[unlikely]] return; }
L_002D7B10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[3].w[0] + 176u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D7B50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7B6Cu); set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002D7B6Cu) [[unlikely]] return; }
L_002D7B6C:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7B7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x002D7B7Cu) [[unlikely]] return; }
L_002D7B7C:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[4], ld32((c.r[4].w[0] + 164u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002D7BDC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002D7C78; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7BD0u); set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002D7BD0u) [[unlikely]] return; }
L_002D7BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002D7C7C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D7BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_002D7C70; } }
L_002D7BE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D7C78; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    set32(c.r[3], 0u + 12014u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D7C68; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D7C68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C24u);  if (depth < kMaxDepth) unit_0010(c, 21u, depth + 1u); else { c.pc = 0x00140440u; return; } if (c.pc != 0x002D7C24u) [[unlikely]] return; }
L_002D7C24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 23864u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D7C68; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7C48u) [[unlikely]] return; }
L_002D7C48:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 176u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C60u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 70u, depth + 1u); else { c.pc = 0x0018CBF0u; return; } if (c.pc != 0x002D7C60u) [[unlikely]] return; }
L_002D7C60:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_002D7C68:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 2;
L_002D7C70:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7BE4u | kUnwind; return; } goto L_002D7BE4; } }
L_002D7C78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002D7C7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D7C90:
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002D4000u < 16384u) { entry = entries_0075[(t - 0x002D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D7CB0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 7;
    { set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C02A0u | kUnwind; return; } [[clang::musttail]] return unit_0030(c, 17u, depth); }
L_002D7CD0:
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002D4000u < 16384u) { entry = entries_0075[(t - 0x002D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D7CE0:
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002D4000u < 16384u) { entry = entries_0075[(t - 0x002D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D7CF0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D75D0u | kUnwind; return; } goto L_002D75D0; }
L_002D7D00:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7980u | kUnwind; return; } goto L_002D7980; }
L_002D7D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7D24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 117u, depth + 1u); else { c.pc = 0x00198E50u; return; } if (c.pc != 0x002D7D24u) [[unlikely]] return; }
L_002D7D24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 12464u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7D8Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002D7D8Cu) [[unlikely]] return; }
L_002D7D8C:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7DB0u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 249u, depth + 1u); else { c.pc = 0x00191DE0u; return; } if (c.pc != 0x002D7DB0u) [[unlikely]] return; }
L_002D7DB0:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 23792u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 23792u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 23792u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 140u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D7DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D7EA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 12464u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D7E3C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D7E3C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7E3Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7E3Cu) [[unlikely]] return; }
L_002D7E3C:
    st32((c.r[17].w[0] + 128u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D7E64; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D7E64; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7E64u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7E64u) [[unlikely]] return; }
L_002D7E64:
    st32((c.r[17].w[0] + 132u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 23792u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7E88u); st32((c.r[1].w[0] - 23792u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 119u, depth + 1u); else { c.pc = 0x00198EB0u; return; } if (c.pc != 0x002D7E88u) [[unlikely]] return; }
L_002D7E88:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D7EA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7EA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002D7EA0u) [[unlikely]] return; }
L_002D7EA0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D7EA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D7EC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 16u);
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7EF0u); set32(c.r[7], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_002C(c, 208u, depth + 1u); else { c.pc = 0x001B1B70u; return; } if (c.pc != 0x002D7EF0u) [[unlikely]] return; }
L_002D7EF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7F04u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 89u, depth + 1u); else { c.pc = 0x002253B0u; return; } if (c.pc != 0x002D7F04u) [[unlikely]] return; }
L_002D7F04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D7F20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 128u)));  c.pc = t; return; }
L_002D7F30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 112u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D7F7C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002D7FA8; } }
    c.r[3].d[0] = 0ull | 65535ull;
    st32((c.r[16].w[0] + 140u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002D7FAC; } }
L_002D7F7C:
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7F8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7F8Cu) [[unlikely]] return; }
L_002D7F8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D7FA8; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7FA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D7FA4u) [[unlikely]] return; }
L_002D7FA4:
    st32((c.r[16].w[0] + 140u), 0u);
    c.budget -= 1;
L_002D7FA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002D7FAC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D7FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[6], c.r[16].w[0] + 16u);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7FF4u); set32(c.r[5], c.r[7].w[0] + 1u);  if (depth < kMaxDepth) unit_0066(c, 208u, depth + 1u); else { c.pc = 0x0029A200u; return; } if (c.pc != 0x002D7FF4u) [[unlikely]] return; }
L_002D7FF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[6], c.r[16].w[0] + 16u);
    set32(c.r[7], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    [[clang::musttail]] return unit_0076(c, 1u, depth);
}

}
