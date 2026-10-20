#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0017[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0, 0,
    50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53,
    0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110,
    0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0,
    0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0017(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0015C000;
    case 2u: goto L_0015C034;
    case 3u: goto L_0015C03C;
    case 4u: goto L_0015C048;
    case 5u: goto L_0015C050;
    case 6u: goto L_0015C078;
    case 7u: goto L_0015C0B4;
    case 8u: goto L_0015C0E8;
    case 9u: goto L_0015C100;
    case 10u: goto L_0015C1B8;
    case 11u: goto L_0015C290;
    case 12u: goto L_0015C2A4;
    case 13u: goto L_0015C2C8;
    case 14u: goto L_0015C300;
    case 15u: goto L_0015C3A0;
    case 16u: goto L_0015C3A8;
    case 17u: goto L_0015C428;
    case 18u: goto L_0015C480;
    case 19u: goto L_0015C494;
    case 20u: goto L_0015C4C0;
    case 21u: goto L_0015C4EC;
    case 22u: goto L_0015C4F8;
    case 23u: goto L_0015C510;
    case 24u: goto L_0015C530;
    case 25u: goto L_0015C564;
    case 26u: goto L_0015C57C;
    case 27u: goto L_0015C594;
    case 28u: goto L_0015C59C;
    case 29u: goto L_0015C5A4;
    case 30u: goto L_0015C5B8;
    case 31u: goto L_0015C5E8;
    case 32u: goto L_0015C630;
    case 33u: goto L_0015C644;
    case 34u: goto L_0015C680;
    case 35u: goto L_0015C6B0;
    case 36u: goto L_0015C6C8;
    case 37u: goto L_0015C6E0;
    case 38u: goto L_0015C73C;
    case 39u: goto L_0015C754;
    case 40u: goto L_0015C78C;
    case 41u: goto L_0015C7B0;
    case 42u: goto L_0015C8CC;
    case 43u: goto L_0015C940;
    case 44u: goto L_0015C948;
    case 45u: goto L_0015C954;
    case 46u: goto L_0015C960;
    case 47u: goto L_0015C9E0;
    case 48u: goto L_0015C9E8;
    case 49u: goto L_0015C9F4;
    case 50u: goto L_0015CA00;
    case 51u: goto L_0015CA0C;
    case 52u: goto L_0015CA34;
    case 53u: goto L_0015CAFC;
    case 54u: goto L_0015CB04;
    case 55u: goto L_0015CB10;
    case 56u: goto L_0015CB1C;
    case 57u: goto L_0015CB40;
    case 58u: goto L_0015CB4C;
    case 59u: goto L_0015CB80;
    case 60u: goto L_0015CB90;
    case 61u: goto L_0015CBC4;
    case 62u: goto L_0015CC04;
    case 63u: goto L_0015CC18;
    case 64u: goto L_0015CD9C;
    case 65u: goto L_0015CDB0;
    case 66u: goto L_0015CDCC;
    case 67u: goto L_0015CE20;
    case 68u: goto L_0015CE30;
    case 69u: goto L_0015CED0;
    case 70u: goto L_0015CED8;
    case 71u: goto L_0015CF58;
    case 72u: goto L_0015CFB0;
    case 73u: goto L_0015CFC4;
    case 74u: goto L_0015CFEC;
    case 75u: goto L_0015D000;
    case 76u: goto L_0015D030;
    case 77u: goto L_0015D048;
    case 78u: goto L_0015D060;
    case 79u: goto L_0015D088;
    case 80u: goto L_0015D098;
    case 81u: goto L_0015D0B0;
    case 82u: goto L_0015D0D0;
    case 83u: goto L_0015D120;
    case 84u: goto L_0015D128;
    case 85u: goto L_0015D138;
    case 86u: goto L_0015D164;
    case 87u: goto L_0015D180;
    case 88u: goto L_0015D1A0;
    case 89u: goto L_0015D1B0;
    case 90u: goto L_0015D1D4;
    case 91u: goto L_0015D1F0;
    case 92u: goto L_0015D224;
    case 93u: goto L_0015D238;
    case 94u: goto L_0015D258;
    case 95u: goto L_0015D26C;
    case 96u: goto L_0015D28C;
    case 97u: goto L_0015D2AC;
    case 98u: goto L_0015D2B4;
    case 99u: goto L_0015D2DC;
    case 100u: goto L_0015D2F4;
    case 101u: goto L_0015D310;
    case 102u: goto L_0015D350;
    case 103u: goto L_0015D39C;
    case 104u: goto L_0015D3B0;
    case 105u: goto L_0015D3D0;
    case 106u: goto L_0015D420;
    case 107u: goto L_0015D470;
    case 108u: goto L_0015D4C0;
    case 109u: goto L_0015D4E0;
    case 110u: goto L_0015D4FC;
    case 111u: goto L_0015D50C;
    case 112u: goto L_0015D51C;
    case 113u: goto L_0015D540;
    case 114u: goto L_0015D554;
    case 115u: goto L_0015D560;
    case 116u: goto L_0015D5B0;
    case 117u: goto L_0015D5B8;
    case 118u: goto L_0015D5D8;
    case 119u: goto L_0015D654;
    case 120u: goto L_0015D6C0;
    case 121u: goto L_0015D6C8;
    case 122u: goto L_0015D740;
    case 123u: goto L_0015D7B0;
    case 124u: goto L_0015D810;
    case 125u: goto L_0015D850;
    case 126u: goto L_0015D86C;
    case 127u: goto L_0015D890;
    case 128u: goto L_0015D8C0;
    case 129u: goto L_0015D8D4;
    case 130u: goto L_0015D904;
    case 131u: goto L_0015D918;
    case 132u: goto L_0015D934;
    case 133u: goto L_0015D948;
    case 134u: goto L_0015D964;
    case 135u: goto L_0015D978;
    case 136u: goto L_0015D98C;
    case 137u: goto L_0015D9A8;
    case 138u: goto L_0015D9D0;
    case 139u: goto L_0015DA00;
    case 140u: goto L_0015DA18;
    case 141u: goto L_0015DA30;
    case 142u: goto L_0015DA70;
    case 143u: goto L_0015DAE0;
    case 144u: goto L_0015DB40;
    case 145u: goto L_0015DB5C;
    case 146u: goto L_0015DB90;
    case 147u: goto L_0015DBB0;
    case 148u: goto L_0015DBDC;
    case 149u: goto L_0015DC10;
    case 150u: goto L_0015DC20;
    case 151u: goto L_0015DC30;
    case 152u: goto L_0015DC50;
    case 153u: goto L_0015DCB4;
    case 154u: goto L_0015DCBC;
    case 155u: goto L_0015DCD0;
    case 156u: goto L_0015DCF0;
    case 157u: goto L_0015DD14;
    case 158u: goto L_0015DD30;
    case 159u: goto L_0015DD44;
    case 160u: goto L_0015DD58;
    case 161u: goto L_0015DD80;
    case 162u: goto L_0015DDA0;
    case 163u: goto L_0015DDB8;
    case 164u: goto L_0015DE00;
    case 165u: goto L_0015DE1C;
    case 166u: goto L_0015DEF0;
    case 167u: goto L_0015DF38;
    case 168u: goto L_0015DF50;
    case 169u: goto L_0015DF64;
    case 170u: goto L_0015DF78;
    case 171u: goto L_0015DF94;
    case 172u: goto L_0015DFD0;
    case 173u: goto L_0015DFD8;
    case 174u: goto L_0015E010;
    case 175u: goto L_0015E040;
    case 176u: goto L_0015E058;
    case 177u: goto L_0015E070;
    case 178u: goto L_0015E084;
    case 179u: goto L_0015E0B0;
    case 180u: goto L_0015E0C8;
    case 181u: goto L_0015E0D4;
    case 182u: goto L_0015E530;
    case 183u: goto L_0015E810;
    case 184u: goto L_0015E824;
    case 185u: goto L_0015E870;
    case 186u: goto L_0015E888;
    case 187u: goto L_0015E894;
    case 188u: goto L_0015ED60;
    case 189u: goto L_0015ED7C;
    case 190u: goto L_0015EE00;
    case 191u: goto L_0015EEA0;
    case 192u: goto L_0015EEB8;
    case 193u: goto L_0015EEC8;
    case 194u: goto L_0015EEE0;
    case 195u: goto L_0015EF10;
    case 196u: goto L_0015F040;
    case 197u: goto L_0015F080;
    case 198u: goto L_0015F450;
    case 199u: goto L_0015F7C0;
    case 200u: goto L_0015F7D4;
    case 201u: goto L_0015F800;
    case 202u: goto L_0015F850;
    case 203u: goto L_0015F9DC;
    case 204u: goto L_0015FB28;
    case 205u: goto L_0015FC7C;
    case 206u: goto L_0015FDD0;
    case 207u: goto L_0015FE10;
    case 208u: goto L_0015FE24;
    case 209u: goto L_0015FE60;
    case 210u: goto L_0015FEE0;
    case 211u: goto L_0015FF08;
    case 212u: goto L_0015FF14;
    default: bad_entry(c, 0x0015C000u); return;
    }
L_0015C000:
    set32(c.r[29], c.r[29].w[0] - 1136u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C034u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 105u, depth + 1u); else { c.pc = 0x0015D3D0u; return; } if (c.pc != 0x0015C034u) [[unlikely]] return; }
L_0015C034:
    st32((c.r[16].w[0] + 52u), c.r[20].w[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0015C03C:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C048u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 106u, depth + 1u); else { c.pc = 0x0015D420u; return; } if (c.pc != 0x0015C048u) [[unlikely]] return; }
L_0015C048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 24u);  if (t) { goto L_0015C05C; } }
L_0015C050:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_0015C05C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C050u | kUnwind; return; } goto L_0015C050; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0015C0A0; } }
L_0015C078:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 24u);  if (t) { goto L_0015C0C0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 91ll ? 1ull : 0ull;  if (t) { goto L_0015C09C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 32u);  if (t) { goto L_0015C09C; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0015C09C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0015C0A0:
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C078u | kUnwind; return; } goto L_0015C078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_0015C0C4; } }
L_0015C0B4:
    set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_0015C0C0:
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 1;
L_0015C0C4:
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C0B4u | kUnwind; return; } goto L_0015C0B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11136u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C0E8u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x0015C0E8u) [[unlikely]] return; }
L_0015C0E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015C0F4; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0015C0F4:
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 80u), c.r[17].w[0]);
    c.budget -= 3;
L_0015C100:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 32u);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015C124; } }
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0015C124:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C100u | kUnwind; return; } goto L_0015C100; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], 0u + 44u);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 24u));
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 26u));
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 22u));
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[16].w[0] + 72u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 20u));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 36u);  if (t) { goto L_0015C1AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015C1AC; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 27u);  if (t) { goto L_0015C1AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015C1AC; } }
    set32(c.r[3], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015C1AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  if (t) { goto L_0015C1D4; } }
