#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0033[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0,
    0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161,
    0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0,
    0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0,
    0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0,
    0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206,
    0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0,
    0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0,
    0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0,
    239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0,
    0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272,
    0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0,
};

void unit_0033(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
#if defined(PS2_HIT_TRACE)
    if (entry == 64u) hit_trace(c, 0x001CCE90u);
    else if (entry == 209u) hit_trace(c, 0x001CEE90u);
#endif
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001CC000;
    case 2u: goto L_001CC028;
    case 3u: goto L_001CC040;
    case 4u: goto L_001CC060;
    case 5u: goto L_001CC0B0;
    case 6u: goto L_001CC15C;
    case 7u: goto L_001CC16C;
    case 8u: goto L_001CC180;
    case 9u: goto L_001CC24C;
    case 10u: goto L_001CC25C;
    case 11u: goto L_001CC270;
    case 12u: goto L_001CC288;
    case 13u: goto L_001CC2B0;
    case 14u: goto L_001CC2D0;
    case 15u: goto L_001CC360;
    case 16u: goto L_001CC430;
    case 17u: goto L_001CC490;
    case 18u: goto L_001CC4B0;
    case 19u: goto L_001CC4C4;
    case 20u: goto L_001CC4E0;
    case 21u: goto L_001CC510;
    case 22u: goto L_001CC538;
    case 23u: goto L_001CC540;
    case 24u: goto L_001CC61C;
    case 25u: goto L_001CC670;
    case 26u: goto L_001CC6D0;
    case 27u: goto L_001CC6F4;
    case 28u: goto L_001CC714;
    case 29u: goto L_001CC750;
    case 30u: goto L_001CC778;
    case 31u: goto L_001CC798;
    case 32u: goto L_001CC7A8;
    case 33u: goto L_001CC7B8;
    case 34u: goto L_001CC7C8;
    case 35u: goto L_001CC7D0;
    case 36u: goto L_001CC810;
    case 37u: goto L_001CC854;
    case 38u: goto L_001CC880;
    case 39u: goto L_001CC8C0;
    case 40u: goto L_001CC8EC;
    case 41u: goto L_001CC924;
    case 42u: goto L_001CC988;
    case 43u: goto L_001CCA6C;
    case 44u: goto L_001CCB30;
    case 45u: goto L_001CCB6C;
    case 46u: goto L_001CCB88;
    case 47u: goto L_001CCBF0;
    case 48u: goto L_001CCC04;
    case 49u: goto L_001CCC60;
    case 50u: goto L_001CCCA8;
    case 51u: goto L_001CCCC0;
    case 52u: goto L_001CCCD4;
    case 53u: goto L_001CCCE0;
    case 54u: goto L_001CCCF4;
    case 55u: goto L_001CCD40;
    case 56u: goto L_001CCD8C;
    case 57u: goto L_001CCD98;
    case 58u: goto L_001CCDA4;
    case 59u: goto L_001CCDBC;
    case 60u: goto L_001CCDE0;
    case 61u: goto L_001CCE10;
    case 62u: goto L_001CCE24;
    case 63u: goto L_001CCE4C;
    case 64u: goto L_001CCE90;
    case 65u: goto L_001CCEB4;
    case 66u: goto L_001CCEE8;
    case 67u: goto L_001CCF18;
    case 68u: goto L_001CCF34;
    case 69u: goto L_001CCFE4;
    case 70u: goto L_001CD00C;
    case 71u: goto L_001CD03C;
    case 72u: goto L_001CD058;
    case 73u: goto L_001CD08C;
    case 74u: goto L_001CD0A8;
    case 75u: goto L_001CD0BC;
    case 76u: goto L_001CD0D8;
    case 77u: goto L_001CD0F8;
    case 78u: goto L_001CD128;
    case 79u: goto L_001CD15C;
    case 80u: goto L_001CD16C;
    case 81u: goto L_001CD188;
    case 82u: goto L_001CD1D0;
    case 83u: goto L_001CD200;
    case 84u: goto L_001CD220;
    case 85u: goto L_001CD228;
    case 86u: goto L_001CD23C;
    case 87u: goto L_001CD250;
    case 88u: goto L_001CD274;
    case 89u: goto L_001CD2B0;
    case 90u: goto L_001CD310;
    case 91u: goto L_001CD338;
    case 92u: goto L_001CD370;
    case 93u: goto L_001CD39C;
    case 94u: goto L_001CD3A8;
    case 95u: goto L_001CD3C0;
    case 96u: goto L_001CD3E0;
    case 97u: goto L_001CD40C;
    case 98u: goto L_001CD414;
    case 99u: goto L_001CD430;
    case 100u: goto L_001CD470;
    case 101u: goto L_001CD4B0;
    case 102u: goto L_001CD4F0;
    case 103u: goto L_001CD50C;
    case 104u: goto L_001CD538;
    case 105u: goto L_001CD570;
    case 106u: goto L_001CD580;
    case 107u: goto L_001CD59C;
    case 108u: goto L_001CD5D0;
    case 109u: goto L_001CD600;
    case 110u: goto L_001CD614;
    case 111u: goto L_001CD650;
    case 112u: goto L_001CD68C;
    case 113u: goto L_001CD6AC;
    case 114u: goto L_001CD6E0;
    case 115u: goto L_001CD70C;
    case 116u: goto L_001CD714;
    case 117u: goto L_001CD71C;
    case 118u: goto L_001CD728;
    case 119u: goto L_001CD734;
    case 120u: goto L_001CD750;
    case 121u: goto L_001CD768;
    case 122u: goto L_001CD7A0;
    case 123u: goto L_001CD894;
    case 124u: goto L_001CD8DC;
    case 125u: goto L_001CD8F0;
    case 126u: goto L_001CD920;
    case 127u: goto L_001CD938;
    case 128u: goto L_001CD950;
    case 129u: goto L_001CD960;
    case 130u: goto L_001CD974;
    case 131u: goto L_001CD980;
    case 132u: goto L_001CD9A0;
    case 133u: goto L_001CD9F0;
    case 134u: goto L_001CDB00;
    case 135u: goto L_001CDB34;
    case 136u: goto L_001CDB7C;
    case 137u: goto L_001CDBA0;
    case 138u: goto L_001CDBD0;
    case 139u: goto L_001CDBE8;
    case 140u: goto L_001CDC00;
    case 141u: goto L_001CDC18;
    case 142u: goto L_001CDC2C;
    case 143u: goto L_001CDC40;
    case 144u: goto L_001CDC70;
    case 145u: goto L_001CDC98;
    case 146u: goto L_001CDCBC;
    case 147u: goto L_001CDD40;
    case 148u: goto L_001CDD9C;
    case 149u: goto L_001CDDBC;
    case 150u: goto L_001CDDDC;
    case 151u: goto L_001CDDFC;
    case 152u: goto L_001CDE1C;
    case 153u: goto L_001CDE3C;
    case 154u: goto L_001CDE5C;
    case 155u: goto L_001CDE7C;
    case 156u: goto L_001CDEA0;
    case 157u: goto L_001CDF00;
    case 158u: goto L_001CDF24;
    case 159u: goto L_001CDF7C;
    case 160u: goto L_001CE070;
    case 161u: goto L_001CE17C;
    case 162u: goto L_001CE188;
    case 163u: goto L_001CE198;
    case 164u: goto L_001CE1B0;
    case 165u: goto L_001CE224;
    case 166u: goto L_001CE240;
    case 167u: goto L_001CE2B8;
    case 168u: goto L_001CE2D4;
    case 169u: goto L_001CE2F4;
    case 170u: goto L_001CE320;
    case 171u: goto L_001CE34C;
    case 172u: goto L_001CE36C;
    case 173u: goto L_001CE3B8;
    case 174u: goto L_001CE3D8;
    case 175u: goto L_001CE3EC;
    case 176u: goto L_001CE438;
    case 177u: goto L_001CE458;
    case 178u: goto L_001CE4D0;
    case 179u: goto L_001CE4F0;
    case 180u: goto L_001CE4F8;
    case 181u: goto L_001CE51C;
    case 182u: goto L_001CE590;
    case 183u: goto L_001CE5CC;
    case 184u: goto L_001CE770;
    case 185u: goto L_001CE808;
    case 186u: goto L_001CE858;
    case 187u: goto L_001CE87C;
    case 188u: goto L_001CE8D4;
    case 189u: goto L_001CE9C8;
    case 190u: goto L_001CEAD4;
    case 191u: goto L_001CEAE0;
    case 192u: goto L_001CEAF0;
    case 193u: goto L_001CEB08;
    case 194u: goto L_001CEB7C;
    case 195u: goto L_001CEB98;
    case 196u: goto L_001CEC10;
    case 197u: goto L_001CEC2C;
    case 198u: goto L_001CEC4C;
    case 199u: goto L_001CEC78;
    case 200u: goto L_001CEC98;
    case 201u: goto L_001CECE4;
    case 202u: goto L_001CED04;
    case 203u: goto L_001CED18;
    case 204u: goto L_001CED64;
    case 205u: goto L_001CED84;
    case 206u: goto L_001CEDFC;
    case 207u: goto L_001CEE1C;
    case 208u: goto L_001CEE50;
    case 209u: goto L_001CEE90;
    case 210u: goto L_001CEED0;
    case 211u: goto L_001CEEE0;
    case 212u: goto L_001CEF04;
    case 213u: goto L_001CEF3C;
    case 214u: goto L_001CEF58;
    case 215u: goto L_001CEFAC;
    case 216u: goto L_001CEFC0;
    case 217u: goto L_001CEFCC;
    case 218u: goto L_001CEFE8;
    case 219u: goto L_001CF028;
    case 220u: goto L_001CF034;
    case 221u: goto L_001CF05C;
    case 222u: goto L_001CF080;
    case 223u: goto L_001CF0E8;
    case 224u: goto L_001CF108;
    case 225u: goto L_001CF124;
    case 226u: goto L_001CF13C;
    case 227u: goto L_001CF14C;
    case 228u: goto L_001CF154;
    case 229u: goto L_001CF160;
    case 230u: goto L_001CF178;
    case 231u: goto L_001CF188;
    case 232u: goto L_001CF1E0;
    case 233u: goto L_001CF1F8;
    case 234u: goto L_001CF20C;
    case 235u: goto L_001CF224;
    case 236u: goto L_001CF240;
    case 237u: goto L_001CF258;
    case 238u: goto L_001CF274;
    case 239u: goto L_001CF280;
    case 240u: goto L_001CF290;
    case 241u: goto L_001CF2A0;
    case 242u: goto L_001CF2B0;
    case 243u: goto L_001CF2C0;
    case 244u: goto L_001CF2CC;
    case 245u: goto L_001CF2DC;
    case 246u: goto L_001CF300;
    case 247u: goto L_001CF31C;
    case 248u: goto L_001CF344;
    case 249u: goto L_001CF350;
    case 250u: goto L_001CF35C;
    case 251u: goto L_001CF408;
    case 252u: goto L_001CF418;
    case 253u: goto L_001CF470;
    case 254u: goto L_001CF4C8;
    case 255u: goto L_001CF4F8;
    case 256u: goto L_001CF530;
    case 257u: goto L_001CF548;
    case 258u: goto L_001CF560;
    case 259u: goto L_001CF594;
    case 260u: goto L_001CF5E4;
    case 261u: goto L_001CF5F4;
    case 262u: goto L_001CF614;
    case 263u: goto L_001CF678;
    case 264u: goto L_001CF6AC;
    case 265u: goto L_001CF6C0;
    case 266u: goto L_001CF6D0;
    case 267u: goto L_001CF6E4;
    case 268u: goto L_001CF70C;
    case 269u: goto L_001CF720;
    case 270u: goto L_001CF734;
    case 271u: goto L_001CF758;
    case 272u: goto L_001CF77C;
    case 273u: goto L_001CF794;
    case 274u: goto L_001CF7A8;
    case 275u: goto L_001CF7B8;
    case 276u: goto L_001CF814;
    case 277u: goto L_001CF84C;
    case 278u: goto L_001CF85C;
    case 279u: goto L_001CF888;
    case 280u: goto L_001CF89C;
    case 281u: goto L_001CF8AC;
    case 282u: goto L_001CF910;
    case 283u: goto L_001CF920;
    case 284u: goto L_001CF978;
    case 285u: goto L_001CFA40;
    case 286u: goto L_001CFA8C;
    case 287u: goto L_001CFA9C;
    case 288u: goto L_001CFB98;
    case 289u: goto L_001CFBB4;
    case 290u: goto L_001CFBE8;
    case 291u: goto L_001CFC30;
    case 292u: goto L_001CFC5C;
    case 293u: goto L_001CFC74;
    case 294u: goto L_001CFC90;
    case 295u: goto L_001CFCA8;
    case 296u: goto L_001CFCC4;
    case 297u: goto L_001CFCE0;
    case 298u: goto L_001CFD04;
    case 299u: goto L_001CFD1C;
    case 300u: goto L_001CFD30;
    case 301u: goto L_001CFD54;
    case 302u: goto L_001CFD6C;
    case 303u: goto L_001CFDB8;
    case 304u: goto L_001CFDE8;
    case 305u: goto L_001CFE14;
    case 306u: goto L_001CFE2C;
    case 307u: goto L_001CFE5C;
    case 308u: goto L_001CFE74;
    case 309u: goto L_001CFF80;
    case 310u: goto L_001CFF8C;
    case 311u: goto L_001CFFA0;
    case 312u: goto L_001CFFE0;
    case 313u: goto L_001CFFF4;
    default: bad_entry(c, 0x001CC000u); return;
    }
