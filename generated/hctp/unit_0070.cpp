#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0070[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 5, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87,
    0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0,
    0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197,
    0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0,
};

void unit_0070(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002C0000;
    case 2u: goto L_002C0004;
    case 3u: goto L_002C0028;
    case 4u: goto L_002C003C;
    case 5u: goto L_002C0040;
    case 6u: goto L_002C004C;
    case 7u: goto L_002C0064;
    case 8u: goto L_002C00CC;
    case 9u: goto L_002C00F4;
    case 10u: goto L_002C01D0;
    case 11u: goto L_002C020C;
    case 12u: goto L_002C0290;
    case 13u: goto L_002C02E0;
    case 14u: goto L_002C02F0;
    case 15u: goto L_002C0330;
    case 16u: goto L_002C0350;
    case 17u: goto L_002C03C4;
    case 18u: goto L_002C0400;
    case 19u: goto L_002C0444;
    case 20u: goto L_002C0474;
    case 21u: goto L_002C04D0;
    case 22u: goto L_002C0520;
    case 23u: goto L_002C055C;
    case 24u: goto L_002C058C;
    case 25u: goto L_002C0614;
    case 26u: goto L_002C0660;
    case 27u: goto L_002C068C;
    case 28u: goto L_002C0788;
    case 29u: goto L_002C07D0;
    case 30u: goto L_002C0888;
    case 31u: goto L_002C0930;
    case 32u: goto L_002C0980;
    case 33u: goto L_002C09BC;
    case 34u: goto L_002C0A44;
    case 35u: goto L_002C0A90;
    case 36u: goto L_002C0ACC;
    case 37u: goto L_002C0B44;
    case 38u: goto L_002C0B90;
    case 39u: goto L_002C0BCC;
    case 40u: goto L_002C0C14;
    case 41u: goto L_002C0C5C;
    case 42u: goto L_002C0CB0;
    case 43u: goto L_002C0CEC;
    case 44u: goto L_002C0D30;
    case 45u: goto L_002C0D60;
    case 46u: goto L_002C0DB0;
    case 47u: goto L_002C0DF4;
    case 48u: goto L_002C0E24;
    case 49u: goto L_002C0E5C;
    case 50u: goto L_002C0EB4;
    case 51u: goto L_002C0FBC;
    case 52u: goto L_002C0FD0;
    case 53u: goto L_002C1020;
    case 54u: goto L_002C1064;
    case 55u: goto L_002C1094;
    case 56u: goto L_002C10CC;
    case 57u: goto L_002C1124;
    case 58u: goto L_002C113C;
    case 59u: goto L_002C1218;
    case 60u: goto L_002C1274;
    case 61u: goto L_002C1288;
    case 62u: goto L_002C12E0;
    case 63u: goto L_002C1324;
    case 64u: goto L_002C1354;
    case 65u: goto L_002C138C;
    case 66u: goto L_002C13E4;
    case 67u: goto L_002C14D8;
    case 68u: goto L_002C1534;
    case 69u: goto L_002C1548;
    case 70u: goto L_002C15A0;
    case 71u: goto L_002C15E4;
    case 72u: goto L_002C1614;
    case 73u: goto L_002C1658;
    case 74u: goto L_002C16A8;
    case 75u: goto L_002C16FC;
    case 76u: goto L_002C181C;
    case 77u: goto L_002C1830;
    case 78u: goto L_002C184C;
    case 79u: goto L_002C1900;
    case 80u: goto L_002C1914;
    case 81u: goto L_002C1960;
    case 82u: goto L_002C1978;
    case 83u: goto L_002C19D0;
    case 84u: goto L_002C19EC;
    case 85u: goto L_002C1A50;
    case 86u: goto L_002C1A60;
    case 87u: goto L_002C1A7C;
    case 88u: goto L_002C1A98;
    case 89u: goto L_002C1AB4;
    case 90u: goto L_002C1B00;
    case 91u: goto L_002C1B80;
    case 92u: goto L_002C1B98;
    case 93u: goto L_002C1BCC;
    case 94u: goto L_002C1C54;
    case 95u: goto L_002C1C64;
    case 96u: goto L_002C1C90;
    case 97u: goto L_002C1CA8;
    case 98u: goto L_002C1D30;
    case 99u: goto L_002C1D48;
    case 100u: goto L_002C1D7C;
    case 101u: goto L_002C1E10;
    case 102u: goto L_002C1E20;
    case 103u: goto L_002C1E50;
    case 104u: goto L_002C1E6C;
    case 105u: goto L_002C1EA0;
    case 106u: goto L_002C1F74;
    case 107u: goto L_002C1F88;
    case 108u: goto L_002C1FA4;
    case 109u: goto L_002C1FB8;
    case 110u: goto L_002C1FF0;
    case 111u: goto L_002C200C;
    case 112u: goto L_002C203C;
    case 113u: goto L_002C20F0;
    case 114u: goto L_002C2104;
    case 115u: goto L_002C2120;
    case 116u: goto L_002C2134;
    case 117u: goto L_002C2160;
    case 118u: goto L_002C2178;
    case 119u: goto L_002C21AC;
    case 120u: goto L_002C2234;
    case 121u: goto L_002C2244;
    case 122u: goto L_002C2270;
    case 123u: goto L_002C2284;
    case 124u: goto L_002C22D0;
    case 125u: goto L_002C22F4;
    case 126u: goto L_002C2328;
    case 127u: goto L_002C2370;
    case 128u: goto L_002C2390;
    case 129u: goto L_002C2440;
    case 130u: goto L_002C2470;
    case 131u: goto L_002C24C4;
    case 132u: goto L_002C2510;
    case 133u: goto L_002C2544;
    case 134u: goto L_002C2588;
    case 135u: goto L_002C25A0;
    case 136u: goto L_002C25F0;
    case 137u: goto L_002C2608;
    case 138u: goto L_002C2690;
    case 139u: goto L_002C2760;
    case 140u: goto L_002C2770;
    case 141u: goto L_002C2790;
    case 142u: goto L_002C27E0;
    case 143u: goto L_002C27F4;
    case 144u: goto L_002C2814;
    case 145u: goto L_002C2880;
    case 146u: goto L_002C2894;
    case 147u: goto L_002C28D0;
    case 148u: goto L_002C28F0;
    case 149u: goto L_002C293C;
    case 150u: goto L_002C2980;
    case 151u: goto L_002C2998;
    case 152u: goto L_002C29B8;
    case 153u: goto L_002C29F0;
    case 154u: goto L_002C2A0C;
    case 155u: goto L_002C2AB0;
    case 156u: goto L_002C2ADC;
    case 157u: goto L_002C2B28;
    case 158u: goto L_002C2B70;
    case 159u: goto L_002C2B9C;
    case 160u: goto L_002C2BB8;
    case 161u: goto L_002C2C00;
    case 162u: goto L_002C2C20;
    case 163u: goto L_002C2ED0;
    case 164u: goto L_002C2EE4;
    case 165u: goto L_002C2F14;
    case 166u: goto L_002C2F50;
    case 167u: goto L_002C2F60;
    case 168u: goto L_002C2F74;
    case 169u: goto L_002C2FE4;
    case 170u: goto L_002C2FF0;
    case 171u: goto L_002C3040;
    case 172u: goto L_002C306C;
    case 173u: goto L_002C30C0;
    case 174u: goto L_002C30E8;
    case 175u: goto L_002C310C;
    case 176u: goto L_002C3124;
    case 177u: goto L_002C31B0;
    case 178u: goto L_002C31C4;
    case 179u: goto L_002C3230;
    case 180u: goto L_002C3244;
    case 181u: goto L_002C32B0;
    case 182u: goto L_002C32C4;
    case 183u: goto L_002C334C;
    case 184u: goto L_002C3364;
    case 185u: goto L_002C3390;
    case 186u: goto L_002C33A8;
    case 187u: goto L_002C3420;
    case 188u: goto L_002C3438;
    case 189u: goto L_002C3454;
    case 190u: goto L_002C3464;
    case 191u: goto L_002C3480;
    case 192u: goto L_002C34BC;
    case 193u: goto L_002C3520;
    case 194u: goto L_002C3538;
    case 195u: goto L_002C3574;
    case 196u: goto L_002C35E0;
    case 197u: goto L_002C35FC;
    case 198u: goto L_002C3618;
    case 199u: goto L_002C3628;
    case 200u: goto L_002C3644;
    case 201u: goto L_002C369C;
    case 202u: goto L_002C36F0;
    case 203u: goto L_002C3708;
    case 204u: goto L_002C3740;
    case 205u: goto L_002C3774;
    case 206u: goto L_002C37E0;
    case 207u: goto L_002C3810;
    case 208u: goto L_002C3850;
    case 209u: goto L_002C3864;
    case 210u: goto L_002C3880;
    case 211u: goto L_002C38B0;
    case 212u: goto L_002C38F0;
    case 213u: goto L_002C3930;
    case 214u: goto L_002C394C;
    case 215u: goto L_002C3C34;
    case 216u: goto L_002C3C78;
    case 217u: goto L_002C3CC0;
    case 218u: goto L_002C3D04;
    case 219u: goto L_002C3D40;
    case 220u: goto L_002C3D7C;
    case 221u: goto L_002C3DB8;
    case 222u: goto L_002C3DF4;
    case 223u: goto L_002C3E40;
    case 224u: goto L_002C3E70;
    case 225u: goto L_002C3E94;
    case 226u: goto L_002C3E9C;
    case 227u: goto L_002C3EF0;
    case 228u: goto L_002C3FBC;
    case 229u: goto L_002C3FEC;
    default: bad_entry(c, 0x002C0000u); return;
    }