L_0015C1AC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C1B8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 105u, depth + 1u); else { c.pc = 0x0015D3D0u; return; } if (c.pc != 0x0015C1B8u) [[unlikely]] return; }
L_0015C1B8:
    set32(c.r[3], c.r[2].w[0] + 56u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 7;
L_0015C1D4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015C27C; } }
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0015C1F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[6].w[0]);  if (t) { goto L_0015C278; } }
L_0015C1F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], 0u + 44u);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 20u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 36u);  if (t) { goto L_0015C224; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015C224; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015C224; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[5].w[0] + 2u));  if (t) { goto L_0015C244; } }
L_0015C224:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 2u));
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], 0u + 8u);  if (t) { goto L_0015C23C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0015C274; } }
L_0015C23C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0015C274; } }
L_0015C244:
    c.r[1].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 129ll ? 1ull : 0ull;  if (t) { goto L_0015C25C; } }
    set32(c.r[6], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0015C274; } }
L_0015C25C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], 0u + 16u);  if (t) { goto L_0015C270; } }
    set32(c.r[6], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_0015C274; } }
L_0015C270:
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0015C274:
    st32((c.r[16].w[0] + 88u), c.r[6].w[0]);
    c.budget -= 1;
L_0015C278:
    st32((c.r[16].w[0] + 92u), c.r[4].w[0]);
    c.budget -= 1;
L_0015C27C:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015C2B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C290u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0015C290u) [[unlikely]] return; }
L_0015C290:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C2A4u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0015C2A4u) [[unlikely]] return; }
L_0015C2A4:
    st32((c.r[16].w[0] + 44u), c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] + 8u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 3;
L_0015C2B0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0015C45C; } }
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 3168u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[29].w[0] + 1120u);  if (t) { goto L_0015C354; } }
L_0015C2C8:
    ld128((c.r[7].w[0]) & ~15u, c.r[4]);
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    c.r[4].d[0] = ld16((c.r[8].w[0] + 20u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] << 2);  if (t) { goto L_0015C2E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_0015C354; } }
L_0015C2E4:
    set32(c.r[4], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[29].w[0]);  if (t) { goto L_0015C350; } }
    set32(c.r[9], ld32((c.r[4].w[0] + 1120u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0015C324; } }
L_0015C300:
    c.r[4].d[0] = ld8((c.r[10].w[0] + 3u));
    set32(c.r[5], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));  if (t) { goto L_0015C318; } }
    set32(c.r[4], c.r[5].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.budget -= 2;
L_0015C318:
    st8((c.r[10].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.budget -= 3;
L_0015C324:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 26u));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 24u));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = c.r[9].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[9].w[0]);  if (t) { goto L_0015C340; } }
    breakpoint(c, 0x0015C33Cu);
    c.budget -= 1;
L_0015C340:
    c.r[4].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[8].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C300u | kUnwind; return; } goto L_0015C300; } }
L_0015C350:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0015C354:
    set32(c.r[8], ld32((c.r[16].w[0] + 80u)));
    c.r[4].d[0] = ld16((c.r[8].w[0] + 22u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C2C8u | kUnwind; return; } goto L_0015C2C8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015C45C; } }
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015C388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0015C460; } }
L_0015C388:
    c.r[2].d[0] = ld16((c.r[5].w[0] + 2u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[19], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[6], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C3A0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0015C3A0u) [[unlikely]] return; }
L_0015C3A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0015C448; } }
L_0015C3A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], 0u + 44u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 20u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015C3DC; } }
    set32(c.r[2], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_0015C3D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0015C3D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[17].d[0] & 8ull;  if (t) { goto L_0015C3E4; } }
L_0015C3D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015C3DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_0015C408; } }
L_0015C3E4:
    c.r[2].d[0] = c.r[17].d[0] & 16ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[17].d[0] & 231ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 9;
L_0015C408:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[20], c.r[3].w[0] + 96u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C428u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0015C428u) [[unlikely]] return; }
L_0015C428:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 3u));
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_0015C440; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0015C440:
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0015C448:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C3A8u | kUnwind; return; } goto L_0015C3A8; } }
L_0015C45C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0015C460:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1136u);  c.pc = t; return; }
L_0015C480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C494u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 389u, depth + 1u); else { c.pc = 0x0015B2E0u; return; } if (c.pc != 0x0015C494u) [[unlikely]] return; }
L_0015C494:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - 17952u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015C4C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015C510; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 17952u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C4ECu); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 400u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0015C4ECu) [[unlikely]] return; }
L_0015C4EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C4F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 390u, depth + 1u); else { c.pc = 0x0015B320u; return; } if (c.pc != 0x0015C4F8u) [[unlikely]] return; }
L_0015C4F8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015C514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C510u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015C510u) [[unlikely]] return; }
L_0015C510:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015C514:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015C530:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0015C610; } }
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C564u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 104u, depth + 1u); else { c.pc = 0x0015D3B0u; return; } if (c.pc != 0x0015C564u) [[unlikely]] return; }
L_0015C564:
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] << 2);  if (t) { goto L_0015C610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C57Cu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0015C57Cu) [[unlikely]] return; }
L_0015C57C:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C594u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0015C594u) [[unlikely]] return; }
L_0015C594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0015C600; } }
L_0015C59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C5A4u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0015C5A4u) [[unlikely]] return; }
L_0015C5A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015C5BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C5B8u);  if (depth < kMaxDepth) unit_0016(c, 441u, depth + 1u); else { c.pc = 0x0015BA80u; return; } if (c.pc != 0x0015C5B8u) [[unlikely]] return; }
L_0015C5B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0015C5BC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0015C5CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_0015C5D0; } }
L_0015C5CC:
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 1;
L_0015C5D0:
    set32(c.r[25], ld32((c.r[16].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C5E8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015C5E8u) [[unlikely]] return; }
L_0015C5E8:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.budget -= 6;
L_0015C600:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C59Cu | kUnwind; return; } goto L_0015C59C; } }
L_0015C610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0015C630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C644u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 378u, depth + 1u); else { c.pc = 0x0015AFB0u; return; } if (c.pc != 0x0015C644u) [[unlikely]] return; }
L_0015C644:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 17984u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015C680:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015C6C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C6B0u); st32((c.r[17].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 380u, depth + 1u); else { c.pc = 0x0015B030u; return; } if (c.pc != 0x0015C6B0u) [[unlikely]] return; }
L_0015C6B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015C6CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C6C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015C6C8u) [[unlikely]] return; }
L_0015C6C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015C6CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015C6E0:
    set32(c.r[29], c.r[29].w[0] - 272u);
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
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015CB4C; } }
    set32(c.r[18], ld32((c.r[21].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0015CB4C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] >> 4);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C73Cu); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0015C73Cu) [[unlikely]] return; }
L_0015C73C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 80u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C754u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0015C754u) [[unlikely]] return; }
L_0015C754:
    set32(c.r[2], ld32((c.r[21].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0015C7B0; } }
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_0015C76C; } }
L_0015C76C:
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 92u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] >> 4);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C78Cu); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0015C78Cu) [[unlikely]] return; }
L_0015C78C:
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[21].w[0] + 84u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 92u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C7B0u); mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]); c.r[6].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0015C7B0u) [[unlikely]] return; }
L_0015C7B0:
    set32(c.r[2], ld32((c.r[21].w[0] + 80u)));
    set32(c.r[3], 0u + 44u);
    c.r[4].d[0] = ld16((c.r[18].w[0] + 2u));
    c.r[23].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[18].w[0]));
    set32(c.r[17], ld32((c.r[2].w[0] + 28u)));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 26u));
    c.r[4].d[0] = c.r[4].d[0] << 54;
    c.r[4].d[0] = c.r[4].d[0] >> 58;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[30].d[0] = c.r[5].d[0] & 16383ull;  if (t) { goto L_0015C85C; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_0015C860; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 27u);  if (t) { goto L_0015C85C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015C84C; } }
    set32(c.r[3], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0015C850; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0015C840; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015C83C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_0015C830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0015C86C; } }
L_0015C830:
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 24u));  if (t) { goto L_0015C874; } }
L_0015C83C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_0015C840:
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C870; } }
L_0015C84C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0015C850:
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C870; } }
L_0015C85C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 1;
L_0015C860:
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C870; } }
L_0015C86C:
    c.f[1] = c.r[3].w[0];
    c.budget -= 1;
L_0015C870:
    c.r[2].d[0] = ld16((c.r[2].w[0] + 24u));
    c.budget -= 1;
L_0015C874:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0015C888; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015C8A0; } }
L_0015C888:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0015C8A0:
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 11;
L_0015C8CC:
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[17].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0015C8F0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0015C8F0; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0015C8F0:
    set32(c.r[2], ld32((c.r[21].w[0] + 80u)));
    c.r[5].d[0] = c.r[30].d[0] << 48;
    c.r[6].d[0] = ld64((c.r[18].w[0]));
    c.r[11].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = ld16((c.r[18].w[0] + 2u));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    c.r[6].d[0] = c.r[6].d[0] << 44;
    c.r[3].d[0] = c.r[3].d[0] << 54;
    c.r[6].d[0] = c.r[6].d[0] >> 58;
    c.r[3].d[0] = c.r[3].d[0] >> 58;
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[7].d[0] = c.r[3].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C940u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);  if (depth < kMaxDepth) unit_0000(c, 182u, depth + 1u); else { c.pc = 0x00101A88u; return; } if (c.pc != 0x0015C940u) [[unlikely]] return; }
L_0015C940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C948u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0015C948u) [[unlikely]] return; }
L_0015C948:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C954u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 192u, depth + 1u); else { c.pc = 0x00101DB0u; return; } if (c.pc != 0x0015C954u) [[unlikely]] return; }
L_0015C954:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C960u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x0015C960u) [[unlikely]] return; }
L_0015C960:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[17].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] - 32768u);  if (t) { goto L_0015C98C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[30], c.r[30].w[0] + 256u);
    set32(c.r[22], c.r[22].w[0] - c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[23], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] - 32768u);
    c.budget -= 6;
L_0015C98C:
    set32(c.r[17], c.r[2].w[0] - 32768u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C8CCu | kUnwind; return; } goto L_0015C8CC; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0015CA04; } }
    c.r[3].d[0] = ld64((c.r[18].w[0]));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 6u));
    set32(c.r[6], 0u + 1u);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 88u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 92u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 13;
    c.r[3].d[0] = c.r[3].d[0] >> 50;
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[7].d[0] = c.r[2].d[0] >> 60;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C9E0u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_0000(c, 182u, depth + 1u); else { c.pc = 0x00101A88u; return; } if (c.pc != 0x0015C9E0u) [[unlikely]] return; }
L_0015C9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C9E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0015C9E8u) [[unlikely]] return; }
L_0015C9E8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C9F4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 192u, depth + 1u); else { c.pc = 0x00101DB0u; return; } if (c.pc != 0x0015C9F4u) [[unlikely]] return; }
L_0015C9F4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CA00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x0015CA00u) [[unlikely]] return; }
L_0015CA00:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0015CA04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 56u)));  if (t) { goto L_0015CB24; } }
L_0015CA0C:
    set32(c.r[6], ld32((c.r[21].w[0] + 80u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[16], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CA34u); set32(c.r[6], c.r[2].w[0] >> (c.r[3].w[0] & 31u));  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0015CA34u) [[unlikely]] return; }
