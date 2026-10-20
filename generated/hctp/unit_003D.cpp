#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003D[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60,
    0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0,
    71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0,
    84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175,
    0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 209,
    0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0,
    267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0,
    0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 297, 0,
    0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0,
    317, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    330, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 342,
    0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346,
};

void unit_003D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001F4000;
    case 2u: goto L_001F4004;
    case 3u: goto L_001F400C;
    case 4u: goto L_001F406C;
    case 5u: goto L_001F4080;
    case 6u: goto L_001F4090;
    case 7u: goto L_001F40C8;
    case 8u: goto L_001F4110;
    case 9u: goto L_001F4130;
    case 10u: goto L_001F4148;
    case 11u: goto L_001F416C;
    case 12u: goto L_001F41A8;
    case 13u: goto L_001F41E8;
    case 14u: goto L_001F41F4;
    case 15u: goto L_001F4220;
    case 16u: goto L_001F4250;
    case 17u: goto L_001F4298;
    case 18u: goto L_001F42B0;
    case 19u: goto L_001F42D4;
    case 20u: goto L_001F42EC;
    case 21u: goto L_001F42F8;
    case 22u: goto L_001F437C;
    case 23u: goto L_001F43C0;
    case 24u: goto L_001F4400;
    case 25u: goto L_001F4418;
    case 26u: goto L_001F4440;
    case 27u: goto L_001F4460;
    case 28u: goto L_001F44A0;
    case 29u: goto L_001F45C8;
    case 30u: goto L_001F4694;
    case 31u: goto L_001F4734;
    case 32u: goto L_001F4754;
    case 33u: goto L_001F4898;
    case 34u: goto L_001F48B0;
    case 35u: goto L_001F4984;
    case 36u: goto L_001F4990;
    case 37u: goto L_001F4A04;
    case 38u: goto L_001F4A54;
    case 39u: goto L_001F4A60;
    case 40u: goto L_001F4B0C;
    case 41u: goto L_001F4B50;
    case 42u: goto L_001F4B7C;
    case 43u: goto L_001F4C44;
    case 44u: goto L_001F4CB4;
    case 45u: goto L_001F4D0C;
    case 46u: goto L_001F4D80;
    case 47u: goto L_001F4DC0;
    case 48u: goto L_001F4E78;
    case 49u: goto L_001F4EF0;
    case 50u: goto L_001F4F74;
    case 51u: goto L_001F5010;
    case 52u: goto L_001F5028;
    case 53u: goto L_001F5048;
    case 54u: goto L_001F5060;
    case 55u: goto L_001F5098;
    case 56u: goto L_001F50B4;
    case 57u: goto L_001F50CC;
    case 58u: goto L_001F50F4;
    case 59u: goto L_001F51C0;
    case 60u: goto L_001F51FC;
    case 61u: goto L_001F521C;
    case 62u: goto L_001F5230;
    case 63u: goto L_001F526C;
    case 64u: goto L_001F528C;
    case 65u: goto L_001F52A0;
    case 66u: goto L_001F52B0;
    case 67u: goto L_001F52C0;
    case 68u: goto L_001F52D0;
    case 69u: goto L_001F52E0;
    case 70u: goto L_001F52F0;
    case 71u: goto L_001F5300;
    case 72u: goto L_001F5310;
    case 73u: goto L_001F5320;
    case 74u: goto L_001F5330;
    case 75u: goto L_001F5340;
    case 76u: goto L_001F5368;
    case 77u: goto L_001F5384;
    case 78u: goto L_001F5390;
    case 79u: goto L_001F53B0;
    case 80u: goto L_001F53C0;
    case 81u: goto L_001F53D0;
    case 82u: goto L_001F53E0;
    case 83u: goto L_001F53F0;
    case 84u: goto L_001F5400;
    case 85u: goto L_001F5410;
    case 86u: goto L_001F542C;
    case 87u: goto L_001F5434;
    case 88u: goto L_001F54A0;
    case 89u: goto L_001F54B8;
    case 90u: goto L_001F54E0;
    case 91u: goto L_001F5640;
    case 92u: goto L_001F5654;
    case 93u: goto L_001F5660;
    case 94u: goto L_001F5674;
    case 95u: goto L_001F56A0;
    case 96u: goto L_001F56B0;
    case 97u: goto L_001F56D0;
    case 98u: goto L_001F56E4;
    case 99u: goto L_001F5828;
    case 100u: goto L_001F5840;
    case 101u: goto L_001F5854;
    case 102u: goto L_001F5860;
    case 103u: goto L_001F5890;
    case 104u: goto L_001F5938;
    case 105u: goto L_001F5960;
    case 106u: goto L_001F5998;
    case 107u: goto L_001F59C0;
    case 108u: goto L_001F59F8;
    case 109u: goto L_001F5A20;
    case 110u: goto L_001F5A44;
    case 111u: goto L_001F5B18;
    case 112u: goto L_001F5B30;
    case 113u: goto L_001F5B70;
    case 114u: goto L_001F5B84;
    case 115u: goto L_001F5B90;
    case 116u: goto L_001F5BB0;
    case 117u: goto L_001F5BD0;
    case 118u: goto L_001F5C08;
    case 119u: goto L_001F5C14;
    case 120u: goto L_001F5C20;
    case 121u: goto L_001F5C38;
    case 122u: goto L_001F5C50;
    case 123u: goto L_001F5C98;
    case 124u: goto L_001F5CDC;
    case 125u: goto L_001F5D00;
    case 126u: goto L_001F5D2C;
    case 127u: goto L_001F5D7C;
    case 128u: goto L_001F5DA4;
    case 129u: goto L_001F5E20;
    case 130u: goto L_001F5E4C;
    case 131u: goto L_001F5E7C;
    case 132u: goto L_001F5E9C;
    case 133u: goto L_001F5EB4;
    case 134u: goto L_001F5F14;
    case 135u: goto L_001F5F74;
    case 136u: goto L_001F5FE4;
    case 137u: goto L_001F6000;
    case 138u: goto L_001F6040;
    case 139u: goto L_001F6094;
    case 140u: goto L_001F6120;
    case 141u: goto L_001F6150;
    case 142u: goto L_001F6158;
    case 143u: goto L_001F6168;
    case 144u: goto L_001F61D4;
    case 145u: goto L_001F61F4;
    case 146u: goto L_001F6268;
    case 147u: goto L_001F6270;
    case 148u: goto L_001F6304;
    case 149u: goto L_001F6348;
    case 150u: goto L_001F638C;
    case 151u: goto L_001F63A8;
    case 152u: goto L_001F63B0;
    case 153u: goto L_001F6408;
    case 154u: goto L_001F6438;
    case 155u: goto L_001F6454;
    case 156u: goto L_001F64A4;
    case 157u: goto L_001F652C;
    case 158u: goto L_001F653C;
    case 159u: goto L_001F65C4;
    case 160u: goto L_001F6610;
    case 161u: goto L_001F66E0;
    case 162u: goto L_001F66F4;
    case 163u: goto L_001F6700;
    case 164u: goto L_001F6730;
    case 165u: goto L_001F6740;
    case 166u: goto L_001F6750;
    case 167u: goto L_001F6754;
    case 168u: goto L_001F6778;
    case 169u: goto L_001F67B0;
    case 170u: goto L_001F67C0;
    case 171u: goto L_001F67C8;
    case 172u: goto L_001F67D0;
    case 173u: goto L_001F67D8;
    case 174u: goto L_001F67E8;
    case 175u: goto L_001F67FC;
    case 176u: goto L_001F6814;
    case 177u: goto L_001F6830;
    case 178u: goto L_001F6840;
    case 179u: goto L_001F68A0;
    case 180u: goto L_001F6930;
    case 181u: goto L_001F6948;
    case 182u: goto L_001F6960;
    case 183u: goto L_001F69BC;
    case 184u: goto L_001F69D8;
    case 185u: goto L_001F69F0;
    case 186u: goto L_001F6A04;
    case 187u: goto L_001F6A34;
    case 188u: goto L_001F6A40;
    case 189u: goto L_001F6A8C;
    case 190u: goto L_001F6AA4;
    case 191u: goto L_001F6ABC;
    case 192u: goto L_001F6AD0;
    case 193u: goto L_001F6B1C;
    case 194u: goto L_001F6B3C;
    case 195u: goto L_001F6B74;
    case 196u: goto L_001F6BB0;
    case 197u: goto L_001F6C04;
    case 198u: goto L_001F6C0C;
    case 199u: goto L_001F6C14;
    case 200u: goto L_001F6C1C;
    case 201u: goto L_001F6C24;
    case 202u: goto L_001F6C2C;
    case 203u: goto L_001F6C34;
    case 204u: goto L_001F6C3C;
    case 205u: goto L_001F6C50;
    case 206u: goto L_001F6C60;
    case 207u: goto L_001F6C6C;
    case 208u: goto L_001F6C74;
    case 209u: goto L_001F6C7C;
    case 210u: goto L_001F6C84;
    case 211u: goto L_001F6C8C;
    case 212u: goto L_001F6C94;
    case 213u: goto L_001F6C9C;
    case 214u: goto L_001F6CA4;
    case 215u: goto L_001F6CAC;
    case 216u: goto L_001F6CBC;
    case 217u: goto L_001F6CD0;
    case 218u: goto L_001F6CE0;
    case 219u: goto L_001F6D00;
    case 220u: goto L_001F6D0C;
    case 221u: goto L_001F6D50;
    case 222u: goto L_001F6D9C;
    case 223u: goto L_001F6DF4;
    case 224u: goto L_001F6E20;
    case 225u: goto L_001F6E58;
    case 226u: goto L_001F6EA4;
    case 227u: goto L_001F7018;
    case 228u: goto L_001F7020;
    case 229u: goto L_001F7058;
    case 230u: goto L_001F7084;
    case 231u: goto L_001F7118;
    case 232u: goto L_001F71C4;
    case 233u: goto L_001F7270;
    case 234u: goto L_001F7298;
    case 235u: goto L_001F72B4;
    case 236u: goto L_001F72F0;
    case 237u: goto L_001F7308;
    case 238u: goto L_001F7314;
    case 239u: goto L_001F7324;
    case 240u: goto L_001F7334;
    case 241u: goto L_001F733C;
    case 242u: goto L_001F7350;
    case 243u: goto L_001F7374;
    case 244u: goto L_001F73D0;
    case 245u: goto L_001F7410;
    case 246u: goto L_001F741C;
    case 247u: goto L_001F7434;
    case 248u: goto L_001F7450;
    case 249u: goto L_001F7490;
    case 250u: goto L_001F749C;
    case 251u: goto L_001F74B4;
    case 252u: goto L_001F74D0;
    case 253u: goto L_001F7510;
    case 254u: goto L_001F751C;
    case 255u: goto L_001F7534;
    case 256u: goto L_001F7550;
    case 257u: goto L_001F759C;
    case 258u: goto L_001F75A8;
    case 259u: goto L_001F75B4;
    case 260u: goto L_001F75CC;
    case 261u: goto L_001F75F0;
    case 262u: goto L_001F7620;
    case 263u: goto L_001F7638;
    case 264u: goto L_001F7650;
    case 265u: goto L_001F7660;
    case 266u: goto L_001F7670;
    case 267u: goto L_001F7680;
    case 268u: goto L_001F7690;
    case 269u: goto L_001F76A0;
    case 270u: goto L_001F76B0;
    case 271u: goto L_001F76C0;
    case 272u: goto L_001F76D0;
    case 273u: goto L_001F76E0;
    case 274u: goto L_001F76F0;
    case 275u: goto L_001F7700;
    case 276u: goto L_001F774C;
    case 277u: goto L_001F7760;
    case 278u: goto L_001F7794;
    case 279u: goto L_001F77A0;
    case 280u: goto L_001F77E0;
    case 281u: goto L_001F7804;
    case 282u: goto L_001F782C;
    case 283u: goto L_001F784C;
    case 284u: goto L_001F7870;
    case 285u: goto L_001F7898;
    case 286u: goto L_001F78BC;
    case 287u: goto L_001F78EC;
    case 288u: goto L_001F7900;
    case 289u: goto L_001F7920;
    case 290u: goto L_001F7934;
    case 291u: goto L_001F7948;
    case 292u: goto L_001F795C;
    case 293u: goto L_001F7970;
    case 294u: goto L_001F7984;
    case 295u: goto L_001F79D8;
    case 296u: goto L_001F79F0;
    case 297u: goto L_001F79F8;
    case 298u: goto L_001F7A10;
    case 299u: goto L_001F7A18;
    case 300u: goto L_001F7A30;
    case 301u: goto L_001F7A38;
    case 302u: goto L_001F7A50;
    case 303u: goto L_001F7A58;
    case 304u: goto L_001F7A70;
    case 305u: goto L_001F7AE8;
    case 306u: goto L_001F7B00;
    case 307u: goto L_001F7B20;
    case 308u: goto L_001F7B30;
    case 309u: goto L_001F7B50;
    case 310u: goto L_001F7B60;
    case 311u: goto L_001F7B70;
    case 312u: goto L_001F7BA4;
    case 313u: goto L_001F7C04;
    case 314u: goto L_001F7C48;
    case 315u: goto L_001F7C5C;
    case 316u: goto L_001F7C70;
    case 317u: goto L_001F7C80;
    case 318u: goto L_001F7C94;
    case 319u: goto L_001F7CA0;
    case 320u: goto L_001F7CD0;
    case 321u: goto L_001F7D04;
    case 322u: goto L_001F7D1C;
    case 323u: goto L_001F7D38;
    case 324u: goto L_001F7D54;
    case 325u: goto L_001F7D70;
    case 326u: goto L_001F7DB0;
    case 327u: goto L_001F7DBC;
    case 328u: goto L_001F7DD4;
    case 329u: goto L_001F7DF0;
    case 330u: goto L_001F7E00;
    case 331u: goto L_001F7E14;
    case 332u: goto L_001F7E20;
    case 333u: goto L_001F7E34;
    case 334u: goto L_001F7E70;
    case 335u: goto L_001F7E84;
    case 336u: goto L_001F7E90;
    case 337u: goto L_001F7E9C;
    case 338u: goto L_001F7ED4;
    case 339u: goto L_001F7F10;
    case 340u: goto L_001F7F64;
    case 341u: goto L_001F7F70;
    case 342u: goto L_001F7F7C;
    case 343u: goto L_001F7F94;
    case 344u: goto L_001F7FB0;
    case 345u: goto L_001F7FE0;
    case 346u: goto L_001F7FFC;
    default: bad_entry(c, 0x001F4000u); return;
    }