L_001CC000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC028u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001CC028u) [[unlikely]] return; }
L_001CC028:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9296u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC040u); st32((c.r[17].w[0] + 52u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0033(c, 4u, depth + 1u); else { c.pc = 0x001CC060u; return; } if (c.pc != 0x001CC040u) [[unlikely]] return; }
L_001CC040:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CC060:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[4].w[0] + 64u);
    c.f[0] = ld32((c.r[1].w[0] + 20088u));
    st32((c.r[4].w[0] + 28u), c.f[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[0] = 0u;
    c.f[3] = 0u;
    c.f[2] = 0u;
    c.f[1] = 0u;
    st32((c.r[4].w[0] + 48u), c.f[0]);
    st32((c.r[4].w[0] + 44u), c.f[3]);
    st32((c.r[4].w[0] + 32u), c.f[2]);
    c.f[0] = 0u;
    st32((c.r[4].w[0] + 36u), c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 80u), 0u);  c.pc = t; return; }
L_001CC0B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CC0DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20088u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.budget -= 3;
L_001CC0DC:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], 0u + 15090u);
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001CC0FC; } }
    set32(c.r[3], 0u + 15100u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CC10C; } }
L_001CC0FC:
    set32(c.r[3], ld32((c.r[5].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CC10C; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001CC10C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001CC1AC; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 380u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CC13C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[5].w[0] + 228u));
    c.f[0] = ld32((c.r[1].w[0] + 20080u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CC1AC; } }
L_001CC13C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[1].w[0] + 20328u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CC180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC15Cu); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0034(c, 99u, depth + 1u); else { c.pc = 0x001D0E10u; return; } if (c.pc != 0x001CC15Cu) [[unlikely]] return; }
L_001CC15C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CC174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC16Cu); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001CC16Cu) [[unlikely]] return; }
L_001CC16C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CC180; } }
L_001CC174:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC180u); set32(c.r[5], 0u + 285u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001CC180u) [[unlikely]] return; }
L_001CC180:
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20296u));
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[1].w[0] + 20296u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.budget -= 11;
L_001CC1AC:
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[3].w[0] + 224u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 224u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[3].w[0] + 232u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 232u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 395u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CC290; } }
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[4].w[0] + 228u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 228u), c.f[1]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.f[1] = ld32((c.r[2].w[0] + 228u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[2].w[0] + 228u);  if (t) { goto L_001CC280; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[1].w[0] + 20224u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CC270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC24Cu); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0034(c, 99u, depth + 1u); else { c.pc = 0x001D0E10u; return; } if (c.pc != 0x001CC24Cu) [[unlikely]] return; }
L_001CC24C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CC264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC25Cu); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001CC25Cu) [[unlikely]] return; }
L_001CC25C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CC270; } }
L_001CC264:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC270u); set32(c.r[5], 0u + 285u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001CC270u) [[unlikely]] return; }
L_001CC270:
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    st8((c.r[2].w[0] + 380u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001CC280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC288u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0038(c, 66u, depth + 1u); else { c.pc = 0x001E0DC0u; return; } if (c.pc != 0x001CC288u) [[unlikely]] return; }
L_001CC288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001CC298; } }
L_001CC290:
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_001CC298:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CC2B0:
    c.r[2].d[0] = c.r[4].sd[0] < 4970ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CC2C4; } }
    c.r[2].d[0] = c.r[4].sd[0] < 5400ll ? 1ull : 0ull;
    c.budget -= 1;
L_001CC2C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 255ull;  c.pc = t; return; }
L_001CC2D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 10u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CC470; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1B00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CC474; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CC470; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1500000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);  if (t) { goto L_001CC470; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CC470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC360u); set32(c.r[4], ld32((c.r[17].w[0] + 164u)));  if (depth < kMaxDepth) unit_0033(c, 13u, depth + 1u); else { c.pc = 0x001CC2B0u; return; } if (c.pc != 0x001CC360u) [[unlikely]] return; }
L_001CC360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CC470; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CC3B4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31216u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] | 1ull;  if (t) { goto L_001CC3A8; } }
    c.r[2].d[0] = c.r[3].d[0] | 2ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 31216u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001CC3E4; } }
L_001CC3A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 31216u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001CC3E4; } }
L_001CC3B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31216u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] | 4ull;  if (t) { goto L_001CC3DC; } }
    c.r[2].d[0] = c.r[3].d[0] | 8ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 31216u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001CC3E4; } }
L_001CC3DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 31216u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001CC3E4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 208u);  if (t) { goto L_001CC470; } }
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[17].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC23C0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[16].w[0] + 208u);
    st32((c.r[17].w[0] + 228u), c.f[0]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1674u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC23C0000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC430u); st32((c.r[16].w[0] + 228u), c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001CC430u) [[unlikely]] return; }
L_001CC430:
    set32(c.r[2], c.r[17].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[17].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC23C0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[16].w[0] + 208u);
    st32((c.r[17].w[0] + 228u), c.f[0]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC23C0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 228u), c.f[0]);  if (t) { goto L_001CC474; } }
L_001CC470:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CC474:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CC490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001CC4A4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001CC4A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC4B0u); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CC4B0u) [[unlikely]] return; }
L_001CC4B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001CC4BC; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CC4BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC4C4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CC4C4u) [[unlikely]] return; }
L_001CC4C4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CC4F4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CC4F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC4E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 311u, depth + 1u); else { c.pc = 0x001F3D10u; return; } if (c.pc != 0x001CC4E0u) [[unlikely]] return; }
L_001CC4E0:
    c.r[2].d[0] = c.r[2].sd[0] < 85ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CC4F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CC4F8; } }
L_001CC4F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001CC4F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CC510:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC538u); set32(c.r[4], ld32((c.r[4].w[0] + 164u)));  if (depth < kMaxDepth) unit_0033(c, 13u, depth + 1u); else { c.pc = 0x001CC2B0u; return; } if (c.pc != 0x001CC538u) [[unlikely]] return; }
L_001CC538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001CC724; } }
L_001CC540:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001CC714; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_001CC580; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[3], 0u + 15010u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001CC5B0; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_001CC580:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001CC59C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[3], 0u + 11000u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001CC5B0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001CC59C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001CC714; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CC714; } }
L_001CC5B0:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 370u));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CC714; } }
    ld128((c.r[18].w[0] + 224u) & ~15u, c.r[5]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[3], 0u + 6u);
    c.f[0] = c.r[4].w[0];
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[17], 0u + 15u);  if (t) { goto L_001CC5FC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CC604; } }
L_001CC5FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_001CC60C; } }
L_001CC604:
    set32(c.r[17], 0u + 14u);
    set32(c.r[3], 0u + 5u);
    c.budget -= 2;
L_001CC60C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CC628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC61Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 17u, depth + 1u); else { c.pc = 0x001CC490u; return; } if (c.pc != 0x001CC61Cu) [[unlikely]] return; }
L_001CC61C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CC714; } }
L_001CC628:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 228u));
    c.f[2] = ld32((c.r[4].w[0] + 228u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);  if (t) { goto L_001CC714; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CC714; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC670u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x001CC670u) [[unlikely]] return; }
L_001CC670:
    c.f[1] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CC714; } }
    c.r[6].d[0] = ld8((c.r[18].w[0] + 397u));
    set32(c.r[4], 0u - 5u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u + 5u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[18].w[0] + 397u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_001CC6B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CC6D0; } }
L_001CC6B8:
    set32(c.r[6], ld32((c.r[18].w[0] + 480u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 15600u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC6D0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001CC6D0u) [[unlikely]] return; }
L_001CC6D0:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001CC6F4; } }
    set32(c.r[5], 0u + 15602u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC6F4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001CC6F4u) [[unlikely]] return; }
L_001CC6F4:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CC714; } }
    set32(c.r[6], ld32((c.r[20].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC714u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 161u, depth + 1u); else { c.pc = 0x00211F40u; return; } if (c.pc != 0x001CC714u) [[unlikely]] return; }
L_001CC714:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC540u | kUnwind; return; } goto L_001CC540; } }
L_001CC724:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001CC750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 20304ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC778u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001CC778u) [[unlikely]] return; }
L_001CC778:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] - 9312u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[6], 0u + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC798u); st32((c.r[16].w[0] + 28u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001CC798u) [[unlikely]] return; }
L_001CC798:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC7A8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001CC7A8u) [[unlikely]] return; }
L_001CC7A8:
    set32(c.r[4], c.r[16].w[0] + 68u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC7B8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001CC7B8u) [[unlikely]] return; }
L_001CC7B8:
    set32(c.r[4], c.r[16].w[0] + 84u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC7C8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001CC7C8u) [[unlikely]] return; }
L_001CC7C8:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_001CC7D0:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 100u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC7D0u | kUnwind; return; } goto L_001CC7D0; } }
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CC810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[2].w[0] + 36u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[2].w[0] + 52u), 0u);
    st32((c.r[2].w[0] + 68u), 0u);
    st32((c.r[2].w[0] + 84u), 0u);
    st32((c.r[2].w[0] + 100u), c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x334D0000u);  if (t) { goto L_001CC84C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001CC84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC854u); c.r[5].d[0] = c.r[2].d[0] | 17985ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CC854u) [[unlikely]] return; }
L_001CC854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001CC860; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CC860:
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CC880:
    set32(c.r[29], c.r[29].w[0] - 192u);
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
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CCC30; } }
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[20].w[0] << 2);
    c.budget -= 2;
L_001CC8C0:
    set32(c.r[16], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CCC20; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 84u);  if (t) { goto L_001CC8EC; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001CCC20; } }
L_001CC8EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28296u)));
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001CC928; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[9], c.r[29].w[0] + 188u);
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[10], c.r[29].w[0] + 184u);
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC924u); set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (depth < kMaxDepth) unit_001A(c, 45u, depth + 1u); else { c.pc = 0x00168AA0u; return; } if (c.pc != 0x001CC924u) [[unlikely]] return; }
L_001CC924:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CC928:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_001CCC20; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_001CCC20; } }
    c.r[17].d[0] = ld8((c.r[19].w[0]));
    c.r[15].d[0] = c.r[17].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_001CCA3C; } }
    set32(c.r[18], ld32((c.r[29].w[0] + 184u)));
    c.r[23].d[0] = c.r[17].d[0] & 127ull;
    set32(c.r[22], c.r[19].w[0] + 1u);
    set32(c.r[12], 0u + 90u);
    set32(c.r[11], 0u + 52u);
    set32(c.r[10], 0u + 83u);
    set32(c.r[9], 0u + 51u);
    set32(c.r[8], 0u + 2u);
    set32(c.r[7], 0u + 50u);
    set32(c.r[6], 0u + 49u);
    set32(c.r[5], 0u + 48u);
    set32(c.r[4], 0u + 10u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 13;
L_001CC988:
    c.r[14].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[13], c.r[18].w[0] + c.r[14].w[0]);
    c.r[13].d[0] = ld8((c.r[13].w[0]));
    c.budget -= 5;
    { const bool t = c.r[13].sd[0] <= 0;  if (t) { goto L_001CCA3C; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[12].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC8ECu | kUnwind; return; } goto L_001CC8EC; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[11].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC8ECu | kUnwind; return; } goto L_001CC8EC; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[10].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC8ECu | kUnwind; return; } goto L_001CC8EC; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC8ECu | kUnwind; return; } goto L_001CC8EC; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC8ECu | kUnwind; return; } goto L_001CC8EC; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC8ECu | kUnwind; return; } goto L_001CC8EC; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC8ECu | kUnwind; return; } goto L_001CC8EC; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC8ECu | kUnwind; return; } goto L_001CC8EC; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[4].d[0];  if (t) { goto L_001CCA0C; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[3].d[0];  if (t) { goto L_001CC9F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[23].w[0] - c.r[13].w[0]);  if (t) { goto L_001CCA34; } }