L_0015CA34:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0015CA80; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0015CA68; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0015CA5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015CA94; } }
L_0015CA5C:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 16383ull;  if (t) { goto L_0015CA94; } }
L_0015CA68:
    c.r[2].d[0] = ld64((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 50;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_0015CA94; } }
L_0015CA80:
    c.r[2].d[0] = ld64((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 10;
    c.r[2].d[0] = c.r[2].d[0] >> 50;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
L_0015CA94:
    c.r[5].d[0] = c.r[2].d[0] << 48;
    set32(c.r[10], ld32((c.r[21].w[0] + 80u)));
    c.r[2].d[0] = ld64((c.r[18].w[0]));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[6].d[0] = ld16((c.r[18].w[0] + 2u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[10].w[0] + 24u));
    c.r[7].d[0] = c.r[2].d[0] << 44;
    c.r[2].d[0] = ld16((c.r[10].w[0] + 26u));
    c.r[7].d[0] = c.r[7].d[0] >> 58;
    c.r[6].d[0] = c.r[6].d[0] << 54;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[17].w[0] & 31u)));
    c.r[10].d[0] = c.r[7].d[0] >> (c.r[17].w[0] & 63u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[17].w[0] & 31u)));
    c.r[7].d[0] = c.r[6].d[0] >> 58;
    c.r[11].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = c.r[10].d[0] << 48;
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[10].d[0] = c.r[3].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CAFCu); c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);  if (depth < kMaxDepth) unit_0000(c, 182u, depth + 1u); else { c.pc = 0x00101A88u; return; } if (c.pc != 0x0015CAFCu) [[unlikely]] return; }
L_0015CAFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CB04u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0015CB04u) [[unlikely]] return; }
L_0015CB04:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CB10u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 192u, depth + 1u); else { c.pc = 0x00101DB0u; return; } if (c.pc != 0x0015CB10u) [[unlikely]] return; }
L_0015CB10:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CB1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x0015CB1Cu) [[unlikely]] return; }
L_0015CB1C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 2;
L_0015CB24:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015CA0Cu | kUnwind; return; } goto L_0015CA0C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0015CB44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CB40u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0015CB40u) [[unlikely]] return; }
L_0015CB40:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0015CB44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CB4Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0015CB4Cu) [[unlikely]] return; }
L_0015CB4C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0015CB80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), 0u);  c.pc = t; return; }
L_0015CB90:
    set32(c.r[29], c.r[29].w[0] - 1136u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 11128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 24u);  if (t) { goto L_0015CBD0; } }
L_0015CBC4:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_0015CBD0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015CBC4u | kUnwind; return; } goto L_0015CBC4; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 4u);
    st32((c.r[16].w[0] + 40u), c.r[18].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[16].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 11136u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CC04u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x0015CC04u) [[unlikely]] return; }
L_0015CC04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + 8u);  if (t) { goto L_0015CC10; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0015CC10:
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 2;
L_0015CC18:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] + 32u);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015CC3C; } }
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.budget -= 2;
L_0015CC3C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[4].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015CC18u | kUnwind; return; } goto L_0015CC18; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], 0u + 44u);
    c.r[5].d[0] = ld16((c.r[5].w[0] + 24u));
    st32((c.r[16].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.r[5].d[0] = ld16((c.r[5].w[0] + 26u));
    st32((c.r[16].w[0] + 68u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.r[5].d[0] = ld16((c.r[5].w[0] + 22u));
    st32((c.r[16].w[0] + 56u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[16].w[0] + 72u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.r[5].d[0] = ld16((c.r[5].w[0] + 20u));
    c.budget -= 18;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], c.r[18].w[0] + 56u);  if (t) { goto L_0015CCC8; } }
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 20u);  if (t) { goto L_0015CCC4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0015CCC4; } }
    set32(c.r[4], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 19u);  if (t) { goto L_0015CCC4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0015CCC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  if (t) { goto L_0015CCE0; } }
L_0015CCC4:
    set32(c.r[4], c.r[18].w[0] + 56u);
    c.budget -= 1;
L_0015CCC8:
    st32((c.r[16].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 6;
L_0015CCE0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015CD88; } }
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0015CD00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[6].w[0]);  if (t) { goto L_0015CD84; } }
L_0015CD00:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], 0u + 44u);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 20u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 36u);  if (t) { goto L_0015CD30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015CD30; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015CD30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[5].w[0] + 2u));  if (t) { goto L_0015CD50; } }
L_0015CD30:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 2u));
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], 0u + 8u);  if (t) { goto L_0015CD48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0015CD80; } }
L_0015CD48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0015CD80; } }
L_0015CD50:
    c.r[1].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 129ll ? 1ull : 0ull;  if (t) { goto L_0015CD68; } }
    set32(c.r[6], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0015CD80; } }
L_0015CD68:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], 0u + 16u);  if (t) { goto L_0015CD7C; } }
    set32(c.r[6], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_0015CD80; } }
L_0015CD7C:
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0015CD80:
    st32((c.r[16].w[0] + 88u), c.r[6].w[0]);
    c.budget -= 1;
L_0015CD84:
    st32((c.r[16].w[0] + 92u), c.r[4].w[0]);
    c.budget -= 1;
L_0015CD88:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015CDBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CD9Cu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0015CD9Cu) [[unlikely]] return; }
L_0015CD9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CDB0u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0015CDB0u) [[unlikely]] return; }
L_0015CDB0:
    st32((c.r[16].w[0] + 44u), c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] + 8u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 3;
L_0015CDBC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0015CF8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 80u)));  if (t) { goto L_0015CE88; } }
L_0015CDCC:
    set32(c.r[4], c.r[29].w[0] + 1120u);
    set32(c.r[3], c.r[3].w[0] - 3152u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 20u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], c.r[18].w[0] << 2);  if (t) { goto L_0015CDF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0015CE84; } }
L_0015CDF0:
    set32(c.r[3], c.r[5].w[0] + c.r[19].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0015CE80; } }
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] - 11120u);
    c.r[8].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[9].d[0] = ld8((c.r[17].w[0] + 3u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CE20u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x0015CE20u) [[unlikely]] return; }
L_0015CE20:
    set32(c.r[3], c.r[19].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 1120u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0015CE54; } }
L_0015CE30:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_0015CE48; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0015CE48:
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
L_0015CE54:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 26u));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 24u));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[6].w[0]);  if (t) { goto L_0015CE70; } }
    breakpoint(c, 0x0015CE6Cu);
    c.budget -= 1;
L_0015CE70:
    c.r[3].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015CE30u | kUnwind; return; } goto L_0015CE30; } }
L_0015CE80:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0015CE84:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_0015CE88:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 22u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015CDCCu | kUnwind; return; } goto L_0015CDCC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015CF8C; } }
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015CEB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0015CF90; } }
L_0015CEB8:
    c.r[2].d[0] = ld16((c.r[5].w[0] + 2u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[19], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[6], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CED0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0015CED0u) [[unlikely]] return; }
L_0015CED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0015CF78; } }
L_0015CED8:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], 0u + 44u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 20u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015CF0C; } }
    set32(c.r[2], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_0015CF08; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0015CF08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[17].d[0] & 8ull;  if (t) { goto L_0015CF14; } }
L_0015CF08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015CF0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_0015CF38; } }
L_0015CF14:
    c.r[2].d[0] = c.r[17].d[0] & 16ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[17].d[0] & 231ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 9;
L_0015CF38:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[20], c.r[3].w[0] + 96u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CF58u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0015CF58u) [[unlikely]] return; }
L_0015CF58:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 3u));
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_0015CF70; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0015CF70:
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0015CF78:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015CED8u | kUnwind; return; } goto L_0015CED8; } }
L_0015CF8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0015CF90:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1136u);  c.pc = t; return; }
L_0015CFB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CFC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 389u, depth + 1u); else { c.pc = 0x0015B2E0u; return; } if (c.pc != 0x0015CFC4u) [[unlikely]] return; }
L_0015CFC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] - 18016u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CFECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015CFECu) [[unlikely]] return; }
L_0015CFEC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015D000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015D048; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 18016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D030u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 390u, depth + 1u); else { c.pc = 0x0015B320u; return; } if (c.pc != 0x0015D030u) [[unlikely]] return; }
L_0015D030:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015D04C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D048u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015D048u) [[unlikely]] return; }
L_0015D048:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015D04C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015D060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015D088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D088u);  if (depth < kMaxDepth) unit_0016(c, 400u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0015D088u) [[unlikely]] return; }
L_0015D088:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D098u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0015D098u) [[unlikely]] return; }
L_0015D098:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D0B0u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0015D0B0u) [[unlikely]] return; }
L_0015D0B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015D0D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0015D120; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015D120; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D120u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015D120u) [[unlikely]] return; }
L_0015D120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D128u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0015D128u) [[unlikely]] return; }
L_0015D128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0015D138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D138u);  if (depth < kMaxDepth) unit_0017(c, 32u, depth + 1u); else { c.pc = 0x0015C630u; return; } if (c.pc != 0x0015D138u) [[unlikely]] return; }
L_0015D138:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D164u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015D164u) [[unlikely]] return; }
L_0015D164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015D180:
    set32(c.r[25], ld32((c.r[4].w[0] + 40u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x0015C000u < 16384u) { entry = entries_0017[(t - 0x0015C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0015D1A0:
    set32(c.r[25], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x0015C000u < 16384u) { entry = entries_0017[(t - 0x0015C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0015D1B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D1D4u); st32((c.r[4].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0017(c, 101u, depth + 1u); else { c.pc = 0x0015D310u; return; } if (c.pc != 0x0015D1D4u) [[unlikely]] return; }
L_0015D1D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015D1F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015D2F4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0015D258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_0015D240; } }
L_0015D224:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D238u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0015D238u) [[unlikely]] return; }
L_0015D238:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 2;
L_0015D240:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D224u | kUnwind; return; } goto L_0015D224; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D258u); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0015D258u) [[unlikely]] return; }
L_0015D258:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0015D2BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_0015D294; } }
L_0015D26C:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015D28C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D28Cu);  if (depth < kMaxDepth) unit_0004(c, 380u, depth + 1u); else { c.pc = 0x00112D68u; return; } if (c.pc != 0x0015D28Cu) [[unlikely]] return; }
L_0015D28C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 2;
L_0015D294:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D26Cu | kUnwind; return; } goto L_0015D26C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D2ACu); set32(c.r[4], ld32((c.r[3].w[0] + 12u)));  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015D2ACu) [[unlikely]] return; }
L_0015D2AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D2B4u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015D2B4u) [[unlikely]] return; }
L_0015D2B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] << 48;  if (t) { goto L_0015D2E0; } }
L_0015D2BC:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D2DC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015D2DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D2DCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0015D2DCu) [[unlikely]] return; }
L_0015D2DC:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_0015D2E0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0015D2F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D2F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015D2F4u) [[unlikely]] return; }
L_0015D2F4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0015D2F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015D310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0015D39C; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[7].w[0] + 8u);  if (t) { goto L_0015D390; } }
    set32(c.r[3], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0015D374; } }