L_001F4000:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001F4004:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001F400C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F406C; } }
    set32(c.r[2], c.r[16].w[0] - c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[16], c.r[2].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F4068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001F4070; } }
L_001F4068:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F406C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001F4070:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F4080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_001F4090:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001F40C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4200; } }
L_001F40C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F40C8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F40C8u) [[unlikely]] return; }
L_001F40C8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F40FC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 9076u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F40FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001F4204; } }
L_001F40FC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4110u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F4110u) [[unlikely]] return; }
L_001F4110:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4128; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F4120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4200; } }
L_001F4128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4130u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F4130u) [[unlikely]] return; }
L_001F4130:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F4178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4148u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F4148u) [[unlikely]] return; }
L_001F4148:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F4164; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F4178; } }
L_001F4164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F416Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F416Cu) [[unlikely]] return; }
L_001F416C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F41FC; } }
L_001F4178:
    set32(c.r[3], ld32((c.r[17].w[0] + 720u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[19].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F41A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4200; } }
L_001F41A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F41A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 5u, depth + 1u); else { c.pc = 0x001F4080u; return; } if (c.pc != 0x001F41A8u) [[unlikely]] return; }
L_001F41A8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F41BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4200; } }
L_001F41BC:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F41D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4200; } }
L_001F41D0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F41E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F41F4; } }
L_001F41E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F41E8u);  if (depth < kMaxDepth) unit_003D(c, 24u, depth + 1u); else { c.pc = 0x001F4400u; return; } if (c.pc != 0x001F41E8u) [[unlikely]] return; }
L_001F41E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F41F4u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003C(c, 315u, depth + 1u); else { c.pc = 0x001F3F70u; return; } if (c.pc != 0x001F41F4u) [[unlikely]] return; }
L_001F41F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4200; } }
L_001F41FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F4200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001F4204:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F4220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F4248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F43E4; } }
L_001F4248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4250u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F4250u) [[unlikely]] return; }
L_001F4250:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F4284; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 9076u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4284; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001F43E8; } }
L_001F4284:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F43E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4298u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F4298u) [[unlikely]] return; }
L_001F4298:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F42E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F42B0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F42B0u) [[unlikely]] return; }
L_001F42B0:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F42CC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F42E0; } }
L_001F42CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F42D4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F42D4u) [[unlikely]] return; }
L_001F42D4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F43E0; } }
L_001F42E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F42E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F42ECu);  if (depth < kMaxDepth) unit_003D(c, 24u, depth + 1u); else { c.pc = 0x001F4400u; return; } if (c.pc != 0x001F42ECu) [[unlikely]] return; }
L_001F42EC:
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F42F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 315u, depth + 1u); else { c.pc = 0x001F3F70u; return; } if (c.pc != 0x001F42F8u) [[unlikely]] return; }
L_001F42F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F43E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F434C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 640u), c.r[3].w[0]);  if (t) { goto L_001F43E4; } }
L_001F434C:
    set32(c.r[3], ld32((c.r[16].w[0] + 720u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F4374; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F43E4; } }
L_001F4374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F437Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 5u, depth + 1u); else { c.pc = 0x001F4080u; return; } if (c.pc != 0x001F437Cu) [[unlikely]] return; }
L_001F437C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F43E4; } }
L_001F4390:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F43A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F43E4; } }
L_001F43A4:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 54u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F43D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F43C0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F43C0u) [[unlikely]] return; }
L_001F43C0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F43D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F43E4; } }
L_001F43D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F43D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F43E4; } }
L_001F43E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F43E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001F43E8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F4400:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 32u);  if (t) { goto L_001F4410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4438; } }
L_001F4410:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001F4418:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001F4428; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_001F4428:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4418u | kUnwind; return; } goto L_001F4418; } }
L_001F4438:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F4440:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F448C; } }
L_001F4450:
    set32(c.r[7], c.r[4].w[0] + 32u);
    set32(c.r[3], c.r[4].w[0] + 40u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 4;
L_001F4460:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F447C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_001F447C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4460u | kUnwind; return; } goto L_001F4460; } }
L_001F448C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F44A0:
    set32(c.r[29], c.r[29].w[0] - 416u);
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
    st32((c.r[29].w[0] + 288u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 304u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 320u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 336u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 352u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 368u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 384u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 400u), c.r[11].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4504; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4D84; } }
L_001F4504:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    c.r[17].d[0] = c.r[17].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    st32((c.r[29].w[0] + 280u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    st32((c.r[16].w[0] + 720u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 724u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.budget -= 16;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001F458C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[17], c.r[2].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 28320u);
    set32(c.r[2], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F458C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[17], c.r[17].w[0] + 28320u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 164u)));
    st32((c.r[16].w[0] + 728u), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4590; } }
L_001F458C:
    st32((c.r[16].w[0] + 728u), 0u);
    c.budget -= 1;
L_001F4590:
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F45B4; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 732u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[16].w[0] + 732u), c.r[17].w[0]);
    c.budget -= 3;
L_001F45B4:
    set32(c.r[2], 0u + 100u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F45C8u);  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001F45C8u) [[unlikely]] return; }
L_001F45C8:
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F468C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F45F4; } }
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F45F8; } }
L_001F45F4:
    st32((c.r[29].w[0] + 228u), 0u);
    c.budget -= 1;
L_001F45F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[18], c.r[2].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[18].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F462C; } }
    set32(c.r[18], 0u + 20u);
    c.budget -= 1;
L_001F462C:
    c.r[1].d[0] = c.r[18].sd[0] < -20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F463C; } }
    set32(c.r[18], 0u - 20u);
    c.budget -= 1;
L_001F463C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_001F466C; } }
    set32(c.r[2], 0u - c.r[18].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[4].w[0] - 27936u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], 0u - c.r[3].w[0]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4684; } }
L_001F466C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 27936u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
L_001F4684:
    set32(c.r[2], c.r[19].w[0] + 100u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001F468C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4694u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F4694u) [[unlikely]] return; }
L_001F4694:
    c.r[5].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001F46D0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F46D0; } }
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001F46CC; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001F46CC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001F46D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 304u)));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[3].d[0] = c.r[2].d[0] << 52;
    c.r[2].d[0] = c.r[3].d[0] >> 58;
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] << 46;
    c.r[2].d[0] = c.r[2].d[0] >> 58;
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 58;
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 7u));
    c.r[2].d[0] = c.r[5].d[0] & 63ull;
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[4], c.r[2].w[0] + 52u);
    set32(c.r[5], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[6], 0u + 12u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4734u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001F4734u) [[unlikely]] return; }
L_001F4734:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[21], c.r[2].w[0] + 32u);
    set32(c.r[2], ld32((c.r[29].w[0] + 400u)));
    st32((c.r[2].w[0]), 0u);
    st32((c.r[29].w[0] + 272u), 0u);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F481C; } }
L_001F4754:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 27912u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F47F4; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 100u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F479C; } }
    breakpoint(c, 0x001F4798u);
    c.budget -= 1;
L_001F479C:
    c.r[23].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_001F47C0; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F47C0; } }
    set32(c.r[23], 0u + 1u);
    c.budget -= 1;
L_001F47C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 400u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 400u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.r[2].d[0] = c.r[23].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
L_001F47F4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < -100ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F4814; } }
    set32(c.r[2], 0u - 100u);
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001F4814:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 2u);
    c.budget -= 2;