L_002C0000:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C0004:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C0010; } }
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002C0010:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C0020; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002C0020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0028u); set32(c.r[4], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0008(c, 168u, depth + 1u); else { c.pc = 0x00121A30u; return; } if (c.pc != 0x002C0028u) [[unlikely]] return; }
L_002C0028:
    c.r[1].d[0] = c.r[2].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C003C; } }
    set32(c.r[19], ld32((c.r[16].w[0])));
    set32(c.r[18], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 2;
L_002C003C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002C0040:
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFF50u | kUnwind; return; } [[clang::musttail]] return unit_006F(c, 293u, depth); } }
L_002C004C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002C005C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C01A4; } }
L_002C005C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_002C0198; } }
L_002C0064:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C0190; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002C00A8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002C009C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C009C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_002C00AC; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002C00A8:
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C00AC:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0190; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C00CCu);  if (depth < kMaxDepth) unit_0034(c, 145u, depth + 1u); else { c.pc = 0x001D1730u; return; } if (c.pc != 0x002C00CCu) [[unlikely]] return; }
L_002C00CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0190; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[20].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 624u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002C0190; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 368u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C00F4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 289u, depth + 1u); else { c.pc = 0x002BFE20u; return; } if (c.pc != 0x002C00F4u) [[unlikely]] return; }
L_002C00F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0104; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002C01A4; } }
L_002C0104:
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1555u);
    set32(c.r[5], ld32((c.r[6].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1551u);  if (t) { goto L_002C0120; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002C01A4; } }
L_002C0120:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 1551u);  if (t) { goto L_002C0140; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 301ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C0140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002C01A4; } }
L_002C0140:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002C0190; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 164u)));
    set32(c.r[3], 0u + 1555u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1562u);  if (t) { goto L_002C0190; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C0190; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002C0188; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 301ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C0188; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 301ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C0190; } }
L_002C0188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_002C01A4; } }
L_002C0190:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 2;
L_002C0198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0064u | kUnwind; return; } goto L_002C0064; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C01A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C01D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].d[0] = 0ull | 40000ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[19], ld32((c.r[4].w[0] + 624u)));
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.budget -= 15;
L_002C020C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C02A4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002C02A4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002C0260; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 371u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002C0254; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C0254:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_002C0264; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002C0260:
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C0264:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C02A4; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C02A4; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[3].w[0] + 224u);  if (t) { goto L_002C02A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0290u); set32(c.r[4], c.r[20].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002C0290u) [[unlikely]] return; }
L_002C0290:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C02A4; } }
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.f[20] = c.f[0];
    c.budget -= 2;
L_002C02A4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C020Cu | kUnwind; return; } goto L_002C020C; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C02E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 8384u);  if (t) { goto L_002C0318; } }
L_002C02F0:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 692u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002C0314; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_002C0328; } }
L_002C0314:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002C0318:
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C02F0u | kUnwind; return; } goto L_002C02F0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C0328:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C0330:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002C03D8; } }
L_002C0350:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C03D4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002C03D4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002C03A0; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002C0394; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C0394:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_002C03A4; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002C03A0:
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C03A4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C03D4; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C03D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C03C4u);  if (depth < kMaxDepth) unit_003E(c, 47u, depth + 1u); else { c.pc = 0x001F8790u; return; } if (c.pc != 0x002C03C4u) [[unlikely]] return; }
L_002C03C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C03D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_002C03E8; } }
L_002C03D4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002C03D8:
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0350u | kUnwind; return; } goto L_002C0350; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C03E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C0400:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].d[0] = 0ull | 40000ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[20], ld32((c.r[4].w[0] + 984u)));
    c.f[20] = fp::cvt_s_w(c.f[0]);
    set32(c.r[19], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 17;
L_002C0444:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C04E4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002C04E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0474u);  if (depth < kMaxDepth) unit_0059(c, 70u, depth + 1u); else { c.pc = 0x00264FE0u; return; } if (c.pc != 0x002C0474u) [[unlikely]] return; }
L_002C0474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C04E4; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_002C04E4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002C04B4; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 371u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002C04A8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C04A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_002C04B8; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002C04B4:
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C04B8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C04E4; } }
    set32(c.r[5], c.r[3].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C04D0u); set32(c.r[4], c.r[21].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002C04D0u) [[unlikely]] return; }
L_002C04D0:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C04E4; } }
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.f[20] = c.f[0];
    c.budget -= 2;
L_002C04E4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0444u | kUnwind; return; } goto L_002C0444; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002C0520:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].d[0] = 0ull | 40000ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[19], ld32((c.r[4].w[0] + 624u)));
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.budget -= 15;
L_002C055C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C0628; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002C0628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C058Cu);  if (depth < kMaxDepth) unit_0059(c, 70u, depth + 1u); else { c.pc = 0x00264FE0u; return; } if (c.pc != 0x002C058Cu) [[unlikely]] return; }
L_002C058C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0628; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 464u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002C05C4; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002C05B8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C05B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_002C05C8; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002C05C4:
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C05C8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0628; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 369u));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 369u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C0628; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0628; } }
    c.r[2].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0628; } }
    set32(c.r[5], c.r[5].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0614u); set32(c.r[4], c.r[20].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002C0614u) [[unlikely]] return; }
L_002C0614:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C0628; } }
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.f[20] = c.f[0];
    c.budget -= 2;
L_002C0628:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C055Cu | kUnwind; return; } goto L_002C055C; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C0660:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = fp::mul(c.f[12], c.f[12]);
    c.budget -= 11;
L_002C068C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C079C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 624u)));
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;  if (t) { goto L_002C06C0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C06C8; } }
L_002C06C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C0700; } }
L_002C06C8:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C06E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C0700; } }
L_002C06E4:
    set32(c.r[2], ld32((c.r[2].w[0] + 624u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C06FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002C0700; } }
L_002C06FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C0700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C079C; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 464u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002C0738; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 371u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002C072C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C072C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;  if (t) { goto L_002C073C; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002C0738:
    c.r[2].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C073C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C079C; } }
    c.r[3].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 224u);  if (t) { goto L_002C0780; } }
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_002C077C; } }
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C079C; } }
L_002C077C:
    set32(c.r[5], c.r[4].w[0] + 224u);
    c.budget -= 1;
L_002C0780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0788u); set32(c.r[4], c.r[19].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002C0788u) [[unlikely]] return; }
L_002C0788:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C079C; } }
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.f[20] = c.f[0];
    c.budget -= 2;
L_002C079C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C068Cu | kUnwind; return; } goto L_002C068C; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C07D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 988u)));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] < 0; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C0814; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
L_002C0814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0870; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002C0870; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 464u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_002C0870; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 371u));
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C0850; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C0850:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002C0870; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 624u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C0870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_002C095C; } }
L_002C0870:
    set32(c.r[2], 0u + 4900u);
    set32(c.r[19], ld32((c.r[20].w[0] + 624u)));
    c.f[0] = c.r[2].w[0];
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
L_002C0888:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C0944; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002C0944; } }
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    set32(c.r[2], 0u + 8u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002C08E0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C08E0; } }
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002C08E0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C0944; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002C0914; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002C0908; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C0908:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_002C0918; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002C0914:
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C0918:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0944; } }
    set32(c.r[5], c.r[4].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0930u); set32(c.r[4], c.r[20].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002C0930u) [[unlikely]] return; }