L_0015D350:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015D370; } }
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 2;
L_0015D370:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0015D374:
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D350u | kUnwind; return; } goto L_0015D350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0015D3A0; } }
L_0015D390:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D39Cu); set32(c.r[4], c.r[4].w[0] - 11088u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x0015D39Cu) [[unlikely]] return; }
L_0015D39C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0015D3A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015D3B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D3C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_0015D3C8; } }
L_0015D3C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015D3C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D3D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015D3E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D418; } }
L_0015D3E4:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015D400; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015D408; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015D400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D418; } }
L_0015D408:
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
L_0015D418:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D420:
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015D434; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D464; } }
L_0015D434:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015D450; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015D458; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015D450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D464; } }
L_0015D458:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_0015D464:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D470:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015D484; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D4B8; } }
L_0015D484:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015D4A0; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015D4A8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015D4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D4B8; } }
L_0015D4A8:
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
L_0015D4B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D4C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D4E0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 107u, depth + 1u); else { c.pc = 0x0015D470u; return; } if (c.pc != 0x0015D4E0u) [[unlikely]] return; }
L_0015D4E0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] > 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015D4F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015D520; } }
L_0015D4F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D4FCu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0015D4FCu) [[unlikely]] return; }
L_0015D4FC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D50Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 105u, depth + 1u); else { c.pc = 0x0015D3D0u; return; } if (c.pc != 0x0015D50Cu) [[unlikely]] return; }
L_0015D50C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D51Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0015D51Cu) [[unlikely]] return; }
L_0015D51C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015D520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015D540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0015D554; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D554u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0015D554u) [[unlikely]] return; }
L_0015D554:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015D560:
    set32(c.r[9], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[8], c.r[4].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    set32(c.r[11], 0u + 256u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[4].d[0] = c.r[3].d[0] | 65020ull;
    c.r[3].d[0] = 0ull | 64506ull;
    c.r[7].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[4].d[0] = c.r[3].d[0] | 63992ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF7F70000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 63479ull;
    set32(c.r[7], c.r[5].w[0] + c.r[9].w[0]);
    c.r[9].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = 0ull | 63479ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 63480ull;
    c.budget -= 20;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];  if (t) { goto L_0015D72C; } }
L_0015D5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::pcpyld(c.r[9], c.r[0], c.r[4]);  if (t) { goto L_0015D5C4; } }
L_0015D5B8:
    st64((c.r[10].w[0]), c.r[9].d[0]);
    set32(c.r[10], c.r[10].w[0] - 8u);
    c.r[9].d[0] = c.r[9].d[0] + c.r[3].d[0];
    c.budget -= 3;
L_0015D5C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[1].d[0] = c.r[10].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D5B8u | kUnwind; return; } goto L_0015D5B8; } }
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015D5D8:
    c.r[10].d[0] = ld8((c.r[8].w[0]));
    c.r[9].d[0] = c.r[10].d[0] & 128ull;
    c.r[9].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.r[9].d[0] = c.r[9].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { goto L_0015D64C; } }
    set32(c.r[9], c.r[10].w[0] - 127u);
    set32(c.r[12], c.r[12].w[0] + c.r[9].w[0]);
    c.budget -= 4;
    { const bool t = c.r[12].d[0] == c.r[11].d[0];  if (t) { goto L_0015D6A4; } }
    c.r[9].d[0] = ld8((c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[9].d[0] = ld8((c.r[1].w[0]));
    c.budget -= 9;
    { const bool t = c.r[12].d[0] == c.r[9].d[0]; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { goto L_0015D638; } }
    c.r[9].d[0] = ld8((c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 256u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 5;
L_0015D638:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D5D8u | kUnwind; return; } goto L_0015D5D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = ld8((c.r[8].w[0] + 1u));  if (t) { goto L_0015D6A8; } }
L_0015D64C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { goto L_0015D694; } }
L_0015D654:
    c.r[9].d[0] = ld8((c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[9].d[0] = ld8((c.r[1].w[0]));
    c.budget -= 9;
    { const bool t = c.r[12].d[0] == c.r[9].d[0]; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { goto L_0015D68C; } }
    c.r[9].d[0] = ld8((c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 256u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 5;
L_0015D68C:
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 2;
L_0015D694:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D654u | kUnwind; return; } goto L_0015D654; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D5D8u | kUnwind; return; } goto L_0015D5D8; } }
L_0015D6A4:
    c.r[10].d[0] = ld8((c.r[8].w[0] + 1u));
    c.budget -= 1;
L_0015D6A8:
    c.r[12].d[0] = 0ull + 0ull;
    c.r[9].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[10], c.r[10].w[0] << 8);
    c.r[15].d[0] = c.r[9].d[0] | c.r[10].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { goto L_0015D724; } }
L_0015D6C0:
    c.r[14].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 2;
L_0015D6C8:
    c.r[10].d[0] = c.r[14].d[0] & 255ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[13], c.r[10].w[0] + c.r[1].w[0]);
    c.r[9].d[0] = ld8((c.r[13].w[0]));
    c.budget -= 6;
    { const bool t = c.r[10].d[0] != c.r[9].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);  if (t) { goto L_0015D700; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0015D720; } }
    set32(c.r[12], c.r[12].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = ld8((c.r[1].w[0] + 512u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D6C8u | kUnwind; return; } goto L_0015D6C8; } }
L_0015D700:
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    c.r[9].d[0] = ld8((c.r[1].w[0] + 256u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 512u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[14].d[0] = ld8((c.r[13].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[12], c.r[12].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D6C8u | kUnwind; return; } goto L_0015D6C8; } }
L_0015D720:
    set32(c.r[15], c.r[15].w[0] - 1u);
    c.budget -= 1;
L_0015D724:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D6C0u | kUnwind; return; } goto L_0015D6C0; } }
L_0015D72C:
    c.r[9].d[0] = c.r[5].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull; c.r[10].d[0] = c.r[6].d[0] | 248ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D5B0u | kUnwind; return; } goto L_0015D5B0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D740:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20430000u);
    c.r[2].d[0] = c.r[2].d[0] | 16720ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0015D768; } }
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - c.r[2].w[0]);  if (t) { goto L_0015D7FC; } }
L_0015D768:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[6], c.r[4].w[0] + 8u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] - 1u);  if (t) { goto L_0015D790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0015D7FC; } }
L_0015D790:
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] + c.r[4].w[0]);  if (t) { goto L_0015D7B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0015D7FC; } }
L_0015D7B0:
    set32(c.r[2], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_0015D7B4:
    set32(c.r[2], c.r[2].w[0] >> 1);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_0015D7D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D7FC; } }
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0015D7D8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015D7E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] - 1u);  if (t) { goto L_0015D7EC; } }
L_0015D7E8:
    set32(c.r[7], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0015D7EC:
    c.r[1].d[0] = c.r[4].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D7B0u | kUnwind; return; } goto L_0015D7B0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0015D7FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D810:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20430000u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 16720ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0015D840; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015D844; } }
L_0015D840:
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 1;
L_0015D844:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D86Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 124u, depth + 1u); else { c.pc = 0x0015D810u; return; } if (c.pc != 0x0015D86Cu) [[unlikely]] return; }
L_0015D86C:
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015D890:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D8C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0015D8C0u) [[unlikely]] return; }
L_0015D8C0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0015D8DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D8D4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0015D8D4u) [[unlikely]] return; }
L_0015D8D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0])));  if (t) { goto L_0015D8E4; } }
L_0015D8DC:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0015D8E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20450000u);
    c.r[2].d[0] = c.r[2].d[0] | 20546ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015D970; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D904u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0015D904u) [[unlikely]] return; }
L_0015D904:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0015D920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D918u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x0015D918u) [[unlikely]] return; }
L_0015D918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015D928; } }
L_0015D920:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0015D928:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D934u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0015D934u) [[unlikely]] return; }
L_0015D934:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0015D950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D948u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x0015D948u) [[unlikely]] return; }
L_0015D948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0015D958; } }
L_0015D950:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0015D958:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D964u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 124u, depth + 1u); else { c.pc = 0x0015D810u; return; } if (c.pc != 0x0015D964u) [[unlikely]] return; }
L_0015D964:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0015D9AC; } }
L_0015D970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D978u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0015D978u) [[unlikely]] return; }
L_0015D978:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0015D994; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D98Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x0015D98Cu) [[unlikely]] return; }
L_0015D98C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015D99C; } }
L_0015D994:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0015D99C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D9A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 124u, depth + 1u); else { c.pc = 0x0015D810u; return; } if (c.pc != 0x0015D9A8u) [[unlikely]] return; }
L_0015D9A8:
    st8((c.r[19].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0015D9AC:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015D9D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015DA18; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0015DA04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA00u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x0015DA00u) [[unlikely]] return; }
L_0015DA00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0015DA04:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015DA1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015DA18u) [[unlikely]] return; }
L_0015DA18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015DA1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015DA30:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20430000u);
    c.r[2].d[0] = c.r[2].d[0] | 16720ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015DA68; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 3);  if (t) { goto L_0015DA60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015DA68; } }
L_0015DA60:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    c.budget -= 2;
L_0015DA68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015DA70:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20430000u);
    c.r[3].d[0] = c.r[3].d[0] | 16720ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0015DAC8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015DAA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015DACC; } }
L_0015DAA0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 10u));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0015DACC; } }
L_0015DAC8:
    if (c.r[5].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 1;
L_0015DACC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015DAE0:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20430000u);
    c.r[2].d[0] = c.r[2].d[0] | 16720ull;
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0015DB28; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 3);  if (t) { goto L_0015DB10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015DB20; } }
L_0015DB10:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.budget -= 4;
L_0015DB20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015DB38; } }
L_0015DB28:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015DB38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_0015DB38; } }
L_0015DB38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015DB40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DB5Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0015DB5Cu) [[unlikely]] return; }
L_0015DB5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015DB6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015DB90; } }
L_0015DB6C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20450000u);
    c.r[3].d[0] = c.r[3].d[0] | 20546ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015DB88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 12u)));  if (t) { goto L_0015DB90; } }
L_0015DB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DB90u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x0015DB90u) [[unlikely]] return; }
L_0015DB90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015DBB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DBDCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0015DBDCu) [[unlikely]] return; }
L_0015DBDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0015DBF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015DC34; } }
L_0015DBF0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20450000u);
    c.r[2].d[0] = c.r[2].d[0] | 20546ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0015DC18; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DC10u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 115u, depth + 1u); else { c.pc = 0x0015D560u; return; } if (c.pc != 0x0015DC10u) [[unlikely]] return; }