L_001F481C:
    c.r[2].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4754u | kUnwind; return; } goto L_001F4754; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st16((c.r[16].w[0] + 904u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F4858; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 2;
L_001F4858:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[29].w[0] + 287u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 287u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4898u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F4898u) [[unlikely]] return; }
L_001F4898:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F48D0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F48B0u);  if (depth < kMaxDepth) unit_0034(c, 212u, depth + 1u); else { c.pc = 0x001D2FE0u; return; } if (c.pc != 0x001F48B0u) [[unlikely]] return; }
L_001F48B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F48D0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    c.r[1].d[0] = c.r[2].sd[0] < 76ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F48D0; } }
    set32(c.r[2], 0u + 76u);
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    c.budget -= 2;
L_001F48D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    c.r[1].d[0] = c.r[2].sd[0] < 76ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F4914; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4914; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4970; } }
L_001F4914:
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    c.r[1].d[0] = c.r[2].sd[0] < 204ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F4958; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4958; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[17], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4970; } }
L_001F4958:
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] << 2);
    c.budget -= 6;
L_001F4970:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4984u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001F4984u) [[unlikely]] return; }
L_001F4984:
    st32((c.r[29].w[0] + 260u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F49E4; } }
L_001F4990:
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[30], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_001F49D8; } }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 371u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F49D8; } }
    set32(c.r[2], ld32((c.r[30].w[0] + 624u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 6;
L_001F49D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 3;
L_001F49E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    c.r[2].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4990u | kUnwind; return; } goto L_001F4990; } }
    st32((c.r[29].w[0] + 256u), 0u);
    st32((c.r[29].w[0] + 252u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4A34; } }
L_001F4A04:
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F4A28; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 3;
L_001F4A28:
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 3;
L_001F4A34:
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    c.r[2].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4A04u | kUnwind; return; } goto L_001F4A04; } }
    st32((c.r[29].w[0] + 248u), 0u);
    st32((c.r[29].w[0] + 244u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4ACC; } }
L_001F4A54:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4AA8; } }
L_001F4A60:
    set32(c.r[2], c.r[22].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F4AA4; } }
    set32(c.r[2], c.r[22].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], c.r[22].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4AA4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    c.budget -= 2;
L_001F4AA4:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_001F4AA8:
    c.r[2].d[0] = c.r[22].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4A60u | kUnwind; return; } goto L_001F4A60; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4ADC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 3;
L_001F4ACC:
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4A54u | kUnwind; return; } goto L_001F4A54; } }
L_001F4ADC:
    set32(c.r[2], ld32((c.r[16].w[0] + 624u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F4B24; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[17], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 2));
    set32(c.r[4], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4B0Cu);  if (depth < kMaxDepth) unit_003D(c, 24u, depth + 1u); else { c.pc = 0x001F4400u; return; } if (c.pc != 0x001F4B0Cu) [[unlikely]] return; }
L_001F4B0C:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4B8C; } }
L_001F4B24:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F4B70; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[2].w[0] << 1);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 2));
    set32(c.r[4], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4B50u);  if (depth < kMaxDepth) unit_003D(c, 24u, depth + 1u); else { c.pc = 0x001F4400u; return; } if (c.pc != 0x001F4B50u) [[unlikely]] return; }
L_001F4B50:
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4B8C; } }
L_001F4B70:
    set32(c.r[4], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4B7Cu);  if (depth < kMaxDepth) unit_003D(c, 24u, depth + 1u); else { c.pc = 0x001F4400u; return; } if (c.pc != 0x001F4B7Cu) [[unlikely]] return; }
L_001F4B7C:
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_001F4B8C:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4BB4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F4BB4; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F4BB4:
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F4BCC; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[17], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 2));
    c.budget -= 3;
L_001F4BCC:
    c.f[0] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 640u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.r[1].d[0] = c.r[2].sd[0] < 801ll ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F4C28; } }
    set32(c.r[2], 0u + 800u);
    st32((c.r[16].w[0] + 640u), c.r[2].w[0]);
    c.budget -= 2;
L_001F4C28:
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3u));
    c.r[3].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4C44u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F4C44u) [[unlikely]] return; }
L_001F4C44:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F4C8C; } }
    set32(c.r[18], ld32((c.r[16].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001F4C8C; } }
    set32(c.r[18], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[18], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_001F4C84; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001F4C84:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 2;
L_001F4C8C:
    set32(c.r[2], ld32((c.r[16].w[0] + 764u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 764u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 240u), 0u);
    set32(c.r[2], c.r[16].w[0] + 436u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].d[0] = c.r[2].d[0] | 18512ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4CB4u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F4CB4u) [[unlikely]] return; }
L_001F4CB4:
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F4CD8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4CDC; } }
L_001F4CD8:
    st32((c.r[29].w[0] + 224u), 0u);
    c.budget -= 1;
L_001F4CDC:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F4D10; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4D0Cu);  if (depth < kMaxDepth) unit_003C(c, 313u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F4D0Cu) [[unlikely]] return; }
L_001F4D0C:
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 1;
L_001F4D10:
    set32(c.r[3], ld32((c.r[16].w[0] + 764u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F4D2C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[16].w[0] + 764u), c.r[2].w[0]);
    c.budget -= 2;
L_001F4D2C:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4D48; } }
    st32((c.r[16].w[0] + 572u), 0u);
    c.budget -= 1;
L_001F4D48:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 1623u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F4D80; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 896u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F4D80; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1645u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4D80u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F4D80u) [[unlikely]] return; }
L_001F4D80:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001F4D84:
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
    set32(c.r[29], c.r[29].w[0] + 416u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F4DC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 112u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F4FE4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F4E38; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001F4E38; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 402u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F4E38; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 640u), c.r[3].w[0]);
    c.budget -= 3;
L_001F4E38:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F4F50; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001F4F50; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 61680ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F4F50; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E78u);  if (depth < kMaxDepth) unit_0034(c, 74u, depth + 1u); else { c.pc = 0x001D0860u; return; } if (c.pc != 0x001F4E78u) [[unlikely]] return; }
L_001F4E78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F4ECC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[21].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[21].d[0] & 255ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F4F50; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    set32(c.r[3], c.r[3].w[0] - 30u);
    st32((c.r[16].w[0] + 640u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4F50; } }
L_001F4ECC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F4EF8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4EF0u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001F4EF0u) [[unlikely]] return; }
L_001F4EF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4F50; } }
L_001F4EF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[20].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[20].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F4F50; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    set32(c.r[3], c.r[3].w[0] - 30u);
    st32((c.r[16].w[0] + 640u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001F4F50; } }
    st32((c.r[16].w[0] + 640u), 0u);
    c.budget -= 1;
L_001F4F50:
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001F4F60; } }
    st32((c.r[16].w[0] + 640u), 0u);
    c.budget -= 1;
L_001F4F60:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[17], c.r[3].w[0] + 32u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4FD8; } }
L_001F4F74:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001F4FD0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[19].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[19].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F4FD0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001F4FD0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.budget -= 2;
L_001F4FD8:
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4F74u | kUnwind; return; } goto L_001F4F74; } }
L_001F4FE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F5010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5028u);  if (depth < kMaxDepth) unit_0034(c, 129u, depth + 1u); else { c.pc = 0x001D1410u; return; } if (c.pc != 0x001F5028u) [[unlikely]] return; }
L_001F5028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F5048; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5048u);  if (depth < kMaxDepth) unit_0039(c, 102u, depth + 1u); else { c.pc = 0x001E5470u; return; } if (c.pc != 0x001F5048u) [[unlikely]] return; }
L_001F5048:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F5060:
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
    st32((c.r[29].w[0] + 176u), c.r[4].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5098u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F5098u) [[unlikely]] return; }
L_001F5098:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F50BC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[5], 0u + 157u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50B4u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F50B4u) [[unlikely]] return; }
L_001F50B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5188; } }
L_001F50BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[5], 0u + 155u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50CCu);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F50CCu) [[unlikely]] return; }
L_001F50CC:
    set32(c.r[16], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001F50DC; } }
    set32(c.r[16], c.r[16].w[0] + 436u);
    c.budget -= 1;
L_001F50DC:
    st32((c.r[29].w[0] + 172u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    c.r[5].d[0] = c.r[2].d[0] | 21071ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50F4u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F50F4u) [[unlikely]] return; }
L_001F50F4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001F510C; } }
    set32(c.r[20], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5110; } }
L_001F510C:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F5110:
    st32((c.r[29].w[0] + 168u), c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[29].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[30], ld32((c.r[29].w[0] + 164u)));
    c.r[23].d[0] = c.r[30].d[0] + 0ull;
    c.r[17].d[0] = c.r[23].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 396u)));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F5148; } }
    set32(c.r[19], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F514C; } }
L_001F5148:
    set32(c.r[19], c.r[17].w[0] + 40u);
    c.budget -= 1;
L_001F514C:
    c.r[22].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[22].w[0] + 2u));
    c.r[21].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = c.r[21].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F5170; } }
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[3].w[0] + 168u), c.r[4].w[0]);
    c.budget -= 3;
L_001F5170:
    c.r[3].d[0] = c.r[21].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F5188; } }
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[3].w[0] + 168u), c.r[4].w[0]);
    c.budget -= 3;
L_001F5188:
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
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F51C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F521C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 8576u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F51FCu);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001F51FCu) [[unlikely]] return; }
L_001F51FC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001F521C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F521Cu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001F521Cu) [[unlikely]] return; }
L_001F521C:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F5230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F528C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 8384u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F526Cu);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001F526Cu) [[unlikely]] return; }
L_001F526C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001F528C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F528Cu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001F528Cu) [[unlikely]] return; }
L_001F528C:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F52A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2300u | kUnwind; return; } [[clang::musttail]] return unit_0038(c, 151u, depth); }
L_001F52B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2280u | kUnwind; return; } [[clang::musttail]] return unit_0038(c, 147u, depth); }
L_001F52C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2490u | kUnwind; return; } [[clang::musttail]] return unit_0038(c, 160u, depth); }
L_001F52D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2410u | kUnwind; return; } [[clang::musttail]] return unit_0038(c, 156u, depth); }
L_001F52E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 416u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E29E0u | kUnwind; return; } [[clang::musttail]] return unit_0038(c, 189u, depth); }
L_001F52F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 416u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2920u | kUnwind; return; } [[clang::musttail]] return unit_0038(c, 185u, depth); }
L_001F5300:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 424u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2A30u | kUnwind; return; } [[clang::musttail]] return unit_0038(c, 190u, depth); }
L_001F5310:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 424u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2920u | kUnwind; return; } [[clang::musttail]] return unit_0038(c, 185u, depth); }
L_001F5320:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 436u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2920u | kUnwind; return; } [[clang::musttail]] return unit_0038(c, 185u, depth); }
L_001F5330:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 51u);
    c.budget -= 4;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0680u | kUnwind; return; } [[clang::musttail]] return unit_002C(c, 35u, depth); }
L_001F5340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8900u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F5370; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26448u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5368u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 152u, depth + 1u); else { c.pc = 0x001AD590u; return; } if (c.pc != 0x001F5368u) [[unlikely]] return; }
L_001F5368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001F5388; } }
L_001F5370:
    set32(c.r[6], c.r[2].w[0] + 39u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26448u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5384u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 150u, depth + 1u); else { c.pc = 0x001AD530u; return; } if (c.pc != 0x001F5384u) [[unlikely]] return; }