L_002C0930:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C0944; } }
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.f[20] = c.f[0];
    c.budget -= 2;
L_002C0944:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0888u | kUnwind; return; } goto L_002C0888; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 2;
L_002C095C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C0980:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 4900u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[19], ld32((c.r[4].w[0] + 624u)));
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.budget -= 15;
L_002C09BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C0A58; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002C0A58; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002C0A10; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002C0A04; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C0A04:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_002C0A14; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002C0A10:
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C0A14:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0A58; } }
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 224u);  if (t) { goto L_002C0A58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A44u); set32(c.r[4], c.r[20].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002C0A44u) [[unlikely]] return; }
L_002C0A44:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C0A58; } }
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.f[20] = c.f[0];
    c.budget -= 2;
L_002C0A58:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C09BCu | kUnwind; return; } goto L_002C09BC; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C0A90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].d[0] = 0ull | 40000ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[19], ld32((c.r[4].w[0] + 624u)));
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.budget -= 15;
L_002C0ACC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C0B58; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002C0B58; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002C0B20; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 371u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002C0B14; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C0B14:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_002C0B24; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002C0B20:
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C0B24:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0B58; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 224u);  if (t) { goto L_002C0B58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B44u); set32(c.r[4], c.r[20].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002C0B44u) [[unlikely]] return; }
L_002C0B44:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C0B58; } }
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.f[20] = c.f[0];
    c.budget -= 2;
L_002C0B58:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0ACCu | kUnwind; return; } goto L_002C0ACC; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C0B90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].d[0] = 0ull | 40000ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.budget -= 15;
L_002C0BCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C0C70; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C0C70; } }
    c.r[2].d[0] = ld64((c.r[4].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0C70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0C14u);  if (depth < kMaxDepth) unit_0034(c, 120u, depth + 1u); else { c.pc = 0x001D1020u; return; } if (c.pc != 0x002C0C14u) [[unlikely]] return; }
L_002C0C14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0C70; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 27952u);
    set32(c.r[4], ld32((c.r[5].w[0] + 912u)));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 371u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_002C0C70; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 356u)));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C0C70; } }
    set32(c.r[5], c.r[5].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0C5Cu); set32(c.r[4], c.r[20].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002C0C5Cu) [[unlikely]] return; }
L_002C0C5C:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C0C70; } }
    set32(c.r[19], ld32((c.r[16].w[0])));
    c.f[20] = c.f[0];
    c.budget -= 2;
L_002C0C70:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0BCCu | kUnwind; return; } goto L_002C0BCC; } }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C0CB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 4900u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[19], ld32((c.r[4].w[0] + 624u)));
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.budget -= 15;
L_002C0CEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C0D74; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002C0D74; } }
    c.r[2].d[0] = ld64((c.r[4].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0D74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D30u);  if (depth < kMaxDepth) unit_0034(c, 120u, depth + 1u); else { c.pc = 0x001D1020u; return; } if (c.pc != 0x002C0D30u) [[unlikely]] return; }
L_002C0D30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0D74; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0D74; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 370u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 224u);  if (t) { goto L_002C0D74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D60u); set32(c.r[4], c.r[20].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002C0D60u) [[unlikely]] return; }
L_002C0D60:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C0D74; } }
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.f[20] = c.f[0];
    c.budget -= 2;
L_002C0D74:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0CECu | kUnwind; return; } goto L_002C0CEC; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C0DB0:
    set32(c.r[29], c.r[29].w[0] - 256u);
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
    st32((c.r[29].w[0] + 240u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[3], 0u + 32u);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C0E10; } }
    set32(c.r[2], c.r[4].w[0] + 0u);
    c.budget -= 1;
L_002C0DF4:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0DF4u | kUnwind; return; } goto L_002C0DF4; } }
L_002C0E10:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[3], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C0E40; } }
    set32(c.r[2], c.r[4].w[0] + 0u);
    c.budget -= 1;
L_002C0E24:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0E24u | kUnwind; return; } goto L_002C0E24; } }
L_002C0E40:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 624u)));
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0E9C; } }
L_002C0E5C:
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002C0E98; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 980u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002C0E98; } }
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], ld32((c.r[18].w[0] + 980u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 192u), c.r[3].w[0]);
    c.budget -= 5;
L_002C0E98:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002C0E9C:
    c.r[2].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0E5Cu | kUnwind; return; } goto L_002C0E5C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0F94; } }
L_002C0EB4:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0F90; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002C0F90; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C0F90; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 464u)));
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0F6C; } }
    set32(c.r[2], 0u + 1u);
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 371u));
    st8((c.r[29].w[0] + 239u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 239u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C0F5C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 371u));
    c.r[30].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[30].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C0F5C; } }
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C0F5C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002C0F6C; } }
    set32(c.r[2], 0u + 1u);
    c.r[23].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_002C0F6C:
    c.r[2].d[0] = 0ull < c.r[23].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0F90; } }
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[21], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 160u), c.r[19].w[0]);
    c.budget -= 5;
L_002C0F90:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C0F94:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0EB4u | kUnwind; return; } goto L_002C0EB4; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_002C0FB4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0FEC; } }
L_002C0FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0FBCu);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x002C0FBCu) [[unlikely]] return; }
L_002C0FBC:
    c.r[5].d[0] = c.r[21].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0FD0u);  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x002C0FD0u) [[unlikely]] return; }
L_002C0FD0:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 7;
L_002C0FEC:
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
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1020:
    set32(c.r[29], c.r[29].w[0] - 256u);
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
    st32((c.r[29].w[0] + 240u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[3], 0u + 32u);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C1080; } }
    set32(c.r[2], c.r[4].w[0] + 0u);
    c.budget -= 1;
L_002C1064:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1064u | kUnwind; return; } goto L_002C1064; } }
L_002C1080:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[3], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C10B0; } }
    set32(c.r[2], c.r[4].w[0] + 0u);
    c.budget -= 1;
L_002C1094:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1094u | kUnwind; return; } goto L_002C1094; } }
L_002C10B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 624u)));
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C110C; } }
L_002C10CC:
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002C1108; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 980u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002C1108; } }
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], ld32((c.r[18].w[0] + 980u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 192u), c.r[3].w[0]);
    c.budget -= 5;
L_002C1108:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002C110C:
    c.r[2].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C10CCu | kUnwind; return; } goto L_002C10CC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C124C; } }
L_002C1124:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 192u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C1248; } }
L_002C113C:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002C1248; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C1248; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 464u)));
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C11E0; } }
    set32(c.r[2], 0u + 1u);
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 371u));
    st8((c.r[29].w[0] + 239u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 239u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C11D0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 371u));
    c.r[30].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[30].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C11D0; } }
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C11D0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002C11E0; } }
    set32(c.r[2], 0u + 1u);
    c.r[23].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_002C11E0:
    c.r[2].d[0] = 0ull < c.r[23].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1248; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + 224u);
    set32(c.r[5], c.r[2].w[0] + 224u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1218u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002C1218u) [[unlikely]] return; }
L_002C1218:
    set32(c.r[2], 0u + 4900u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C1248; } }
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[21], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 160u), c.r[19].w[0]);
    c.budget -= 5;
L_002C1248:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C124C:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1124u | kUnwind; return; } goto L_002C1124; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_002C126C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C12A4; } }
L_002C126C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1274u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x002C1274u) [[unlikely]] return; }
L_002C1274:
    c.r[5].d[0] = c.r[21].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1288u);  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x002C1288u) [[unlikely]] return; }
L_002C1288:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 7;
L_002C12A4:
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
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C12E0:
    set32(c.r[29], c.r[29].w[0] - 256u);
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
    st32((c.r[29].w[0] + 240u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[3], 0u + 32u);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C1340; } }
    set32(c.r[2], c.r[4].w[0] + 0u);
    c.budget -= 1;
L_002C1324:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1324u | kUnwind; return; } goto L_002C1324; } }
L_002C1340:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[3], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C1370; } }
    set32(c.r[2], c.r[4].w[0] + 0u);
    c.budget -= 1;