L_0015DC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0015DC34; } }
L_0015DC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DC20u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x0015DC20u) [[unlikely]] return; }
L_0015DC20:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DC30u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0015DC30u) [[unlikely]] return; }
L_0015DC30:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015DC34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015DC50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20430000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16720ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015DC98; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015DCA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0015DCD8; } }
L_0015DC98:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015DCAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015DCD4; } }
L_0015DCA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015DCAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DCB4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x0015DCB4u) [[unlikely]] return; }
L_0015DCB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DCBCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 72u, depth + 1u); else { c.pc = 0x00141020u; return; } if (c.pc != 0x0015DCBCu) [[unlikely]] return; }
L_0015DCBC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DCD0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0015DCD0u) [[unlikely]] return; }
L_0015DCD0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0015DCD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0015DCD8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015DCF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DD14u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x0015DD14u) [[unlikely]] return; }
L_0015DD14:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[4], 0u + 12u);  if (t) { goto L_0015DD28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015DD60; } }
L_0015DD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DD30u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0015DD30u) [[unlikely]] return; }
L_0015DD30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0015DD5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DD44u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x0015DD44u) [[unlikely]] return; }
L_0015DD44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DD58u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0015DD58u) [[unlikely]] return; }
L_0015DD58:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0015DD5C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015DD60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015DD80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0015DDD8; } }
L_0015DDA0:
    set32(c.r[16], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 3136u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DDB8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128038u; return; } if (c.pc != 0x0015DDB8u) [[unlikely]] return; }
L_0015DDB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015DDD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] - 3132u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_0015DDE8; } }
L_0015DDD4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0015DDD8:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DDA0u | kUnwind; return; } goto L_0015DDA0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015DDE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015DE00:
    set32(c.r[8], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[7], 0u + 192u);
    set32(c.r[5], 0u + 128u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_0015DEDC; } }
L_0015DE1C:
    c.r[11].d[0] = ld8((c.r[4].w[0]));
    c.r[10].d[0] = c.r[11].d[0] & 192ull;
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == c.r[7].d[0];  if (t) { goto L_0015DE98; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[5].d[0];  if (t) { goto L_0015DE64; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[3].d[0];  if (t) { goto L_0015DE44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0015DEDC; } }
L_0015DE44:
    c.r[10].d[0] = c.r[11].d[0] & 63ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[10].w[0]);
    set32(c.r[10], ld32((c.r[6].w[0])));
    set32(c.r[10], c.r[10].w[0] + c.r[9].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[10].w[0]);  if (t) { goto L_0015DEDC; } }
L_0015DE64:
    c.r[10].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[29].w[0] + 12u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[29].w[0] + 13u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[10].d[0] = ld16((c.r[29].w[0] + 12u));
    c.r[10].d[0] = c.r[10].d[0] & 16383ull;
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[10].w[0]);
    set32(c.r[10], ld32((c.r[6].w[0])));
    set32(c.r[10], c.r[10].w[0] + c.r[9].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[10].w[0]);  if (t) { goto L_0015DEDC; } }
L_0015DE98:
    c.r[10].d[0] = ld8((c.r[4].w[0] + 3u));
    st8((c.r[29].w[0] + 12u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 2u));
    st8((c.r[29].w[0] + 13u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[29].w[0] + 14u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[29].w[0] + 15u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[10], ld32((c.r[29].w[0] + 12u)));
    c.r[10].d[0] = c.r[10].d[0] << 34;
    c.r[10].d[0] = c.r[10].d[0] >> 34;
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[10].w[0]);
    set32(c.r[10], ld32((c.r[6].w[0])));
    set32(c.r[10], c.r[10].w[0] + c.r[9].w[0]);
    st32((c.r[6].w[0]), c.r[10].w[0]);
    c.budget -= 17;
L_0015DEDC:
    c.r[10].d[0] = c.r[4].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DE1Cu | kUnwind; return; } goto L_0015DE1C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015DEF0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[18].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0015DF2C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0015DF2C:
    set32(c.r[21], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF38u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 161u, depth + 1u); else { c.pc = 0x0015DD80u; return; } if (c.pc != 0x0015DF38u) [[unlikely]] return; }
L_0015DF38:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF50u); set32(c.r[4], c.r[17].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0015DF50u) [[unlikely]] return; }
L_0015DF50:
    set32(c.r[6], ld32((c.r[21].w[0] + 4u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF64u); set32(c.r[5], c.r[21].w[0] + 8u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0015DF64u) [[unlikely]] return; }
L_0015DF64:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[21].w[0] + 8u);
    set32(c.r[21], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF78u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 161u, depth + 1u); else { c.pc = 0x0015DD80u; return; } if (c.pc != 0x0015DF78u) [[unlikely]] return; }
L_0015DF78:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0015DFC8; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[21].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF94u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 164u, depth + 1u); else { c.pc = 0x0015DE00u; return; } if (c.pc != 0x0015DF94u) [[unlikely]] return; }
L_0015DF94:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[21].w[0] + 8u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0015DFA8; } }
    st32((c.r[20].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_0015DFA8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0015DFB4; } }
    st32((c.r[19].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_0015DFB4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0015DFC0; } }
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0015DFC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0015DFDC; } }
L_0015DFC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DFD0u); set32(c.r[4], c.r[4].w[0] - 11056u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x0015DFD0u) [[unlikely]] return; }
L_0015DFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DFD8u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0015DFD8u) [[unlikely]] return; }
L_0015DFD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015DFDC:
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
L_0015E010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015E058; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E040u); st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x0015E040u) [[unlikely]] return; }
L_0015E040:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015E05C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E058u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015E058u) [[unlikely]] return; }
L_0015E058:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015E05C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015E070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E084u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 262u, depth + 1u); else { c.pc = 0x0014ACF0u; return; } if (c.pc != 0x0015E084u) [[unlikely]] return; }
L_0015E084:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 17408u);
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015E0B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E0C8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 289u, depth + 1u); else { c.pc = 0x0014B380u; return; } if (c.pc != 0x0015E0C8u) [[unlikely]] return; }
L_0015E0C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E0D4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0012(c, 291u, depth + 1u); else { c.pc = 0x0014B500u; return; } if (c.pc != 0x0015E0D4u) [[unlikely]] return; }
L_0015E0D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1416u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0015E13C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015E138; } }
    c.f[3] = ld32((c.r[29].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[4] = c.r[3].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 36u), c.f[3]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.budget -= 15;
L_0015E138:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0015E13C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 1380u)));
    c.r[24].d[0] = c.r[9].d[0] | 10ull;
    c.r[4].d[0] = c.r[7].d[0] | 11ull;
    c.r[8].d[0] = c.r[7].d[0] << 32;
    set32(c.r[7], 0u + 3u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[15].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x13000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x50260000u);
    set32(c.r[14], 0u + 14u);
    c.r[8].d[0] = c.r[7].d[0] | 16384ull;
    set32(c.r[13], 0u + 71u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00050000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    set32(c.r[12], 0u + 8u);
    st32((c.r[1].w[0] + 1384u), c.r[10].w[0]);
    set32(c.r[11], 0u + 66u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[10].d[0] = c.r[8].d[0] << 32;
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    c.r[8].d[0] = c.r[7].d[0] | 21841ull;
    set32(c.r[25], ld32((c.r[1].w[0] + 1380u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[7].w[0];
    c.r[9].d[0] = 0ull | 32769ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[7], c.r[25].w[0] + 192u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    set32(c.r[7], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[7], c.r[7].w[0] - 12u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    set32(c.r[6], ld32((c.r[1].w[0] + 1384u)));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[5].w[0]) & ~15u, c.r[0]);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    st32((c.r[5].w[0] + 16u), 0u);
    st32((c.r[5].w[0] + 20u), 0u);
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[24].w[0]);
    set32(c.r[5], c.r[5].w[0] + 32u);
    st64((c.r[5].w[0]), c.r[15].d[0]);
    st64((c.r[5].w[0] + 8u), c.r[14].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 248u));
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    st64((c.r[5].w[0] + 24u), c.r[13].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 240u));
    set32(c.r[5], c.r[5].w[0] + 32u);
    st64((c.r[5].w[0]), c.r[3].d[0]);
    st64((c.r[5].w[0] + 8u), c.r[12].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 232u));
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    st64((c.r[5].w[0] + 24u), c.r[11].d[0]);
    set32(c.r[5], c.r[5].w[0] + 32u);
    st64((c.r[5].w[0]), c.r[9].d[0]);
    st64((c.r[5].w[0] + 8u), c.r[8].d[0]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1568ull;
    set32(c.r[3], c.r[3].w[0] + c.r[1].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 84;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { goto L_0015E29C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[6].w[0]);  if (t) { goto L_0015E2B8; } }
L_0015E29C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 7;
L_0015E2B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015E2EC; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);  if (t) { goto L_0015E308; } }
L_0015E2EC:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.budget -= 7;
L_0015E308:
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.f[0] = c.r[4].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015E348; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 16u), c.r[6].w[0]);  if (t) { goto L_0015E364; } }
L_0015E348:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    st32((c.r[5].w[0] + 16u), c.r[6].w[0]);
    c.budget -= 7;
L_0015E364:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015E398; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);  if (t) { goto L_0015E3B4; } }
L_0015E398:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.budget -= 7;
L_0015E3B4:
    st32((c.r[5].w[0] + 20u), c.r[6].w[0]);
    c.f[0] = c.r[4].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 28u), 0u);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { goto L_0015E3F4; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[6].w[0]);  if (t) { goto L_0015E410; } }
L_0015E3F4:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 7;
L_0015E410:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015E444; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);  if (t) { goto L_0015E460; } }
L_0015E444:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.budget -= 7;
L_0015E460:
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.f[0] = c.r[4].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015E4A0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 16u), c.r[6].w[0]);  if (t) { goto L_0015E4BC; } }
L_0015E4A0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    st32((c.r[5].w[0] + 16u), c.r[6].w[0]);
    c.budget -= 7;
L_0015E4BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015E4F0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_0015E50C; } }
L_0015E4F0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 7;
L_0015E50C:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 28u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0015E530:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.f[3] = c.r[5].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 1416u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0015E570; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_0015E56C; } }
    c.f[3] = c.r[5].w[0];
    c.budget -= 1;