L_001CC9F4:
    c.r[3].d[0] = ld8((c.r[22].w[0] + 1u));
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC8ECu | kUnwind; return; } goto L_001CC8EC; } }
L_001CCA0C:
    c.r[4].d[0] = ld8((c.r[22].w[0] + 2u));
    c.r[3].d[0] = ld8((c.r[22].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC8ECu | kUnwind; return; } goto L_001CC8EC; } }
    set32(c.r[23], c.r[23].w[0] - c.r[13].w[0]);
    c.budget -= 1;
L_001CCA34:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] > 0; set32(c.r[22], c.r[22].w[0] + c.r[13].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC988u | kUnwind; return; } goto L_001CC988; } }
L_001CCA3C:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001CCA60; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.r[4].d[0] = c.r[17].d[0] & 127ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[3].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_001CCA60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_001CCC10; } }
    set32(c.r[6], c.r[19].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_001CCA6C:
    c.r[7].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[7].w[0] - 120u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CCA98; } }
    c.r[3].d[0] = c.r[7].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CCBA4; } }
    c.r[1].d[0] = c.r[7].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CCBA4; } }
L_001CCA98:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], c.r[4].w[0] << 1);  if (t) { goto L_001CCAC0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[3].d[0];  if (t) { goto L_001CCAC0; } }
    set32(c.r[22], 0u + 1u);
    c.budget -= 1;
L_001CCAC0:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 3u));
    set32(c.r[4], 0u + 121u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2u));
    set32(c.r[23], 0u + 21u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != c.r[4].d[0]; st32((c.r[29].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_001CCAF0; } }
    set32(c.r[23], 0u + 33u);
    set32(c.r[30], 0u + 15u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_001CCB24; } }
L_001CCAF0:
    set32(c.r[3], 0u + 120u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[7].w[0] - 64u);  if (t) { goto L_001CCB10; } }
    set32(c.r[23], 0u + 48u);
    set32(c.r[30], 0u + 15u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_001CCB24; } }
    set32(c.r[3], c.r[7].w[0] - 64u);
    c.budget -= 1;
L_001CCB10:
    set32(c.r[30], 0u + 12u);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[18], c.r[18].w[0] + 3u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
L_001CCB24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001CCB90; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001CCB30:
    set32(c.r[4], c.r[3].w[0] << (c.r[17].w[0] & 31u));
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CCB8C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001CCB58; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_001CCB74; } }
L_001CCB58:
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[5], c.r[17].w[0] + c.r[23].w[0]);
    set32(c.r[6], c.r[19].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCB6Cu); c.r[7].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 56u, depth + 1u); else { c.pc = 0x001C0F40u; return; } if (c.pc != 0x001CCB6Cu) [[unlikely]] return; }
L_001CCB6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_001CCB8C; } }
L_001CCB74:
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[5], c.r[17].w[0] + c.r[23].w[0]);
    set32(c.r[6], c.r[19].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCB88u); c.r[7].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 59u, depth + 1u); else { c.pc = 0x001C10F0u; return; } if (c.pc != 0x001CCB88u) [[unlikely]] return; }
L_001CCB88:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_001CCB8C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001CCB90:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCB30u | kUnwind; return; } goto L_001CCB30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CCC0C; } }
L_001CCBA4:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[5].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[3].w[0] << 1);  if (t) { goto L_001CCBD0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_001CCBD0; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_001CCBD0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001CCBE4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_001CCBF8; } }
L_001CCBE4:
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCBF0u); set32(c.r[6], c.r[6].w[0] + 2u);  if (depth < kMaxDepth) unit_0030(c, 56u, depth + 1u); else { c.pc = 0x001C0F40u; return; } if (c.pc != 0x001CCBF0u) [[unlikely]] return; }
L_001CCBF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 2u);  if (t) { goto L_001CCC08; } }
L_001CCBF8:
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCC04u); set32(c.r[6], c.r[6].w[0] + 2u);  if (depth < kMaxDepth) unit_0030(c, 59u, depth + 1u); else { c.pc = 0x001C10F0u; return; } if (c.pc != 0x001CCC04u) [[unlikely]] return; }
L_001CCC04:
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.budget -= 1;
L_001CCC08:
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_001CCC0C:
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 1;
L_001CCC10:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[19].w[0] + c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCA6Cu | kUnwind; return; } goto L_001CCA6C; } }
L_001CCC20:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC8C0u | kUnwind; return; } goto L_001CC8C0; } }
L_001CCC30:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001CCC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 28296u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_001CCC80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CCCB0; } }
L_001CCC80:
    set32(c.r[9], c.r[29].w[0] + 28u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[10], c.r[29].w[0] + 24u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCCA8u); set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (depth < kMaxDepth) unit_001A(c, 45u, depth + 1u); else { c.pc = 0x00168AA0u; return; } if (c.pc != 0x001CCCA8u) [[unlikely]] return; }
L_001CCCA8:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001CCCB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CCCC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCCD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x001CCCD4u) [[unlikely]] return; }
L_001CCCD4:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCCE0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x001CCCE0u) [[unlikely]] return; }
L_001CCCE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41430000u);
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.r[5].d[0] = c.r[2].d[0] | 21580ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCCF4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001CCCF4u) [[unlikely]] return; }
L_001CCCF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 9376u);
    set32(c.r[2], c.r[2].w[0] - 9360u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 9344u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[1].w[0] + 26744u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 248u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CCD40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CCDBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 9376u);
    set32(c.r[3], c.r[3].w[0] - 9360u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 9344u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCD8Cu); st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001CCD8Cu) [[unlikely]] return; }
L_001CCD8C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCD98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x001CCD98u) [[unlikely]] return; }
L_001CCD98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCDA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x001CCDA4u) [[unlikely]] return; }
L_001CCDA4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001CCDC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCDBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001CCDBCu) [[unlikely]] return; }
L_001CCDBC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CCDC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CCDE0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CCE04; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 56u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 7;
L_001CCE04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CCE10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CCE7C; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001CCE38; } }
L_001CCE24:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001CCE44; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001CCE38:
    c.r[3].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCE24u | kUnwind; return; } goto L_001CCE24; } }
L_001CCE44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[7].w[0] + 1u);  if (t) { goto L_001CCE68; } }
L_001CCE4C:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[3].w[0] + 56u), c.r[5].w[0]);
    c.budget -= 7;
L_001CCE68:
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCE4Cu | kUnwind; return; } goto L_001CCE4C; } }
    st32((c.r[4].w[0] + 52u), c.r[7].w[0]);
    c.budget -= 1;
L_001CCE7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CCE90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCEB4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CCEB4u) [[unlikely]] return; }
L_001CCEB4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001CCFDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] - 28184u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 28176u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 28168u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 28160u), 0u);  if (t) { goto L_001CCFC8; } }
L_001CCEE8:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 56u)));
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CCFC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCF18u); c.r[5].d[0] = c.r[2].d[0] | 16722ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CCF18u) [[unlikely]] return; }
L_001CCF18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CCF24; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CCF24:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CCFC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCF34u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001CCF34u) [[unlikely]] return; }
L_001CCF34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CCFC4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[1].w[0] - 28184u));
    c.f[3] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[5] = fp::sub(c.f[2], c.f[3]);
    c.f[4] = fp::add(c.f[2], c.f[3]);
    c.f[2] = fp::sub(c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[5]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::add(c.f[1], c.f[3]);  if (t) { goto L_001CCF74; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 28184u), c.f[5]);
    c.budget -= 2;
L_001CCF74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[1].w[0] - 28176u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CCF90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 28176u), c.f[2]);
    c.budget -= 2;
L_001CCF90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[1].w[0] - 28184u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CCFAC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 28168u), c.f[4]);
    c.budget -= 2;
L_001CCFAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[1].w[0] - 28176u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_001CCFC4; } }
    st32((c.r[1].w[0] - 28160u), c.f[1]);
    c.budget -= 1;
L_001CCFC4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001CCFC8:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCEE8u | kUnwind; return; } goto L_001CCEE8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CCFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 52u)));  if (t) { goto L_001CD1A4; } }
L_001CCFE4:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 56u)));
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001CD19C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 52u)));  if (t) { goto L_001CD0C4; } }
L_001CD00C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[20].d[0]; set32(c.r[3], c.r[20].w[0] << 2);  if (t) { goto L_001CD0BC; } }
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[19], c.r[3].w[0] + 56u);
    set32(c.r[3], ld32((c.r[4].w[0] + 200u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CD0BC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 432u)));
    c.r[5].d[0] = ld64((c.r[2].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD03Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 198u, depth + 1u); else { c.pc = 0x001C6EA0u; return; } if (c.pc != 0x001CD03Cu) [[unlikely]] return; }
L_001CD03C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CD0BC; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 200u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD058u); set32(c.r[4], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 160u, depth + 1u); else { c.pc = 0x00141F10u; return; } if (c.pc != 0x001CD058u) [[unlikely]] return; }
L_001CD058:
    set32(c.r[3], c.r[29].w[0] + 100u);
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 108u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CD0BC; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 432u)));
    c.r[5].d[0] = ld64((c.r[2].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD08Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 200u, depth + 1u); else { c.pc = 0x001C6EE0u; return; } if (c.pc != 0x001CD08Cu) [[unlikely]] return; }
L_001CD08C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD0A8u); set32(c.r[7], c.r[29].w[0] + 108u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CD0A8u) [[unlikely]] return; }
L_001CD0A8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD0BCu); set32(c.r[6], c.r[6].w[0] + 12432u);  if (depth < kMaxDepth) unit_008B(c, 169u, depth + 1u); else { c.pc = 0x0032DAA0u; return; } if (c.pc != 0x001CD0BCu) [[unlikely]] return; }
L_001CD0BC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 2;
L_001CD0C4:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD00Cu | kUnwind; return; } goto L_001CD00C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001CD18C; } }
L_001CD0D8:
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[2].w[0] + 252u);
    set32(c.r[2], ld32((c.r[2].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[5].d[0] = ld64((c.r[2].w[0] + 8u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD0F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 198u, depth + 1u); else { c.pc = 0x001C6EA0u; return; } if (c.pc != 0x001CD0F8u) [[unlikely]] return; }
L_001CD0F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CD188; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 432u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[4].d[0] = ld64((c.r[4].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 32u);  if (t) { goto L_001CD188; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD128u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0010(c, 160u, depth + 1u); else { c.pc = 0x00141F10u; return; } if (c.pc != 0x001CD128u) [[unlikely]] return; }
L_001CD128:
    set32(c.r[3], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 104u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CD188; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[5].d[0] = ld64((c.r[2].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD15Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 200u, depth + 1u); else { c.pc = 0x001C6EE0u; return; } if (c.pc != 0x001CD15Cu) [[unlikely]] return; }
L_001CD15C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x57500000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD16Cu); c.r[5].d[0] = c.r[2].d[0] | 20302ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CD16Cu) [[unlikely]] return; }
L_001CD16C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CD178; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CD178:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CD188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD188u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0020DCA0u; return; } if (c.pc != 0x001CD188u) [[unlikely]] return; }
L_001CD188:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001CD18C:
    set32(c.r[3], ld32((c.r[18].w[0] + 248u)));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD0D8u | kUnwind; return; } goto L_001CD0D8; } }