L_002C1354:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1354u | kUnwind; return; } goto L_002C1354; } }
L_002C1370:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 624u)));
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C13CC; } }
L_002C138C:
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002C13C8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 980u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002C13C8; } }
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], ld32((c.r[18].w[0] + 980u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 192u), c.r[3].w[0]);
    c.budget -= 5;
L_002C13C8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002C13CC:
    c.r[2].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C138Cu | kUnwind; return; } goto L_002C138C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C150C; } }
L_002C13E4:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 192u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C1508; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002C1508; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C1508; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 464u)));
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C14A0; } }
    set32(c.r[2], 0u + 1u);
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 371u));
    st8((c.r[29].w[0] + 239u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 239u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1490; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 371u));
    c.r[30].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[30].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C1490; } }
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C1490:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002C14A0; } }
    set32(c.r[2], 0u + 1u);
    c.r[23].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_002C14A0:
    c.r[2].d[0] = 0ull < c.r[23].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1508; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + 224u);
    set32(c.r[5], c.r[2].w[0] + 224u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C14D8u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002C14D8u) [[unlikely]] return; }
L_002C14D8:
    c.r[2].d[0] = 0ull | 40000ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C1508; } }
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[21], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 160u), c.r[19].w[0]);
    c.budget -= 5;
L_002C1508:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C150C:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C13E4u | kUnwind; return; } goto L_002C13E4; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_002C152C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1564; } }
L_002C152C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1534u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x002C1534u) [[unlikely]] return; }
L_002C1534:
    c.r[5].d[0] = c.r[21].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1548u);  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x002C1548u) [[unlikely]] return; }
L_002C1548:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 7;
L_002C1564:
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
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C15A0:
    set32(c.r[29], c.r[29].w[0] - 288u);
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
    st32((c.r[29].w[0] + 272u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[3], 0u + 32u);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C1600; } }
    set32(c.r[2], c.r[4].w[0] + 0u);
    c.budget -= 1;
L_002C15E4:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C15E4u | kUnwind; return; } goto L_002C15E4; } }
L_002C1600:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[3], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C1630; } }
    set32(c.r[2], c.r[4].w[0] + 0u);
    c.budget -= 1;
L_002C1614:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1614u | kUnwind; return; } goto L_002C1614; } }
L_002C1630:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 624u)));
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    c.r[21].d[0] = 0ull + 0ull;
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 260u), c.f[0]);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C16E4; } }
L_002C1658:
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[22], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002C16E0; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 980u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002C16E0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + 224u);
    set32(c.r[5], c.r[2].w[0] + 224u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C16A8u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002C16A8u) [[unlikely]] return; }
L_002C16A8:
    st32((c.r[29].w[0] + 260u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    set32(c.r[2], 0u + 4900u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C16E0; } }
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], ld32((c.r[22].w[0] + 980u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 192u), c.r[3].w[0]);
    c.budget -= 5;
L_002C16E0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002C16E4:
    c.r[2].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1658u | kUnwind; return; } goto L_002C1658; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C17F4; } }
L_002C16FC:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C17F0; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002C17F0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C17F0; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    st8((c.r[29].w[0] + 271u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 464u)));
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C17B8; } }
    set32(c.r[2], 0u + 1u);
    c.r[30].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[18].w[0] + 371u));
    st8((c.r[29].w[0] + 270u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 270u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C17A8; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 371u));
    st8((c.r[29].w[0] + 269u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 269u));
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C17A8; } }
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C17A8:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_002C17B8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 271u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002C17B8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 271u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C17F0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 371u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C17F0; } }
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[21], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 160u), c.r[17].w[0]);
    c.budget -= 5;
L_002C17F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C17F4:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C16FCu | kUnwind; return; } goto L_002C16FC; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_002C1814; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C18C4; } }
L_002C1814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C181Cu);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x002C181Cu) [[unlikely]] return; }
L_002C181C:
    c.r[5].d[0] = c.r[21].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1830u);  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x002C1830u) [[unlikely]] return; }
L_002C1830:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[23], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[19], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C18B4; } }
L_002C184C:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], c.r[2].w[0] + 544u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[2], c.r[23].w[0] + 544u);
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C18B0; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[23], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 3;
L_002C18B0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002C18B4:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C184Cu | kUnwind; return; } goto L_002C184C; } }
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_002C18C4:
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
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1900:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28320u);  if (t) { goto L_002C1944; } }
L_002C1914:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1940; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002C1940; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002C1940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1954; } }
L_002C1940:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002C1944:
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1914u | kUnwind; return; } goto L_002C1914; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C1954:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1960:
    set32(c.r[8], ld32((c.r[4].w[0] + 624u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 28320u);  if (t) { goto L_002C19B4; } }
L_002C1978:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C19B0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_002C19B0; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 912u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 912u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002C19AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_002C19C0; } }
L_002C19AC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002C19B0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002C19B4:
    c.r[3].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1978u | kUnwind; return; } goto L_002C1978; } }
L_002C19C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C19D0:
    set32(c.r[7], ld32((c.r[4].w[0] + 624u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28320u);  if (t) { goto L_002C1A34; } }
L_002C19EC:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C1A30; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_002C1A30; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1A30; } }
    c.r[2].d[0] = ld64((c.r[5].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C1A30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1A44; } }
L_002C1A30:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002C1A34:
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C19ECu | kUnwind; return; } goto L_002C19EC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C1A44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1A50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002C1A60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1A7Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C1A7Cu) [[unlikely]] return; }
L_002C1A7C:
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 8ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1AA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1A98u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C1A98u) [[unlikely]] return; }
L_002C1A98:
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 9ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002C1AA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1AC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1AB4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C1AB4u) [[unlikely]] return; }
L_002C1AB4:
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 78ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002C1AC0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1AD8; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_002C1B68; } }
L_002C1AD8:
    set32(c.r[10], ld32((c.r[17].w[0] + 912u)));
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[9], c.r[2].w[0] + 1u);
    set32(c.r[7], c.r[2].w[0] + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 28320u);
    set32(c.r[2], c.r[8].w[0] << 2);
    c.budget -= 10;
L_002C1B00:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C1B44; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[17].d[0];  if (t) { goto L_002C1B44; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002C1B44; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C1B44; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 912u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002C1B44; } }
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_002C1B44:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1B00u | kUnwind; return; } goto L_002C1B00; } }
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] >= 0; c.r[2].d[0] = c.r[9].d[0] & 3ull;  if (t) { goto L_002C1B68; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1B68; } }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_002C1B68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C1B80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002C1BB4; } }
L_002C1B98:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1B98u | kUnwind; return; } goto L_002C1B98; } }
L_002C1BB4:
    set32(c.r[7], ld32((c.r[4].w[0] + 624u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 28320u);  if (t) { goto L_002C1C20; } }
L_002C1BCC:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C1C1C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002C1C1C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_002C1C1C; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1C1C; } }
    c.r[2].d[0] = ld64((c.r[5].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1C1C; } }
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_002C1C2C; } }
L_002C1C1C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002C1C20:
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1BCCu | kUnwind; return; } goto L_002C1BCC; } }
L_002C1C2C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C1C3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C1C78; } }
L_002C1C3C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002C1C4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_002C1C78; } }
L_002C1C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C54u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x002C1C54u) [[unlikely]] return; }
L_002C1C54:
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C64u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x002C1C64u) [[unlikely]] return; }
L_002C1C64:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
L_002C1C78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C1C90:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 27952u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 28320u);  if (t) { goto L_002C1D10; } }
L_002C1CA8:
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1D0C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002C1D0C; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 624u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002C1D0C; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C1D0C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 912u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C1D0C; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 328u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C1D0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1D20; } }
L_002C1D0C:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_002C1D10:
    c.r[2].d[0] = c.r[9].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1CA8u | kUnwind; return; } goto L_002C1CA8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C1D20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1D30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002C1D64; } }