L_001F5384:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001F5388:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F5390:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26448u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { set32(c.r[7], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AD530u | kUnwind; return; } [[clang::musttail]] return unit_002B(c, 150u, depth); }
L_001F53B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26448u)));
    c.budget -= 4;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AD790u | kUnwind; return; } [[clang::musttail]] return unit_002B(c, 161u, depth); }
L_001F53C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8897u)));  c.pc = t; return; }
L_001F53D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));  c.pc = t; return; }
L_001F53E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] + 31456u)));  c.pc = t; return; }
L_001F53F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 8384u);  c.pc = t; return; }
L_001F5400:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 8896u);  c.pc = t; return; }
L_001F5410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 8u), 0ull);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 8384u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 25500u);  if (t) { goto L_001F547C; } }
L_001F542C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001F545C; } }
L_001F5434:
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[6].w[0] + 266u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001F5458; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 256u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F5458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_001F5468; } }
L_001F5458:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001F545C:
    c.r[3].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5434u | kUnwind; return; } goto L_001F5434; } }
L_001F5468:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_001F5478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[29].w[0] + 16u);  if (t) { goto L_001F5490; } }
L_001F5478:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_001F547C:
    c.r[3].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F542Cu | kUnwind; return; } goto L_001F542C; } }
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_001F5490:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F54A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F54B8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001F54B8u) [[unlikely]] return; }
L_001F54B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 8064u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F54E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20230000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.r[7].d[0] = c.r[2].d[0] << 32;
    set32(c.r[6], 0u + 128u);
    c.r[2].d[0] = 0ull | 32769ull;
    c.r[13].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[25].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[9].d[0] = 0ull | 32770ull;
    c.r[2].d[0] = 0ull | 60993ull;
    c.r[8].d[0] = c.r[9].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[24].d[0] = c.r[6].d[0] << 32;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[12].d[0] = c.r[2].d[0] | 16878ull;
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = c.r[13].d[0] | 8192ull;
    set32(c.r[14], ld32((c.r[1].w[0] + 1428u)));
    set32(c.r[4], 0u + 169u);
    c.r[10].d[0] = c.r[4].d[0] | c.r[24].d[0];
    set32(c.r[3], 0u + 71u);
    set32(c.r[11], 0u + 4097u);
    set32(c.r[2], 0u + 66u);
    set32(c.r[7], 0u + 65u);
    set32(c.r[15], 0u + 28672u);
    c.r[4].d[0] = c.r[14].d[0] & 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    if (c.r[4].d[0] == 0) c.r[5].d[0] = c.r[13].d[0];
    c.r[14].d[0] = 0ull | 36864ull;
    st64((c.r[5].w[0] + 32u), c.r[25].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[5].w[0] + 40u), c.r[12].d[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[5].w[0] + 56u), c.r[3].d[0]);
    c.r[6].d[0] = c.r[13].d[0] | 16384ull;
    st64((c.r[5].w[0] + 48u), c.r[11].d[0]);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    st64((c.r[5].w[0] + 72u), c.r[2].d[0]);
    c.r[12].d[0] = c.r[9].d[0] | c.r[6].d[0];
    st64((c.r[5].w[0] + 64u), c.r[10].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00050000u);
    st64((c.r[5].w[0] + 80u), c.r[8].d[0]);
    c.r[10].d[0] = c.r[6].d[0] | 13ull;
    st64((c.r[5].w[0] + 88u), c.r[7].d[0]);
    set32(c.r[4], c.r[4].w[0] + 96u);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[6], 0u + 68u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[11], 0u + 238u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[9].d[0] = c.r[6].d[0] | c.r[24].d[0];
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    st32((c.r[4].w[0] + 16u), c.r[15].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x50000000u);
    st32((c.r[4].w[0] + 20u), c.r[15].w[0]);
    st64((c.r[4].w[0] + 32u), 0ull);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), c.r[14].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[14].w[0]);
    st64((c.r[4].w[0] + 64u), 0ull);
    st64((c.r[4].w[0] + 64u), c.r[12].d[0]);
    st64((c.r[4].w[0] + 72u), c.r[11].d[0]);
    set32(c.r[4], c.r[4].w[0] + 80u);
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[3], c.r[4].w[0] + 32u);
    st64((c.r[4].w[0]), c.r[10].d[0]);
    set32(c.r[6], c.r[3].w[0] - c.r[5].w[0]);
    st64((c.r[4].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[10], c.r[6].w[0] >> 4);
    st64((c.r[4].w[0] + 16u), c.r[9].d[0]);
    set32(c.r[2], c.r[10].w[0] - 1u);
    c.r[3].d[0] = c.r[2].d[0] | c.r[13].d[0];
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[10].w[0] - 2u);
    st32((c.r[5].w[0] + 16u), c.r[8].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st32((c.r[5].w[0] + 20u), 0u);
    st32((c.r[5].w[0] + 24u), 0u);
    st32((c.r[5].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 86;
    { set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014E760u | kUnwind; return; } [[clang::musttail]] return unit_0013(c, 198u, depth); }
L_001F5640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5654u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x001F5654u) [[unlikely]] return; }
L_001F5654:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5660u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001F5660u) [[unlikely]] return; }
L_001F5660:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47440000u);
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.r[5].d[0] = c.r[2].d[0] | 21062ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5674u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001F5674u) [[unlikely]] return; }
L_001F5674:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 8128u);
    set32(c.r[3], c.r[3].w[0] - 8112u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 12u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8096u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F56A0u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001F56A0u) [[unlikely]] return; }
L_001F56A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F56B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F56B0u);  if (depth < kMaxDepth) unit_003D(c, 88u, depth + 1u); else { c.pc = 0x001F54A0u; return; } if (c.pc != 0x001F56B0u) [[unlikely]] return; }
L_001F56B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F56D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F56E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 283u, depth + 1u); else { c.pc = 0x001FEE70u; return; } if (c.pc != 0x001F56E4u) [[unlikely]] return; }
L_001F56E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31496u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F5760; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31504u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + 64u);  if (t) { goto L_001F5764; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 31840u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 31904u);
    set32(c.r[3], c.r[16].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);  if (t) { goto L_001F57B4; } }
L_001F5760:
    set32(c.r[2], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_001F5764:
    set32(c.r[3], c.r[3].w[0] + 31840u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], c.r[16].w[0] + 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 31904u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.budget -= 20;
L_001F57B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[16].w[0] + 64u);
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
    set32(c.r[3], ld32((c.r[1].w[0] + 28272u)));
    set32(c.r[2], c.r[16].w[0] + 128u);
    set32(c.r[3], c.r[3].w[0] + 160u);
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
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5828u); set32(c.r[5], ld32((c.r[1].w[0] + 28272u)));  if (depth < kMaxDepth) unit_0013(c, 99u, depth + 1u); else { c.pc = 0x0014D7F0u; return; } if (c.pc != 0x001F5828u) [[unlikely]] return; }
L_001F5828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F5840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5854u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x001F5854u) [[unlikely]] return; }
L_001F5854:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5860u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001F5860u) [[unlikely]] return; }
L_001F5860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 8176u);
    set32(c.r[3], c.r[3].w[0] - 8160u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F5890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
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
    set32(c.r[3], ld32((c.r[1].w[0] + 28272u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 31904u);
    set32(c.r[3], c.r[3].w[0] + 160u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[2] = ld32((c.r[1].w[0] + 28704u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = ld32((c.r[1].w[0] + 28720u));
    st32((c.r[29].w[0] + 16u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[1].w[0] + 28736u));
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5938u); st32((c.r[29].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 94u, depth + 1u); else { c.pc = 0x0014D670u; return; } if (c.pc != 0x001F5938u) [[unlikely]] return; }
L_001F5938:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28648u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28644u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28640u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5960u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x001F5960u) [[unlikely]] return; }
L_001F5960:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 1u);
    c.f[2] = ld32((c.r[1].w[0] + 28708u));
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = ld32((c.r[1].w[0] + 28724u));
    st32((c.r[29].w[0] + 16u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[1].w[0] + 28740u));
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5998u); st32((c.r[29].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 94u, depth + 1u); else { c.pc = 0x0014D670u; return; } if (c.pc != 0x001F5998u) [[unlikely]] return; }
L_001F5998:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28664u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28660u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28656u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F59C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x001F59C0u) [[unlikely]] return; }
L_001F59C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 2u);
    c.f[2] = ld32((c.r[1].w[0] + 28712u));
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = ld32((c.r[1].w[0] + 28728u));
    st32((c.r[29].w[0] + 16u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[1].w[0] + 28744u));
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F59F8u); st32((c.r[29].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 94u, depth + 1u); else { c.pc = 0x0014D670u; return; } if (c.pc != 0x001F59F8u) [[unlikely]] return; }
L_001F59F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28680u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28676u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28672u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5A20u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x001F5A20u) [[unlikely]] return; }
L_001F5A20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28696u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28692u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28688u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5A44u); set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x001F5A44u) [[unlikely]] return; }
L_001F5A44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F5B04; } }
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
    c.r[3].d[0] = c.r[2].d[0] | 27ull;
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
L_001F5B04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5B18u); set32(c.r[5], ld32((c.r[1].w[0] + 28272u)));  if (depth < kMaxDepth) unit_0013(c, 99u, depth + 1u); else { c.pc = 0x0014D7F0u; return; } if (c.pc != 0x001F5B18u) [[unlikely]] return; }
L_001F5B18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F5B30:
    c.r[8].d[0] = ld8((c.r[4].w[0] + 392u));
    set32(c.r[6], 0u - 2u);
    c.r[7].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 17u);
    set32(c.r[5], c.r[7].w[0] << 4);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 392u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 164u), 0u);  c.pc = t; return; }
L_001F5B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5B84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x001F5B84u) [[unlikely]] return; }
L_001F5B84:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5B90u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001F5B90u) [[unlikely]] return; }
L_001F5B90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 8224u);
    set32(c.r[2], c.r[2].w[0] - 8208u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5BB0u); st32((c.r[16].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0084(c, 131u, depth + 1u); else { c.pc = 0x00311720u; return; } if (c.pc != 0x001F5BB0u) [[unlikely]] return; }
L_001F5BB0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F5BD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F5C38; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 8224u);
    set32(c.r[2], c.r[2].w[0] - 8208u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5C08u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 131u, depth + 1u); else { c.pc = 0x00311720u; return; } if (c.pc != 0x001F5C08u) [[unlikely]] return; }