L_001CD19C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 2;
L_001CD1A4:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCFE4u | kUnwind; return; } goto L_001CCFE4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001CD1D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 21071ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD200u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001CD200u) [[unlikely]] return; }
L_001CD200:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9392u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[6], 0u + 368u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD220u); st32((c.r[16].w[0] + 28u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001CD220u) [[unlikely]] return; }
L_001CD220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD228u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CD228u) [[unlikely]] return; }
L_001CD228:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], 0u + 60u);  if (t) { goto L_001CD260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD23Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CD23Cu) [[unlikely]] return; }
L_001CD23C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CD25C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD250u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CD250u) [[unlikely]] return; }
L_001CD250:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD2A8; } }
L_001CD25C:
    set32(c.r[8], 0u + 60u);
    c.budget -= 1;
L_001CD260:
    set32(c.r[4], 0u + 5001u);
    set32(c.r[2], 0u + 5235u);
    set32(c.r[3], 0u + 5671u);
    set32(c.r[5], 0u + 5674u);
    set32(c.r[6], c.r[8].w[0] << 1);
    c.budget -= 5;
L_001CD274:
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[6].w[0] + 48u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001CD28C; } }
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_001CD28C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001CD298; } }
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001CD298:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[1].d[0] = c.r[8].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[8].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD274u | kUnwind; return; } goto L_001CD274; } }
L_001CD2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD2B0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CD2B0u) [[unlikely]] return; }
L_001CD2B0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5654u);  if (t) { goto L_001CD2EC; } }
    set32(c.r[4], 0u + 5655u);
    st16((c.r[16].w[0] + 170u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 5753u);
    st16((c.r[16].w[0] + 172u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 800u);
    st16((c.r[16].w[0] + 174u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 176u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 180u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 182u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 184u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 186u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
L_001CD2EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001CD310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD338u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001CD338u) [[unlikely]] return; }
L_001CD338:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9408u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CD370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CD3C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 9408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD39Cu); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 100u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x001CD39Cu) [[unlikely]] return; }
L_001CD39C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD3A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001CD3A8u) [[unlikely]] return; }
L_001CD3A8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001CD3C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD3C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001CD3C0u) [[unlikely]] return; }
L_001CD3C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CD3C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CD3E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CD454; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CD454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD40Cu);  if (depth < kMaxDepth) unit_0033(c, 102u, depth + 1u); else { c.pc = 0x001CD4F0u; return; } if (c.pc != 0x001CD40Cu) [[unlikely]] return; }
L_001CD40C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CD454; } }
L_001CD414:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD414u | kUnwind; return; } goto L_001CD414; } }
L_001CD430:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD44C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD430u | kUnwind; return; } goto L_001CD430; } }
L_001CD44C:
    st32((c.r[17].w[0] + 36u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[17].w[0]);
    c.budget -= 2;
L_001CD454:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CD470:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CD4A8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CD48C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[5].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 2;
L_001CD48C:
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CD4A0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[5].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 2;
L_001CD4A0:
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 2;
L_001CD4A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CD4B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CD4C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD4DC; } }
L_001CD4C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CD4DC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CD4DC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001CD4DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CD4F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CD500; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001CD508; } }
L_001CD500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD560; } }
L_001CD508:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 1;
L_001CD50C:
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CD534; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CD52C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD560; } }
L_001CD52C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 32u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD50Cu | kUnwind; return; } goto L_001CD50C; } }
L_001CD534:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 1;
L_001CD538:
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CD560; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CD558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD560; } }
L_001CD558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 36u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD538u | kUnwind; return; } goto L_001CD538; } }
L_001CD560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CD570:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CD580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD5C4; } }
L_001CD580:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CD59C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD580u | kUnwind; return; } goto L_001CD580; } }
L_001CD59C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001CD5AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CD5C4; } }
L_001CD5AC:
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CD5C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD59Cu | kUnwind; return; } goto L_001CD59C; } }
L_001CD5C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CD5C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CD5D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001CD5FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CD630; } }
L_001CD5FC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CD600:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD614u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 105u, depth + 1u); else { c.pc = 0x001CD570u; return; } if (c.pc != 0x001CD614u) [[unlikely]] return; }
L_001CD614:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CD62C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD600u | kUnwind; return; } goto L_001CD600; } }
L_001CD62C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CD630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CD650:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1005u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001CD67C; } }
    set32(c.r[3], 0u + 1105u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001CD734; } }
L_001CD67C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD68Cu); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CD68Cu) [[unlikely]] return; }
L_001CD68C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001CD698; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CD698:
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.r[5].d[0] = c.r[2].d[0] | 20035ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD6ACu); set32(c.r[4], c.r[3].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CD6ACu) [[unlikely]] return; }
L_001CD6AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001CD6B8; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CD6B8:
    set32(c.r[4], ld32((c.r[18].w[0] + 644u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[2].d[0] | 20035ull;
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD6E0u); set32(c.r[4], c.r[2].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CD6E0u) [[unlikely]] return; }
L_001CD6E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001CD6EC; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CD6EC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001CD734; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CD734; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001CD734; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD70Cu);  if (depth < kMaxDepth) unit_0033(c, 100u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x001CD70Cu) [[unlikely]] return; }
L_001CD70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD714u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 100u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x001CD714u) [[unlikely]] return; }
L_001CD714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD71Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 100u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x001CD71Cu) [[unlikely]] return; }
L_001CD71C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD728u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001CD728u) [[unlikely]] return; }
L_001CD728:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD734u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001CD734u) [[unlikely]] return; }
L_001CD734:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001CD750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD768u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001CD768u) [[unlikely]] return; }
L_001CD768:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x60000000u);
    set32(c.r[3], c.r[3].w[0] - 9424u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] | 255ull;
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CD7A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CD868; } }
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
L_001CD868:
    set32(c.r[2], 0u - 256u);
    set32(c.r[3], 0u + 256u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD894u); c.r[6].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_0049(c, 8u, depth + 1u); else { c.pc = 0x002242E0u; return; } if (c.pc != 0x001CD894u) [[unlikely]] return; }
L_001CD894:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF6000000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CD8DC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CD8DC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD8DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CD8DCu) [[unlikely]] return; }
L_001CD8DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CD8F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CD938; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9424u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD920u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x001CD920u) [[unlikely]] return; }
L_001CD920:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001CD93C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD938u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001CD938u) [[unlikely]] return; }
L_001CD938:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CD93C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CD950:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD960u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001CD960u) [[unlikely]] return; }
L_001CD960:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CD974; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD974u);  if (depth < kMaxDepth) unit_0033(c, 120u, depth + 1u); else { c.pc = 0x001CD750u; return; } if (c.pc != 0x001CD974u) [[unlikely]] return; }
L_001CD974:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CD980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD9A0u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001CD9A0u) [[unlikely]] return; }
L_001CD9A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x60000000u);
    set32(c.r[3], c.r[3].w[0] - 9440u);
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[17].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 27904u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[3].w[0] + 18576u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CD9F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CDAC4; } }
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
L_001CDAC4:
    set32(c.r[2], 0u - 256u);
    set32(c.r[18], c.r[29].w[0] + 84u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[17], c.r[29].w[0] + 88u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[29].w[0] + 92u);
    set32(c.r[2], 0u + 256u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[2], 0u - 204u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDB00u); c.r[6].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_0049(c, 8u, depth + 1u); else { c.pc = 0x002242E0u; return; } if (c.pc != 0x001CDB00u) [[unlikely]] return; }
L_001CDB00:
    set32(c.r[3], 0u - 256u);
    set32(c.r[2], 0u + 144u);
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 256u);
    set32(c.r[2], 0u + 224u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDB34u); c.r[6].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_0049(c, 8u, depth + 1u); else { c.pc = 0x002242E0u; return; } if (c.pc != 0x001CDB34u) [[unlikely]] return; }
L_001CDB34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31496u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CDB50; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
L_001CDB50:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_001CDB7C; } }
    set32(c.r[3], ld32((c.r[1].w[0] - 27904u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; st8((c.r[3].w[0] + 18576u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001CDB7C; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDB7Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CDB7Cu) [[unlikely]] return; }
L_001CDB7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001CDBA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CDBE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDBD0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x001CDBD0u) [[unlikely]] return; }
L_001CDBD0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001CDBEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDBE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001CDBE8u) [[unlikely]] return; }
L_001CDBE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CDBEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CDC00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDC18u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001CDC18u) [[unlikely]] return; }
L_001CDC18:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CDC2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDC2Cu);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CD980u; return; } if (c.pc != 0x001CDC2Cu) [[unlikely]] return; }
L_001CDC2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CDC40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], 0u + 293u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDC70u); set32(c.r[5], c.r[5].w[0] + 12512u);  if (depth < kMaxDepth) unit_0035(c, 91u, depth + 1u); else { c.pc = 0x001D5DF0u; return; } if (c.pc != 0x001CDC70u) [[unlikely]] return; }
L_001CDC70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001CDD24; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);  if (t) { goto L_001CDC8C; } }
    set32(c.r[17], c.r[17].w[0] + 436u);
    c.budget -= 1;
L_001CDC8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDC98u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CDC98u) [[unlikely]] return; }
L_001CDC98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001CDCA4; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CDCA4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);  if (t) { goto L_001CDCB0; } }
    set32(c.r[18], c.r[18].w[0] + 436u);
    c.budget -= 1;
L_001CDCB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDCBCu); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CDCBCu) [[unlikely]] return; }
L_001CDCBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CDCCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001CDCD0; } }
L_001CDCCC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CDCD0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001CDD24; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CDD24; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 381u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 381u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CDD24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12514u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 12478u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_001CDD28; } }
L_001CDD24:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001CDD28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001CDD40:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[6], 0u + 10u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 164u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDD9Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x00168C20u; return; } if (c.pc != 0x001CDD9Cu) [[unlikely]] return; }
L_001CDD9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001CDDA8; } }
    c.r[19].d[0] = c.r[19].d[0] | 1ull;
    c.budget -= 1;
L_001CDDA8:
    set32(c.r[5], ld32((c.r[21].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], 0u + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDDBCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x00168C20u; return; } if (c.pc != 0x001CDDBCu) [[unlikely]] return; }
L_001CDDBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001CDDC8; } }
    c.r[19].d[0] = c.r[19].d[0] | 4ull;
    c.budget -= 1;
L_001CDDC8:
    set32(c.r[5], ld32((c.r[21].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], 0u + 22u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDDDCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x00168C20u; return; } if (c.pc != 0x001CDDDCu) [[unlikely]] return; }
L_001CDDDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001CDDE8; } }
    c.r[19].d[0] = c.r[19].d[0] | 128ull;
    c.budget -= 1;
L_001CDDE8:
    set32(c.r[5], ld32((c.r[21].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], 0u + 25u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDDFCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x00168C20u; return; } if (c.pc != 0x001CDDFCu) [[unlikely]] return; }
L_001CDDFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001CDE08; } }
    c.r[19].d[0] = c.r[19].d[0] | 64ull;
    c.budget -= 1;
L_001CDE08:
    set32(c.r[5], ld32((c.r[21].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], 0u + 30u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDE1Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x00168C20u; return; } if (c.pc != 0x001CDE1Cu) [[unlikely]] return; }
L_001CDE1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001CDE28; } }
    c.r[19].d[0] = c.r[19].d[0] | 8ull;
    c.budget -= 1;
L_001CDE28:
    set32(c.r[5], ld32((c.r[21].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], 0u + 35u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDE3Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x00168C20u; return; } if (c.pc != 0x001CDE3Cu) [[unlikely]] return; }
L_001CDE3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001CDE48; } }
    c.r[19].d[0] = c.r[19].d[0] | 8ull;
    c.budget -= 1;
L_001CDE48:
    set32(c.r[5], ld32((c.r[21].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], 0u + 40u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDE5Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x00168C20u; return; } if (c.pc != 0x001CDE5Cu) [[unlikely]] return; }
L_001CDE5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001CDE68; } }
    c.r[19].d[0] = c.r[19].d[0] | 16ull;
    c.budget -= 1;
L_001CDE68:
    set32(c.r[5], ld32((c.r[21].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], 0u + 50u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDE7Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x00168C20u; return; } if (c.pc != 0x001CDE7Cu) [[unlikely]] return; }