L_002C1D48:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1D48u | kUnwind; return; } goto L_002C1D48; } }
L_002C1D64:
    set32(c.r[7], ld32((c.r[4].w[0] + 624u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 28320u);  if (t) { goto L_002C1DDC; } }
L_002C1D7C:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C1DD8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002C1DD8; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_002C1DD8; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1DD8; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 684u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1DD8; } }
    c.r[2].d[0] = ld64((c.r[5].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1DD8; } }
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_002C1DE8; } }
L_002C1DD8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002C1DDC:
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1D7Cu | kUnwind; return; } goto L_002C1D7C; } }
L_002C1DE8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C1DF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C1E34; } }
L_002C1DF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002C1E08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_002C1E34; } }
L_002C1E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1E10u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x002C1E10u) [[unlikely]] return; }
L_002C1E10:
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1E20u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x002C1E20u) [[unlikely]] return; }
L_002C1E20:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
L_002C1E34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C1E50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002C1E88; } }
L_002C1E6C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1E6Cu | kUnwind; return; } goto L_002C1E6C; } }
L_002C1E88:
    set32(c.r[8], ld32((c.r[4].w[0] + 624u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28320u);  if (t) { goto L_002C1F0C; } }
L_002C1EA0:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1F08; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002C1F08; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_002C1F08; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C1F08; } }
    c.r[6].d[0] = ld64((c.r[2].w[0] + 712u));
    c.r[3].d[0] = c.r[6].d[0] & 64ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] & 224ull;  if (t) { goto L_002C1EEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002C1FD4; } }
L_002C1EEC:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C1F08; } }
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 4;
L_002C1F08:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002C1F0C:
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1EA0u | kUnwind; return; } goto L_002C1EA0; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C1F28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C1FD0; } }
L_002C1F28:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[2].d[0];  if (t) { goto L_002C1F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_002C1FD0; } }
L_002C1F38:
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C1F58; } }
    set32(c.r[16], c.r[29].w[0] + 52u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1F60; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C1F58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1FD0; } }
L_002C1F60:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_002C1F6C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002C1F6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1F74u); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002C1F74u) [[unlikely]] return; }
L_002C1F74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002C1F80; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002C1F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1F88u);  if (depth < kMaxDepth) unit_003C(c, 311u, depth + 1u); else { c.pc = 0x001F3D10u; return; } if (c.pc != 0x002C1F88u) [[unlikely]] return; }
L_002C1F88:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C1F98; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002C1F98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1FA4u); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002C1FA4u) [[unlikely]] return; }
L_002C1FA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002C1FB0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002C1FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1FB8u);  if (depth < kMaxDepth) unit_003C(c, 311u, depth + 1u); else { c.pc = 0x001F3D10u; return; } if (c.pc != 0x002C1FB8u) [[unlikely]] return; }
L_002C1FB8:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C1FCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_002C1FD0; } }
L_002C1FCC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002C1FD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002C1FD4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C1FF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002C2028; } }
L_002C200C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C200Cu | kUnwind; return; } goto L_002C200C; } }
L_002C2028:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[2], c.r[6].w[0] << 2);
    c.budget -= 5;
L_002C203C:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C2084; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002C2084; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2084; } }
    c.r[2].d[0] = ld64((c.r[5].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { goto L_002C2084; } }
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[2].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 3;
L_002C2084:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C203Cu | kUnwind; return; } goto L_002C203C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C20A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C214C; } }
L_002C20A4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_002C20B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_002C214C; } }
L_002C20B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C20D4; } }
    set32(c.r[16], c.r[29].w[0] + 52u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C20DC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C20D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002C2150; } }
L_002C20DC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_002C20E8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002C20E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C20F0u); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002C20F0u) [[unlikely]] return; }
L_002C20F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002C20FC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002C20FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2104u);  if (depth < kMaxDepth) unit_003C(c, 311u, depth + 1u); else { c.pc = 0x001F3D10u; return; } if (c.pc != 0x002C2104u) [[unlikely]] return; }
L_002C2104:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C2114; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002C2114:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2120u); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002C2120u) [[unlikely]] return; }
L_002C2120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002C212C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002C212C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2134u);  if (depth < kMaxDepth) unit_003C(c, 311u, depth + 1u); else { c.pc = 0x001F3D10u; return; } if (c.pc != 0x002C2134u) [[unlikely]] return; }
L_002C2134:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C2148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_002C214C; } }
L_002C2148:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002C214C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002C2150:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C2160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002C2194; } }
L_002C2178:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2178u | kUnwind; return; } goto L_002C2178; } }
L_002C2194:
    set32(c.r[7], ld32((c.r[4].w[0] + 624u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 28320u);  if (t) { goto L_002C2200; } }
L_002C21AC:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C21FC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002C21FC; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_002C21FC; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C21FC; } }
    c.r[2].d[0] = ld64((c.r[5].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C21FC; } }
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_002C220C; } }
L_002C21FC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002C2200:
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C21ACu | kUnwind; return; } goto L_002C21AC; } }
L_002C220C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C221C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C2258; } }
L_002C221C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002C222C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_002C2258; } }
L_002C222C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2234u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x002C2234u) [[unlikely]] return; }
L_002C2234:
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2244u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x002C2244u) [[unlikely]] return; }
L_002C2244:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
L_002C2258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2270:
    set32(c.r[6], ld32((c.r[4].w[0] + 624u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 28320u);  if (t) { goto L_002C22B4; } }
L_002C2284:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C22B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002C22B0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002C22B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C22C4; } }
L_002C22B0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002C22B4:
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2284u | kUnwind; return; } goto L_002C2284; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C22C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C22D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C233C; } }
L_002C22F4:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C2338; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[18].d[0];  if (t) { goto L_002C2338; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002C2338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2328u);  if (depth < kMaxDepth) unit_0034(c, 156u, depth + 1u); else { c.pc = 0x001D1970u; return; } if (c.pc != 0x002C2328u) [[unlikely]] return; }
L_002C2328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C234C; } }
L_002C2338:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C233C:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C22F4u | kUnwind; return; } goto L_002C22F4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C234C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C2370:
    set32(c.r[12], ld32((c.r[4].w[0] + 624u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1641u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 1642u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 28320u);  if (t) { goto L_002C241C; } }
L_002C2390:
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[9], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002C2418; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[4].d[0];  if (t) { goto L_002C2418; } }
    set32(c.r[2], ld32((c.r[9].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != c.r[2].d[0];  if (t) { goto L_002C2418; } }
    set32(c.r[8], ld32((c.r[9].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[6].d[0]; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_002C23C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C242C; } }
L_002C23C8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[5].d[0];  if (t) { goto L_002C23E0; } }
    set32(c.r[2], ld32((c.r[9].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C23E0; } }
    c.r[10].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002C23E0:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; c.r[2].d[0] = c.r[8].d[0] ^ 1642ull;  if (t) { goto L_002C23F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C242C; } }
L_002C23F0:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2408; } }
    set32(c.r[2], ld32((c.r[9].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002C2408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C242C; } }
L_002C2418:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_002C241C:
    c.r[2].d[0] = c.r[11].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[11].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2390u | kUnwind; return; } goto L_002C2390; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C242C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C2440:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[20] = c.f[12];
    set32(c.r[17], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[20] = fp::mul(c.f[20], c.f[20]);  if (t) { goto L_002C24DC; } }
L_002C2470:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C24D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[18].d[0];  if (t) { goto L_002C24D8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C24D8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002C24D8; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 224u);  if (t) { goto L_002C24D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C24C4u); set32(c.r[4], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002C24C4u) [[unlikely]] return; }
L_002C24C4:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002C24D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002C24F0; } }
L_002C24D8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C24DC:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2470u | kUnwind; return; } goto L_002C2470; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_002C24F0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C2510:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[20] = c.f[12];
    set32(c.r[17], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.f[20] = fp::mul(c.f[20], c.f[20]);  if (t) { goto L_002C25B8; } }