L_001F5C08:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5C14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x001F5C14u) [[unlikely]] return; }
L_001F5C14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5C20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x001F5C20u) [[unlikely]] return; }
L_001F5C20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F5C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5C38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001F5C38u) [[unlikely]] return; }
L_001F5C38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F5C3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F5C50:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 8984u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], 0u + 1u);  if (t) { goto L_001F5C90; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F5C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001F5CEC; } }
L_001F5C98:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F5CF8; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F5CE8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F5CE8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F5CE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5CDCu);  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001F5CDCu) [[unlikely]] return; }
L_001F5CDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F5CE8; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F5CE8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001F5CEC:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5C98u | kUnwind; return; } goto L_001F5C98; } }
L_001F5CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5D00u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001F5D00u) [[unlikely]] return; }
L_001F5D00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001F5D0C; } }
    set32(c.r[20], 0u + 1u);
    c.budget -= 1;
L_001F5D0C:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 2u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[6], c.r[6].w[0] + 8384u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 25500u);  if (t) { goto L_001F5D68; } }
L_001F5D2C:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[2].w[0] + 256u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 266u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001F5D64; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001F5D58; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001F5D58; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F5D58:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001F5D64; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_001F5D64:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001F5D68:
    c.r[2].d[0] = c.r[8].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5D2Cu | kUnwind; return; } goto L_001F5D2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_001F5EA0; } }
L_001F5D7C:
    set32(c.r[3], c.r[17].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[3].w[0] + 256u);
    set32(c.r[2], 0u + 25500u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 266u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F5E9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5DA4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x001F5DA4u) [[unlikely]] return; }
L_001F5DA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F5E9C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F5E9C; } }
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_001F5E9C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[19].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[2].w[0] - c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 25200u);
    set32(c.r[22], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5E20u); c.r[16].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001F5E20u) [[unlikely]] return; }
L_001F5E20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F5E40; } }
    set32(c.r[3], c.r[17].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[22], c.r[2].w[0] << 4);
    c.budget -= 6;
L_001F5E40:
    set32(c.r[2], ld32((c.r[1].w[0] + 31600u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5E4Cu); set32(c.r[23], c.r[2].w[0] + 7200u);  if (depth < kMaxDepth) unit_003D(c, 82u, depth + 1u); else { c.pc = 0x001F53E0u; return; } if (c.pc != 0x001F5E4Cu) [[unlikely]] return; }
L_001F5E4C:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F5E5C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F5E5C:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F5E6C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F5E6C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001F5E9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5E7Cu);  if (depth < kMaxDepth) unit_003D(c, 82u, depth + 1u); else { c.pc = 0x001F53E0u; return; } if (c.pc != 0x001F5E7Cu) [[unlikely]] return; }
L_001F5E7C:
    c.r[1].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F5E9C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_001F5E9C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5E9Cu); set32(c.r[5], c.r[5].w[0] - 17296u);  if (depth < kMaxDepth) unit_003F(c, 230u, depth + 1u); else { c.pc = 0x001FDF80u; return; } if (c.pc != 0x001F5E9Cu) [[unlikely]] return; }
L_001F5E9C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001F5EA0:
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5D7Cu | kUnwind; return; } goto L_001F5D7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5EB4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F5EB4u) [[unlikely]] return; }
L_001F5EB4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 23u));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F61EC; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 31472u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F61EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31496u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F61EC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F6088; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 31256u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31256u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F5F48; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 28320u);  if (t) { goto L_001F5F34; } }
L_001F5F14:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F5F30; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 31256u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001F61EC; } }
L_001F5F30:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001F5F34:
    c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5F14u | kUnwind; return; } goto L_001F5F14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F61EC; } }
L_001F5F48:
    set32(c.r[2], 0u + 120u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_001F61EC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_001F61EC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[8], c.r[8].w[0] - 25200u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[5], c.r[5].w[0] + 28320u);
    c.budget -= 6;
L_001F5F74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[7], c.r[8].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::div(c, 0, c.r[7].w[0], c.r[6].w[0]);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 16;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5F74u | kUnwind; return; } goto L_001F5F74; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5F74u | kUnwind; return; } goto L_001F5F74; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5F74u | kUnwind; return; } goto L_001F5F74; } }
    st8((c.r[16].w[0] + 371u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[29].w[0] + 144u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5FE4u); set32(c.r[5], 0u + 716u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F5FE4u) [[unlikely]] return; }
L_001F5FE4:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[16].w[0] + 464u), 0u);  if (t) { goto L_001F5FF4; } }
    set32(c.r[6], c.r[6].w[0] + 436u);
    c.budget -= 1;
L_001F5FF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6000u); set32(c.r[5], 0u + 300u);  if (depth < kMaxDepth) unit_002F(c, 16u, depth + 1u); else { c.pc = 0x001BD040u; return; } if (c.pc != 0x001F6000u) [[unlikely]] return; }
L_001F6000:
    c.r[9].d[0] = ld8((c.r[16].w[0] + 394u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    set32(c.r[7], 0u - 65u);
    c.r[5].d[0] = c.r[2].d[0] | 21071ull;
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[3], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.r[2].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6040u); st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F6040u) [[unlikely]] return; }
L_001F6040:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001F604C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001F604C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F606C; } }
    set32(c.r[2], 0u + 1800u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31280u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 379u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31272u), c.r[2].w[0]);
    c.budget -= 6;
L_001F606C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28320u)));
    st32((c.r[2].w[0] + 980u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28320u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 984u), c.r[16].w[0]);  if (t) { goto L_001F61EC; } }
L_001F6088:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 28320u);  if (t) { goto L_001F60B8; } }
L_001F6094:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F60B4; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F60B4; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001F60B4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001F60B8:
    c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6094u | kUnwind; return; } goto L_001F6094; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001F61EC; } }
    set32(c.r[2], 0u + 100u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9076u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], 0u + 1u);  if (t) { goto L_001F6110; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 31264u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 31264u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 31264u));
    c.r[1].d[0] = c.r[2].sd[0] < 181ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_001F61EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 8984u), c.r[2].w[0]);  if (t) { goto L_001F61EC; } }
L_001F6110:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] + 28320u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F61E0; } }
L_001F6120:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F61DC; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F61DC; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F61DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6150u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 288u, depth + 1u); else { c.pc = 0x001FB100u; return; } if (c.pc != 0x001F6150u) [[unlikely]] return; }
L_001F6150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6158u);  if (depth < kMaxDepth) unit_003E(c, 5u, depth + 1u); else { c.pc = 0x001F8170u; return; } if (c.pc != 0x001F6158u) [[unlikely]] return; }
L_001F6158:
    set32(c.r[2], 0u + 121u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6168u); st8((c.r[1].w[0] + 31256u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 164u, depth + 1u); else { c.pc = 0x001F9CE0u; return; } if (c.pc != 0x001F6168u) [[unlikely]] return; }
L_001F6168:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], c.r[16].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 8650u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 8640u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], 0u + 5u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8649u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8648u);
    set32(c.r[5], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] + 8644u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] - 17296u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F61D4u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_003F(c, 230u, depth + 1u); else { c.pc = 0x001FDF80u; return; } if (c.pc != 0x001F61D4u) [[unlikely]] return; }
L_001F61D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F61EC; } }
L_001F61DC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001F61E0:
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6120u | kUnwind; return; } goto L_001F6120; } }
L_001F61EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F61F4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F61F4u) [[unlikely]] return; }
L_001F61F4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F6610; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F6610; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31496u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F6610; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 31408u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[3], 0u + 90u);  if (t) { goto L_001F63C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F6348; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31416u)));
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6268u);  if (depth < kMaxDepth) unit_003E(c, 288u, depth + 1u); else { c.pc = 0x001FB100u; return; } if (c.pc != 0x001F6268u) [[unlikely]] return; }
L_001F6268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6270u);  if (depth < kMaxDepth) unit_003E(c, 5u, depth + 1u); else { c.pc = 0x001F8170u; return; } if (c.pc != 0x001F6270u) [[unlikely]] return; }
L_001F6270:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 31416u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 8384u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 8908u);
    set32(c.r[5], c.r[5].w[0] << 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 264u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[1].w[0] + 31240u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[1].w[0] + 31244u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31240u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = ld16((c.r[4].w[0]));  if (t) { goto L_001F62D0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31240u), c.r[2].w[0]);
    c.budget -= 3;
L_001F62D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 31416u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8650u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 8384u);
    set32(c.r[4], c.r[4].w[0] + 8964u);
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_001F6328; } }
L_001F6304:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F6324; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 31416u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 264u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001F6324:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001F6328:
    c.r[2].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6304u | kUnwind; return; } goto L_001F6304; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31416u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6348u); set32(c.r[5], c.r[5].w[0] + 23344u);  if (depth < kMaxDepth) unit_003F(c, 230u, depth + 1u); else { c.pc = 0x001FDF80u; return; } if (c.pc != 0x001F6348u) [[unlikely]] return; }
L_001F6348:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 60u);
    set32(c.r[5], ld32((c.r[1].w[0] + 31408u)));
    set32(c.r[3], 0u + 59u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F638C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F638Cu);  if (depth < kMaxDepth) unit_003D(c, 74u, depth + 1u); else { c.pc = 0x001F5330u; return; } if (c.pc != 0x001F638Cu) [[unlikely]] return; }
L_001F638C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31408u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F63B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F63A8u);  if (depth < kMaxDepth) unit_003D(c, 306u, depth + 1u); else { c.pc = 0x001F7B00u; return; } if (c.pc != 0x001F63A8u) [[unlikely]] return; }
L_001F63A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F63B0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 79u, depth + 1u); else { c.pc = 0x001F53B0u; return; } if (c.pc != 0x001F63B0u) [[unlikely]] return; }
L_001F63B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31408u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 31408u), c.r[3].w[0]);  if (t) { goto L_001F6610; } }
L_001F63C8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F6464; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31416u)));
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F6610; } }
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31408u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6408u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_003E(c, 413u, depth + 1u); else { c.pc = 0x001FBC70u; return; } if (c.pc != 0x001F6408u) [[unlikely]] return; }
L_001F6408:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31416u)));
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);  if (t) { goto L_001F6430; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001F6430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6438u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F6438u) [[unlikely]] return; }
L_001F6438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001F6444; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001F6444:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F6610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6454u); c.r[4].d[0] = ld8((c.r[3].w[0] + 379u));  if (depth < kMaxDepth) unit_003D(c, 78u, depth + 1u); else { c.pc = 0x001F5390u; return; } if (c.pc != 0x001F6454u) [[unlikely]] return; }
L_001F6454:
    set32(c.r[3], 0u + 1800u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 31280u), c.r[3].w[0]);  if (t) { goto L_001F6610; } }
L_001F6464:
    set32(c.r[3], ld32((c.r[1].w[0] + 31424u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F6610; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31240u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31244u)));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F6610; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28320u);  if (t) { goto L_001F64C8; } }
L_001F64A4:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F64C4; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F64C4; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001F64C4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001F64C8:
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F64A4u | kUnwind; return; } goto L_001F64A4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31432u)));
    set32(c.r[3], c.r[3].w[0] + 8908u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], ld32((c.r[1].w[0] + 31240u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31432u), c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[4].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_001F6564; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31432u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F6534; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F652Cu); c.r[4].d[0] = c.r[4].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0084(c, 134u, depth + 1u); else { c.pc = 0x00311790u; return; } if (c.pc != 0x001F652Cu) [[unlikely]] return; }