L_0015E56C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0015E570:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[8], ld32((c.r[1].w[0] + 1380u)));
    c.r[14].d[0] = c.r[7].d[0] | 8ull;
    c.r[24].d[0] = c.r[5].d[0] | 9ull;
    c.r[6].d[0] = c.r[5].d[0] << 32;
    set32(c.r[5], 0u + 3u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[13].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x13000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x30270000u);
    set32(c.r[12], 0u + 14u);
    c.r[5].d[0] = c.r[5].d[0] | 16384ull;
    set32(c.r[11], 0u + 71u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[10], 0u + 8u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[9], 0u + 66u);
    st32((c.r[1].w[0] + 1384u), c.r[8].w[0]);
    c.r[7].d[0] = 0ull | 32769ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[8].d[0] = c.r[5].d[0] << 32;
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 1380u)));
    c.f[0] = c.r[5].w[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    set32(c.r[6], 0u + 1361u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[16].w[0] + 160u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[5].w[0] - 10u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1384u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[25].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[3].w[0]) & ~15u, c.r[0]);
    st32((c.r[3].w[0]), c.r[24].w[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[3].w[0] + 20u), 0u);
    st32((c.r[3].w[0] + 24u), c.r[15].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[14].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    st64((c.r[3].w[0]), c.r[13].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[12].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 248u));
    st64((c.r[3].w[0] + 16u), c.r[5].d[0]);
    st64((c.r[3].w[0] + 24u), c.r[11].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 240u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    st64((c.r[3].w[0]), c.r[5].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[10].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 232u));
    st64((c.r[3].w[0] + 16u), c.r[5].d[0]);
    st64((c.r[3].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    st64((c.r[3].w[0]), c.r[7].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[6].d[0]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[5]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[5]);
    set32(c.r[5], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    st32((c.r[3].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 20144u)));
    c.f[1] = ld32((c.r[4].w[0] + 192u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1568ull;
    set32(c.r[7], c.r[5].w[0] + c.r[1].w[0]);
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 83;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { goto L_0015E6CC; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[6].w[0]);  if (t) { goto L_0015E6E8; } }
L_0015E6CC:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 7;
L_0015E6E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 196u));
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015E724; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x4F000000u);  if (t) { goto L_0015E740; } }
L_0015E724:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.budget -= 7;
L_0015E740:
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    c.f[0] = c.r[5].w[0];
    set32(c.r[5], ld32((c.r[4].w[0] + 132u)));
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 12u), 0u);
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 208u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015E780; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.r[6].w[0]);  if (t) { goto L_0015E79C; } }
L_0015E780:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 16u), c.r[6].w[0]);
    c.budget -= 7;
L_0015E79C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 212u));
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015E7D8; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 20u), c.r[6].w[0]);  if (t) { goto L_0015E7F4; } }
L_0015E7D8:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 20u), c.r[6].w[0]);
    c.budget -= 7;
L_0015E7F4:
    set32(c.r[4], ld32((c.r[4].w[0] + 132u)));
    st32((c.r[3].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 28u), 0u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015E810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E824u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 262u, depth + 1u); else { c.pc = 0x0014ACF0u; return; } if (c.pc != 0x0015E824u) [[unlikely]] return; }
L_0015E824:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 17472u);
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 256u) & ~15u, c.r[3]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 272u) & ~15u, c.r[3]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 288u) & ~15u, c.r[3]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 304u) & ~15u, c.r[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015E870:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E888u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 289u, depth + 1u); else { c.pc = 0x0014B380u; return; } if (c.pc != 0x0015E888u) [[unlikely]] return; }
L_0015E888:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E894u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0012(c, 291u, depth + 1u); else { c.pc = 0x0014B500u; return; } if (c.pc != 0x0015E894u) [[unlikely]] return; }
L_0015E894:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1416u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0015E8FC; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015E8F8; } }
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.f[4] = c.r[3].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 52u), c.f[3]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.budget -= 15;
L_0015E8F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0015E8FC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 1380u)));
    c.r[4].d[0] = c.r[7].d[0] | 14ull;
    c.r[8].d[0] = c.r[7].d[0] << 32;
    c.r[24].d[0] = c.r[9].d[0] | 13ull;
    set32(c.r[7], 0u + 3u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[15].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x13000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x80260000u);
    c.r[8].d[0] = 0ull | 32769ull;
    c.r[9].d[0] = c.r[7].d[0] | 16384ull;
    set32(c.r[14], 0u + 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[13], 0u + 71u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    set32(c.r[12], 0u + 8u);
    st32((c.r[1].w[0] + 1384u), c.r[10].w[0]);
    set32(c.r[11], 0u + 66u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[10].d[0] = c.r[9].d[0] << 32;
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    c.r[8].d[0] = c.r[8].d[0] | c.r[10].d[0];
    set32(c.r[25], ld32((c.r[1].w[0] + 1380u)));
    mmi::pcpyld(c.r[10], c.r[0], c.r[8]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x51510000u);
    c.r[9].d[0] = c.r[7].d[0] | 20817ull;
    c.f[0] = c.r[8].w[0];
    set32(c.r[7], c.r[29].w[0] + 44u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[25], c.r[25].w[0] + 240u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[25].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    set32(c.r[8], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[8], c.r[8].w[0] - 15u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    set32(c.r[6], ld32((c.r[1].w[0] + 1384u)));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[5].w[0]) & ~15u, c.r[0]);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    st32((c.r[5].w[0] + 16u), 0u);
    st32((c.r[5].w[0] + 20u), 0u);
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[24].w[0]);
    set32(c.r[5], c.r[5].w[0] + 32u);
    st64((c.r[5].w[0]), c.r[15].d[0]);
    st64((c.r[5].w[0] + 8u), c.r[14].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 248u));
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    st64((c.r[5].w[0] + 24u), c.r[13].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 240u));
    set32(c.r[5], c.r[5].w[0] + 32u);
    st64((c.r[5].w[0]), c.r[3].d[0]);
    st64((c.r[5].w[0] + 8u), c.r[12].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 232u));
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    st64((c.r[5].w[0] + 24u), c.r[11].d[0]);
    set32(c.r[5], c.r[5].w[0] + 32u);
    st64((c.r[5].w[0]), c.r[10].d[0]);
    st64((c.r[5].w[0] + 8u), c.r[9].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    ld128((c.r[16].w[0] + 256u) & ~15u, c.r[6]);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[6]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1568ull;
    set32(c.r[3], c.r[3].w[0] + c.r[1].w[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 7));
    st32((c.r[7].w[0]), c.r[6].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[6]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[6]);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 90;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { goto L_0015EA74; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[8].w[0]);  if (t) { goto L_0015EA90; } }
L_0015EA74:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.r[8].d[0] = c.r[8].d[0] | c.r[6].d[0];
    st32((c.r[5].w[0]), c.r[8].w[0]);
    c.budget -= 7;
L_0015EA90:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015EAC4; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);  if (t) { goto L_0015EAE0; } }
L_0015EAC4:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.r[8].d[0] = c.r[8].d[0] | c.r[6].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.budget -= 7;
L_0015EAE0:
    st32((c.r[5].w[0] + 4u), c.r[8].w[0]);
    c.f[0] = c.r[6].w[0];
    set32(c.r[6], ld32((c.r[16].w[0] + 132u)));
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    ld128((c.r[16].w[0] + 272u) & ~15u, c.r[6]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[6]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 7));
    st32((c.r[7].w[0]), c.r[6].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[6]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[6]);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { goto L_0015EB40; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[8].w[0]);  if (t) { goto L_0015EB5C; } }
L_0015EB40:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.r[8].d[0] = c.r[8].d[0] | c.r[6].d[0];
    st32((c.r[5].w[0]), c.r[8].w[0]);
    c.budget -= 7;
L_0015EB5C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015EB90; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);  if (t) { goto L_0015EBAC; } }
L_0015EB90:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.r[8].d[0] = c.r[8].d[0] | c.r[6].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.budget -= 7;
L_0015EBAC:
    st32((c.r[5].w[0] + 4u), c.r[8].w[0]);
    c.f[0] = c.r[6].w[0];
    set32(c.r[6], ld32((c.r[16].w[0] + 132u)));
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    ld128((c.r[16].w[0] + 288u) & ~15u, c.r[6]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[6]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 7));
    st32((c.r[7].w[0]), c.r[6].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[6]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[6]);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { goto L_0015EC0C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[8].w[0]);  if (t) { goto L_0015EC28; } }
L_0015EC0C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.r[8].d[0] = c.r[8].d[0] | c.r[6].d[0];
    st32((c.r[5].w[0]), c.r[8].w[0]);
    c.budget -= 7;
L_0015EC28:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015EC5C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);  if (t) { goto L_0015EC78; } }
L_0015EC5C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.r[8].d[0] = c.r[8].d[0] | c.r[6].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.budget -= 7;
L_0015EC78:
    st32((c.r[5].w[0] + 4u), c.r[8].w[0]);
    c.f[0] = c.r[6].w[0];
    set32(c.r[6], ld32((c.r[16].w[0] + 132u)));
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    ld128((c.r[16].w[0] + 304u) & ~15u, c.r[6]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[6]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 7));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[4]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[4]);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { goto L_0015ECD8; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[6].w[0]);  if (t) { goto L_0015ECF4; } }
L_0015ECD8:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 7;
L_0015ECF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015ED28; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), c.r[4].w[0]);  if (t) { goto L_0015ED44; } }
L_0015ED28:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
L_0015ED44:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0015ED60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ED7Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 262u, depth + 1u); else { c.pc = 0x0014ACF0u; return; } if (c.pc != 0x0015ED7Cu) [[unlikely]] return; }
L_0015ED7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[29].w[0] + 56u);
    set32(c.r[2], c.r[2].w[0] - 17536u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[16].w[0] + 256u), c.r[17].d[0]);
    c.r[3].d[0] = ld64((c.r[3].w[0]));
    st64((c.r[5].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 51u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 160u), c.f[0]);
    c.r[3].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] << 30;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015EE00:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 256u));
    c.f[1] = c.r[5].w[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[9], c.r[29].w[0] + 8u);
    set32(c.r[5], 0u + 1u);
    c.f[0] = c.r[6].w[0];
    c.f[4] = fp::cvt_s_w(c.f[1]);
    st64((c.r[9].w[0]), c.r[3].d[0]);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 11u));
    c.r[3].d[0] = ld64((c.r[29].w[0] + 8u));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] << 58;
    c.r[6].d[0] = c.r[6].d[0] >> 60;
    c.r[3].d[0] = c.r[3].d[0] << 30;
    set32(c.r[6], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    c.f[2] = c.r[6].w[0];
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 2u, c.f[4], c.f[3]);
    st32((c.r[4].w[0] + 144u), c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 148u), c.f[0]);
    c.f[1] = c.r[7].w[0];
    c.f[0] = c.r[8].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015EEA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EEB8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 289u, depth + 1u); else { c.pc = 0x0014B380u; return; } if (c.pc != 0x0015EEB8u) [[unlikely]] return; }