L_002C2544:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C25B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[18].d[0];  if (t) { goto L_002C25B4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002C25B4; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u - 1u);  if (t) { goto L_002C25B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2588u);  if (depth < kMaxDepth) unit_0059(c, 35u, depth + 1u); else { c.pc = 0x00264680u; return; } if (c.pc != 0x002C2588u) [[unlikely]] return; }
L_002C2588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C25B4; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C25A0u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002C25A0u) [[unlikely]] return; }
L_002C25A0:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002C25B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_002C25CC; } }
L_002C25B4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C25B8:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2544u | kUnwind; return; } goto L_002C2544; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 2;
L_002C25CC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C25F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 27952u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 28320u);  if (t) { goto L_002C2670; } }
L_002C2608:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002C266C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002C266C; } }
    c.r[2].d[0] = ld64((c.r[7].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C266C; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 912u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C266C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 380u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(301ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C266C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;  if (t) { goto L_002C2680; } }
L_002C266C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002C2670:
    c.r[2].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2608u | kUnwind; return; } goto L_002C2608; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C2680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C2690:
    c.f[2] = ld32((c.r[4].w[0] + 232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);  if (t) { goto L_002C26E8; } }
    c.f[2] = ld32((c.r[4].w[0] + 224u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002C26D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2758; } }
L_002C26D0:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 3u);  if (t) { goto L_002C26E0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002C26E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2758; } }
L_002C26E8:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C272C; } }
    c.f[2] = ld32((c.r[4].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 8u);  if (t) { goto L_002C2714; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2758; } }
L_002C2714:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 4u);  if (t) { goto L_002C2724; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
L_002C2724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2758; } }
L_002C272C:
    c.f[2] = ld32((c.r[4].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 7u);  if (t) { goto L_002C2744; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2758; } }
L_002C2744:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 5u);  if (t) { goto L_002C2758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_002C2758; } }
L_002C2758:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C2760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2770u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C2770u) [[unlikely]] return; }
L_002C2770:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002C2784; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C27D4; } }
L_002C2784:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28320u);  if (t) { goto L_002C27C4; } }
L_002C2790:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C27C0; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C27C0; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C27C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002C27D8; } }
L_002C27C0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002C27C4:
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2790u | kUnwind; return; } goto L_002C2790; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C27D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002C27D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C27E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C27F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C27F4u) [[unlikely]] return; }
L_002C27F4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002C2808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C2868; } }
L_002C2808:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28320u);  if (t) { goto L_002C2858; } }
L_002C2814:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2854; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 624u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C2854; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C2854; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2854; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002C286C; } }
L_002C2854:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002C2858:
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2814u | kUnwind; return; } goto L_002C2814; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C2868:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C286C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C2880:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 28320u);
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 5;
L_002C2894:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C28B4; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C28B4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002C28B4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2894u | kUnwind; return; } goto L_002C2894; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C28D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002C2950; } }
L_002C28F0:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C294C; } }
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002C2934; } }
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C294C; } }
L_002C2934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C293Cu);  if (depth < kMaxDepth) unit_006F(c, 254u, depth + 1u); else { c.pc = 0x002BF270u; return; } if (c.pc != 0x002C293Cu) [[unlikely]] return; }
L_002C293C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C294C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_002C2960; } }
L_002C294C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002C2950:
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C28F0u | kUnwind; return; } goto L_002C28F0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C2960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C2980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002C29CC; } }
L_002C2998:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C29C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C29B8u);  if (depth < kMaxDepth) unit_0034(c, 199u, depth + 1u); else { c.pc = 0x001D2AD0u; return; } if (c.pc != 0x002C29B8u) [[unlikely]] return; }
L_002C29B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C29C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_002C29DC; } }
L_002C29C8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002C29CC:
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2998u | kUnwind; return; } goto L_002C2998; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C29DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C29F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 27952u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 28320u);  if (t) { goto L_002C2A8C; } }
L_002C2A0C:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2A88; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002C2A88; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C2A88; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2A88; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 912u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002C2A88; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 344u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(121ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C2A70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2A9C; } }
L_002C2A70:
    set32(c.r[3], ld32((c.r[7].w[0] + 340u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(901ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C2A88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2A9C; } }
L_002C2A88:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002C2A8C:
    c.r[2].d[0] = c.r[8].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2A0Cu | kUnwind; return; } goto L_002C2A0C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C2A9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C2AB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[20] = c.f[12];
    c.f[20] = fp::mul(c.f[20], c.f[20]);
    c.budget -= 11;
L_002C2ADC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2B38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_002C2B38; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C2B38; } }
    c.r[2].d[0] = ld64((c.r[3].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[3].w[0] + 224u);  if (t) { goto L_002C2B38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2B28u); set32(c.r[4], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002C2B28u) [[unlikely]] return; }
L_002C2B28:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C2B38; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002C2B38:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2ADCu | kUnwind; return; } goto L_002C2ADC; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C2B70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2B9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 155u, depth + 1u); else { c.pc = 0x002C2AB0u; return; } if (c.pc != 0x002C2B9Cu) [[unlikely]] return; }
L_002C2B9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C2BAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C2EB0; } }
L_002C2BAC:
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002C2EA0; } }
L_002C2BB8:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002C2E9C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[19].d[0];  if (t) { goto L_002C2E9C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C2E9C; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] + 224u);  if (t) { goto L_002C2E9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2C00u); set32(c.r[5], c.r[17].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002C2C00u) [[unlikely]] return; }
L_002C2C00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44610000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[19].w[0] + 224u);  if (t) { goto L_002C2E9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2C20u); set32(c.r[5], c.r[17].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 26u, depth + 1u); else { c.pc = 0x00144590u; return; } if (c.pc != 0x002C2C20u) [[unlikely]] return; }
L_002C2C20:
    set32(c.r[2], 0u + 16384u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_002C2E28; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002C2D8C; } }
    set32(c.r[2], 0u + 8192u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002C2CF0; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002C2C54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_002C2EA0; } }
L_002C2C54:
    c.f[1] = ld32((c.r[1].w[0] - 26792u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C2CE8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 26800u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C2E9C; } }
    c.f[0] = ld32((c.r[17].w[0] + 224u));
    c.f[1] = ld32((c.r[19].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = c.f[0];  if (t) { goto L_002C2C90; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_002C2C90:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C2CA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[2], c.f[1]);  if (t) { goto L_002C2CAC; } }
L_002C2CA4:
    c.f[1] = c.f[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 2;
L_002C2CAC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C2CC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  if (t) { goto L_002C2CD0; } }
L_002C2CC8:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 2;
L_002C2CD0:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C2E9C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C2CE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002C2EB4; } }
L_002C2CF0:
    c.f[1] = ld32((c.r[1].w[0] - 26808u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C2D84; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 26816u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C2E9C; } }
    c.f[0] = ld32((c.r[17].w[0] + 232u));
    c.f[1] = ld32((c.r[19].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = c.f[0];  if (t) { goto L_002C2D2C; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_002C2D2C:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C2D40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[2], c.f[1]);  if (t) { goto L_002C2D48; } }
L_002C2D40:
    c.f[1] = c.f[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 2;
L_002C2D48:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C2D64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  if (t) { goto L_002C2D6C; } }
L_002C2D64:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 2;
L_002C2D6C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C2E9C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C2D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2EB0; } }
L_002C2D8C:
    c.f[1] = ld32((c.r[1].w[0] - 26760u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C2E20; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 26824u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C2E9C; } }
    c.f[0] = ld32((c.r[17].w[0] + 232u));
    c.f[1] = ld32((c.r[19].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = c.f[0];  if (t) { goto L_002C2DC8; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_002C2DC8:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C2DDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[2], c.f[1]);  if (t) { goto L_002C2DE4; } }
L_002C2DDC:
    c.f[1] = c.f[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 2;
L_002C2DE4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C2E00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  if (t) { goto L_002C2E08; } }
L_002C2E00:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 2;
L_002C2E08:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C2E9C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C2E20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2EB0; } }
L_002C2E28:
    c.f[0] = ld32((c.r[17].w[0] + 224u));
    c.f[1] = ld32((c.r[19].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = c.f[0];  if (t) { goto L_002C2E40; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_002C2E40:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C2E54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[2], c.f[1]);  if (t) { goto L_002C2E5C; } }
L_002C2E54:
    c.f[1] = c.f[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 2;
L_002C2E5C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C2E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  if (t) { goto L_002C2E80; } }
L_002C2E78:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 2;
L_002C2E80:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C2E9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2EB0; } }
L_002C2E9C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002C2EA0:
    c.r[2].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2BB8u | kUnwind; return; } goto L_002C2BB8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C2EB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002C2EB4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C2ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2EE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 159u, depth + 1u); else { c.pc = 0x00242AC0u; return; } if (c.pc != 0x002C2EE4u) [[unlikely]] return; }
L_002C2EE4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_002C2EF8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C2F34; } }
L_002C2EF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 15632u);
    set32(c.r[4], c.r[16].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2F14u); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x002C2F14u) [[unlikely]] return; }