L_001F652C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_001F6560; } }
L_001F6534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F653Cu); set32(c.r[4], ld32((c.r[21].w[0] + 28u)));  if (depth < kMaxDepth) unit_0084(c, 142u, depth + 1u); else { c.pc = 0x00311850u; return; } if (c.pc != 0x001F653Cu) [[unlikely]] return; }
L_001F653C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F6560; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 31432u)));
    c.r[1].d[0] = c.r[3].sd[0] < 59ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F6560; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31432u), c.r[3].w[0]);
    c.budget -= 3;
L_001F6560:
    c.r[1].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 1;
L_001F6564:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F6580; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31432u)));
    c.r[1].d[0] = c.r[3].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F6594; } }
L_001F6580:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31432u)));
    c.r[1].d[0] = c.r[3].sd[0] < 421ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F6610; } }
L_001F6594:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31432u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 31376u)));
    set32(c.r[5], c.r[5].w[0] + 31380u);
    set32(c.r[4], c.r[4].w[0] + 31376u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 31416u), c.r[2].w[0]);  if (t) { goto L_001F65D8; } }
L_001F65C4:
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_001F65D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31424u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F65C4u | kUnwind; return; } goto L_001F65C4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31424u), c.r[3].w[0]);
    set32(c.r[2], 0u + 660u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31408u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6610u); set32(c.r[4], ld32((c.r[1].w[0] - 27904u)));  if (depth < kMaxDepth) unit_004D(c, 65u, depth + 1u); else { c.pc = 0x00235040u; return; } if (c.pc != 0x001F6610u) [[unlikely]] return; }
L_001F6610:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 31776u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F6630; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 31776u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001F66AC; } }
L_001F6630:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31760u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001F6668; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 31768u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F6668; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 30u);
    st8((c.r[1].w[0] + 31768u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 31776u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001F66A4; } }
L_001F6668:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31760u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F66A4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 31768u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F66A4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 30u);
    st8((c.r[1].w[0] + 31768u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[1].w[0] + 31776u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001F66A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31760u), 0u);
    c.budget -= 2;
L_001F66AC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001F66E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F66F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x001F66F4u) [[unlikely]] return; }
L_001F66F4:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6700u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001F6700u) [[unlikely]] return; }
L_001F6700:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 8272u);
    set32(c.r[3], c.r[3].w[0] - 8256u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F6730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6750u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009D(c, 352u, depth + 1u); else { c.pc = 0x00377790u; return; } if (c.pc != 0x001F6750u) [[unlikely]] return; }
L_001F6750:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F6754:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F6778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6778u);  if (depth < kMaxDepth) unit_003E(c, 288u, depth + 1u); else { c.pc = 0x001FB100u; return; } if (c.pc != 0x001F6778u) [[unlikely]] return; }
L_001F6778:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6754u | kUnwind; return; } goto L_001F6754; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31072u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F67B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F67B0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67B0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F67B0u) [[unlikely]] return; }
L_001F67B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31072u), 0u);
    c.budget -= 2;
L_001F67B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67C0u);  if (depth < kMaxDepth) unit_000F(c, 157u, depth + 1u); else { c.pc = 0x0013D5A0u; return; } if (c.pc != 0x001F67C0u) [[unlikely]] return; }
L_001F67C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67C8u);  if (depth < kMaxDepth) unit_000F(c, 149u, depth + 1u); else { c.pc = 0x0013D460u; return; } if (c.pc != 0x001F67C8u) [[unlikely]] return; }
L_001F67C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67D0u);  if (depth < kMaxDepth) unit_000F(c, 153u, depth + 1u); else { c.pc = 0x0013D500u; return; } if (c.pc != 0x001F67D0u) [[unlikely]] return; }
L_001F67D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67D8u);  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202840u; return; } if (c.pc != 0x001F67D8u) [[unlikely]] return; }
L_001F67D8:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67E8u); st8((c.r[1].w[0] - 24016u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001F67E8u) [[unlikely]] return; }
L_001F67E8:
    c.r[1].d[0] = c.r[2].sd[0] < 39ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F67FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67FCu);  if (depth < kMaxDepth) unit_004C(c, 202u, depth + 1u); else { c.pc = 0x00231840u; return; } if (c.pc != 0x001F67FCu) [[unlikely]] return; }
L_001F67FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31480u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F6814; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6814u);  if (depth < kMaxDepth) unit_003F(c, 258u, depth + 1u); else { c.pc = 0x001FE3D0u; return; } if (c.pc != 0x001F6814u) [[unlikely]] return; }
L_001F6814:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F6830:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 8384u);  if (t) { goto L_001F6878; } }
L_001F6840:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 692u)));  if (t) { goto L_001F6858; } }
    c.r[1].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F6868; } }
L_001F6858:
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F6874; } }
L_001F6868:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_001F6874; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001F6874:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001F6878:
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6840u | kUnwind; return; } goto L_001F6840; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_001F6890; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001F6890:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F68A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 31472u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F68C4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31472u), c.r[2].w[0]);
    c.budget -= 3;
L_001F68C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31672u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F68F8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31672u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31672u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F68F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31616u), 0u);
    c.budget -= 2;
L_001F68F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31280u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6948; } }
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31280u), c.r[3].w[0]);
    set32(c.r[2], 0u + 120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31280u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F6930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6930u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 79u, depth + 1u); else { c.pc = 0x001F53B0u; return; } if (c.pc != 0x001F6930u) [[unlikely]] return; }
L_001F6930:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31280u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F6948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6948u);  if (depth < kMaxDepth) unit_003D(c, 75u, depth + 1u); else { c.pc = 0x001F5340u; return; } if (c.pc != 0x001F6948u) [[unlikely]] return; }
L_001F6948:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31544u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 28320u);  if (t) { goto L_001F6994; } }
L_001F6960:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6990; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F6990; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 31544u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31544u), c.r[2].w[0]);
    c.budget -= 4;
L_001F6990:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_001F6994:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6960u | kUnwind; return; } goto L_001F6960; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31480u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F69D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F69BCu);  if (depth < kMaxDepth) unit_003D(c, 82u, depth + 1u); else { c.pc = 0x001F53E0u; return; } if (c.pc != 0x001F69BCu) [[unlikely]] return; }
L_001F69BC:
    c.r[2].d[0] = c.r[2].sd[0] < 3600ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F69D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F6CD4; } }
L_001F69D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F69D8u);  if (depth < kMaxDepth) unit_003D(c, 288u, depth + 1u); else { c.pc = 0x001F7900u; return; } if (c.pc != 0x001F69D8u) [[unlikely]] return; }
L_001F69D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 8984u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6CB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F69F0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F69F0u) [[unlikely]] return; }
L_001F69F0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 22u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6BA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A04u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F6A04u) [[unlikely]] return; }
L_001F6A04:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001F6BA0; } }
    set32(c.r[2], 0u + 9u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8984u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[1].w[0] + 31536u), c.r[3].w[0]);  if (t) { goto L_001F6AC4; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A34u); st32((c.r[1].w[0] + 31472u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 177u, depth + 1u); else { c.pc = 0x001F6830u; return; } if (c.pc != 0x001F6A34u) [[unlikely]] return; }
L_001F6A34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A40u); st8((c.r[1].w[0] + 9072u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F6A40u) [[unlikely]] return; }
L_001F6A40:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6A70; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9072u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F6A70; } }
    c.r[2].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[1].w[0] + 9073u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001F6A70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9072u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 5u);  if (t) { goto L_001F6A9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A8Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F6A8Cu) [[unlikely]] return; }
L_001F6A8C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_001F6AB4; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 1;
L_001F6A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6AA4u);  if (depth < kMaxDepth) unit_003D(c, 279u, depth + 1u); else { c.pc = 0x001F77A0u; return; } if (c.pc != 0x001F6AA4u) [[unlikely]] return; }
L_001F6AA4:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 8984u), c.r[2].w[0]);  if (t) { goto L_001F6ABC; } }
L_001F6AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6ABCu);  if (depth < kMaxDepth) unit_003D(c, 279u, depth + 1u); else { c.pc = 0x001F77A0u; return; } if (c.pc != 0x001F6ABCu) [[unlikely]] return; }
L_001F6ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F6CD4; } }
L_001F6AC4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6AD0u); st32((c.r[1].w[0] + 31528u), 0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F6AD0u) [[unlikely]] return; }
L_001F6AD0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001F6B14; } }
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8984u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F6B5C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9072u)));
    set32(c.r[2], c.r[2].w[0] + 9076u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F6B5C; } }
L_001F6B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B1Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F6B1Cu) [[unlikely]] return; }
L_001F6B1C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6B5C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9076u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B3Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001F6B3Cu) [[unlikely]] return; }
L_001F6B3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9072u)));
    set32(c.r[2], c.r[2].w[0] + 9076u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
L_001F6B5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 8984u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 28320u);  if (t) { goto L_001F6B8C; } }
L_001F6B74:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6B88; } }
    st8((c.r[2].w[0] + 372u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001F6B88:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_001F6B8C:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6B74u | kUnwind; return; } goto L_001F6B74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6CB4; } }
L_001F6BA0:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6BB0u); st32((c.r[1].w[0] + 31472u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F6BB0u) [[unlikely]] return; }
L_001F6BB0:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 8u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F6BCC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 8984u), 0u);  if (t) { goto L_001F6CD4; } }
L_001F6BCC:
    set32(c.r[4], ld32((c.r[1].w[0] + 31456u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8984u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 9068u), c.r[4].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001F6CAC; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 21712u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F6C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C0Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 279u, depth + 1u); else { c.pc = 0x001F77A0u; return; } if (c.pc != 0x001F6C0Cu) [[unlikely]] return; }
L_001F6C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F6CD4; } }
L_001F6C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C1Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 279u, depth + 1u); else { c.pc = 0x001F77A0u; return; } if (c.pc != 0x001F6C1Cu) [[unlikely]] return; }
L_001F6C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F6CD4; } }
L_001F6C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C2Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_003D(c, 279u, depth + 1u); else { c.pc = 0x001F77A0u; return; } if (c.pc != 0x001F6C2Cu) [[unlikely]] return; }
L_001F6C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F6CD4; } }
L_001F6C34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C3Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F6C3Cu) [[unlikely]] return; }
L_001F6C3C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_001F6C58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C50u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_003D(c, 279u, depth + 1u); else { c.pc = 0x001F77A0u; return; } if (c.pc != 0x001F6C50u) [[unlikely]] return; }
L_001F6C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F6C64; } }
L_001F6C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C60u);  if (depth < kMaxDepth) unit_003D(c, 279u, depth + 1u); else { c.pc = 0x001F77A0u; return; } if (c.pc != 0x001F6C60u) [[unlikely]] return; }
L_001F6C60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F6C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001F6CD8; } }
L_001F6C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C74u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_003D(c, 279u, depth + 1u); else { c.pc = 0x001F77A0u; return; } if (c.pc != 0x001F6C74u) [[unlikely]] return; }
L_001F6C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F6CD4; } }
L_001F6C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C84u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_003D(c, 279u, depth + 1u); else { c.pc = 0x001F77A0u; return; } if (c.pc != 0x001F6C84u) [[unlikely]] return; }
L_001F6C84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F6CD4; } }
L_001F6C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C94u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_003D(c, 279u, depth + 1u); else { c.pc = 0x001F77A0u; return; } if (c.pc != 0x001F6C94u) [[unlikely]] return; }
L_001F6C94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F6CD4; } }
L_001F6C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6CA4u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_003D(c, 279u, depth + 1u); else { c.pc = 0x001F77A0u; return; } if (c.pc != 0x001F6CA4u) [[unlikely]] return; }
L_001F6CA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F6CD4; } }
L_001F6CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F6CD4; } }
L_001F6CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6CBCu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001F6CBCu) [[unlikely]] return; }
L_001F6CBC:
    c.r[1].d[0] = c.r[2].sd[0] < 39ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F6CD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6CD0u);  if (depth < kMaxDepth) unit_004C(c, 209u, depth + 1u); else { c.pc = 0x00231970u; return; } if (c.pc != 0x001F6CD0u) [[unlikely]] return; }