L_0015EEB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EEC8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 194u, depth + 1u); else { c.pc = 0x0015EEE0u; return; } if (c.pc != 0x0015EEC8u) [[unlikely]] return; }
L_0015EEC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0015EEE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EF10u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 291u, depth + 1u); else { c.pc = 0x0014B500u; return; } if (c.pc != 0x0015EF10u) [[unlikely]] return; }
L_0015EF10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[24], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[24].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1416u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0015EF78; } }
    set32(c.r[3], ld32((c.r[24].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015EF74; } }
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 15;
L_0015EF74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0015EF78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[24].w[0] + c.r[1].w[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x902E0000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 1380u)));
    c.r[21].d[0] = c.r[19].d[0] | 16384ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x25250000u);
    c.r[11].d[0] = c.r[5].d[0] | 16ull;
    c.r[20].d[0] = 0ull | 32769ull;
    c.r[21].d[0] = c.r[21].d[0] << 32;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[20].d[0] = c.r[20].d[0] | c.r[21].d[0];
    c.r[13].d[0] = c.r[3].d[0] | 17ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[12].sd[0] = static_cast<std::int32_t>(0x13000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 5u);
    set32(c.r[1], c.r[24].w[0] + c.r[1].w[0]);
    c.r[10].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[1].w[0] + 1384u), c.r[6].w[0]);
    c.r[25].d[0] = c.r[3].d[0] << 32;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[19].d[0] = c.r[19].d[0] | 9505ull;
    set32(c.r[1], c.r[24].w[0] + c.r[1].w[0]);
    c.r[19].d[0] = c.r[19].d[0] | c.r[25].d[0];
    set32(c.r[15], ld32((c.r[1].w[0] + 1380u)));
    set32(c.r[9], 0u + 14u);
    set32(c.r[8], 0u + 6u);
    set32(c.r[7], 0u + 96u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[4], 0u + 71u);
    set32(c.r[3], 0u + 66u);
    mmi::pcpyld(c.r[20], c.r[0], c.r[20]);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[15], c.r[15].w[0] + 288u);
    set32(c.r[1], c.r[24].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[15].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[1], c.r[24].w[0] + c.r[1].w[0]);
    set32(c.r[21], ld32((c.r[1].w[0] + 1364u)));
    c.f[0] = c.r[15].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[15], c.r[21].w[0] - 18u);
    set32(c.r[1], c.r[24].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[15].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[24].w[0] + c.r[1].w[0]);
    c.budget -= 50;
L_0015F040:
    set32(c.r[15], ld32((c.r[1].w[0] + 1384u)));
    c.r[14].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[14].w[0]) & ~15u, c.r[0]);
    st32((c.r[14].w[0]), c.r[13].w[0]);
    st32((c.r[14].w[0] + 16u), 0u);
    st32((c.r[14].w[0] + 20u), 0u);
    st32((c.r[14].w[0] + 24u), c.r[12].w[0]);
    st32((c.r[14].w[0] + 28u), c.r[11].w[0]);
    set32(c.r[14], c.r[14].w[0] + 32u);
    st64((c.r[14].w[0]), c.r[10].d[0]);
    st64((c.r[14].w[0] + 8u), c.r[9].d[0]);
    c.r[9].d[0] = ld64((c.r[18].w[0] + 256u));
    st64((c.r[14].w[0] + 16u), c.r[9].d[0]);
    st64((c.r[14].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[14], c.r[14].w[0] + 32u);
    c.budget -= 16;
L_0015F080:
    st64((c.r[14].w[0]), c.r[7].d[0]);
    st64((c.r[14].w[0] + 8u), c.r[6].d[0]);
    c.r[6].d[0] = ld64((c.r[18].w[0] + 240u));
    st64((c.r[14].w[0] + 16u), c.r[6].d[0]);
    st64((c.r[14].w[0] + 24u), c.r[5].d[0]);
    c.r[5].d[0] = ld64((c.r[18].w[0] + 248u));
    set32(c.r[14], c.r[14].w[0] + 32u);
    st64((c.r[14].w[0]), c.r[5].d[0]);
    st64((c.r[14].w[0] + 8u), c.r[4].d[0]);
    c.r[4].d[0] = ld64((c.r[18].w[0] + 232u));
    st64((c.r[14].w[0] + 16u), c.r[4].d[0]);
    st64((c.r[14].w[0] + 24u), c.r[3].d[0]);
    set32(c.r[14], c.r[14].w[0] + 32u);
    st64((c.r[14].w[0]), c.r[20].d[0]);
    st64((c.r[14].w[0] + 8u), c.r[19].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[14].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[14].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[14].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[14].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    set32(c.r[14], c.r[14].w[0] + 32u);
    st32((c.r[14].w[0]), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.f[1] = ld32((c.r[18].w[0] + 148u));
    c.r[1].d[0] = c.r[1].d[0] | 1568ull;
    set32(c.r[3], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[14].w[0] + 4u), c.f[1]);
    st32((c.r[14].w[0] + 8u), c.r[25].w[0]);
    st32((c.r[14].w[0] + 12u), 0u);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 45;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015F144; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[14].w[0] + 16u), c.r[5].w[0]);  if (t) { goto L_0015F160; } }
L_0015F144:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[14].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 7;
L_0015F160:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015F194; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[14].w[0] + 20u), c.r[5].w[0]);  if (t) { goto L_0015F1B0; } }
L_0015F194:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[14].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 7;
L_0015F1B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 132u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    st32((c.r[14].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[14].w[0] + 28u), 0u);
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    set32(c.r[14], c.r[14].w[0] + 32u);
    st32((c.r[14].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 156u));
    st32((c.r[14].w[0] + 4u), c.f[1]);
    st32((c.r[14].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[14].w[0] + 12u), 0u);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015F210; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[14].w[0] + 16u), c.r[5].w[0]);  if (t) { goto L_0015F22C; } }
L_0015F210:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[14].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 7;
L_0015F22C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015F260; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[14].w[0] + 20u), c.r[5].w[0]);  if (t) { goto L_0015F27C; } }
L_0015F260:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[14].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 7;
L_0015F27C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 132u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    st32((c.r[14].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[14].w[0] + 28u), 0u);
    c.f[1] = ld32((c.r[18].w[0] + 152u));
    set32(c.r[14], c.r[14].w[0] + 32u);
    st32((c.r[14].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 148u));
    st32((c.r[14].w[0] + 4u), c.f[1]);
    st32((c.r[14].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[14].w[0] + 12u), 0u);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015F2DC; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[14].w[0] + 16u), c.r[5].w[0]);  if (t) { goto L_0015F2F8; } }
L_0015F2DC:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[14].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 7;
L_0015F2F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015F32C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[14].w[0] + 20u), c.r[5].w[0]);  if (t) { goto L_0015F348; } }
L_0015F32C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[14].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 7;
L_0015F348:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 132u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    st32((c.r[14].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[14].w[0] + 28u), 0u);
    c.f[1] = ld32((c.r[18].w[0] + 152u));
    set32(c.r[14], c.r[14].w[0] + 32u);
    st32((c.r[14].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 156u));
    st32((c.r[14].w[0] + 4u), c.f[1]);
    st32((c.r[14].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[14].w[0] + 12u), 0u);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015F3A8; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[14].w[0] + 16u), c.r[5].w[0]);  if (t) { goto L_0015F3C4; } }
L_0015F3A8:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[14].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 7;
L_0015F3C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015F3F8; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[14].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_0015F414; } }
L_0015F3F8:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[14].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 7;
L_0015F414:
    set32(c.r[3], ld32((c.r[18].w[0] + 132u)));
    st32((c.r[14].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[14].w[0] + 28u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0015F450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[3] = c.r[3].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[24], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[24].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1416u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0015F498; } }
    set32(c.r[3], ld32((c.r[24].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_0015F494; } }
    c.f[3] = c.r[3].w[0];
    c.budget -= 1;
L_0015F494:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0015F498:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[24].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[7], ld32((c.r[1].w[0] + 1380u)));
    c.r[12].d[0] = c.r[6].d[0] | 12ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x502F0000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[16].d[0] = c.r[16].d[0] | 16384ull;
    c.r[14].d[0] = c.r[3].d[0] | 13ull;
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[18].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], 0u + 5u);
    c.r[17].d[0] = 0ull | 32769ull;
    c.r[11].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[13].sd[0] = static_cast<std::int32_t>(0x13000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[10], 0u + 14u);
    set32(c.r[1], c.r[24].w[0] + c.r[1].w[0]);
    set32(c.r[9], 0u + 6u);
    st32((c.r[1].w[0] + 1384u), c.r[7].w[0]);
    set32(c.r[8], 0u + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[7], 0u + 20u);
    set32(c.r[1], c.r[24].w[0] + c.r[1].w[0]);
    set32(c.r[6], 0u + 8u);
    set32(c.r[25], ld32((c.r[1].w[0] + 1380u)));
    set32(c.r[5], 0u + 71u);
    set32(c.r[3], 0u + 66u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[18].d[0] = c.r[17].d[0] | c.r[18].d[0];
    c.r[17].d[0] = c.r[16].d[0] | 9505ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[25], c.r[25].w[0] + 224u);
    set32(c.r[1], c.r[24].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[25].w[0]);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.f[0] = c.r[25].w[0];
    set32(c.r[1], c.r[24].w[0] + c.r[1].w[0]);
    set32(c.r[25], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[25], c.r[25].w[0] - 14u);
    set32(c.r[1], c.r[24].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[25].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[24].w[0] + c.r[1].w[0]);
    set32(c.r[24], ld32((c.r[1].w[0] + 1384u)));
    c.r[15].d[0] = c.r[24].d[0] | c.r[15].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[15].w[0]) & ~15u, c.r[0]);
    st32((c.r[15].w[0]), c.r[14].w[0]);
    st32((c.r[15].w[0] + 16u), 0u);
    st32((c.r[15].w[0] + 20u), 0u);
    st32((c.r[15].w[0] + 24u), c.r[13].w[0]);
    st32((c.r[15].w[0] + 28u), c.r[12].w[0]);
    set32(c.r[15], c.r[15].w[0] + 32u);
    st64((c.r[15].w[0]), c.r[11].d[0]);
    st64((c.r[15].w[0] + 8u), c.r[10].d[0]);
    c.r[10].d[0] = ld64((c.r[4].w[0] + 256u));
    st64((c.r[15].w[0] + 16u), c.r[10].d[0]);
    st64((c.r[15].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[15], c.r[15].w[0] + 32u);
    st64((c.r[15].w[0]), c.r[8].d[0]);
    st64((c.r[15].w[0] + 8u), c.r[7].d[0]);
    c.r[7].d[0] = ld64((c.r[4].w[0] + 240u));
    st64((c.r[15].w[0] + 16u), c.r[7].d[0]);
    st64((c.r[15].w[0] + 24u), c.r[6].d[0]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 248u));
    set32(c.r[15], c.r[15].w[0] + 32u);
    st64((c.r[15].w[0]), c.r[6].d[0]);
    st64((c.r[15].w[0] + 8u), c.r[5].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 232u));
    st64((c.r[15].w[0] + 16u), c.r[5].d[0]);
    st64((c.r[15].w[0] + 24u), c.r[3].d[0]);
    set32(c.r[15], c.r[15].w[0] + 32u);
    st64((c.r[15].w[0]), c.r[18].d[0]);
    st64((c.r[15].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[15].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[15].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[15].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[15].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    set32(c.r[15], c.r[15].w[0] + 32u);
    st32((c.r[15].w[0]), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.f[1] = ld32((c.r[4].w[0] + 148u));
    c.r[1].d[0] = c.r[1].d[0] | 1568ull;
    set32(c.r[7], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[15].w[0] + 4u), c.f[1]);
    st32((c.r[15].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[15].w[0] + 12u), 0u);
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 192u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 108;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015F658; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[15].w[0] + 16u), c.r[5].w[0]);  if (t) { goto L_0015F674; } }
L_0015F658:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[15].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 7;
L_0015F674:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 196u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015F6B0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[15].w[0] + 20u), c.r[5].w[0]);  if (t) { goto L_0015F6CC; } }
L_0015F6B0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[15].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 7;
L_0015F6CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 132u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[15].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[15].w[0] + 28u), 0u);
    c.f[1] = ld32((c.r[4].w[0] + 152u));
    set32(c.r[15], c.r[15].w[0] + 32u);
    st32((c.r[15].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 156u));
    st32((c.r[15].w[0] + 4u), c.f[1]);
    st32((c.r[15].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[15].w[0] + 12u), 0u);
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 208u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015F72C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[15].w[0] + 16u), c.r[5].w[0]);  if (t) { goto L_0015F748; } }
L_0015F72C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[15].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 7;
L_0015F748:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 212u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015F784; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[15].w[0] + 20u), c.r[5].w[0]);  if (t) { goto L_0015F7A0; } }
L_0015F784:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[15].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 7;
L_0015F7A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    st32((c.r[15].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[15].w[0] + 28u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015F7C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F7D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0015F7D4u) [[unlikely]] return; }
L_0015F7D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 17600u);
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015F800:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[25], ld32((c.r[21].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F850u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015F850u) [[unlikely]] return; }
L_0015F850:
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[3], c.r[29].w[0] + 192u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.f[22] = ld32((c.r[29].w[0] + 196u));  if (t) { goto L_0015F878; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015F894; } }
L_0015F878:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0015F894:
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[20], c.r[29].w[0] + 212u);
    c.f[20] = c.f[22] ^ fp::kSign;
    set32(c.r[19], c.r[29].w[0] + 216u);
    set32(c.r[18], c.r[29].w[0] + 220u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 208u), c.f[21]);
    st32((c.r[20].w[0]), c.f[20]);
    st32((c.r[19].w[0]), c.f[1]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0015F8D8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015F8F0; } }