L_002C2F14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C2F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C2F38; } }
L_002C2F34:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C2F38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2F50:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00242970u | kUnwind; return; } [[clang::musttail]] return unit_0050(c, 155u, depth); }
L_002C2F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2F74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002C2F74u) [[unlikely]] return; }
L_002C2F74:
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002C2F88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3024; } }
L_002C2F88:
    set32(c.r[4], ld32((c.r[16].w[0] + 912u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 27952u);
    set32(c.r[2], 0u + 203u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C2FB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002C3028; } }
L_002C2FB8:
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_002C2FDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3024; } }
L_002C2FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2FE4u);  if (depth < kMaxDepth) unit_0069(c, 345u, depth + 1u); else { c.pc = 0x002A76E0u; return; } if (c.pc != 0x002C2FE4u) [[unlikely]] return; }
L_002C2FE4:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[29].w[0]);
    c.budget -= 3;
L_002C2FF0:
    set32(c.r[3], c.r[2].w[0] + 32u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3010; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3010; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002C3010:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + c.r[29].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2FF0u | kUnwind; return; } goto L_002C2FF0; } }
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C3024:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C3028:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C3040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x434F0000u);  if (t) { goto L_002C3060; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C30A8; } }
L_002C3060:
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C306Cu); c.r[5].d[0] = c.r[2].d[0] | 19785ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002C306Cu) [[unlikely]] return; }
L_002C306C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C307C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002C3080; } }
L_002C307C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C3080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C30A4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], 0u + 39u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C30A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C30A8; } }
L_002C30A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C30A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C30C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u - 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
L_002C30E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C3164; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C310Cu);  if (depth < kMaxDepth) unit_0070(c, 181u, depth + 1u); else { c.pc = 0x002C32B0u; return; } if (c.pc != 0x002C310Cu) [[unlikely]] return; }
L_002C310C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3164; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434F0000u);
    set32(c.r[4], c.r[19].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3124u); c.r[5].d[0] = c.r[2].d[0] | 19785ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002C3124u) [[unlikely]] return; }
L_002C3124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3134; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002C3138; } }
L_002C3134:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C3138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3164; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 384u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_002C3164; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C3164; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002C3164:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C30E8u | kUnwind; return; } goto L_002C30E8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3194; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
L_002C3194:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C31B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C31C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002C31C4u) [[unlikely]] return; }
L_002C31C4:
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002C31D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C321C; } }
L_002C31D8:
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C321C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 984u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 228u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002C3218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002C3220; } }
L_002C3218:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C321C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C3220:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C3230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3244u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002C3244u) [[unlikely]] return; }
L_002C3244:
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002C3258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C329C; } }
L_002C3258:
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C329C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 984u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 228u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002C3298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002C32A0; } }
L_002C3298:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C329C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C32A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C32B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C32C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C32C4u) [[unlikely]] return; }
L_002C32C4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C32D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3404; } }
L_002C32D8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C32EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002C3408; } }
L_002C32EC:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3404; } }
L_002C3310:
    set32(c.r[2], ld32((c.r[16].w[0] + 988u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_002C3324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3404; } }
L_002C3324:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3404; } }
L_002C3344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C334Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C334Cu) [[unlikely]] return; }
L_002C334C:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 22u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C3388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3364u);  if (depth < kMaxDepth) unit_0070(c, 13u, depth + 1u); else { c.pc = 0x002C02E0u; return; } if (c.pc != 0x002C3364u) [[unlikely]] return; }
L_002C3364:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3374; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3404; } }
L_002C3374:
    set32(c.r[4], ld32((c.r[16].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002C33E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3404; } }
L_002C3388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3390u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C3390u) [[unlikely]] return; }
L_002C3390:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 77u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002C33CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C33A8u);  if (depth < kMaxDepth) unit_0070(c, 15u, depth + 1u); else { c.pc = 0x002C0330u; return; } if (c.pc != 0x002C33A8u) [[unlikely]] return; }
L_002C33A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C33B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3404; } }
L_002C33B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002C33E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3404; } }
L_002C33CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 984u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C33E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3404; } }
L_002C33E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 988u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
L_002C3404:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C3408:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C3420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3438u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C3438u) [[unlikely]] return; }
L_002C3438:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 26u));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002C345C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3454u);  if (depth < kMaxDepth) unit_0070(c, 150u, depth + 1u); else { c.pc = 0x002C2980u; return; } if (c.pc != 0x002C3454u) [[unlikely]] return; }
L_002C3454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002C350C; } }
L_002C345C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3464u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C3464u) [[unlikely]] return; }
L_002C3464:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002C3478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3508; } }
L_002C3478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_002C34FC; } }
L_002C3480:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C34F4; } }
    c.r[3].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C34F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C34BCu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C34BCu) [[unlikely]] return; }
L_002C34BC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C34DC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C34F4; } }
L_002C34DC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 371u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C34F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3508; } }
L_002C34F4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 2;
L_002C34FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3480u | kUnwind; return; } goto L_002C3480; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C3508:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002C350C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C3520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002C35B0; } }
L_002C3538:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C35AC; } }
    c.r[3].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C35AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3574u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C3574u) [[unlikely]] return; }
L_002C3574:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C3594; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C35AC; } }
L_002C3594:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 371u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C35AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002C35C4; } }
L_002C35AC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002C35B0:
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3538u | kUnwind; return; } goto L_002C3538; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_002C35C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C35E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C35FCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C35FCu) [[unlikely]] return; }
L_002C35FC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 26u));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002C3620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3618u);  if (depth < kMaxDepth) unit_0070(c, 150u, depth + 1u); else { c.pc = 0x002C2980u; return; } if (c.pc != 0x002C3618u) [[unlikely]] return; }
L_002C3618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002C36DC; } }
L_002C3620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3628u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C3628u) [[unlikely]] return; }
L_002C3628:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002C363C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C36D8; } }
L_002C363C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_002C36CC; } }
L_002C3644:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C36C4; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C36C4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C36C4; } }
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C36C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C369Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C369Cu) [[unlikely]] return; }
L_002C369C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C36BC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C36C4; } }
L_002C36BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_002C36D8; } }
L_002C36C4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 2;
L_002C36CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3644u | kUnwind; return; } goto L_002C3644; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C36D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002C36DC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C36F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3708u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C3708u) [[unlikely]] return; }
L_002C3708:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 44ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 47ll ? 1ull : 0ull;  if (t) { goto L_002C3728; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C372C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002C372C; } }
L_002C3728:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C372C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002C37D8; } }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u - 1u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002C3740:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C3784; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C3784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3774u);  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x002C3774u) [[unlikely]] return; }
L_002C3774:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3784; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002C3784:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3740u | kUnwind; return; } goto L_002C3740; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002C37B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_002C3834; } }
L_002C37B8:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002C3838; } }
L_002C37D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_002C3828; } }
L_002C37E0:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C3820; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C3820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3810u);  if (depth < kMaxDepth) unit_0059(c, 56u, depth + 1u); else { c.pc = 0x00264C70u; return; } if (c.pc != 0x002C3810u) [[unlikely]] return; }
L_002C3810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_002C3834; } }
L_002C3820:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 2;
L_002C3828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C37E0u | kUnwind; return; } goto L_002C37E0; } }
L_002C3830:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C3834:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002C3838:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C3850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3864u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C3864u) [[unlikely]] return; }
L_002C3864:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 26u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002C3878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C38D4; } }
L_002C3878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_002C38C8; } }
L_002C3880:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C38C0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C38C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C38B0u);  if (depth < kMaxDepth) unit_0034(c, 199u, depth + 1u); else { c.pc = 0x001D2AD0u; return; } if (c.pc != 0x002C38B0u) [[unlikely]] return; }
L_002C38B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C38C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_002C38D4; } }
L_002C38C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 2;
L_002C38C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3880u | kUnwind; return; } goto L_002C3880; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C38D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C38F0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[6], 0u + 40u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3930u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002C3930u) [[unlikely]] return; }
L_002C3930:
    set32(c.r[4], c.r[21].w[0] + 224u);
    c.r[3].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = c.r[5].w[0];
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.budget -= 7;
L_002C394C:
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002C3AA4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[21].d[0];  if (t) { goto L_002C3AA4; } }
    c.r[5].d[0] = ld64((c.r[6].w[0] + 712u));
    c.r[5].d[0] = c.r[5].d[0] & 224ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002C3AA4; } }
    c.r[5].d[0] = ld8((c.r[21].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002C3AA4; } }
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[6].w[0] + 224u));
    c.f[0] = fp::sub(c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[6].w[0] + 224u);  if (t) { goto L_002C39F0; } }
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::sub(c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::add(c.f[1], c.f[3]);  if (t) { goto L_002C39C4; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.r[5].w[0]);  if (t) { goto L_002C3AA4; } }
L_002C39C4:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C39E0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[5].w[0]);  if (t) { goto L_002C3AA4; } }
L_002C39E0:
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.r[5].w[0]);  if (t) { goto L_002C3AA4; } }
L_002C39F0:
    c.f[0] = fp::add(c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C3A54; } }
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::sub(c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::add(c.f[1], c.f[3]);  if (t) { goto L_002C3A28; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 172u), c.r[5].w[0]);  if (t) { goto L_002C3AA4; } }
L_002C3A28:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C3A44; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 196u), c.r[5].w[0]);  if (t) { goto L_002C3AA4; } }
L_002C3A44:
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 184u), c.r[5].w[0]);  if (t) { goto L_002C3AA4; } }
L_002C3A54:
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::sub(c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::add(c.f[1], c.f[3]);  if (t) { goto L_002C3A7C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 168u), c.r[5].w[0]);  if (t) { goto L_002C3AA4; } }
L_002C3A7C:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C3A98; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.r[5].w[0]);  if (t) { goto L_002C3AA4; } }
L_002C3A98:
    set32(c.r[5], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[29].w[0] + 180u), c.r[5].w[0]);
    c.budget -= 3;