L_001CDE7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CDE88; } }
    c.r[19].d[0] = c.r[19].d[0] | 32ull;
    c.budget -= 1;
L_001CDE88:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 370u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CDED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDEA0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CDEA0u) [[unlikely]] return; }
L_001CDEA0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CDED0; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 370u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CDED0; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 368u));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 368u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CDED0; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CDED0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CE73C; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 370u));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CE738; } }
    c.r[3].d[0] = ld16((c.r[21].w[0] + 920u));
    set32(c.r[2], ld32((c.r[21].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001CE738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDF00u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 103u, depth + 1u); else { c.pc = 0x001C50A0u; return; } if (c.pc != 0x001CDF00u) [[unlikely]] return; }
L_001CDF00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CDF14; } }
    c.r[2].d[0] = c.r[19].d[0] & 56ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE738; } }
L_001CDF14:
    set32(c.r[4], ld32((c.r[20].w[0] + 240u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDF24u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001CDF24u) [[unlikely]] return; }
L_001CDF24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], ld32((c.r[21].w[0] + 144u)));
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 128u)));
    c.f[1] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 128u)));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 200u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 240u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 196u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 240u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDF7Cu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001CDF7Cu) [[unlikely]] return; }
L_001CDF7C:
    c.f[2] = ld32((c.r[20].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20200u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001CDFA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_001CDFC4; } }
L_001CDFA8:
    c.f[1] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CDFC4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_001CDFC4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20200u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001CDFE8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_001CE004; } }
L_001CDFE8:
    c.f[1] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CE004; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_001CE004:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 20192u));
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 20096u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CE040; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[21].w[0] + 240u)));  if (t) { goto L_001CE05C; } }
L_001CE040:
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[21].w[0] + 240u)));
    c.budget -= 7;
L_001CE05C:
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE070u); set32(c.r[5], ld32((c.r[20].w[0] + 240u)));  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001CE070u) [[unlikely]] return; }
L_001CE070:
    c.f[2] = ld32((c.r[21].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20200u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001CE09C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_001CE0B8; } }
L_001CE09C:
    c.f[1] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CE0B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_001CE0B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20200u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001CE0DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_001CE0F8; } }
L_001CE0DC:
    c.f[1] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CE0F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_001CE0F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 20192u));
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 20096u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CE134; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001CE150; } }
L_001CE134:
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001CE150:
    c.r[3].d[0] = c.r[2].d[0] & 4095ull;
    c.r[2].d[0] = c.r[3].sd[0] < 768ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001CE16C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 3329ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001CE174; } }
L_001CE16C:
    set32(c.r[17], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_001CE174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE17Cu);  if (depth < kMaxDepth) unit_0034(c, 188u, depth + 1u); else { c.pc = 0x001D2630u; return; } if (c.pc != 0x001CE17Cu) [[unlikely]] return; }
L_001CE17C:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE188u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 85u, depth + 1u); else { c.pc = 0x001D0B30u; return; } if (c.pc != 0x001CE188u) [[unlikely]] return; }
L_001CE188:
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.r[30].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE198u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0034(c, 224u, depth + 1u); else { c.pc = 0x001D33B0u; return; } if (c.pc != 0x001CE198u) [[unlikely]] return; }
L_001CE198:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 68u)));
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE1B0u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x001CE1B0u) [[unlikely]] return; }
L_001CE1B0:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[0];  if (t) { goto L_001CE240; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; c.r[2].d[0] = c.r[19].d[0] & 2ull;  if (t) { goto L_001CE244; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_001CE240; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_001CE240; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_001CE240; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CE240; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CE240; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001CE240; } }
    set32(c.r[18], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001CE218; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001CE218:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE224u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CE224u) [[unlikely]] return; }
L_001CE224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CE230; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CE230:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE240u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001CE240u) [[unlikely]] return; }
L_001CE240:
    c.r[2].d[0] = c.r[19].d[0] & 2ull;
    c.budget -= 1;
L_001CE244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] & 4ull;  if (t) { goto L_001CE2D8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_001CE2D4; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_001CE2D4; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_001CE2D4; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CE2D4; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[3].d[0];  if (t) { goto L_001CE2D4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CE2D4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CE2D4; } }
    set32(c.r[18], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001CE2AC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001CE2AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE2B8u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CE2B8u) [[unlikely]] return; }
L_001CE2B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CE2C4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CE2C4:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE2D4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001CE2D4u) [[unlikely]] return; }
L_001CE2D4:
    c.r[2].d[0] = c.r[19].d[0] & 4ull;
    c.budget -= 1;
L_001CE2D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] & 64ull;  if (t) { goto L_001CE304; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001CE300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE2F4u);  if (depth < kMaxDepth) unit_0034(c, 106u, depth + 1u); else { c.pc = 0x001D0ED0u; return; } if (c.pc != 0x001CE2F4u) [[unlikely]] return; }
L_001CE2F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE300; } }
    set32(c.r[18], 0u + 20u);
    c.budget -= 1;
L_001CE300:
    c.r[2].d[0] = c.r[19].d[0] & 64ull;
    c.budget -= 1;
L_001CE304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] & 128ull;  if (t) { goto L_001CE330; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001CE32C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE320u);  if (depth < kMaxDepth) unit_0034(c, 103u, depth + 1u); else { c.pc = 0x001D0E60u; return; } if (c.pc != 0x001CE320u) [[unlikely]] return; }
L_001CE320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE32C; } }
    set32(c.r[18], 0u + 25u);
    c.budget -= 1;
L_001CE32C:
    c.r[2].d[0] = c.r[19].d[0] & 128ull;
    c.budget -= 1;
L_001CE330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] & 8ull;  if (t) { goto L_001CE35C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001CE358; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE34Cu);  if (depth < kMaxDepth) unit_0034(c, 109u, depth + 1u); else { c.pc = 0x001D0F00u; return; } if (c.pc != 0x001CE34Cu) [[unlikely]] return; }
L_001CE34C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE358; } }
    set32(c.r[18], 0u + 22u);
    c.budget -= 1;
L_001CE358:
    c.r[2].d[0] = c.r[19].d[0] & 8ull;
    c.budget -= 1;
L_001CE35C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] & 16ull;  if (t) { goto L_001CE3DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE36Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 77u, depth + 1u); else { c.pc = 0x001D0940u; return; } if (c.pc != 0x001CE36Cu) [[unlikely]] return; }
L_001CE36C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE3D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CE3D8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CE3D8; } }
    set32(c.r[18], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001CE3AC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001CE3AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE3B8u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CE3B8u) [[unlikely]] return; }
L_001CE3B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CE3C4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CE3C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[20].w[0] + 228u));
    c.f[0] = ld32((c.r[1].w[0] + 20272u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE3D8u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001CE3D8u) [[unlikely]] return; }
L_001CE3D8:
    c.r[2].d[0] = c.r[19].d[0] & 16ull;
    c.budget -= 1;
L_001CE3DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] & 32ull;  if (t) { goto L_001CE45C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE3ECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 77u, depth + 1u); else { c.pc = 0x001D0940u; return; } if (c.pc != 0x001CE3ECu) [[unlikely]] return; }
L_001CE3EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE458; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CE458; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CE458; } }
    set32(c.r[18], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001CE42C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001CE42C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE438u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CE438u) [[unlikely]] return; }
L_001CE438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CE444; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CE444:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[20].w[0] + 228u));
    c.f[0] = ld32((c.r[1].w[0] + 20272u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE458u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001CE458u) [[unlikely]] return; }
L_001CE458:
    c.r[2].d[0] = c.r[19].d[0] & 32ull;
    c.budget -= 1;
L_001CE45C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE4F0; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CE4F0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001CE4F0; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_001CE4F0; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_001CE4F0; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CE4F0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 64u)));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CE4F0; } }
    set32(c.r[18], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001CE4C4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001CE4C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE4D0u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CE4D0u) [[unlikely]] return; }
L_001CE4D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CE4DC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CE4DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[20].w[0] + 228u));
    c.f[0] = ld32((c.r[1].w[0] + 20272u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE4F0u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001CE4F0u) [[unlikely]] return; }
L_001CE4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE4F8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CE4F8u) [[unlikely]] return; }
L_001CE4F8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE528; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 370u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_001CE52C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE51Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x001CE51Cu) [[unlikely]] return; }
L_001CE51C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE528; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CE528:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_001CE52C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 30u);  if (t) { goto L_001CE570; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001CE570; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 50u);  if (t) { goto L_001CE570; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001CE570; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 22u);  if (t) { goto L_001CE570; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001CE570; } }
    set32(c.r[2], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001CE738; } }
L_001CE570:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 922u));
    set32(c.r[5], 0u + 2u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE590u); if (c.r[2].d[0] == 0) c.r[5].d[0] = 0ull;  if (depth < kMaxDepth) unit_0031(c, 56u, depth + 1u); else { c.pc = 0x001C4830u; return; } if (c.pc != 0x001CE590u) [[unlikely]] return; }
L_001CE590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE5B8; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1333u);  if (t) { goto L_001CE5B4; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001CE5B8; } }
    set32(c.r[2], 0u + 1333u);
    c.budget -= 1;
L_001CE5B4:
    st32((c.r[21].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 1;
L_001CE5B8:
    set32(c.r[6], ld32((c.r[21].w[0] + 164u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE5CCu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001CE5CCu) [[unlikely]] return; }
L_001CE5CC:
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 40u);  if (t) { goto L_001CE5E0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001CE608; } }
L_001CE5E0:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 395u));
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[21].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_001CE608:
    set32(c.r[2], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_001CE640; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 393u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[21].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.budget -= 11;
L_001CE640:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 25u);  if (t) { goto L_001CE650; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001CE6CC; } }
L_001CE650:
    c.r[9].d[0] = ld8((c.r[20].w[0] + 393u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[7], 0u - 2u);
    set32(c.r[4], c.r[2].w[0] << 3);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u - 33u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[3], 0u - 9u);
    c.r[2].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[20].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[20].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[21].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[21].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[21].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 31;
L_001CE6CC:
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CE730; } }
    c.r[7].d[0] = ld8((c.r[21].w[0] + 393u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 2u);
    set32(c.r[4], c.r[2].w[0] << 3);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], 0u - 9u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[21].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[20].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[21].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 22;
L_001CE730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_001CE740; } }
L_001CE738:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CE73C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_001CE740:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001CE770:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[2], 0u + 15120u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001CE7F0; } }
    set32(c.r[2], 0u + 15130u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CE7F0; } }
    set32(c.r[2], 0u + 15140u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CE7F0; } }
    set32(c.r[2], 0u + 15110u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CE7F0; } }
    set32(c.r[2], 0u + 15115u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CE814; } }
L_001CE7F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 168u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE808u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x00168C20u; return; } if (c.pc != 0x001CE808u) [[unlikely]] return; }
L_001CE808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CE814; } }
    c.r[19].d[0] = c.r[19].d[0] | 1ull;
    c.budget -= 1;
L_001CE814:
    set32(c.r[4], ld32((c.r[21].w[0] + 164u)));
    set32(c.r[2], 0u + 15250u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001CE828; } }
    c.r[19].d[0] = c.r[19].d[0] | 1ull;
    c.budget -= 1;
L_001CE828:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CEE5C; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 370u));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CEE58; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 920u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001CEE58; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE858u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 103u, depth + 1u); else { c.pc = 0x001C50A0u; return; } if (c.pc != 0x001CE858u) [[unlikely]] return; }
L_001CE858:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CE86C; } }
    c.r[2].d[0] = c.r[19].d[0] & 56ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CEE58; } }
L_001CE86C:
    set32(c.r[4], ld32((c.r[20].w[0] + 240u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE87Cu); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001CE87Cu) [[unlikely]] return; }
L_001CE87C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], ld32((c.r[21].w[0] + 144u)));
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 128u)));
    c.f[1] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 128u)));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 200u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 240u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 196u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 240u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE8D4u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001CE8D4u) [[unlikely]] return; }
L_001CE8D4:
    c.f[2] = ld32((c.r[20].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20200u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001CE900; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_001CE91C; } }
L_001CE900:
    c.f[1] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CE91C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_001CE91C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20200u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001CE940; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_001CE95C; } }