L_001F6CD0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F6CD4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001F6CD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F6CE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x67520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 25936ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6D00u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001F6D00u) [[unlikely]] return; }
L_001F6D00:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6D0Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x001F6D0Cu) [[unlikely]] return; }
L_001F6D0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 8320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8304u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 25768u), 0u);
    set32(c.r[3], 0u + 30u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F6D50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[1].w[0] + 25768u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F72D8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F6DE0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28352u);  if (t) { goto L_001F6DCC; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 1;
L_001F6D9C:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F6DC8; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F6DC8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 25768u), 0u);  if (t) { goto L_001F72D8; } }
L_001F6DC8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001F6DCC:
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6D9Cu | kUnwind; return; } goto L_001F6D9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001F6E18; } }
L_001F6DE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6DF4u); c.r[5].d[0] = c.r[2].d[0] | 16979ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F6DF4u) [[unlikely]] return; }
L_001F6DF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6E04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001F6E08; } }
L_001F6E04:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F6E08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6E14; } }
    st8((c.r[2].w[0] + 218u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001F6E14:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F6E18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_001F6F6C; } }
L_001F6E20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001F6F64; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);  if (t) { goto L_001F6E50; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    c.budget -= 2;
L_001F6E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6E58u); c.r[5].d[0] = c.r[2].d[0] | 19780ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F6E58u) [[unlikely]] return; }
L_001F6E58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6E60; } }
L_001F6E60:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 200u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.r[1].d[0] = c.r[5].sd[0] < 131ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 6);  if (t) { goto L_001F6E80; } }
    set32(c.r[5], 0u + 130u);
    set32(c.r[2], c.r[17].w[0] << 6);
    c.budget -= 2;
L_001F6E80:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 10);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_001F6F58; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.budget -= 1;
L_001F6EA4:
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[6], ld32((c.r[1].w[0] + 25768u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001F6F04; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[9], c.r[4].w[0] << 6);
    set32(c.r[7], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[8], ld32((c.r[6].w[0] + 216u)));
    set32(c.r[6], c.r[7].w[0] << 6);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[10], c.r[6].w[0] + 48u);
    ld128((c.r[9].w[0]) & ~15u, c.r[6]);
    ld128((c.r[9].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[9].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[9].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    st128((c.r[10].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[10].w[0] + 32u) & ~15u, c.r[8]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st128((c.r[10].w[0] + 48u) & ~15u, c.r[9]);  if (t) { goto L_001F6F54; } }
L_001F6F04:
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[8], c.r[4].w[0] << 6);
    set32(c.r[10], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[7], c.r[4].w[0] << 6);
    set32(c.r[6], ld32((c.r[6].w[0] + 216u)));
    set32(c.r[9], c.r[10].w[0] << 6);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 7);
    set32(c.r[9], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[9], c.r[8].w[0] + 48u);
    set32(c.r[10], c.r[6].w[0] + c.r[7].w[0]);
    ld128((c.r[9].w[0]) & ~15u, c.r[6]);
    ld128((c.r[9].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[9].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[9].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    st128((c.r[10].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[10].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[10].w[0] + 48u) & ~15u, c.r[9]);
    c.budget -= 20;
L_001F6F54:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_001F6F58:
    c.r[6].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6EA4u | kUnwind; return; } goto L_001F6EA4; } }
L_001F6F64:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 2;
L_001F6F6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6E20u | kUnwind; return; } goto L_001F6E20; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 28320u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 240u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28324u)));
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[2].w[0] + 240u)));
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 80u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[4]);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[4]);
    set32(c.r[4], ld32((c.r[1].w[0] + 25768u)));
    c.budget -= 33;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F7020; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[4], c.r[4].w[0] + 5u);
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F7020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7018u);  if (depth < kMaxDepth) unit_0040(c, 162u, depth + 1u); else { c.pc = 0x00202190u; return; } if (c.pc != 0x001F7018u) [[unlikely]] return; }
L_001F7018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7020u); set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (depth < kMaxDepth) unit_0040(c, 163u, depth + 1u); else { c.pc = 0x002021A0u; return; } if (c.pc != 0x001F7020u) [[unlikely]] return; }
L_001F7020:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F72D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st32((c.r[18].w[0] + 36u), 0u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 25768u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001F7124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7058u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0040(c, 163u, depth + 1u); else { c.pc = 0x002021A0u; return; } if (c.pc != 0x001F7058u) [[unlikely]] return; }
L_001F7058:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[1].w[0] + 25768u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 31728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7084u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0033(c, 140u, depth + 1u); else { c.pc = 0x001CDC00u; return; } if (c.pc != 0x001F7084u) [[unlikely]] return; }
L_001F7084:
    c.f[6] = ld32((c.r[29].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[4] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44000000u);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.f[5] = ld32((c.r[29].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28320u)));
    c.f[6] = fp::sub(c.f[6], c.f[1]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = ld32((c.r[29].w[0] + 64u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44800000u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 28324u)));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[2] = c.r[8].w[0];
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 84u), c.f[6]);
    st32((c.r[29].w[0] + 80u), c.f[4]);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    set32(c.r[8], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7118u); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0041(c, 168u, depth + 1u); else { c.pc = 0x002071F0u; return; } if (c.pc != 0x001F7118u) [[unlikely]] return; }
L_001F7118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001F72DC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001F7124:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001F71DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[1].w[0] + 28320u)));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.f[5] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[4] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[7] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 28324u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44400000u);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[2] = fp::add(c.f[2], c.f[4]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.f[6] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[29].w[0] + 88u), c.f[2]);
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = c.r[3].w[0];
    c.f[5] = fp::add(c.f[6], c.f[5]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 84u), c.f[7]);
    st32((c.r[29].w[0] + 80u), c.f[5]);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    set32(c.r[8], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F71C4u); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0041(c, 168u, depth + 1u); else { c.pc = 0x002071F0u; return; } if (c.pc != 0x001F71C4u) [[unlikely]] return; }
L_001F71C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 25768u), c.r[3].w[0]);  if (t) { goto L_001F72D8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001F71DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_001F7288; } }
    c.f[6] = ld32((c.r[29].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[4] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44C00000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28320u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[6] = fp::sub(c.f[6], c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    set32(c.r[5], ld32((c.r[1].w[0] + 28324u)));
    c.f[2] = c.r[2].w[0];
    c.f[5] = ld32((c.r[29].w[0] + 88u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44800000u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    c.f[2] = fp::sub(c.f[5], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 84u), c.f[6]);
    st32((c.r[29].w[0] + 88u), c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    set32(c.r[8], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7270u); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0041(c, 168u, depth + 1u); else { c.pc = 0x002071F0u; return; } if (c.pc != 0x001F7270u) [[unlikely]] return; }
L_001F7270:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 25768u), c.r[3].w[0]);  if (t) { goto L_001F72D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.budget -= 1;
L_001F7288:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7298u); st32((c.r[1].w[0] + 25768u), 0u);  if (depth < kMaxDepth) unit_0040(c, 163u, depth + 1u); else { c.pc = 0x002021A0u; return; } if (c.pc != 0x001F7298u) [[unlikely]] return; }
L_001F7298:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    st8((c.r[1].w[0] + 31728u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F72B4u); c.r[5].d[0] = c.r[2].d[0] | 16979ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F72B4u) [[unlikely]] return; }
L_001F72B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001F72C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001F72C8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F72C8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F72D8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 218u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F72D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001F72DC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F72F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7308u); st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x001F7308u) [[unlikely]] return; }
L_001F7308:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7314u); c.r[4].d[0] = c.r[2].d[0] | 25776ull;  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001F7314u) [[unlikely]] return; }
L_001F7314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F7324; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7324u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 218u, depth + 1u); else { c.pc = 0x001F6CE0u; return; } if (c.pc != 0x001F7324u) [[unlikely]] return; }
L_001F7324:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7334u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001F7334u) [[unlikely]] return; }
L_001F7334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F733Cu); set32(c.r[4], ld32((c.r[29].w[0] + 28u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001F733Cu) [[unlikely]] return; }
L_001F733C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x67520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7374u); c.r[5].d[0] = c.r[2].d[0] | 25936ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F7374u) [[unlikely]] return; }
L_001F7374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001F7380; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001F7380:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_001F73B8; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 25768u), c.r[3].w[0]);
    c.r[1].d[0] = c.r[16].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F73A4; } }
    set32(c.r[16], 0u + 60u);
    c.budget -= 1;
L_001F73A4:
    c.r[1].d[0] = c.r[16].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F73B4; } }
    set32(c.r[16], 0u + 40u);
    c.budget -= 1;
L_001F73B4:
    st32((c.r[4].w[0] + 40u), c.r[16].w[0]);
    c.budget -= 1;
L_001F73B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F73D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F7434; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 8320u);
    set32(c.r[2], c.r[2].w[0] - 8304u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 28u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7410u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x001F7410u) [[unlikely]] return; }
L_001F7410:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F741Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001F741Cu) [[unlikely]] return; }
L_001F741C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F7438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7434u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001F7434u) [[unlikely]] return; }
L_001F7434:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F7438:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F7450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F74B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 8272u);
    set32(c.r[2], c.r[2].w[0] - 8256u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7490u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x001F7490u) [[unlikely]] return; }
L_001F7490:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F749Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x001F749Cu) [[unlikely]] return; }
L_001F749C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F74B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001F74B4u) [[unlikely]] return; }
L_001F74B4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F74B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F74D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F7534; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 8176u);
    set32(c.r[2], c.r[2].w[0] - 8160u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7510u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x001F7510u) [[unlikely]] return; }
L_001F7510:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F751Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x001F751Cu) [[unlikely]] return; }
L_001F751C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F7538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7534u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001F7534u) [[unlikely]] return; }
L_001F7534:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F7538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F7550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F75CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 8128u);
    set32(c.r[3], c.r[3].w[0] - 8112u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8096u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F759Cu); st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001F759Cu) [[unlikely]] return; }