L_002C3AA4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[5].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C394Cu | kUnwind; return; } goto L_002C394C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[29].w[0] + 164u);  if (t) { goto L_002C3AC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002C3E08; } }
L_002C3AC8:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[29].w[0] + 188u);  if (t) { goto L_002C3AF0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3AEC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 3;
L_002C3AEC:
    set32(c.r[19], c.r[29].w[0] + 188u);
    c.budget -= 1;
L_002C3AF0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3B14; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3B14; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 3;
L_002C3B14:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[29].w[0] + 172u);  if (t) { goto L_002C3B3C; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3B38; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_002C3B38:
    set32(c.r[17], c.r[29].w[0] + 172u);
    c.budget -= 1;
L_002C3B3C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[29].w[0] + 168u);  if (t) { goto L_002C3B64; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3B60; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 3;
L_002C3B60:
    set32(c.r[18], c.r[29].w[0] + 168u);
    c.budget -= 1;
L_002C3B64:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[29].w[0] + 176u);  if (t) { goto L_002C3B8C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3B88; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C3B88:
    set32(c.r[30], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_002C3B8C:
    set32(c.r[2], ld32((c.r[30].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 192u);  if (t) { goto L_002C3BB4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3BB0; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C3BB0:
    set32(c.r[16], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_002C3BB4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[22], c.r[29].w[0] + 184u);  if (t) { goto L_002C3BDC; } }
    set32(c.r[3], c.r[29].w[0] + 184u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3BD8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002C3BD8:
    set32(c.r[22], c.r[29].w[0] + 184u);
    c.budget -= 1;
L_002C3BDC:
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3C00; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3C00; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C3C00:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3C44; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3C44; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_002C3C44; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3C34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 237u, depth + 1u); else { c.pc = 0x002BEA10u; return; } if (c.pc != 0x002C3C34u) [[unlikely]] return; }
L_002C3C34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3C44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C3E08; } }
L_002C3C44:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[29].w[0] + 196u);  if (t) { goto L_002C3C8C; } }
    set32(c.r[2], ld32((c.r[30].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3C88; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_002C3C88; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3C78u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006F(c, 237u, depth + 1u); else { c.pc = 0x002BEA10u; return; } if (c.pc != 0x002C3C78u) [[unlikely]] return; }
L_002C3C78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3C88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_002C3E08; } }
L_002C3C88:
    set32(c.r[23], c.r[29].w[0] + 196u);
    c.budget -= 1;
L_002C3C8C:
    set32(c.r[2], ld32((c.r[23].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3CD0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3CD0; } }
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_002C3CD0; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3CC0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006F(c, 237u, depth + 1u); else { c.pc = 0x002BEA10u; return; } if (c.pc != 0x002C3CC0u) [[unlikely]] return; }
L_002C3CC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_002C3E08; } }
L_002C3CD0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3D14; } }
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3D14; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_002C3D14; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3D04u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006F(c, 237u, depth + 1u); else { c.pc = 0x002BEA10u; return; } if (c.pc != 0x002C3D04u) [[unlikely]] return; }
L_002C3D04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3D14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C3E08; } }
L_002C3D14:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3D50; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3D50; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002C3D50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3D40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 235u, depth + 1u); else { c.pc = 0x002BE8B0u; return; } if (c.pc != 0x002C3D40u) [[unlikely]] return; }
L_002C3D40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3D50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C3E08; } }
L_002C3D50:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3D8C; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3D8C; } }
    set32(c.r[2], ld32((c.r[23].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002C3D8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3D7Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006F(c, 235u, depth + 1u); else { c.pc = 0x002BE8B0u; return; } if (c.pc != 0x002C3D7Cu) [[unlikely]] return; }
L_002C3D7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3D8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_002C3E08; } }
L_002C3D8C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3DC8; } }
    set32(c.r[2], ld32((c.r[30].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3DC8; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002C3DC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3DB8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006F(c, 235u, depth + 1u); else { c.pc = 0x002BE8B0u; return; } if (c.pc != 0x002C3DB8u) [[unlikely]] return; }
L_002C3DB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3DC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002C3E08; } }
L_002C3DC8:
    set32(c.r[2], ld32((c.r[23].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002C3E08; } }
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3E04; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002C3E04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3DF4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006F(c, 235u, depth + 1u); else { c.pc = 0x002BE8B0u; return; } if (c.pc != 0x002C3DF4u) [[unlikely]] return; }
L_002C3DF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3E04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_002C3E08; } }
L_002C3E04:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002C3E08:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002C3E40:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u + 40u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C3E8C; } }
L_002C3E70:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3E70u | kUnwind; return; } goto L_002C3E70; } }
L_002C3E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3E94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 138u, depth + 1u); else { c.pc = 0x002C2690u; return; } if (c.pc != 0x002C3E94u) [[unlikely]] return; }
L_002C3E94:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C3E9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C3F08; } }
    c.r[2].d[0] = ld64((c.r[4].w[0] + 712u));
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3F08; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C3F08; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3F08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3EF0u);  if (depth < kMaxDepth) unit_0070(c, 138u, depth + 1u); else { c.pc = 0x002C2690u; return; } if (c.pc != 0x002C3EF0u) [[unlikely]] return; }
L_002C3EF0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 112u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 6;
L_002C3F08:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3E9Cu | kUnwind; return; } goto L_002C3E9C; } }
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_002C3F30; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3F30; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_002C3F30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[3].w[0] + 2u);  if (t) { [[clang::musttail]] return unit_0071(c, 13u, depth); } }
    set32(c.r[21], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[3].w[0] - 1u);  if (t) { goto L_002C3F4C; } }
    set32(c.r[21], 0u + 1u);
    c.budget -= 1;
L_002C3F4C:
    c.r[1].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_002C3F5C; } }
    set32(c.r[20], 0u + 8u);
    c.budget -= 1;
L_002C3F5C:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 112u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] << 2);  if (t) { goto L_002C3F78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { [[clang::musttail]] return unit_0071(c, 27u, depth); } }
L_002C3F78:
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[3].w[0] + 112u);
    set32(c.r[18], c.r[2].w[0] + 112u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0071(c, 4u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C3FB4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C3FD0; } }
L_002C3FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3FBCu); c.r[5].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C3FBCu) [[unlikely]] return; }
L_002C3FBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3FCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0071(c, 26u, depth); } }
L_002C3FCC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002C3FD0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C3FE4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { [[clang::musttail]] return unit_0071(c, 1u, depth); } }
L_002C3FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3FECu); set32(c.r[5], 0u + 4096u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C3FECu) [[unlikely]] return; }
L_002C3FEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3FFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0071(c, 26u, depth); } }
L_002C3FFC:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0071(c, 1u, depth);
}

}