L_001CE940:
    c.f[1] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CE95C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_001CE95C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 20192u));
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 20096u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CE998; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[21].w[0] + 240u)));  if (t) { goto L_001CE9B4; } }
L_001CE998:
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[21].w[0] + 240u)));
    c.budget -= 7;
L_001CE9B4:
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE9C8u); set32(c.r[5], ld32((c.r[20].w[0] + 240u)));  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001CE9C8u) [[unlikely]] return; }
L_001CE9C8:
    c.f[2] = ld32((c.r[21].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20200u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001CE9F4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_001CEA10; } }
L_001CE9F4:
    c.f[1] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CEA10; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_001CEA10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20200u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001CEA34; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_001CEA50; } }
L_001CEA34:
    c.f[1] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CEA50; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_001CEA50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 20192u));
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 20096u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CEA8C; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001CEAA8; } }
L_001CEA8C:
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001CEAA8:
    c.r[3].d[0] = c.r[2].d[0] & 4095ull;
    c.r[2].d[0] = c.r[3].sd[0] < 768ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001CEAC4; } }
    c.r[1].d[0] = c.r[3].sd[0] < 3329ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001CEACC; } }
L_001CEAC4:
    set32(c.r[17], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_001CEACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEAD4u);  if (depth < kMaxDepth) unit_0034(c, 188u, depth + 1u); else { c.pc = 0x001D2630u; return; } if (c.pc != 0x001CEAD4u) [[unlikely]] return; }
L_001CEAD4:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEAE0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 85u, depth + 1u); else { c.pc = 0x001D0B30u; return; } if (c.pc != 0x001CEAE0u) [[unlikely]] return; }
L_001CEAE0:
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.r[22].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEAF0u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0034(c, 224u, depth + 1u); else { c.pc = 0x001D33B0u; return; } if (c.pc != 0x001CEAF0u) [[unlikely]] return; }
L_001CEAF0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 68u)));
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEB08u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x001CEB08u) [[unlikely]] return; }
L_001CEB08:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[0];  if (t) { goto L_001CEB98; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull; c.r[2].d[0] = c.r[19].d[0] & 2ull;  if (t) { goto L_001CEB9C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_001CEB98; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_001CEB98; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_001CEB98; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CEB98; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CEB98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001CEB98; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001CEB70; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001CEB70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEB7Cu); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CEB7Cu) [[unlikely]] return; }
L_001CEB7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CEB88; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CEB88:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEB98u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001CEB98u) [[unlikely]] return; }
L_001CEB98:
    c.r[2].d[0] = c.r[19].d[0] & 2ull;
    c.budget -= 1;
L_001CEB9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] & 4ull;  if (t) { goto L_001CEC30; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_001CEC2C; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_001CEC2C; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_001CEC2C; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CEC2C; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != c.r[3].d[0];  if (t) { goto L_001CEC2C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CEC2C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CEC2C; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001CEC04; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001CEC04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEC10u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CEC10u) [[unlikely]] return; }
L_001CEC10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CEC1C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CEC1C:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEC2Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001CEC2Cu) [[unlikely]] return; }
L_001CEC2C:
    c.r[2].d[0] = c.r[19].d[0] & 4ull;
    c.budget -= 1;
L_001CEC30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] & 64ull;  if (t) { goto L_001CEC5C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001CEC58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEC4Cu);  if (depth < kMaxDepth) unit_0034(c, 106u, depth + 1u); else { c.pc = 0x001D0ED0u; return; } if (c.pc != 0x001CEC4Cu) [[unlikely]] return; }
L_001CEC4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CEC58; } }
    set32(c.r[18], 0u + 3u);
    c.budget -= 1;
L_001CEC58:
    c.r[2].d[0] = c.r[19].d[0] & 64ull;
    c.budget -= 1;
L_001CEC5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] & 8ull;  if (t) { goto L_001CEC88; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001CEC84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEC78u);  if (depth < kMaxDepth) unit_0034(c, 103u, depth + 1u); else { c.pc = 0x001D0E60u; return; } if (c.pc != 0x001CEC78u) [[unlikely]] return; }
L_001CEC78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CEC84; } }
    set32(c.r[18], 0u + 4u);
    c.budget -= 1;
L_001CEC84:
    c.r[2].d[0] = c.r[19].d[0] & 8ull;
    c.budget -= 1;
L_001CEC88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] & 16ull;  if (t) { goto L_001CED08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEC98u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 77u, depth + 1u); else { c.pc = 0x001D0940u; return; } if (c.pc != 0x001CEC98u) [[unlikely]] return; }
L_001CEC98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CED04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CED04; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CED04; } }
    set32(c.r[18], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001CECD8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001CECD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CECE4u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CECE4u) [[unlikely]] return; }
L_001CECE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CECF0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CECF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[20].w[0] + 228u));
    c.f[0] = ld32((c.r[1].w[0] + 20272u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CED04u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001CED04u) [[unlikely]] return; }
L_001CED04:
    c.r[2].d[0] = c.r[19].d[0] & 16ull;
    c.budget -= 1;
L_001CED08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] & 32ull;  if (t) { goto L_001CED88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CED18u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 77u, depth + 1u); else { c.pc = 0x001D0940u; return; } if (c.pc != 0x001CED18u) [[unlikely]] return; }
L_001CED18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CED84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CED84; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CED84; } }
    set32(c.r[18], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001CED58; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001CED58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CED64u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CED64u) [[unlikely]] return; }
L_001CED64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CED70; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CED70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[20].w[0] + 228u));
    c.f[0] = ld32((c.r[1].w[0] + 20272u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CED84u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001CED84u) [[unlikely]] return; }
L_001CED84:
    c.r[2].d[0] = c.r[19].d[0] & 32ull;
    c.budget -= 1;
L_001CED88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CEE1C; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CEE1C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001CEE1C; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_001CEE1C; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_001CEE1C; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CEE1C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 64u)));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CEE1C; } }
    set32(c.r[18], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001CEDF0; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001CEDF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEDFCu); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CEDFCu) [[unlikely]] return; }
L_001CEDFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CEE08; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CEE08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[20].w[0] + 228u));
    c.f[0] = ld32((c.r[1].w[0] + 20272u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEE1Cu); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001CEE1Cu) [[unlikely]] return; }
L_001CEE1C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001CEE58; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 164u)));
    set32(c.r[2], 0u + 15250u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[3].w[0] + c.r[18].w[0]);  if (t) { goto L_001CEE3C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 632u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001CEE3C:
    set32(c.r[7], ld32((c.r[21].w[0] + 168u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEE50u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 280u, depth + 1u); else { c.pc = 0x001EBEE0u; return; } if (c.pc != 0x001CEE50u) [[unlikely]] return; }
L_001CEE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CEE5C; } }
L_001CEE58:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CEE5C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001CEE90:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[20], ld32((c.r[4].w[0] + 440u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEED0u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0013C600u; return; } if (c.pc != 0x001CEED0u) [[unlikely]] return; }
L_001CEED0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEEE0u); c.r[5].d[0] = c.r[2].d[0] | 16722ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CEEE0u) [[unlikely]] return; }
L_001CEEE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001CEEEC; } }
    set32(c.r[19], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CEEEC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CEEFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CEEFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEF04u);  if (depth < kMaxDepth) unit_0034(c, 200u, depth + 1u); else { c.pc = 0x001D2B10u; return; } if (c.pc != 0x001CEF04u) [[unlikely]] return; }
L_001CEF04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CEF2C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43410000u);  if (t) { goto L_001CEF30; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[2], 0u + 220u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CEF2C; } }
    set32(c.r[19], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 1;
L_001CEF2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43410000u);
    c.budget -= 1;
L_001CEF30:
    set32(c.r[4], c.r[19].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEF3Cu); c.r[5].d[0] = c.r[2].d[0] | 21569ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CEF3Cu) [[unlikely]] return; }
L_001CEF3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_001CEF48; } }
    set32(c.r[22], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CEF48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[19].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEF58u); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CEF58u) [[unlikely]] return; }
L_001CEF58:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CEF74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { [[clang::musttail]] return unit_0034(c, 39u, depth); } }
L_001CEF74:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CEF88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CEF88:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CEFA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CEFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEFACu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CEFACu) [[unlikely]] return; }
L_001CEFAC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001CEFE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEFC0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x001CEFC0u) [[unlikely]] return; }
L_001CEFC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEFCCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x001CEFCCu) [[unlikely]] return; }
L_001CEFCC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001CEFDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CEFDC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001CEFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEFE8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 360u, depth + 1u); else { c.pc = 0x002A7870u; return; } if (c.pc != 0x001CEFE8u) [[unlikely]] return; }
L_001CEFE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CEFF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CEFF8:
    set32(c.r[4], ld32((c.r[18].w[0] + 440u)));
    set32(c.r[2], 0u + 12090u);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF010; } }
    st32((c.r[4].w[0] + 60u), c.r[19].w[0]);
    c.budget -= 1;
L_001CF010:
    set32(c.r[4], ld32((c.r[18].w[0] + 440u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[19].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001CF0E0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF028u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 56u, depth + 1u); else { c.pc = 0x001C4830u; return; } if (c.pc != 0x001CF028u) [[unlikely]] return; }
L_001CF028:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF034u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 108u, depth + 1u); else { c.pc = 0x001D0EF0u; return; } if (c.pc != 0x001CF034u) [[unlikely]] return; }
L_001CF034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF040; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CF040:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CF0D8; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 2u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 15476u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF05Cu); st32((c.r[20].w[0] + 644u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001CF05Cu) [[unlikely]] return; }
L_001CF05C:
    set32(c.r[3], ld32((c.r[20].w[0] + 644u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[4], ld32((c.r[20].w[0] + 240u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF080u); set32(c.r[5], c.r[2].w[0] + 288u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001CF080u) [[unlikely]] return; }
L_001CF080:
    st32((c.r[20].w[0] + 212u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20200u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001CF0AC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 212u), c.f[0]);  if (t) { goto L_001CF0CC; } }
L_001CF0AC:
    c.f[1] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001CF0D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_001CF0CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001CF0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CF0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001CF31C; } }
L_001CF0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF0E8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001CF0E8u) [[unlikely]] return; }
L_001CF0E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF2D4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[2], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CF2D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF108u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001CF108u) [[unlikely]] return; }
L_001CF108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CF17C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 240u)));
    c.f[12] = ld32((c.r[1].w[0] + 20136u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF124u); set32(c.r[4], c.r[20].w[0] + 208u);  if (depth < kMaxDepth) unit_0011(c, 83u, depth + 1u); else { c.pc = 0x00145900u; return; } if (c.pc != 0x001CF124u) [[unlikely]] return; }
L_001CF124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001CF178; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 240u)));
    c.f[12] = ld32((c.r[1].w[0] + 20136u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF13Cu); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0011(c, 83u, depth + 1u); else { c.pc = 0x00145900u; return; } if (c.pc != 0x001CF13Cu) [[unlikely]] return; }
L_001CF13C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001CF178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF14Cu);  if (depth < kMaxDepth) unit_0031(c, 202u, depth + 1u); else { c.pc = 0x001C6F20u; return; } if (c.pc != 0x001CF14Cu) [[unlikely]] return; }
L_001CF14C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF154u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 202u, depth + 1u); else { c.pc = 0x001C6F20u; return; } if (c.pc != 0x001CF154u) [[unlikely]] return; }
L_001CF154:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF160u); set32(c.r[5], 0u + 807u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001CF160u) [[unlikely]] return; }
L_001CF160:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 807u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF178u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001CF178u) [[unlikely]] return; }
L_001CF178:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001CF17C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF188u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 56u, depth + 1u); else { c.pc = 0x001C4830u; return; } if (c.pc != 0x001CF188u) [[unlikely]] return; }
L_001CF188:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF1A4; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 370u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 370u));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_001CF1A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF1C0; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
L_001CF1C0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CF278; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 240u)));
    c.f[12] = ld32((c.r[1].w[0] + 20136u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF1E0u); set32(c.r[4], c.r[20].w[0] + 208u);  if (depth < kMaxDepth) unit_0011(c, 83u, depth + 1u); else { c.pc = 0x00145900u; return; } if (c.pc != 0x001CF1E0u) [[unlikely]] return; }