L_001F759C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x001F75A8u) [[unlikely]] return; }
L_001F75A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x001F75B4u) [[unlikely]] return; }
L_001F75B4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F75D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001F75CCu) [[unlikely]] return; }
L_001F75CC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F75D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F75F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F7638; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8064u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7620u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x001F7620u) [[unlikely]] return; }
L_001F7620:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F763C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7638u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001F7638u) [[unlikely]] return; }
L_001F7638:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F763C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F7650:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F56D0u | kUnwind; return; } goto L_001F56D0; }
L_001F7660:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7550u | kUnwind; return; } goto L_001F7550; }
L_001F7670:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7550u | kUnwind; return; } goto L_001F7550; }
L_001F7680:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5890u | kUnwind; return; } goto L_001F5890; }
L_001F7690:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F74D0u | kUnwind; return; } goto L_001F74D0; }
L_001F76A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5C50u | kUnwind; return; } goto L_001F5C50; }
L_001F76B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5BD0u | kUnwind; return; } goto L_001F5BD0; }
L_001F76C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6730u | kUnwind; return; } goto L_001F6730; }
L_001F76D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7450u | kUnwind; return; } goto L_001F7450; }
L_001F76E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6D50u | kUnwind; return; } goto L_001F6D50; }
L_001F76F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F73D0u | kUnwind; return; } goto L_001F73D0; }
L_001F7700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001F774C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { goto L_001F774C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_001F772C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F774C; } }
L_001F772C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27904u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] - 1u);  if (t) { goto L_001F774C; } }
    set32(c.r[5], 0u + 8u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F774Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004D(c, 62u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x001F774Cu) [[unlikely]] return; }
L_001F774C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F7760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001F7794; } }
    c.r[1].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_001F7794; } }
    set32(c.r[3], ld32((c.r[1].w[0] - 27904u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] - 1u);  if (t) { goto L_001F7794; } }
    set32(c.r[5], 0u + 9u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7794u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004D(c, 62u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x001F7794u) [[unlikely]] return; }
L_001F7794:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F77A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[1].w[0] - 27904u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001F78EC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001F77E8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 120u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001F78EC; } }
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F77E0u); set32(c.r[7], 0u + 120u);  if (depth < kMaxDepth) unit_004D(c, 62u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x001F77E0u) [[unlikely]] return; }
L_001F77E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001F78F0; } }
L_001F77E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F780C; } }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7804u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004D(c, 62u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x001F7804u) [[unlikely]] return; }
L_001F7804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F78EC; } }
L_001F780C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], 0u + 3u);  if (t) { goto L_001F7834; } }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F782Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004D(c, 62u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x001F782Cu) [[unlikely]] return; }
L_001F782C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F78EC; } }
L_001F7834:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_001F7854; } }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F784Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004D(c, 62u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x001F784Cu) [[unlikely]] return; }
L_001F784C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F78EC; } }
L_001F7854:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F7878; } }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7870u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004D(c, 62u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x001F7870u) [[unlikely]] return; }
L_001F7870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F78EC; } }
L_001F7878:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_001F78A0; } }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7898u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004D(c, 62u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x001F7898u) [[unlikely]] return; }
L_001F7898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F78EC; } }
L_001F78A0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F78C4; } }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F78BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004D(c, 62u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x001F78BCu) [[unlikely]] return; }
L_001F78BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F78EC; } }
L_001F78C4:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_001F78EC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F78EC; } }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F78ECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004D(c, 62u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x001F78ECu) [[unlikely]] return; }
L_001F78EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001F78F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F7900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 27904u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F7AE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7920u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F7920u) [[unlikely]] return; }
L_001F7920:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 22u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F7990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7934u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F7934u) [[unlikely]] return; }
L_001F7934:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F7990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7948u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F7948u) [[unlikely]] return; }
L_001F7948:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F7990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F795Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F795Cu) [[unlikely]] return; }
L_001F795C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F7990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7970u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F7970u) [[unlikely]] return; }
L_001F7970:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 30u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F7990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7984u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F7984u) [[unlikely]] return; }
L_001F7984:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F7AB8; } }
L_001F7990:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31528u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001F7AB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F7A70; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31536u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F7A70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 21760u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F79D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27904u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F79F0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004D(c, 62u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x001F79F0u) [[unlikely]] return; }
L_001F79F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7A70; } }
L_001F79F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27904u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A10u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004D(c, 62u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x001F7A10u) [[unlikely]] return; }
L_001F7A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7A70; } }
L_001F7A18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27904u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A30u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004D(c, 62u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x001F7A30u) [[unlikely]] return; }
L_001F7A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7A70; } }
L_001F7A38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27904u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A50u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004D(c, 62u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x001F7A50u) [[unlikely]] return; }
L_001F7A50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7A70; } }
L_001F7A58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27904u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A70u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004D(c, 62u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x001F7A70u) [[unlikely]] return; }
L_001F7A70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31528u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31528u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31528u)));
    c.r[1].d[0] = c.r[3].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_001F7AAC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31256u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F7AB8; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001F7AAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 31528u), c.r[3].w[0]);  if (t) { goto L_001F7AE8; } }
L_001F7AB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31080u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F7AE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_001F7AE8; } }
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27904u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7AE8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004D(c, 62u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x001F7AE8u) [[unlikely]] return; }
L_001F7AE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F7B00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26416u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001F7B20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B20u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 111u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001F7B20u) [[unlikely]] return; }
L_001F7B20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F7B30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26416u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_001F7B50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B50u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 111u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001F7B50u) [[unlikely]] return; }
L_001F7B50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F7B60:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 48u);
    c.budget -= 4;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0680u | kUnwind; return; } [[clang::musttail]] return unit_002C(c, 35u, depth); }
L_001F7B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F7C70; } }
    c.r[1].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F7C70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);  if (t) { goto L_001F7B9C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001F7B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7BA4u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F7BA4u) [[unlikely]] return; }
L_001F7BA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001F7BB0; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001F7BB0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 378u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26416u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 17u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; if (c.r[5].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];  if (t) { goto L_001F7C70; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 111u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + c.r[6].w[0]);  if (t) { goto L_001F7BFC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 120u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + c.r[6].w[0]);  if (t) { goto L_001F7BF8; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001F7C70; } }
L_001F7BF8:
    set32(c.r[5], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_001F7BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C04u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 111u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001F7C04u) [[unlikely]] return; }
L_001F7C04:
    c.r[1].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_001F7C70; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001F7C70; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001F7C64; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001F7C50; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001F7C3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001F7C74; } }
L_001F7C3C:
    set32(c.r[5], 0u + 55u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C48u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 35u, depth + 1u); else { c.pc = 0x001B0680u; return; } if (c.pc != 0x001F7C48u) [[unlikely]] return; }
L_001F7C48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7C70; } }
L_001F7C50:
    set32(c.r[5], 0u + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 35u, depth + 1u); else { c.pc = 0x001B0680u; return; } if (c.pc != 0x001F7C5Cu) [[unlikely]] return; }
L_001F7C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7C70; } }
L_001F7C64:
    set32(c.r[5], 0u + 57u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C70u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 35u, depth + 1u); else { c.pc = 0x001B0680u; return; } if (c.pc != 0x001F7C70u) [[unlikely]] return; }
L_001F7C70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F7C74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x001F7C94u) [[unlikely]] return; }
L_001F7C94:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7CA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001F7CA0u) [[unlikely]] return; }
L_001F7CA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 7984u);
    set32(c.r[3], c.r[3].w[0] - 7968u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 60u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 80u);  if (t) { goto L_001F7D0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D04u);  if (depth < kMaxDepth) unit_003D(c, 308u, depth + 1u); else { c.pc = 0x001F7B30u; return; } if (c.pc != 0x001F7D04u) [[unlikely]] return; }
L_001F7D04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001F7D58; } }
L_001F7D0C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F7D24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D1Cu);  if (depth < kMaxDepth) unit_003D(c, 308u, depth + 1u); else { c.pc = 0x001F7B30u; return; } if (c.pc != 0x001F7D1Cu) [[unlikely]] return; }
L_001F7D1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7D54; } }
L_001F7D24:
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F7D54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D38u);  if (depth < kMaxDepth) unit_003D(c, 308u, depth + 1u); else { c.pc = 0x001F7B30u; return; } if (c.pc != 0x001F7D38u) [[unlikely]] return; }
L_001F7D38:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001F7D54; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D54u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F7D54u) [[unlikely]] return; }
L_001F7D54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F7D58:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7D70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F7DD4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 7984u);
    set32(c.r[2], c.r[2].w[0] - 7968u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7DB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x001F7DB0u) [[unlikely]] return; }
L_001F7DB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7DBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x001F7DBCu) [[unlikely]] return; }
L_001F7DBC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F7DD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7DD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001F7DD4u) [[unlikely]] return; }
L_001F7DD4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F7DD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F7DF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E00u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001F7E00u) [[unlikely]] return; }
L_001F7E00:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F7E14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E14u);  if (depth < kMaxDepth) unit_003D(c, 317u, depth + 1u); else { c.pc = 0x001F7C80u; return; } if (c.pc != 0x001F7E14u) [[unlikely]] return; }
L_001F7E14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F7E20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28320u);  if (t) { goto L_001F7E5C; } }
L_001F7E34:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F7E58; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001F7E58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F7E68; } }
L_001F7E58:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001F7E5C:
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7E34u | kUnwind; return; } goto L_001F7E34; } }
L_001F7E68:
    c.budget -= 2;
    { set32(c.r[5], 0u + 13u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7B70u | kUnwind; return; } goto L_001F7B70; }
L_001F7E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x001F7E84u) [[unlikely]] return; }
L_001F7E84:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E90u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x001F7E90u) [[unlikely]] return; }
L_001F7E90:
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001F7E9Cu) [[unlikely]] return; }
L_001F7E9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 8048u);
    set32(c.r[3], c.r[3].w[0] - 8032u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8016u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[6], 0u + 8u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7ED4u); st32((c.r[16].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001F7ED4u) [[unlikely]] return; }
L_001F7ED4:
    st32((c.r[16].w[0] + 36u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[16].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 77u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[1].w[0] + 26760u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7F10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F7F94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 8048u);
    set32(c.r[3], c.r[3].w[0] - 8032u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8016u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F64u); st32((c.r[1].w[0] + 26760u), 0u);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x001F7F64u) [[unlikely]] return; }
L_001F7F64:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x001F7F70u) [[unlikely]] return; }
L_001F7F70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x001F7F7Cu) [[unlikely]] return; }
L_001F7F7C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F7F98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001F7F94u) [[unlikely]] return; }
L_001F7F94:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F7F98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F7FB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26760u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F7FC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 44u)));  if (t) { goto L_001F7FCC; } }
L_001F7FC8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F7FCC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7FFCu); set32(c.r[5], c.r[5].w[0] - 1u);  if (depth < kMaxDepth) unit_003D(c, 311u, depth + 1u); else { c.pc = 0x001F7B70u; return; } if (c.pc != 0x001F7FFCu) [[unlikely]] return; }
L_001F7FFC:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
    [[clang::musttail]] return unit_003E(c, 1u, depth);
}

}