L_0015F8D8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0015F8F0:
    set32(c.r[17], c.r[29].w[0] + 224u);
    set32(c.r[16], c.r[29].w[0] + 228u);
    st32((c.r[17].w[0]), c.f[21]);
    set32(c.r[22], c.r[29].w[0] + 232u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[23], c.r[29].w[0] + 236u);
    st32((c.r[22].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0015F92C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015F944; } }
L_0015F92C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0015F944:
    set32(c.r[30], c.r[29].w[0] + 240u);
    set32(c.r[2], c.r[29].w[0] + 244u);
    st32((c.r[30].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0]), c.f[20]);
    set32(c.r[2], c.r[29].w[0] + 248u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 252u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0015F980; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015F998; } }
L_0015F980:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0015F998:
    set32(c.r[2], c.r[29].w[0] + 256u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0]), 0u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 260u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[6], c.r[21].w[0] + 48u);
    set32(c.r[2], c.r[29].w[0] + 264u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 268u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[21].w[0] + 144u), 0u);
    st32((c.r[21].w[0] + 148u), 0u);
    st32((c.r[21].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F9DCu); st32((c.r[21].w[0] + 156u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0017(c, 194u, depth + 1u); else { c.pc = 0x0015EEE0u; return; } if (c.pc != 0x0015F9DCu) [[unlikely]] return; }
L_0015F9DC:
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0015F9F4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015FA0C; } }
L_0015F9F4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0015FA0C:
    st32((c.r[29].w[0] + 208u), c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0]), 0u);
    st32((c.r[19].w[0]), c.f[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0015FA38; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015FA50; } }
L_0015FA38:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0015FA50:
    st32((c.r[17].w[0]), c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.f[22]);
    st32((c.r[22].w[0]), c.f[0]);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0015FA7C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015FA94; } }
L_0015FA7C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0015FA94:
    st32((c.r[30].w[0]), 0u);
    set32(c.r[2], c.r[29].w[0] + 244u);
    st32((c.r[2].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[29].w[0] + 248u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 252u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0015FACC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015FAE4; } }
L_0015FACC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0015FAE4:
    set32(c.r[2], c.r[29].w[0] + 256u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0]), 0u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 260u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    st32((c.r[2].w[0]), c.f[22]);
    set32(c.r[6], c.r[21].w[0] + 48u);
    set32(c.r[2], c.r[29].w[0] + 264u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 268u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[21].w[0] + 144u), 0u);
    st32((c.r[21].w[0] + 148u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FB28u); st32((c.r[21].w[0] + 156u), 0u);  if (depth < kMaxDepth) unit_0017(c, 194u, depth + 1u); else { c.pc = 0x0015EEE0u; return; } if (c.pc != 0x0015FB28u) [[unlikely]] return; }
L_0015FB28:
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0015FB40; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015FB58; } }
L_0015FB40:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0015FB58:
    st32((c.r[29].w[0] + 208u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0]), c.f[20]);
    st32((c.r[19].w[0]), c.f[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0015FB84; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015FB9C; } }
L_0015FB84:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0015FB9C:
    st32((c.r[17].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[22].w[0]), c.f[0]);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0015FBC8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015FBE0; } }
L_0015FBC8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0015FBE0:
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[30].w[0]), c.f[0]);
    st32((c.r[2].w[0]), c.f[20]);
    set32(c.r[2], c.r[29].w[0] + 248u);
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 252u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0015FC1C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015FC34; } }
L_0015FC1C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0015FC34:
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[2], c.r[29].w[0] + 256u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[21].w[0] + 48u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 260u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[29].w[0] + 264u);
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 268u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[21].w[0] + 144u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 148u), 0u);
    st32((c.r[21].w[0] + 152u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FC7Cu); st32((c.r[21].w[0] + 156u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0017(c, 194u, depth + 1u); else { c.pc = 0x0015EEE0u; return; } if (c.pc != 0x0015FC7Cu) [[unlikely]] return; }
L_0015FC7C:
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0015FC94; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015FCAC; } }
L_0015FC94:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0015FCAC:
    st32((c.r[29].w[0] + 208u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0]), 0u);
    st32((c.r[19].w[0]), c.f[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0015FCD8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015FCF0; } }
L_0015FCD8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0015FCF0:
    st32((c.r[17].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.f[22]);
    st32((c.r[22].w[0]), c.f[0]);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0015FD1C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015FD34; } }
L_0015FD1C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0015FD34:
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[30].w[0]), c.f[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[29].w[0] + 248u);
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 252u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0015FD70; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015FD88; } }
L_0015FD70:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0015FD88:
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[2], c.r[29].w[0] + 256u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[21].w[0] + 48u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 260u);
    st32((c.r[2].w[0]), c.f[22]);
    set32(c.r[2], c.r[29].w[0] + 264u);
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 268u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[21].w[0] + 144u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 148u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 152u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FDD0u); st32((c.r[21].w[0] + 156u), 0u);  if (depth < kMaxDepth) unit_0017(c, 194u, depth + 1u); else { c.pc = 0x0015EEE0u; return; } if (c.pc != 0x0015FDD0u) [[unlikely]] return; }
L_0015FDD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
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
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0015FE10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FE24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0015FE24u) [[unlikely]] return; }
L_0015FE24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] - 17664u);
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 272u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 164u));
    st32((c.r[16].w[0] + 276u), c.f[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st32((c.r[16].w[0] + 284u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 288u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015FE60:
    set32(c.r[3], c.r[5].w[0] << 3);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 280u), c.f[1]);
    st32((c.r[4].w[0] + 284u), c.f[12]);
    c.f[4] = ld32((c.r[4].w[0] + 280u));
    c.f[3] = ld32((c.r[4].w[0] + 284u));
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[4].w[0] + 272u), c.f[1]);
    c.f[4] = ld32((c.r[4].w[0] + 164u));
    c.f[3] = ld32((c.r[4].w[0] + 280u));
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[4].w[0] + 276u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 164u));
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 288u), c.f[0]);  c.pc = t; return; }
L_0015FEE0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FF08u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 289u, depth + 1u); else { c.pc = 0x0014B380u; return; } if (c.pc != 0x0015FF08u) [[unlikely]] return; }
L_0015FF08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FF14u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0012(c, 291u, depth + 1u); else { c.pc = 0x0014B500u; return; } if (c.pc != 0x0015FF14u) [[unlikely]] return; }
L_0015FF14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[17], ld32((c.r[1].w[0] + 20144u)));
    c.f[0] = ld32((c.r[16].w[0] + 272u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1416u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.f[1] = ld32((c.r[16].w[0] + 276u));  if (t) { goto L_0015FF7C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0015FF80; } }
    c.f[5] = ld32((c.r[29].w[0] + 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = ld32((c.r[29].w[0] + 116u));
    c.f[3] = ld32((c.r[29].w[0] + 132u));
    c.f[2] = ld32((c.r[29].w[0] + 148u));
    c.f[6] = c.r[3].w[0];
    c.f[5] = fp::mul(c.f[5], c.f[6]);
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    c.f[3] = fp::mul(c.f[3], c.f[6]);
    c.f[2] = fp::mul(c.f[2], c.f[6]);
    st32((c.r[29].w[0] + 100u), c.f[5]);
    st32((c.r[29].w[0] + 116u), c.f[4]);
    st32((c.r[29].w[0] + 132u), c.f[3]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    c.budget -= 15;
L_0015FF7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0015FF80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.r[15].d[0] = c.r[3].d[0] | 23ull;
    set32(c.r[5], ld32((c.r[1].w[0] + 1380u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0xD02E0000u);
    c.r[18].d[0] = c.r[18].d[0] | 16384ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[20].d[0] = c.r[18].d[0] << 32;
    c.r[19].d[0] = 0ull | 32769ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[13].d[0] = c.r[4].d[0] | 22ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[12], 0u + 5u);
    c.r[11].d[0] = c.r[12].d[0] | c.r[3].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[20].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[18].d[0] = c.r[18].d[0] | 9509ull;
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.r[20].d[0] = c.r[18].d[0] << 32;
    st32((c.r[1].w[0] + 1384u), c.r[5].w[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x25250000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[18].d[0] = c.r[18].d[0] | 9505ull;
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.r[20].d[0] = c.r[18].d[0] | c.r[20].d[0];
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[18].w[0];
    c.r[24].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x13000000u);
    set32(c.r[10], 0u + 14u);
    set32(c.r[9], 0u + 6u);
    c.budget -= 32;
    [[clang::musttail]] return unit_0018(c, 1u, depth);
}

}