L_001CF1E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001CF274; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 240u)));
    c.f[12] = ld32((c.r[1].w[0] + 20136u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF1F8u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0011(c, 83u, depth + 1u); else { c.pc = 0x00145900u; return; } if (c.pc != 0x001CF1F8u) [[unlikely]] return; }
L_001CF1F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001CF274; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF20Cu); set32(c.r[6], 0u + 806u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001CF20Cu) [[unlikely]] return; }
L_001CF20C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001CF218; } }
    set32(c.r[20], c.r[20].w[0] + 436u);
    c.budget -= 1;
L_001CF218:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF224u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CF224u) [[unlikely]] return; }
L_001CF224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CF230; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CF230:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF240u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001CF240u) [[unlikely]] return; }
L_001CF240:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CF24C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001CF24C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF258u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CF258u) [[unlikely]] return; }
L_001CF258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CF264; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CF264:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF274u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001CF274u) [[unlikely]] return; }
L_001CF274:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001CF278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF280u);  if (depth < kMaxDepth) unit_0034(c, 97u, depth + 1u); else { c.pc = 0x001D0D70u; return; } if (c.pc != 0x001CF280u) [[unlikely]] return; }
L_001CF280:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CF2A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF290u);  if (depth < kMaxDepth) unit_0034(c, 90u, depth + 1u); else { c.pc = 0x001D0BC0u; return; } if (c.pc != 0x001CF290u) [[unlikely]] return; }
L_001CF290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CF2A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF2A0u);  if (depth < kMaxDepth) unit_0034(c, 61u, depth + 1u); else { c.pc = 0x001D06C0u; return; } if (c.pc != 0x001CF2A0u) [[unlikely]] return; }
L_001CF2A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF2CC; } }
L_001CF2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF2B0u); set32(c.r[4], ld32((c.r[19].w[0] + 48u)));  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x001CF2B0u) [[unlikely]] return; }
L_001CF2B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001CF2CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF2C0u);  if (depth < kMaxDepth) unit_0031(c, 202u, depth + 1u); else { c.pc = 0x001C6F20u; return; } if (c.pc != 0x001CF2C0u) [[unlikely]] return; }
L_001CF2C0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF2CCu); set32(c.r[5], 0u + 390u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001CF2CCu) [[unlikely]] return; }
L_001CF2CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CF2D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF2DCu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CF2DCu) [[unlikely]] return; }
L_001CF2DC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF31C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CF31C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF300u);  if (depth < kMaxDepth) unit_0034(c, 75u, depth + 1u); else { c.pc = 0x001D08A0u; return; } if (c.pc != 0x001CF300u) [[unlikely]] return; }
L_001CF300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF31C; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001CF31C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF31Cu);  if (depth < kMaxDepth) unit_0031(c, 60u, depth + 1u); else { c.pc = 0x001C4980u; return; } if (c.pc != 0x001CF31Cu) [[unlikely]] return; }
L_001CF31C:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 393u));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 61;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF374; } }
    c.r[5].d[0] = ld8((c.r[20].w[0] + 928u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF344u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 35u, depth + 1u); else { c.pc = 0x001B0680u; return; } if (c.pc != 0x001CF344u) [[unlikely]] return; }
L_001CF344:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF350u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 317u, depth + 1u); else { c.pc = 0x001FF2F0u; return; } if (c.pc != 0x001CF350u) [[unlikely]] return; }
L_001CF350:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF35Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 317u, depth + 1u); else { c.pc = 0x001FF2F0u; return; } if (c.pc != 0x001CF35Cu) [[unlikely]] return; }
L_001CF35C:
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 640u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 868u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CF374:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001CF384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CF384:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001CF454; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[2], 0u + 220u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001CF3B0; } }
    set32(c.r[2], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 234u);  if (t) { goto L_001CF3B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF3B4; } }
L_001CF3B0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_001CF3B4:
    set32(c.r[2], 0u + 220u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001CF3D0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 636u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 234u);  if (t) { goto L_001CF3D4; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_001CF3D0:
    set32(c.r[2], 0u + 234u);
    c.budget -= 1;
L_001CF3D4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF3E0; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_001CF3E0:
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[2], 0u + 15700u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CF410; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 168u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF408u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 56u, depth + 1u); else { c.pc = 0x001C4830u; return; } if (c.pc != 0x001CF408u) [[unlikely]] return; }
L_001CF408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_001CF454; } }
L_001CF410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF418u);  if (depth < kMaxDepth) unit_0031(c, 56u, depth + 1u); else { c.pc = 0x001C4830u; return; } if (c.pc != 0x001CF418u) [[unlikely]] return; }
L_001CF418:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF434; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 370u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 370u));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_001CF434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_001CF454; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
L_001CF454:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001CF478; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[20].w[0] + 920u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF470u); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 229u, depth + 1u); else { c.pc = 0x001CA2A0u; return; } if (c.pc != 0x001CF470u) [[unlikely]] return; }
L_001CF470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0034(c, 16u, depth); } }
L_001CF478:
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 920u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 220u);  if (t) { goto L_001CF4B8; } }
    set32(c.r[2], 0u + 220u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CF4AC; } }
    set32(c.r[2], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 234u);  if (t) { goto L_001CF4A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF4B4; } }
L_001CF4A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001CF4AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CF4B4:
    set32(c.r[2], 0u + 220u);
    c.budget -= 1;
L_001CF4B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF4C8u); set32(c.r[4], ld32((c.r[19].w[0] + 48u)));  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x001CF4C8u) [[unlikely]] return; }
L_001CF4C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF4E4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 980u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 912u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CF4E4; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001CF4E4:
    set32(c.r[5], ld32((c.r[19].w[0] + 912u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF4F8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 246u, depth + 1u); else { c.pc = 0x001C7860u; return; } if (c.pc != 0x001CF4F8u) [[unlikely]] return; }
L_001CF4F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CF508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CF508:
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[2], 0u + 53u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 234u);  if (t) { goto L_001CF56C; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 370u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CF564; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF530u); set32(c.r[4], ld32((c.r[20].w[0] + 912u)));  if (depth < kMaxDepth) unit_0049(c, 345u, depth + 1u); else { c.pc = 0x00227F40u; return; } if (c.pc != 0x001CF530u) [[unlikely]] return; }
L_001CF530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF550; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 912u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF548u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 250u, depth + 1u); else { c.pc = 0x0029FD90u; return; } if (c.pc != 0x001CF548u) [[unlikely]] return; }
L_001CF548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF560; } }
L_001CF550:
    set32(c.r[5], ld32((c.r[19].w[0] + 912u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF560u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 145u, depth + 1u); else { c.pc = 0x001C9640u; return; } if (c.pc != 0x001CF560u) [[unlikely]] return; }
L_001CF560:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001CF564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CF56C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF5A0; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 370u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CF598; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 912u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF594u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 179u, depth + 1u); else { c.pc = 0x001C9B00u; return; } if (c.pc != 0x001CF594u) [[unlikely]] return; }
L_001CF594:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001CF598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CF5A0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CF5D8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[2], 0u + 15700u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF5D4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 168u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF5D4; } }
    st32((c.r[19].w[0] + 640u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CF5D4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001CF5D8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF5E4u); c.r[23].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 243u, depth + 1u); else { c.pc = 0x001C7790u; return; } if (c.pc != 0x001CF5E4u) [[unlikely]] return; }
L_001CF5E4:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF5F4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 243u, depth + 1u); else { c.pc = 0x001C7790u; return; } if (c.pc != 0x001CF5F4u) [[unlikely]] return; }
L_001CF5F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001CF600; } }
    set32(c.r[23], 0u + 1u);
    c.budget -= 1;
L_001CF600:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);  if (t) { goto L_001CF60C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001CF60C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF614u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CF614u) [[unlikely]] return; }
L_001CF614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF624; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001CF628; } }
L_001CF624:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CF628:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001CF664; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[2].w[0] + 68u));
    c.f[0] = ld32((c.r[1].w[0] + 20328u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CF660; } }
    c.r[4].d[0] = ld8((c.r[20].w[0] + 922u));
    set32(c.r[2], 0u - 25u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 922u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001CF660:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_001CF664:
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[20].w[0] + 920u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF678u); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 229u, depth + 1u); else { c.pc = 0x001CA2A0u; return; } if (c.pc != 0x001CF678u) [[unlikely]] return; }
L_001CF678:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001CF690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CF690:
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[2], 0u + 15250u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CF76C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF6ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 56u, depth + 1u); else { c.pc = 0x001C4830u; return; } if (c.pc != 0x001CF6ACu) [[unlikely]] return; }
L_001CF6AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001CF76C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF6C0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 103u, depth + 1u); else { c.pc = 0x001C50A0u; return; } if (c.pc != 0x001CF6C0u) [[unlikely]] return; }
L_001CF6C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CF768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF6D0u);  if (depth < kMaxDepth) unit_0034(c, 158u, depth + 1u); else { c.pc = 0x001D1A70u; return; } if (c.pc != 0x001CF6D0u) [[unlikely]] return; }
L_001CF6D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CF704; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF6E4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 95u, depth + 1u); else { c.pc = 0x001E52C0u; return; } if (c.pc != 0x001CF6E4u) [[unlikely]] return; }
L_001CF6E4:
    c.r[5].d[0] = ld8((c.r[19].w[0] + 392u));
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CF704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF70Cu);  if (depth < kMaxDepth) unit_0034(c, 108u, depth + 1u); else { c.pc = 0x001D0EF0u; return; } if (c.pc != 0x001CF70Cu) [[unlikely]] return; }
L_001CF70C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001CF73C; } }
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF720u); set32(c.r[5], 0u + 1212u);  if (depth < kMaxDepth) unit_001A(c, 52u, depth + 1u); else { c.pc = 0x00168C40u; return; } if (c.pc != 0x001CF720u) [[unlikely]] return; }
L_001CF720:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF734u); set32(c.r[6], 0u + 1212u);  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001CF734u) [[unlikely]] return; }
L_001CF734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CF73C:
    set32(c.r[2], 0u + 15490u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[7], ld32((c.r[20].w[0] + 168u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF758u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 280u, depth + 1u); else { c.pc = 0x001EBEE0u; return; } if (c.pc != 0x001CF758u) [[unlikely]] return; }
L_001CF758:
    set32(c.r[3], ld32((c.r[19].w[0] + 644u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 644u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CF768:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CF76C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CFD14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF77Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 108u, depth + 1u); else { c.pc = 0x001D0EF0u; return; } if (c.pc != 0x001CF77Cu) [[unlikely]] return; }
L_001CF77C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001CF7B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF794u); set32(c.r[5], 0u + 1212u);  if (depth < kMaxDepth) unit_001A(c, 52u, depth + 1u); else { c.pc = 0x00168C40u; return; } if (c.pc != 0x001CF794u) [[unlikely]] return; }
L_001CF794:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF7A8u); set32(c.r[6], 0u + 1212u);  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001CF7A8u) [[unlikely]] return; }
L_001CF7A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CF7B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF7B8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 103u, depth + 1u); else { c.pc = 0x001C50A0u; return; } if (c.pc != 0x001CF7B8u) [[unlikely]] return; }
L_001CF7B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF824; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[2], 0u + 15120u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15490u);  if (t) { goto L_001CF7FC; } }
    set32(c.r[2], 0u + 15130u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15140u);  if (t) { goto L_001CF7F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CF7F8; } }
    set32(c.r[2], 0u + 15110u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15115u);  if (t) { goto L_001CF7F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF824; } }
L_001CF7F8:
    set32(c.r[2], 0u + 15490u);
    c.budget -= 1;
L_001CF7FC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[7], ld32((c.r[20].w[0] + 168u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF814u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 280u, depth + 1u); else { c.pc = 0x001EBEE0u; return; } if (c.pc != 0x001CF814u) [[unlikely]] return; }
L_001CF814:
    set32(c.r[3], ld32((c.r[19].w[0] + 644u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 644u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CF824:
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[2], 0u + 1610u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001CF840; } }
    set32(c.r[2], 0u + 1611u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF854; } }
L_001CF840:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF84Cu); set32(c.r[6], 0u + 1606u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001CF84Cu) [[unlikely]] return; }
L_001CF84C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CF854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF85Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 121u, depth + 1u); else { c.pc = 0x001D1130u; return; } if (c.pc != 0x001CF85Cu) [[unlikely]] return; }
L_001CF85C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001CF894; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CF894; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 368u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1212u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF888u); st8((c.r[20].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001CF888u) [[unlikely]] return; }
L_001CF888:
    st32((c.r[19].w[0] + 640u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CF894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF89Cu);  if (depth < kMaxDepth) unit_0031(c, 202u, depth + 1u); else { c.pc = 0x001C6F20u; return; } if (c.pc != 0x001CF89Cu) [[unlikely]] return; }
L_001CF89C:
    c.r[4].d[0] = c.r[16].d[0] << 48;
    set32(c.r[18], 0u + 809u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF8ACu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0034(c, 224u, depth + 1u); else { c.pc = 0x001D33B0u; return; } if (c.pc != 0x001CF8ACu) [[unlikely]] return; }
L_001CF8AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CF970; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CF938; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_001CF930; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 1u));
    c.r[2].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;  if (t) { goto L_001CF8EC; } }
    c.r[1].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CF8EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull | 33579ull;  if (t) { goto L_001CF904; } }
L_001CF8EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001CF908; } }
    c.r[1].d[0] = c.r[3].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CF904; } }
    set32(c.r[18], 0u + 811u);
    c.budget -= 1;
L_001CF904:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001CF908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF910u);  if (depth < kMaxDepth) unit_0034(c, 141u, depth + 1u); else { c.pc = 0x001D1670u; return; } if (c.pc != 0x001CF910u) [[unlikely]] return; }
L_001CF910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CF96C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF920u); set32(c.r[18], 0u + 813u);  if (depth < kMaxDepth) unit_0034(c, 103u, depth + 1u); else { c.pc = 0x001D0E60u; return; } if (c.pc != 0x001CF920u) [[unlikely]] return; }
L_001CF920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF96C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1262u);  if (t) { goto L_001CF96C; } }
L_001CF930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 903u);  if (t) { goto L_001CF96C; } }
L_001CF938:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001CF94C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 224u);  if (t) { goto L_001CF96C; } }
L_001CF94C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF95C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1654u);  if (t) { goto L_001CF96C; } }
L_001CF95C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CF96C; } }
    set32(c.r[18], 0u + 1572u);
    c.budget -= 1;
L_001CF96C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001CF970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF978u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001CF978u) [[unlikely]] return; }
L_001CF978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CF98C; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_001CF98C; } }
    set32(c.r[18], 0u + 812u);
    c.budget -= 1;
L_001CF98C:
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[2], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[18].d[0] & 32767ull;  if (t) { goto L_001CF9AC; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_001CF9A8; } }
    set32(c.r[18], 0u + 806u);
    c.budget -= 1;
L_001CF9A8:
    c.r[17].d[0] = c.r[18].d[0] & 32767ull;
    c.budget -= 1;
L_001CF9AC:
    c.r[2].d[0] = c.r[17].sd[0] < 800ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].sd[0] < 900ll ? 1ull : 0ull;  if (t) { goto L_001CF9C4; } }
    c.r[1].d[0] = c.r[17].sd[0] < 900ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CF9F4; } }
L_001CF9C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[17].sd[0] < 1000ll ? 1ull : 0ull;  if (t) { goto L_001CF9D4; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CF9F4; } }
L_001CF9D4:
    set32(c.r[2], 0u + 812u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1250u);  if (t) { goto L_001CF9F4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001CF9F4; } }
    set32(c.r[2], 0u + 1262u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 224u);  if (t) { goto L_001CFCCC; } }
L_001CF9F4:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 370u));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CFBA4; } }
    set32(c.r[2], 0u + 809u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001CFBA4; } }
    ld128((c.r[19].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[3], c.r[29].w[0] + 240u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[19].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[19].w[0] + 240u)));
    set32(c.r[2], c.r[29].w[0] + 256u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 368u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA40u); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001CFA40u) [[unlikely]] return; }
L_001CFA40:
    c.f[1] = ld32((c.r[29].w[0] + 248u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1B00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CFBA4; } }
    ld128((c.r[20].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[3], c.r[29].w[0] + 192u);
    set32(c.r[23], c.r[29].w[0] + 208u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[20].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[20].w[0] + 240u)));
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 368u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA8Cu); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001CFA8Cu) [[unlikely]] return; }
L_001CFA8C:
    set32(c.r[2], c.r[29].w[0] + 256u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA9Cu); set32(c.r[5], ld32((c.r[23].w[0])));  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001CFA9Cu) [[unlikely]] return; }
L_001CFA9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 20192u));
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 20096u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CFAD8; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001CFAF4; } }
L_001CFAD8:
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001CFAF4:
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.r[1].d[0] = c.r[2].sd[0] < 1665ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CFBA4; } }
    c.r[1].d[0] = c.r[2].sd[0] < 2432ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CFBA4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 20192u));
    c.f[2] = ld32((c.r[29].w[0] + 180u));
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20096u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CFB50; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001CFB6C; } }
L_001CFB50:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001CFB6C:
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.r[1].d[0] = c.r[2].sd[0] < 1665ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CFBA4; } }
    c.r[1].d[0] = c.r[2].sd[0] < 2432ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CFBA4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFB98u); set32(c.r[6], 0u + 1676u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001CFB98u) [[unlikely]] return; }
L_001CFB98:
    st32((c.r[19].w[0] + 640u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CFBA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFBB4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 52u, depth + 1u); else { c.pc = 0x00168C40u; return; } if (c.pc != 0x001CFBB4u) [[unlikely]] return; }
L_001CFBB4:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 809u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001CFBD0; } }
    set32(c.r[2], 0u + 811u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001CFBF8; } }
L_001CFBD0:
    set32(c.r[5], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], 0u + 90u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFBE8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 42u, depth + 1u); else { c.pc = 0x00168960u; return; } if (c.pc != 0x001CFBE8u) [[unlikely]] return; }
L_001CFBE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CFBF8; } }
    set32(c.r[18], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[23], 0u + 90u);
    c.budget -= 2;
L_001CFBF8:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 1u));
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001CFC28; } }
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 809u);  if (t) { goto L_001CFC24; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001CFC24; } }
    set32(c.r[2], c.r[18].w[0] + 32767u);
    set32(c.r[18], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_001CFC24:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001CFC28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFC30u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 103u, depth + 1u); else { c.pc = 0x001C50A0u; return; } if (c.pc != 0x001CFC30u) [[unlikely]] return; }
L_001CFC30:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001CFD10; } }
    set32(c.r[2], 0u + 903u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001CFC4C; } }
    set32(c.r[23], 0u + 15u);
    c.budget -= 1;
L_001CFC4C:
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFC5Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001CFC5Cu) [[unlikely]] return; }
L_001CFC5C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001CFC68; } }
    set32(c.r[20], c.r[20].w[0] + 436u);
    c.budget -= 1;
L_001CFC68:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFC74u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CFC74u) [[unlikely]] return; }
L_001CFC74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CFC80; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CFC80:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFC90u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001CFC90u) [[unlikely]] return; }
L_001CFC90:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CFC9C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001CFC9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFCA8u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CFCA8u) [[unlikely]] return; }
L_001CFCA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CFCB4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CFCB4:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFCC4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001CFCC4u) [[unlikely]] return; }
L_001CFCC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 640u), 0u);  if (t) { goto L_001CFD08; } }
L_001CFCCC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001CFCFC; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFCE0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 95u, depth + 1u); else { c.pc = 0x001E52C0u; return; } if (c.pc != 0x001CFCE0u) [[unlikely]] return; }
L_001CFCE0:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 392u));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001CFD04; } }
L_001CFCFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFD04u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001CFD04u) [[unlikely]] return; }
L_001CFD04:
    st32((c.r[19].w[0] + 640u), 0u);
    c.budget -= 1;
L_001CFD08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CFD10:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001CFD14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFD1Cu);  if (depth < kMaxDepth) unit_0034(c, 131u, depth + 1u); else { c.pc = 0x001D14A0u; return; } if (c.pc != 0x001CFD1Cu) [[unlikely]] return; }
L_001CFD1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CFD74; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 168u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFD30u); set32(c.r[4], 0u + 15500u);  if (depth < kMaxDepth) unit_0032(c, 226u, depth + 1u); else { c.pc = 0x001CA1E0u; return; } if (c.pc != 0x001CFD30u) [[unlikely]] return; }
L_001CFD30:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 2u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12432u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFD54u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 317u, depth + 1u); else { c.pc = 0x001CB7A0u; return; } if (c.pc != 0x001CFD54u) [[unlikely]] return; }
L_001CFD54:
    set32(c.r[6], ld32((c.r[19].w[0] + 168u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFD6Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001CFD6Cu) [[unlikely]] return; }
L_001CFD6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CFD74:
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[2], 0u + 15700u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CFE34; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 644u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CFE34; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 168u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFDB8u); set32(c.r[4], 0u + 15710u);  if (depth < kMaxDepth) unit_0032(c, 226u, depth + 1u); else { c.pc = 0x001CA1E0u; return; } if (c.pc != 0x001CFDB8u) [[unlikely]] return; }
L_001CFDB8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[20].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CFDF4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CFDF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFDE8u);  if (depth < kMaxDepth) unit_0033(c, 17u, depth + 1u); else { c.pc = 0x001CC490u; return; } if (c.pc != 0x001CFDE8u) [[unlikely]] return; }
L_001CFDE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CFDF4; } }
    set32(c.r[16], 0u + 1574u);
    c.budget -= 1;
L_001CFDF4:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 12432u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE14u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 317u, depth + 1u); else { c.pc = 0x001CB7A0u; return; } if (c.pc != 0x001CFE14u) [[unlikely]] return; }
L_001CFE14:
    set32(c.r[6], ld32((c.r[19].w[0] + 168u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE2Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001CFE2Cu) [[unlikely]] return; }
L_001CFE2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CFE34:
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    set32(c.r[2], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0034(c, 10u, depth); } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 370u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0034(c, 9u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE5Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 103u, depth + 1u); else { c.pc = 0x001C50A0u; return; } if (c.pc != 0x001CFE5Cu) [[unlikely]] return; }
L_001CFE5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0034(c, 9u, depth); } }
    set32(c.r[4], ld32((c.r[19].w[0] + 240u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE74u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001CFE74u) [[unlikely]] return; }
L_001CFE74:
    c.f[2] = ld32((c.r[19].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20200u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001CFEA0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_001CFEBC; } }
L_001CFEA0:
    c.f[1] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CFEBC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_001CFEBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20200u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001CFEE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_001CFEFC; } }
L_001CFEE0:
    c.f[1] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CFEFC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_001CFEFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 20192u));
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 20096u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CFF38; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001CFF54; } }
L_001CFF38:
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001CFF54:
    c.r[3].d[0] = c.r[2].d[0] & 4095ull;
    c.r[2].d[0] = c.r[3].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001CFF70; } }
    c.r[1].d[0] = c.r[3].sd[0] < 3073ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001CFF78; } }
L_001CFF70:
    set32(c.r[18], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_001CFF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFF80u);  if (depth < kMaxDepth) unit_0034(c, 188u, depth + 1u); else { c.pc = 0x001D2630u; return; } if (c.pc != 0x001CFF80u) [[unlikely]] return; }
L_001CFF80:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFF8Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 85u, depth + 1u); else { c.pc = 0x001D0B30u; return; } if (c.pc != 0x001CFF8Cu) [[unlikely]] return; }
L_001CFF8C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[16].d[0] << 48;
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFFA0u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0034(c, 224u, depth + 1u); else { c.pc = 0x001D33B0u; return; } if (c.pc != 0x001CFFA0u) [[unlikely]] return; }
L_001CFFA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CFFBC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CFFBC; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CFFBC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0034(c, 9u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0034(c, 9u, depth); } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0034(c, 9u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFFE0u);  if (depth < kMaxDepth) unit_0034(c, 103u, depth + 1u); else { c.pc = 0x001D0E60u; return; } if (c.pc != 0x001CFFE0u) [[unlikely]] return; }
L_001CFFE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001CFFFC; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFFF4u); set32(c.r[6], 0u + 881u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001CFFF4u) [[unlikely]] return; }
L_001CFFF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0034(c, 38u, depth); } }
L_001CFFFC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0034(c, 1u, depth);
}

}
