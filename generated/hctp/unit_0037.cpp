#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0037[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 25,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 74, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0,
    0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0,
    99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0037(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001DC000;
    case 2u: goto L_001DC018;
    case 3u: goto L_001DC028;
    case 4u: goto L_001DC03C;
    case 5u: goto L_001DC048;
    case 6u: goto L_001DC060;
    case 7u: goto L_001DC080;
    case 8u: goto L_001DC0B0;
    case 9u: goto L_001DC0E8;
    case 10u: goto L_001DC1C4;
    case 11u: goto L_001DC370;
    case 12u: goto L_001DC3A0;
    case 13u: goto L_001DC3B8;
    case 14u: goto L_001DC3D0;
    case 15u: goto L_001DC400;
    case 16u: goto L_001DC414;
    case 17u: goto L_001DC420;
    case 18u: goto L_001DC430;
    case 19u: goto L_001DC458;
    case 20u: goto L_001DC494;
    case 21u: goto L_001DC4BC;
    case 22u: goto L_001DC4C4;
    case 23u: goto L_001DC4E8;
    case 24u: goto L_001DC4F4;
    case 25u: goto L_001DC4FC;
    case 26u: goto L_001DC524;
    case 27u: goto L_001DC52C;
    case 28u: goto L_001DC550;
    case 29u: goto L_001DC55C;
    case 30u: goto L_001DC56C;
    case 31u: goto L_001DC580;
    case 32u: goto L_001DC5B0;
    case 33u: goto L_001DC5C8;
    case 34u: goto L_001DC5F4;
    case 35u: goto L_001DC600;
    case 36u: goto L_001DC624;
    case 37u: goto L_001DC63C;
    case 38u: goto L_001DC648;
    case 39u: goto L_001DC65C;
    case 40u: goto L_001DC678;
    case 41u: goto L_001DC720;
    case 42u: goto L_001DC74C;
    case 43u: goto L_001DC754;
    case 44u: goto L_001DC778;
    case 45u: goto L_001DC784;
    case 46u: goto L_001DC794;
    case 47u: goto L_001DC7C0;
    case 48u: goto L_001DC7C8;
    case 49u: goto L_001DC7EC;
    case 50u: goto L_001DC7F8;
    case 51u: goto L_001DC810;
    case 52u: goto L_001DC82C;
    case 53u: goto L_001DC838;
    case 54u: goto L_001DC84C;
    case 55u: goto L_001DC858;
    case 56u: goto L_001DC880;
    case 57u: goto L_001DC8B0;
    case 58u: goto L_001DC8C8;
    case 59u: goto L_001DC8E0;
    case 60u: goto L_001DC920;
    case 61u: goto L_001DC938;
    case 62u: goto L_001DC950;
    case 63u: goto L_001DC990;
    case 64u: goto L_001DC9A8;
    case 65u: goto L_001DC9C0;
    case 66u: goto L_001DCA0C;
    case 67u: goto L_001DCD0C;
    case 68u: goto L_001DCE28;
    case 69u: goto L_001DCF10;
    case 70u: goto L_001DCF24;
    case 71u: goto L_001DCF38;
    case 72u: goto L_001DD0B0;
    case 73u: goto L_001DD168;
    case 74u: goto L_001DD16C;
    case 75u: goto L_001DD184;
    case 76u: goto L_001DD1D4;
    case 77u: goto L_001DD1E8;
    case 78u: goto L_001DD234;
    case 79u: goto L_001DD260;
    case 80u: goto L_001DD280;
    case 81u: goto L_001DD2D4;
    case 82u: goto L_001DD418;
    case 83u: goto L_001DD434;
    case 84u: goto L_001DD4F0;
    case 85u: goto L_001DD6A4;
    case 86u: goto L_001DD814;
    case 87u: goto L_001DD824;
    case 88u: goto L_001DD848;
    case 89u: goto L_001DD864;
    case 90u: goto L_001DD9F4;
    case 91u: goto L_001DDA04;
    case 92u: goto L_001DDA54;
    case 93u: goto L_001DDA64;
    case 94u: goto L_001DDB40;
    case 95u: goto L_001DDD70;
    case 96u: goto L_001DDDE0;
    case 97u: goto L_001DDFE0;
    case 98u: goto L_001DDFF4;
    case 99u: goto L_001DE000;
    case 100u: goto L_001DE014;
    case 101u: goto L_001DE060;
    case 102u: goto L_001DE0AC;
    case 103u: goto L_001DE0B8;
    case 104u: goto L_001DE0C4;
    case 105u: goto L_001DE0DC;
    case 106u: goto L_001DE100;
    case 107u: goto L_001DE130;
    case 108u: goto L_001DE144;
    case 109u: goto L_001DE16C;
    case 110u: goto L_001DE1B0;
    case 111u: goto L_001DE1D4;
    case 112u: goto L_001DE1FC;
    case 113u: goto L_001DE2C4;
    case 114u: goto L_001DE2FC;
    case 115u: goto L_001DE31C;
    case 116u: goto L_001DE364;
    case 117u: goto L_001DE3B0;
    case 118u: goto L_001DE3C4;
    case 119u: goto L_001DE3F8;
    case 120u: goto L_001DE404;
    case 121u: goto L_001DE46C;
    case 122u: goto L_001DE4EC;
    case 123u: goto L_001DE674;
    case 124u: goto L_001DE69C;
    case 125u: goto L_001DE6B4;
    case 126u: goto L_001DE71C;
    case 127u: goto L_001DE768;
    case 128u: goto L_001DE8E4;
    case 129u: goto L_001DE90C;
    case 130u: goto L_001DE968;
    case 131u: goto L_001DE9D4;
    case 132u: goto L_001DEA70;
    case 133u: goto L_001DEAA4;
    case 134u: goto L_001DEAB8;
    case 135u: goto L_001DEAC8;
    case 136u: goto L_001DEAE4;
    case 137u: goto L_001DEB4C;
    case 138u: goto L_001DEB74;
    case 139u: goto L_001DEBA0;
    case 140u: goto L_001DEBB4;
    case 141u: goto L_001DEBE0;
    case 142u: goto L_001DEC1C;
    case 143u: goto L_001DEC30;
    case 144u: goto L_001DEC3C;
    case 145u: goto L_001DEC48;
    case 146u: goto L_001DEC60;
    case 147u: goto L_001DEC80;
    case 148u: goto L_001DEE28;
    case 149u: goto L_001DEE50;
    case 150u: goto L_001DEE88;
    case 151u: goto L_001DEEA8;
    case 152u: goto L_001DEF00;
    case 153u: goto L_001DEF58;
    case 154u: goto L_001DF12C;
    case 155u: goto L_001DF180;
    case 156u: goto L_001DF32C;
    case 157u: goto L_001DF490;
    case 158u: goto L_001DF5EC;
    case 159u: goto L_001DF738;
    case 160u: goto L_001DF9B8;
    case 161u: goto L_001DFA34;
    case 162u: goto L_001DFA88;
    case 163u: goto L_001DFB00;
    case 164u: goto L_001DFB88;
    case 165u: goto L_001DFBFC;
    case 166u: goto L_001DFC08;
    case 167u: goto L_001DFC30;
    case 168u: goto L_001DFC40;
    case 169u: goto L_001DFC58;
    case 170u: goto L_001DFCDC;
    case 171u: goto L_001DFCF4;
    case 172u: goto L_001DFD90;
    case 173u: goto L_001DFE5C;
    case 174u: goto L_001DFE70;
    case 175u: goto L_001DFEA8;
    case 176u: goto L_001DFEBC;
    case 177u: goto L_001DFED4;
    case 178u: goto L_001DFF14;
    case 179u: goto L_001DFF54;
    case 180u: goto L_001DFF68;
    default: bad_entry(c, 0x001DC000u); return;
    }
L_001DC000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC018u); set32(c.r[4], ld32((c.r[4].w[0] + 48u)));  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x001DC018u) [[unlikely]] return; }
L_001DC018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 40u);  if (t) { goto L_001DC048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC028u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001DC028u) [[unlikely]] return; }
L_001DC028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 436u);  if (t) { goto L_001DC040; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC03Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 291u, depth + 1u); else { c.pc = 0x001DBB80u; return; } if (c.pc != 0x001DC03Cu) [[unlikely]] return; }
L_001DC03C:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 1;
L_001DC040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC048u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001DC048u) [[unlikely]] return; }
L_001DC048:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DC060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC080u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x001DC080u) [[unlikely]] return; }
L_001DC080:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 128u);
    set32(c.r[2], c.r[2].w[0] - 8768u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DC0B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 11000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 164u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);  if (t) { goto L_001DC0F4; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[6].w[0] + 364u), c.r[3].w[0]);  if (t) { goto L_001DC35C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC0E8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DC0E8u) [[unlikely]] return; }
L_001DC0E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001DC360; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.budget -= 1;
L_001DC0F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.f[4] = c.r[3].w[0];
    c.f[3] = ld32((c.r[6].w[0] + 232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[5].w[0];
    c.f[5] = ld32((c.r[6].w[0] + 224u));
    set32(c.r[3], 0u + 2u);
    c.f[2] = fp::add(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[3] = fp::sub(c.f[5], c.f[4]);
    st32((c.r[4].w[0] + 48u), c.f[3]);
    c.f[1] = fp::add(c.f[4], c.f[5]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 20;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001DC184; } }
    c.f[3] = ld32((c.r[4].w[0] + 60u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 60u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 48u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.budget -= 16;
L_001DC184:
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], 0u + 128u);
    set32(c.r[5], ld32((c.r[5].w[0] + 364u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_001DC1A8; } }
    set32(c.r[3], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001DC294; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DC1A8:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 28320u);
    set32(c.r[3], c.r[8].w[0] << 2);
    c.budget -= 7;
L_001DC1C4:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001DC254; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001DC254; } }
    c.f[0] = ld32((c.r[7].w[0] + 228u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DC254; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 240u)));
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.f[2] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DC244; } }
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DC244; } }
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DC244; } }
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001DC248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_001DC248; } }
L_001DC244:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DC248:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DC254; } }
    set32(c.r[9], 0u + 1u);
    c.budget -= 1;
L_001DC254:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DC1C4u | kUnwind; return; } goto L_001DC1C4; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001DC288; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_001DC294; } }
    set32(c.r[3], 0u + 28u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_001DC294; } }
L_001DC288:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_001DC294; } }
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 1;
L_001DC294:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[6], c.r[3].w[0] + 364u);
    set32(c.r[3], ld32((c.r[3].w[0] + 364u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001DC35C; } }
    c.f[1] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = ld32((c.r[1].w[0] + 20584u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001DC2F8; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[7], 0u - 1u);  if (t) { goto L_001DC2F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_001DC2F8; } }
    set32(c.r[7], 0u - 1u);
    c.budget -= 1;
L_001DC2F8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[6], c.r[3].w[0] + 364u);
    set32(c.r[3], ld32((c.r[3].w[0] + 364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001DC330; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001DC330; } }
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001DC330:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], c.r[3].w[0] + 364u);
    set32(c.r[3], ld32((c.r[3].w[0] + 364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DC35C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], 0u + 28u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DC35C; } }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001DC35C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001DC360:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001DC370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DC3B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC3A0u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001DC3A0u) [[unlikely]] return; }
L_001DC3A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DC3BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC3B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001DC3B8u) [[unlikely]] return; }
L_001DC3B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DC3BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DC3D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001DC3F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DC420; } }
L_001DC3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC400u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001DC400u) [[unlikely]] return; }
L_001DC400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 436u);  if (t) { goto L_001DC418; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC414u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 6u, depth + 1u); else { c.pc = 0x001DC060u; return; } if (c.pc != 0x001DC414u) [[unlikely]] return; }
L_001DC414:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 1;
L_001DC418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC420u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001DC420u) [[unlikely]] return; }
L_001DC420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DC430:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001DC44C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001DC44C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45440000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC458u); c.r[5].d[0] = c.r[2].d[0] | 19531ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DC458u) [[unlikely]] return; }
L_001DC458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001DC464; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001DC464:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001DC56C; } }
    st8((c.r[17].w[0] + 899u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 912u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001DC48C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001DC564; } }
L_001DC48C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC494u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x001DC494u) [[unlikely]] return; }
L_001DC494:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27976u)));
    set32(c.r[6], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 256u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC4BCu); set32(c.r[11], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 182u, depth + 1u); else { c.pc = 0x00101A88u; return; } if (c.pc != 0x001DC4BCu) [[unlikely]] return; }
L_001DC4BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC4C4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x001DC4C4u) [[unlikely]] return; }
L_001DC4C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 31808u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC4E8u); set32(c.r[5], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 192u, depth + 1u); else { c.pc = 0x00101DB0u; return; } if (c.pc != 0x001DC4E8u) [[unlikely]] return; }
L_001DC4E8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC4F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x001DC4F4u) [[unlikely]] return; }
L_001DC4F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC4FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 228u, depth + 1u); else { c.pc = 0x002D6E00u; return; } if (c.pc != 0x001DC4FCu) [[unlikely]] return; }
L_001DC4FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27976u)));
    set32(c.r[6], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 256u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC524u); set32(c.r[11], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 191u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x001DC524u) [[unlikely]] return; }
L_001DC524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC52Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x001DC52Cu) [[unlikely]] return; }
L_001DC52C:
    set32(c.r[3], ld32((c.r[17].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 31808u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC550u); set32(c.r[5], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 197u, depth + 1u); else { c.pc = 0x00101F30u; return; } if (c.pc != 0x001DC550u) [[unlikely]] return; }
L_001DC550:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC55Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x001DC55Cu) [[unlikely]] return; }
L_001DC55C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001DC570; } }
L_001DC564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC56Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 228u, depth + 1u); else { c.pc = 0x002D6E00u; return; } if (c.pc != 0x001DC56Cu) [[unlikely]] return; }
L_001DC56C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001DC570:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_001DC580:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 111u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001DC5B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC5B0u); set32(c.r[4], ld32((c.r[19].w[0] + 912u)));  if (depth < kMaxDepth) unit_0054(c, 292u, depth + 1u); else { c.pc = 0x00251E30u; return; } if (c.pc != 0x001DC5B0u) [[unlikely]] return; }
L_001DC5B0:
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001DC5D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC5C8u);  if (depth < kMaxDepth) unit_0037(c, 18u, depth + 1u); else { c.pc = 0x001DC430u; return; } if (c.pc != 0x001DC5C8u) [[unlikely]] return; }
L_001DC5C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001DC85C; } }
L_001DC5D0:
    set32(c.r[3], ld32((c.r[19].w[0] + 1252u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DC858; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st8((c.r[19].w[0] + 899u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC5F4u); st32((c.r[29].w[0] + 300u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x001DC5F4u) [[unlikely]] return; }
L_001DC5F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC600u); c.r[4].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001DC600u) [[unlikely]] return; }
L_001DC600:
    set32(c.r[5], ld32((c.r[19].w[0] + 1252u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20450000u);
    c.r[2].d[0] = c.r[2].d[0] | 20546ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DC62C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC624u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 115u, depth + 1u); else { c.pc = 0x0015D560u; return; } if (c.pc != 0x001DC624u) [[unlikely]] return; }
L_001DC624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 112u);  if (t) { goto L_001DC640; } }
L_001DC62C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC63Cu); c.r[6].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001DC63Cu) [[unlikely]] return; }
L_001DC63C:
    set32(c.r[4], 0u + 112u);
    c.budget -= 1;
L_001DC640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC648u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001DC648u) [[unlikely]] return; }
L_001DC648:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DC660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC65Cu);  if (depth < kMaxDepth) unit_0017(c, 32u, depth + 1u); else { c.pc = 0x0015C630u; return; } if (c.pc != 0x001DC65Cu) [[unlikely]] return; }
L_001DC65C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DC660:
    set32(c.r[25], ld32((c.r[16].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC678u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DC678u) [[unlikely]] return; }
L_001DC678:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF80000u);
    c.r[4].d[0] = c.r[3].d[0] | 31ull;
    c.r[7].d[0] = ld16((c.r[19].w[0] + 916u));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    set32(c.r[5], 0u - 16384u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[6].d[0] = ld16((c.r[2].w[0]));
    c.r[4].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[6].d[0] & 16383ull;
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 16383ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld64((c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[19].w[0] + 916u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 13;
    c.r[4].d[0] = c.r[4].d[0] >> 50;
    c.r[4].d[0] = c.r[4].d[0] + c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 16383ull;
    c.r[4].d[0] = c.r[4].d[0] << 37;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[2].w[0]), c.r[3].d[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 912u)));
    c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 31;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_001DC708; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 1256u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DC800; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_001DC708:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[17], 0u + 192u);  if (t) { goto L_001DC714; } }
    set32(c.r[17], 0u + 96u);
    c.budget -= 1;
L_001DC714:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC720u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x001DC720u) [[unlikely]] return; }
L_001DC720:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[11].d[0] = c.r[17].d[0] << 48;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27976u)));
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[6], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC74Cu); set32(c.r[10], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 182u, depth + 1u); else { c.pc = 0x00101A88u; return; } if (c.pc != 0x001DC74Cu) [[unlikely]] return; }
L_001DC74C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC754u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x001DC754u) [[unlikely]] return; }
L_001DC754:
    set32(c.r[3], ld32((c.r[19].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 31808u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC778u); set32(c.r[5], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 192u, depth + 1u); else { c.pc = 0x00101DB0u; return; } if (c.pc != 0x001DC778u) [[unlikely]] return; }
L_001DC778:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC784u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x001DC784u) [[unlikely]] return; }
L_001DC784:
    set32(c.r[25], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC794u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DC794u) [[unlikely]] return; }
L_001DC794:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[11].d[0] = c.r[17].d[0] << 48;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27976u)));
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC7C0u); set32(c.r[10], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 191u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x001DC7C0u) [[unlikely]] return; }
L_001DC7C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC7C8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x001DC7C8u) [[unlikely]] return; }
L_001DC7C8:
    set32(c.r[3], ld32((c.r[19].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 31808u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC7ECu); set32(c.r[5], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 197u, depth + 1u); else { c.pc = 0x00101F30u; return; } if (c.pc != 0x001DC7ECu) [[unlikely]] return; }
L_001DC7EC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC7F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x001DC7F8u) [[unlikely]] return; }
L_001DC7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DC810; } }
L_001DC800:
    set32(c.r[25], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC810u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DC810u) [[unlikely]] return; }
L_001DC810:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001DC830; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC82Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DC82Cu) [[unlikely]] return; }
L_001DC82C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DC830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC838u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001DC838u) [[unlikely]] return; }
L_001DC838:
    set32(c.r[4], ld32((c.r[19].w[0] + 1252u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DC850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC84Cu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001DC84Cu) [[unlikely]] return; }
L_001DC84C:
    st32((c.r[19].w[0] + 1252u), 0u);
    c.budget -= 1;
L_001DC850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC858u); set32(c.r[4], ld32((c.r[29].w[0] + 300u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001DC858u) [[unlikely]] return; }
L_001DC858:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001DC85C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_001DC880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DC8C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC8B0u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001DC8B0u) [[unlikely]] return; }
L_001DC8B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DC8CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC8C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001DC8C8u) [[unlikely]] return; }
L_001DC8C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DC8CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DC8E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DC938; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 8736u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001DC920; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8720u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC920u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001DC920u) [[unlikely]] return; }
L_001DC920:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DC93C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC938u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001DC938u) [[unlikely]] return; }
L_001DC938:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DC93C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DC950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DC9A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 8704u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001DC990; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8688u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC990u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001DC990u) [[unlikely]] return; }
L_001DC990:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DC9AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC9A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001DC9A8u) [[unlikely]] return; }
L_001DC9A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DC9AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DC9C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001DD06C; } }
L_001DCA0C:
    set32(c.r[6], ld32((c.r[22].w[0] + 28u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20832u));
    set32(c.r[3], ld32((c.r[6].w[0] + 64u)));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_001DCA30; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DCA30:
    c.r[3].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DD06C; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001DD06C; } }
    c.f[23] = ld32((c.r[19].w[0] + 4u));
    c.f[22] = ld32((c.r[19].w[0] + 12u));
    c.f[20] = ld32((c.r[19].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[22]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = ld32((c.r[19].w[0] + 8u));  if (t) { goto L_001DCA70; } }
    c.f[0] = c.f[23];
    c.f[23] = c.f[22];
    c.f[22] = c.f[0];
    c.budget -= 3;
L_001DCA70:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] & 15ull;  if (t) { goto L_001DCA88; } }
    c.f[0] = c.f[21];
    c.f[21] = c.f[20];
    c.f[20] = c.f[0];
    c.budget -= 3;
L_001DCA88:
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001DCCF0; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 168u)));
    set32(c.r[3], 0u + 110u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 111u);  if (t) { goto L_001DCAAC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001DCAF4; } }
L_001DCAAC:
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1C00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0xC1400000u);  if (t) { goto L_001DCAF4; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].sd[0] = static_cast<std::int32_t>(0xC0000000u);  if (t) { goto L_001DCAF4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[23] = c.r[4].w[0];
    c.f[22] = c.r[3].w[0];
    c.f[21] = c.f[23];
    c.f[20] = c.f[22];
    c.budget -= 6;
L_001DCAF4:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 370u));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001DD064; } }
    c.f[0] = ld32((c.r[21].w[0] + 16u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 393u));
    c.r[7].d[0] = 0ull + 0ull;
    c.f[23] = fp::sub(c.f[23], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.f[22] = fp::add(c.f[22], c.f[0]);
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_001DCB48; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001DCB48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DCB48; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001DCB48:
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1C00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 110u);  if (t) { goto L_001DCB88; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001DCB78; } }
    set32(c.r[3], 0u + 111u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001DCB88; } }
L_001DCB78:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DCB88; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001DCB88:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xC1C00000u);  if (t) { goto L_001DD064; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DD064; } }
    c.f[1] = ld32((c.r[21].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[23]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DCCB8; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DCCB8; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DCCB8; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[3] = fp::sub(c.f[21], c.f[0]);  if (t) { goto L_001DCCB8; } }
    c.f[2] = fp::sub(c.f[20], c.f[0]);
    c.f[5] = fp::sub(c.f[23], c.f[1]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[4] = fp::sub(c.f[22], c.f[1]);  if (t) { goto L_001DCC00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[5];  if (t) { goto L_001DCC04; } }
L_001DCC00:
    c.f[1] = c.f[5] ^ fp::kSign;
    c.budget -= 1;
L_001DCC04:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[4] ^ fp::kSign;  if (t) { goto L_001DCC1C; } }
    c.f[0] = c.f[4];
    c.budget -= 1;
L_001DCC1C:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DCC2C; } }
    c.f[5] = c.f[4];
    c.budget -= 1;
L_001DCC2C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = c.f[3] ^ fp::kSign;  if (t) { goto L_001DCC44; } }
    c.f[1] = c.f[3];
    c.budget -= 1;
L_001DCC44:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[2] ^ fp::kSign;  if (t) { goto L_001DCC5C; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_001DCC5C:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DCC6C; } }
    c.f[3] = c.f[2];
    c.budget -= 1;
L_001DCC6C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = c.f[5] ^ fp::kSign;  if (t) { goto L_001DCC84; } }
    c.f[1] = c.f[5];
    c.budget -= 1;
L_001DCC84:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[3] ^ fp::kSign;  if (t) { goto L_001DCC9C; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_001DCC9C:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DCCB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.f[5]);  if (t) { goto L_001DCCB4; } }
L_001DCCB0:
    st32((c.r[20].w[0] + 8u), c.f[3]);
    c.budget -= 1;
L_001DCCB4:
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_001DCCB8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001DD064; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DD064; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DD064; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 28u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 375u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001DD064; } }
L_001DCCF0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DD064; } }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DCE44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCD0Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001DCD0Cu) [[unlikely]] return; }
L_001DCD0C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DCE0C; } }
    set32(c.r[5], ld32((c.r[22].w[0] + 28u)));
    set32(c.r[3], 0u + 6274u);
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001DD06C; } }
    c.f[1] = ld32((c.r[5].w[0] + 256u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DCD4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DCD50; } }
L_001DCD4C:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001DCD50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20824u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DD06C; } }
    c.f[1] = ld32((c.r[5].w[0] + 264u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DCD84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DCD88; } }
L_001DCD84:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001DCD88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20824u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DD06C; } }
    c.f[1] = ld32((c.r[5].w[0] + 272u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DCDBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DCDC0; } }
L_001DCDBC:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001DCDC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20824u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DD06C; } }
    c.f[1] = ld32((c.r[5].w[0] + 280u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DCDF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DCDF8; } }
L_001DCDF4:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001DCDF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20824u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DD06C; } }
L_001DCE0C:
    set32(c.r[4], ld32((c.r[22].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001DCE30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCE28u);  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001DCE28u) [[unlikely]] return; }
L_001DCE28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DCE44; } }
L_001DCE30:
    c.f[0] = ld32((c.r[21].w[0] + 16u));
    c.f[23] = fp::add(c.f[23], c.f[0]);
    c.f[22] = fp::sub(c.f[22], c.f[0]);
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 5;
L_001DCE44:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DCF80; } }
    set32(c.r[6], ld32((c.r[22].w[0] + 28u)));
    set32(c.r[3], 0u + 10u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 370u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001DCE7C; } }
    c.f[23] = ld32((c.r[1].w[0] + 20832u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[22] = ld32((c.r[1].w[0] + 20816u));
    c.f[21] = c.f[23];
    c.f[20] = c.f[22];
    c.budget -= 5;
L_001DCE7C:
    c.f[2] = ld32((c.r[21].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1C00000u);
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = c.r[3].w[0];
    c.f[23] = fp::add(c.f[23], c.f[2]);
    c.f[22] = fp::sub(c.f[22], c.f[2]);
    c.f[21] = fp::add(c.f[21], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = fp::sub(c.f[20], c.f[2]);  if (t) { goto L_001DCEC4; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 168u)));
    set32(c.r[3], 0u + 110u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 111u);  if (t) { goto L_001DCEC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DCEC4; } }
L_001DCEC0:
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_001DCEC4:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 393u));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DCEEC; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001DCEEC; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001DCF48; } }
L_001DCEEC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_001DCF08; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001DCF08; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001DCF48; } }
L_001DCF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCF10u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001DCF10u) [[unlikely]] return; }
L_001DCF10:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DCF48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCF24u); set32(c.r[4], ld32((c.r[22].w[0] + 28u)));  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x001DCF24u) [[unlikely]] return; }
L_001DCF24:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001DCF48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DCF38u); set32(c.r[4], ld32((c.r[22].w[0] + 28u)));  if (depth < kMaxDepth) unit_0034(c, 174u, depth + 1u); else { c.pc = 0x001D22D0u; return; } if (c.pc != 0x001DCF38u) [[unlikely]] return; }
L_001DCF38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DCF48; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001DCF48:
    set32(c.r[5], ld32((c.r[22].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 392u));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DCF80; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 368u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DCF7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001DCF80; } }
L_001DCF7C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DCF80:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001DCFA8; } }
    c.f[0] = ld32((c.r[21].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[23]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DCFA8; } }
    c.f[0] = fp::sub(c.f[0], c.f[23]);
    set32(c.r[18], 0u + 1u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[20].w[0]), c.f[0]);
    c.budget -= 4;
L_001DCFA8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001DCFD0; } }
    c.f[0] = ld32((c.r[21].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DCFD0; } }
    c.f[0] = fp::sub(c.f[0], c.f[22]);
    set32(c.r[18], 0u + 1u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[20].w[0]), c.f[0]);
    c.budget -= 4;
L_001DCFD0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DCFF8; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DCFF8; } }
    c.f[0] = fp::sub(c.f[0], c.f[21]);
    set32(c.r[18], 0u + 1u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.budget -= 4;
L_001DCFF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DD020; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DD020; } }
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    set32(c.r[18], 0u + 1u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.budget -= 4;
L_001DD020:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001DD064; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DD064; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DD058; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 28u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 378u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001DD064; } }
L_001DD058:
    set32(c.r[3], ld32((c.r[22].w[0] + 28u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 376u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_001DD064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DCA0Cu | kUnwind; return; } goto L_001DCA0C; } }
L_001DD06C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001DD0B0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 192u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 196u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 200u), c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 28;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001DD150; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 405u));
    c.r[2].d[0] = c.r[3].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] << 61;  if (t) { goto L_001DD144; } }
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DD150; } }
L_001DD144:
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.budget -= 3;
L_001DD150:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD168u); set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));  if (depth < kMaxDepth) unit_0047(c, 169u, depth + 1u); else { c.pc = 0x0021E220u; return; } if (c.pc != 0x001DD168u) [[unlikely]] return; }
L_001DD168:
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DD16C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD184u); set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));  if (depth < kMaxDepth) unit_0047(c, 170u, depth + 1u); else { c.pc = 0x0021E230u; return; } if (c.pc != 0x001DD184u) [[unlikely]] return; }
L_001DD184:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001DD80C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 8u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_001DD804; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DD1BC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DD804; } }
L_001DD1BC:
    set32(c.r[2], ld32((c.r[21].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_001DD1F0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD1D4u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DD1D4u) [[unlikely]] return; }
L_001DD1D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001DD1E0; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001DD1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD1E8u); set32(c.r[4], ld32((c.r[21].w[0] + 96u)));  if (depth < kMaxDepth) unit_0033(c, 102u, depth + 1u); else { c.pc = 0x001CD4F0u; return; } if (c.pc != 0x001DD1E8u) [[unlikely]] return; }
L_001DD1E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DD804; } }
L_001DD1F0:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DD804; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DD228; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DD228; } }
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DD804; } }
L_001DD228:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD234u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 141u, depth + 1u); else { c.pc = 0x00141AC0u; return; } if (c.pc != 0x001DD234u) [[unlikely]] return; }
L_001DD234:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DD804; } }
    ld128((c.r[20].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 176u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD260u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0010(c, 247u, depth + 1u); else { c.pc = 0x001437D0u; return; } if (c.pc != 0x001DD260u) [[unlikely]] return; }
L_001DD260:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001DD804; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001DD280; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD280u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DD280u) [[unlikely]] return; }
L_001DD280:
    set32(c.r[16], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DD434; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DD2B0; } }
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 8u), c.f[0]);  if (t) { goto L_001DD3EC; } }
L_001DD2B0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] >> 16);  if (t) { goto L_001DD3F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52450000u);
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD2D4u); c.r[5].d[0] = c.r[2].d[0] | 17996ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DD2D4u) [[unlikely]] return; }
L_001DD2D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DD2E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DD2E8; } }
L_001DD2E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DD2E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DD3EC; } }
    set32(c.r[2], c.r[29].w[0] + 160u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[0] = 0u;
    c.f[5] = ld32((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[4] = ld32((c.r[29].w[0] + 192u));
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 200u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[4] = c.f[4] ^ fp::kSign;
    fpu_div(c, 3u, c.f[4], c.f[3]);
    st32((c.r[29].w[0] + 160u), c.f[3]);
    c.f[3] = ld32((c.r[20].w[0] + 8u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = c.f[2] ^ fp::kSign;
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 168u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 320u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DD354; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 160u));  if (t) { goto L_001DD35C; } }
L_001DD354:
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 2;
L_001DD35C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DD378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD37C; } }
L_001DD378:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001DD37C:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DD390; } }
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[16].w[0] + 320u), c.f[0]);
    c.budget -= 2;
L_001DD390:
    c.f[2] = ld32((c.r[16].w[0] + 328u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DD3B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 168u));  if (t) { goto L_001DD3B8; } }
L_001DD3B0:
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    c.budget -= 2;
L_001DD3B8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DD3D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DD3D8; } }
L_001DD3D4:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001DD3D8:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DD3EC; } }
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[16].w[0] + 328u), c.f[0]);
    c.budget -= 2;
L_001DD3EC:
    set32(c.r[2], c.r[17].w[0] >> 16);
    c.budget -= 1;
L_001DD3F0:
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[22].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DD434; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x57450000u);  if (t) { goto L_001DD40C; } }
    set32(c.r[16], c.r[16].w[0] + 436u);
    c.budget -= 1;
L_001DD40C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD418u); c.r[5].d[0] = c.r[2].d[0] | 22085ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DD418u) [[unlikely]] return; }
L_001DD418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001DD424; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001DD424:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001DD434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD434u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 38u, depth + 1u); else { c.pc = 0x00210E90u; return; } if (c.pc != 0x001DD434u) [[unlikely]] return; }
L_001DD434:
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DD460; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_001DD46C; } }
L_001DD460:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    st128((c.r[20].w[0]) & ~15u, c.r[2]);
    c.r[16].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
L_001DD46C:
    set32(c.r[2], 0u + 250u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001DD480; } }
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_001DD480:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] >> 24);  if (t) { goto L_001DD7B4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 246u);  if (t) { goto L_001DD7B4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001DD4B4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[2].w[0] + 379u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    ld128((c.r[18].w[0] + 160u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 336u) & ~15u, c.r[2]);
    c.budget -= 5;
L_001DD4B4:
    set32(c.r[3], 0u + 251u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 253u);  if (t) { goto L_001DD4D8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[2].w[0] + 379u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    ld128((c.r[18].w[0] + 160u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 336u) & ~15u, c.r[2]);
    set32(c.r[2], 0u + 253u);
    c.budget -= 6;
L_001DD4D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 254u);  if (t) { goto L_001DD59C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD4F0u); c.r[5].d[0] = c.r[2].d[0] | 16722ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DD4F0u) [[unlikely]] return; }
L_001DD4F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DD500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DD504; } }
L_001DD500:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DD504:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DD598; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001DD598; } }
    c.f[2] = ld32((c.r[2].w[0] + 228u));
    c.f[1] = ld32((c.r[5].w[0] + 228u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DD540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_001DD548; } }
L_001DD540:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 2;
L_001DD548:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DD598; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[4], 0u + 253u);
    set32(c.r[2], 0u + 5u);
    st8((c.r[3].w[0] + 379u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    ld128((c.r[18].w[0] + 160u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 336u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DD590; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 352u), c.r[5].w[0]);  if (t) { goto L_001DD598; } }
L_001DD590:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st32((c.r[2].w[0] + 352u), 0u);
    c.budget -= 2;
L_001DD598:
    set32(c.r[3], 0u + 254u);
    c.budget -= 1;
L_001DD59C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001DD5B8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[2].w[0] + 379u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    ld128((c.r[18].w[0] + 160u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 336u) & ~15u, c.r[2]);
    c.budget -= 5;
L_001DD5B8:
    set32(c.r[3], 0u + 221u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001DD5D8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[2].w[0] + 379u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    ld128((c.r[18].w[0] + 160u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 336u) & ~15u, c.r[2]);
    c.budget -= 5;
L_001DD5D8:
    set32(c.r[3], 0u + 220u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001DD5FC; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[2].w[0] + 379u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[18].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 336u) & ~15u, c.r[2]);  if (t) { goto L_001DD7B4; } }
L_001DD5FC:
    set32(c.r[3], 0u + 219u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001DD628; } }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    st128((c.r[20].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[2].w[0] + 379u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[18].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 336u) & ~15u, c.r[2]);  if (t) { goto L_001DD7B4; } }
L_001DD628:
    set32(c.r[3], 0u + 233u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001DD64C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[2].w[0] + 379u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[18].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 336u) & ~15u, c.r[2]);  if (t) { goto L_001DD7B4; } }
L_001DD64C:
    set32(c.r[3], 0u + 234u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001DD670; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[2].w[0] + 379u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[18].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 336u) & ~15u, c.r[2]);  if (t) { goto L_001DD7B4; } }
L_001DD670:
    set32(c.r[3], 0u + 235u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 227u);  if (t) { goto L_001DD694; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[2].w[0] + 379u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[18].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 336u) & ~15u, c.r[2]);  if (t) { goto L_001DD7B4; } }
L_001DD694:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 228u);  if (t) { goto L_001DD6DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD6A4u);  if (depth < kMaxDepth) unit_005B(c, 211u, depth + 1u); else { c.pc = 0x0026D9B0u; return; } if (c.pc != 0x001DD6A4u) [[unlikely]] return; }
L_001DD6A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DD6C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DD7B4; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DD7B4; } }
L_001DD6C0:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[3], 0u + 227u);
    st8((c.r[2].w[0] + 379u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[18].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 336u) & ~15u, c.r[2]);  if (t) { goto L_001DD7B4; } }
L_001DD6DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001DD6FC; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[2].w[0] + 379u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[18].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 336u) & ~15u, c.r[2]);  if (t) { goto L_001DD7B4; } }
L_001DD6FC:
    set32(c.r[3], 0u + 223u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001DD720; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[2].w[0] + 379u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[18].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 336u) & ~15u, c.r[2]);  if (t) { goto L_001DD7B4; } }
L_001DD720:
    set32(c.r[3], 0u + 222u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 255u);  if (t) { goto L_001DD744; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[2].w[0] + 379u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[18].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 336u) & ~15u, c.r[2]);  if (t) { goto L_001DD7B4; } }
L_001DD744:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001DD7A8; } }
    set32(c.r[2], 0u + 224u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 229u);  if (t) { goto L_001DD790; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001DD790; } }
    set32(c.r[2], 0u + 232u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 231u);  if (t) { goto L_001DD790; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001DD790; } }
    set32(c.r[2], 0u + 230u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 217u);  if (t) { goto L_001DD790; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001DD790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 28u)));  if (t) { goto L_001DD7B8; } }
L_001DD790:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[2].w[0] + 379u), static_cast<std::uint8_t>(c.r[16].w[0]));
    ld128((c.r[18].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 336u) & ~15u, c.r[2]);  if (t) { goto L_001DD7B4; } }
L_001DD7A8:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[3], 0u + 218u);
    st8((c.r[2].w[0] + 383u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001DD7B4:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 1;
L_001DD7B8:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 383u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_001DD7D0; } }
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DD7D8; } }
L_001DD7D0:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[2].w[0] + 383u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_001DD7D8:
    set32(c.r[3], c.r[17].w[0] >> 8);
    set32(c.r[2], 0u + 255u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DD804; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DD804; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[2].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[2].w[0] + 385u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001DD804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[23].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DD16Cu | kUnwind; return; } goto L_001DD16C; } }
L_001DD80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD814u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001DD814u) [[unlikely]] return; }
L_001DD814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DDB78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD824u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001DD824u) [[unlikely]] return; }
L_001DD824:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_001DD850; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD848u); set32(c.r[7], c.r[7].w[0] - 28480u);  if (depth < kMaxDepth) unit_0037(c, 65u, depth + 1u); else { c.pc = 0x001DC9C0u; return; } if (c.pc != 0x001DD848u) [[unlikely]] return; }
L_001DD848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[21].w[0] + 28u)));  if (t) { goto L_001DD868; } }
L_001DD850:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD864u); set32(c.r[7], c.r[7].w[0] - 28400u);  if (depth < kMaxDepth) unit_0037(c, 65u, depth + 1u); else { c.pc = 0x001DC9C0u; return; } if (c.pc != 0x001DD864u) [[unlikely]] return; }
L_001DD864:
    set32(c.r[6], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 1;
L_001DD868:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 397u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DDB78; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 240u)));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DD89C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 28u)));  if (t) { goto L_001DD8A4; } }
L_001DD89C:
    c.f[2] = c.f[2] ^ fp::kSign;
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 2;
L_001DD8A4:
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[2].w[0] + 240u)));
    c.f[21] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DD8C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 28u)));  if (t) { goto L_001DD8CC; } }
L_001DD8C4:
    c.f[21] = c.f[21] ^ fp::kSign;
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 2;
L_001DD8CC:
    set32(c.r[2], 0u + 1202u);
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001DD8FC; } }
    set32(c.r[2], 0u + 1203u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1200u);  if (t) { goto L_001DD8FC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DD8FC; } }
    set32(c.r[2], 0u + 1201u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);  if (t) { goto L_001DD918; } }
L_001DD8FC:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DD914; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001DD9A0; } }
L_001DD914:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.budget -= 1;
L_001DD918:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DD93C; } }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DD93C; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001DD93C:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 386u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DD9A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DD970; } }
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DD9A0; } }
L_001DD970:
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0C00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DD99C; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DD9A0; } }
L_001DD99C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DD9A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20816u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DDACC; } }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DDACC; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[2], 0u + 10u);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 370u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DDACC; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 240u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31216u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = ld32((c.r[3].w[0]));  if (t) { goto L_001DDA38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DD9F4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x001DD9F4u) [[unlikely]] return; }
L_001DD9F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDA04u); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_0000(c, 76u, depth + 1u); else { c.pc = 0x00100600u; return; } if (c.pc != 0x001DDA04u) [[unlikely]] return; }
L_001DDA04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DDA38; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DDA38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1980000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DDA94; } }
L_001DDA38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31216u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[12] = c.f[21];  if (t) { goto L_001DDAA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDA54u);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x001DDA54u) [[unlikely]] return; }
L_001DDA54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDA64u); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_0000(c, 76u, depth + 1u); else { c.pc = 0x00100600u; return; } if (c.pc != 0x001DDA64u) [[unlikely]] return; }
L_001DDA64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DDAA0; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);  if (t) { goto L_001DDAA0; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DDAA0; } }
L_001DDA94:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 370u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DDACC; } }
L_001DDAA0:
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC23C0000u);
    c.f[2] = ld32((c.r[20].w[0] + 16u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DDACC; } }
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_001DDACC:
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DDB38; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 395u));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DDB38; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DDB38; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DDB38; } }
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[2] = ld32((c.r[20].w[0] + 16u));
    c.f[0] = ld32((c.r[1].w[0] - 24264u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DDB38; } }
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_001DDB38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDB40u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001DDB40u) [[unlikely]] return; }
L_001DDB40:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DDB78; } }
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1380000u);
    c.f[2] = ld32((c.r[20].w[0] + 16u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DDB78; } }
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_001DDB78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4500u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DDF2C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 397u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], ld32((c.r[20].w[0] + 20u)));  if (t) { goto L_001DDBB4; } }
    c.r[3].d[0] = c.r[17].d[0] | 2ull;
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 2;
L_001DDBB4:
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 394u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DDBE0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DDBEC; } }
L_001DDBE0:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 3;
L_001DDBEC:
    c.f[6] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DDC0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[20].w[0] + 8u));  if (t) { goto L_001DDC14; } }
L_001DDC0C:
    c.f[6] = c.f[6] ^ fp::kSign;
    c.f[2] = ld32((c.r[20].w[0] + 8u));
    c.budget -= 2;
L_001DDC14:
    c.f[1] = ld32((c.r[20].w[0] + 16u));
    c.f[0] = 0u;
    c.f[5] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DDC38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[20].w[0] + 8u));  if (t) { goto L_001DDC40; } }
L_001DDC38:
    c.f[5] = c.f[5] ^ fp::kSign;
    c.f[2] = ld32((c.r[20].w[0] + 8u));
    c.budget -= 2;
L_001DDC40:
    c.f[1] = ld32((c.r[20].w[0] + 16u));
    c.f[0] = 0u;
    c.f[4] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DDC64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DDC68; } }
L_001DDC64:
    c.f[4] = c.f[4] ^ fp::kSign;
    c.budget -= 1;
L_001DDC68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[3] = ld32((c.r[1].w[0] + 20808u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[3], c.f[6]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.f[2] = fp::mul(c.f[3], c.f[5]);
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    c.f[1] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[29].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DDCD0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    c.budget -= 3;
L_001DDCD0:
    c.f[2] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = ld32((c.r[20].w[0] + 16u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DDCFC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 212u), c.r[3].w[0]);
    c.budget -= 3;
L_001DDCFC:
    c.f[2] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = ld32((c.r[20].w[0] + 16u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DDD28; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    c.budget -= 3;
L_001DDD28:
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_001DDD3C; } }
    st32((c.r[29].w[0] + 212u), c.r[3].w[0]);
    c.budget -= 1;
L_001DDD3C:
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_001DDD50; } }
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    c.budget -= 1;
L_001DDD50:
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001DDD68; } }
    set32(c.r[3], 0u - 1u);
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    c.budget -= 2;
L_001DDD68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_001DDF20; } }
L_001DDD70:
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].d[0] = c.r[4].sd[0] < 100ll ? 1ull : 0ull;  if (t) { goto L_001DDF18; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { goto L_001DDF18; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31072u)));
    c.f[22] = ld32((c.r[20].w[0]));
    c.f[21] = ld32((c.r[20].w[0] + 4u));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[20] = ld32((c.r[20].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[6], ld32((c.r[1].w[0] + 4496u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 4500u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4488u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDDE0u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 247u, depth + 1u); else { c.pc = 0x001437D0u; return; } if (c.pc != 0x001DDDE0u) [[unlikely]] return; }
L_001DDDE0:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.r[4].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_001DDE54; } }
    set32(c.r[4], c.r[2].w[0] >> 24);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[2].w[0] >> 8);  if (t) { goto L_001DDE58; } }
    set32(c.r[4], 0u + 249u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DDE54; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 255u);  if (t) { goto L_001DDE54; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DDE54; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 28u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 379u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001DDE54; } }
    st8((c.r[5].w[0] + 379u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 28u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4488u)));
    ld128((c.r[4].w[0] + 160u) & ~15u, c.r[4]);
    st128((c.r[5].w[0] + 336u) & ~15u, c.r[4]);
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    st32((c.r[4].w[0] + 352u), 0u);
    c.budget -= 11;
L_001DDE54:
    set32(c.r[5], c.r[2].w[0] >> 8);
    c.budget -= 1;
L_001DDE58:
    set32(c.r[4], 0u + 255u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001DDE80; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001DDE80; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[4].w[0] + 382u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[4].w[0] + 385u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
L_001DDE80:
    set32(c.r[5], c.r[2].w[0] >> 16);
    set32(c.r[4], 0u + 255u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001DDE9C; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[4].w[0] + 384u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_001DDE9C:
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 383u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_001DDEB8; } }
    set32(c.r[4], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[4], 0u + 219u);  if (t) { goto L_001DDED4; } }
L_001DDEB8:
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[6], ld32((c.r[21].w[0] + 28u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 383u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001DDED0; } }
    st8((c.r[6].w[0] + 383u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_001DDED0:
    set32(c.r[4], 0u + 219u);
    c.budget -= 1;
L_001DDED4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001DDF18; } }
    st32((c.r[20].w[0]), c.f[22]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 4u), c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[20].w[0] + 8u), c.f[20]);
    st32((c.r[20].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    st8((c.r[3].w[0] + 379u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4488u)));
    ld128((c.r[3].w[0] + 160u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 336u) & ~15u, c.r[3]);
    c.budget -= 15;
L_001DDF18:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 2;
L_001DDF20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DDD70u | kUnwind; return; } goto L_001DDD70; } }
    st32((c.r[20].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 1;
L_001DDF2C:
    c.f[2] = ld32((c.r[20].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[2] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = ld32((c.r[29].w[0] + 200u));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[1].w[0] + 20800u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DDF9C; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 380u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001DDF9C; } }
    st8((c.r[4].w[0] + 380u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001DDF9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001DDFE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DDFF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x001DDFF4u) [[unlikely]] return; }
L_001DDFF4:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE000u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x001DE000u) [[unlikely]] return; }
L_001DE000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52430000u);
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.r[5].d[0] = c.r[2].d[0] | 21580ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE014u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001DE014u) [[unlikely]] return; }
L_001DE014:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 8656u);
    set32(c.r[2], c.r[2].w[0] - 8640u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 8624u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 312u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DE060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DE0DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 8656u);
    set32(c.r[3], c.r[3].w[0] - 8640u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8624u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE0ACu); st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001DE0ACu) [[unlikely]] return; }
L_001DE0AC:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE0B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x001DE0B8u) [[unlikely]] return; }
L_001DE0B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE0C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x001DE0C4u) [[unlikely]] return; }
L_001DE0C4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DE0E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE0DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001DE0DCu) [[unlikely]] return; }
L_001DE0DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DE0E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DE100:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DE124; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 56u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 7;
L_001DE124:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE130:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DE19C; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001DE158; } }
L_001DE144:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001DE164; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001DE158:
    c.r[3].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE144u | kUnwind; return; } goto L_001DE144; } }
L_001DE164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[7].w[0] + 1u);  if (t) { goto L_001DE188; } }
L_001DE16C:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[3].w[0] + 56u), c.r[5].w[0]);
    c.budget -= 7;
L_001DE188:
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE16Cu | kUnwind; return; } goto L_001DE16C; } }
    st32((c.r[4].w[0] + 52u), c.r[7].w[0]);
    c.budget -= 1;
L_001DE19C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001DE1B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
L_001DE1D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 12288u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE1D4u | kUnwind; return; } goto L_001DE1D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001DE300; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 1;
L_001DE1FC:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001DE2F4; } }
    set32(c.r[2], c.r[2].w[0] + 304u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 320u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[3].w[0] + 375u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[3].w[0] + 376u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[3].w[0] + 378u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[3].w[0] + 379u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 381u));
    set32(c.r[3], c.r[3].w[0] << 1);
    st8((c.r[4].w[0] + 381u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 380u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 381u));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 381u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 380u));
    set32(c.r[3], c.r[3].w[0] >> 1);
    st8((c.r[4].w[0] + 380u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 380u));
    c.r[3].d[0] = c.r[3].d[0] & 254ull;
    st8((c.r[4].w[0] + 380u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[3].w[0] + 382u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[3].w[0] + 383u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[3].w[0] + 385u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 45;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DE2E4; } }
L_001DE2C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 8;
L_001DE2E4:
    c.r[3].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE2C4u | kUnwind; return; } goto L_001DE2C4; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_001DE2F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE2FCu);  if (depth < kMaxDepth) unit_0010(c, 152u, depth + 1u); else { c.pc = 0x00141D80u; return; } if (c.pc != 0x001DE2FCu) [[unlikely]] return; }
L_001DE2FC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001DE300:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE1FCu | kUnwind; return; } goto L_001DE1FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001DE3DC; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 1;
L_001DE31C:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[19].w[0] + 1u);  if (t) { goto L_001DE358; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DE3D8; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 395u));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DE3D8; } }
    set32(c.r[18], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001DE358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  if (t) { goto L_001DE3CC; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 1;
L_001DE364:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DE39C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 395u));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DE3C4; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DE3C4; } }
L_001DE39C:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001DE3BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE3B0u); set32(c.r[5], ld32((c.r[20].w[0] + 96u)));  if (depth < kMaxDepth) unit_0033(c, 102u, depth + 1u); else { c.pc = 0x001CD4F0u; return; } if (c.pc != 0x001DE3B0u) [[unlikely]] return; }
L_001DE3B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DE3C4; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001DE3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE3C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 174u, depth + 1u); else { c.pc = 0x001DFE70u; return; } if (c.pc != 0x001DE3C4u) [[unlikely]] return; }
L_001DE3C4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 2;
L_001DE3CC:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE364u | kUnwind; return; } goto L_001DE364; } }
L_001DE3D8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001DE3DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE31Cu | kUnwind; return; } goto L_001DE31C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_001DE68C; } }
L_001DE3F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001DE678; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    c.budget -= 1;
L_001DE404:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DE674; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DE674; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    set32(c.r[2], 0u + 1682u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DE674; } }
    set32(c.r[2], 0u + 1684u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DE674; } }
    set32(c.r[2], 0u + 1683u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DE674; } }
    set32(c.r[2], c.r[29].w[0] + 144u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[18], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001DE674; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001DE658; } }
L_001DE46C:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DE654; } }
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE654; } }
    set32(c.r[2], c.r[29].w[0] + 160u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE4ECu); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0037(c, 72u, depth + 1u); else { c.pc = 0x001DD0B0u; return; } if (c.pc != 0x001DE4ECu) [[unlikely]] return; }
L_001DE4EC:
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE50C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 144u));  if (t) { goto L_001DE514; } }
L_001DE50C:
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 2;
L_001DE514:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE534; } }
L_001DE530:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001DE534:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE548; } }
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.budget -= 2;
L_001DE548:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DE5C4; } }
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 148u));  if (t) { goto L_001DE590; } }
L_001DE588:
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.budget -= 2;
L_001DE590:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE5AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE5B0; } }
L_001DE5AC:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001DE5B0:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE5C4; } }
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.budget -= 2;
L_001DE5C4:
    c.f[2] = ld32((c.r[29].w[0] + 168u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE5E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 152u));  if (t) { goto L_001DE5EC; } }
L_001DE5E4:
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 2;
L_001DE5EC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE60C; } }
L_001DE608:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001DE60C:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE620; } }
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.budget -= 2;
L_001DE620:
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE654; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
L_001DE654:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001DE658:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE46Cu | kUnwind; return; } goto L_001DE46C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE674u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 163u, depth + 1u); else { c.pc = 0x001DFB00u; return; } if (c.pc != 0x001DE674u) [[unlikely]] return; }
L_001DE674:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001DE678:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE404u | kUnwind; return; } goto L_001DE404; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_001DE68C:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] <= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE3F8u | kUnwind; return; } goto L_001DE3F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE69Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001DE69Cu) [[unlikely]] return; }
L_001DE69C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DE8F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001DE8E8; } }
    set32(c.r[3], c.r[20].w[0] << 2);
    c.budget -= 1;
L_001DE6B4:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DE8E4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DE8E4; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[3], 0u + 1682u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001DE8E4; } }
    set32(c.r[3], 0u + 1684u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001DE8E4; } }
    set32(c.r[3], 0u + 1683u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001DE8E4; } }
    set32(c.r[3], c.r[29].w[0] + 144u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[18], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001DE8E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001DE8A0; } }
L_001DE71C:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DE89C; } }
    set32(c.r[2], c.r[29].w[0] + 160u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE768u); set32(c.r[7], c.r[7].w[0] - 28480u);  if (depth < kMaxDepth) unit_0037(c, 65u, depth + 1u); else { c.pc = 0x001DC9C0u; return; } if (c.pc != 0x001DE768u) [[unlikely]] return; }
L_001DE768:
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 144u));  if (t) { goto L_001DE790; } }
L_001DE788:
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 2;
L_001DE790:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE7AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE7B0; } }
L_001DE7AC:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001DE7B0:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE7C4; } }
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.budget -= 2;
L_001DE7C4:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DE840; } }
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE804; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 148u));  if (t) { goto L_001DE80C; } }
L_001DE804:
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.budget -= 2;
L_001DE80C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE82C; } }
L_001DE828:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001DE82C:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE840; } }
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.budget -= 2;
L_001DE840:
    c.f[2] = ld32((c.r[29].w[0] + 168u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 152u));  if (t) { goto L_001DE868; } }
L_001DE860:
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 2;
L_001DE868:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE884; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DE888; } }
L_001DE884:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001DE888:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE89C; } }
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.budget -= 2;
L_001DE89C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001DE8A0:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE71Cu | kUnwind; return; } goto L_001DE71C; } }
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001DE8D8; } }
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DE8E4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001DE8D8:
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DE8E4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 163u, depth + 1u); else { c.pc = 0x001DFB00u; return; } if (c.pc != 0x001DE8E4u) [[unlikely]] return; }
L_001DE8E4:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001DE8E8:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE6B4u | kUnwind; return; } goto L_001DE6B4; } }
L_001DE8F8:
    c.f[1] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);  if (t) { goto L_001DEA38; } }
    set32(c.r[4], c.r[5].w[0] << 2);
    c.budget -= 1;
L_001DE90C:
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DEA34; } }
    ld128((c.r[4].w[0] + 304u) & ~15u, c.r[6]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], c.r[5].w[0] << 2);  if (t) { goto L_001DE94C; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DEA34; } }
    set32(c.r[6], c.r[5].w[0] << 2);
    c.budget -= 1;
L_001DE94C:
    set32(c.r[6], c.r[6].w[0] + c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 56u)));
    set32(c.r[9], ld32((c.r[6].w[0] + 100u)));
    c.budget -= 5;
    { const bool t = c.r[9].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_001DE9CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_001DE9AC; } }
L_001DE968:
    set32(c.r[6], ld32((c.r[9].w[0] + 48u)));
    set32(c.r[7], c.r[8].w[0] << 6);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + 48u);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[7], c.r[8].w[0] << 6);
    set32(c.r[6], ld32((c.r[9].w[0] + 52u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + 48u);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 17;
L_001DE9AC:
    set32(c.r[6], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 236u)));
    c.r[6].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE968u | kUnwind; return; } goto L_001DE968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_001DEA38; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DE9CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[4].w[0] + 52u)));  if (t) { goto L_001DEA24; } }
L_001DE9D4:
    set32(c.r[6], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[7], c.r[8].w[0] << 6);
    set32(c.r[6], ld32((c.r[6].w[0] + 216u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + 48u);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[7], c.r[8].w[0] << 6);
    set32(c.r[6], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 208u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + 48u);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 20;
L_001DEA24:
    set32(c.r[6], ld32((c.r[6].w[0] + 236u)));
    c.r[6].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE9D4u | kUnwind; return; } goto L_001DE9D4; } }
L_001DEA34:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001DEA38:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE90Cu | kUnwind; return; } goto L_001DE90C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001DEA70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAA4u); c.r[5].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001DEAA4u) [[unlikely]] return; }
L_001DEAA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 8672u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAB8u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 137u, depth + 1u); else { c.pc = 0x001419F0u; return; } if (c.pc != 0x001DEAB8u) [[unlikely]] return; }
L_001DEAB8:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEAC8u); st32((c.r[17].w[0] + 28u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0010(c, 156u, depth + 1u); else { c.pc = 0x00141E70u; return; } if (c.pc != 0x001DEAC8u) [[unlikely]] return; }
L_001DEAC8:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_001DEB40; } }
    set32(c.r[2], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
L_001DEAE4:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 20u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DEAE4u | kUnwind; return; } goto L_001DEAE4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 15;
L_001DEB40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEB4Cu); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DEB4Cu) [[unlikely]] return; }
L_001DEB4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DEB5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DEB60; } }
L_001DEB5C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DEB60:
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53330000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEB74u); c.r[5].d[0] = c.r[2].d[0] | 19799ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DEB74u) [[unlikely]] return; }
L_001DEB74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DEB84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DEB88; } }
L_001DEB84:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DEB88:
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52430000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEBA0u); c.r[5].d[0] = c.r[2].d[0] | 21580ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DEBA0u) [[unlikely]] return; }
L_001DEBA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001DEBAC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001DEBAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEBB4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 106u, depth + 1u); else { c.pc = 0x001DE100u; return; } if (c.pc != 0x001DEBB4u) [[unlikely]] return; }
L_001DEBB4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001DEBE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DEC60; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52430000u);
    set32(c.r[3], c.r[3].w[0] - 8672u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC1Cu); c.r[5].d[0] = c.r[2].d[0] | 21580ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DEC1Cu) [[unlikely]] return; }
L_001DEC1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001DEC28; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001DEC28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC30u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 107u, depth + 1u); else { c.pc = 0x001DE130u; return; } if (c.pc != 0x001DEC30u) [[unlikely]] return; }
L_001DEC30:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00141CE0u; return; } if (c.pc != 0x001DEC3Cu) [[unlikely]] return; }
L_001DEC3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001DEC48u) [[unlikely]] return; }
L_001DEC48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DEC64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEC60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001DEC60u) [[unlikely]] return; }
L_001DEC60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DEC64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DEC80:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 336u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[2].w[0]) & ~15u, c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 336u);
    set32(c.r[2], c.r[29].w[0] + 336u);
    st32((c.r[29].w[0] + 336u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[29].w[0] + 336u);
    set32(c.r[3], c.r[29].w[0] + 336u);
    c.f[1] = ld32((c.r[1].w[0] + 20792u));
    c.f[0] = ld32((c.r[17].w[0] + 356u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 336u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[29].w[0] + 336u);
    set32(c.r[3], c.r[29].w[0] + 336u);
    c.f[1] = ld32((c.r[1].w[0] + 20792u));
    c.f[0] = ld32((c.r[17].w[0] + 356u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 336u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 120u)));
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.f[0] = ld32((c.r[1].w[0] + 20784u));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[2].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.f[0] = ld32((c.r[1].w[0] + 20776u));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 20768u));
    c.budget -= 106;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEE28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001DEE28u) [[unlikely]] return; }
L_001DEE28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DEE58; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[1].w[0] + 20768u));
    set32(c.r[7], 0u + 3u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEE50u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 18u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x001DEE50u) [[unlikely]] return; }
L_001DEE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 44u)));  if (t) { goto L_001DEE8C; } }
L_001DEE58:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.f[12] = ld32((c.r[1].w[0] + 20760u));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEE88u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 18u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x001DEE88u) [[unlikely]] return; }
L_001DEE88:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_001DEE8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEEA8u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0011(c, 18u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x001DEEA8u) [[unlikely]] return; }
L_001DEEA8:
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[2], 0u + 111u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], 0u + 1u);  if (t) { goto L_001DEED4; } }
    set32(c.r[2], 0u + 110u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DEED4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 660u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DEED8; } }
L_001DEED4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DEED8:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[5], 0u + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF00u); st32((c.r[2].w[0] + 16u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0034(c, 90u, depth + 1u); else { c.pc = 0x001D0BC0u; return; } if (c.pc != 0x001DEF00u) [[unlikely]] return; }
L_001DEF00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DEF50; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40800000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_001DF008; } }
L_001DEF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DEF58u);  if (depth < kMaxDepth) unit_0034(c, 97u, depth + 1u); else { c.pc = 0x001D0D70u; return; } if (c.pc != 0x001DEF58u) [[unlikely]] return; }
L_001DEF58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DEF90; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40600000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_001DF008; } }
L_001DEF90:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].sd[0] < 441ll ? 1ull : 0ull;  if (t) { goto L_001DEFE8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 453ll ? 1ull : 0ull;  if (t) { goto L_001DEFB0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001DEFE8; } }
L_001DEFB0:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].sd[0] < 471ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 483ll ? 1ull : 0ull;  if (t) { goto L_001DEFC8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001DEFE8; } }
L_001DEFC8:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DEFE8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DEFE8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DF008; } }
L_001DEFE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 8;
L_001DF008:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.f[0] = ld32((c.r[17].w[0] + 228u));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 395u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DF08C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.f[0] = ld32((c.r[17].w[0] + 228u));
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DF08C; } }
    st32((c.r[4].w[0] + 4u), c.f[2]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001DF08C:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 393u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DF0AC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 3;
L_001DF0AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001DF124; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DF0FC; } }
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.budget -= 1;
L_001DF0FC:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DF120; } }
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.budget -= 1;
L_001DF120:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DF124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 5u);  if (t) { goto L_001DF14C; } }
L_001DF12C:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 8;
L_001DF14C:
    c.r[3].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DF12Cu | kUnwind; return; } goto L_001DF12C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], 0u + 15130u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DF1AC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001DF1AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_001DF1A4; } }
L_001DF180:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 9;
L_001DF1A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DF180u | kUnwind; return; } goto L_001DF180; } }
L_001DF1AC:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], 0u + 16u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_001DF24C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 16u));
    c.f[4] = ld32((c.r[3].w[0] + 4u));
    c.f[3] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::add(c.f[1], c.f[2]);  if (t) { goto L_001DF204; } }
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_001DF204:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[3] = fp::add(c.f[3], c.f[4]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::add(c.f[2], c.f[4]);  if (t) { goto L_001DF2A4; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { goto L_001DF2A4; } }
L_001DF24C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DF2A4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 16u));
    c.f[4] = ld32((c.r[3].w[0] + 4u));
    c.f[3] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::add(c.f[1], c.f[2]);  if (t) { goto L_001DF2A4; } }
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_001DF2A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 17u);  if (t) { goto L_001DF2D8; } }
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_001DF2D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], 0u + 18u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF32Cu); st32((c.r[3].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001DF32Cu) [[unlikely]] return; }
L_001DF32C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DF378; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 16u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 17;
L_001DF378:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 660u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DF4EC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DF4EC; } }
    c.f[3] = ld32((c.r[17].w[0] + 176u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40600000u);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DF3D4; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_001DF3D4:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[3].w[0] + 16u), c.f[1]);
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DF414; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.f[0]);  if (t) { goto L_001DF434; } }
L_001DF414:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.budget -= 8;
L_001DF434:
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001DF4A4; } }
    set32(c.r[2], c.r[2].w[0] - 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20752u));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20760u));
    c.f[12] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DF478; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_001DF478:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[7], 0u + 3u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF490u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 18u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x001DF490u) [[unlikely]] return; }
L_001DF490:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_001DF4DC; } }
L_001DF4A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 19u);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 14;
L_001DF4DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_001DF4EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 15090u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[29].w[0] + 320u);  if (t) { goto L_001DF50C; } }
    set32(c.r[2], 0u + 15100u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DF674; } }
    set32(c.r[2], c.r[29].w[0] + 320u);
    c.budget -= 1;
L_001DF50C:
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DF53C; } }
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_001DF544; } }
L_001DF53C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0A00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 2;
L_001DF544:
    st32((c.r[29].w[0] + 328u), c.f[0]);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0xC0E00000u);  if (t) { goto L_001DF5D4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DF580; } }
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20744u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_001DF588; } }
L_001DF580:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0E00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 2;
L_001DF588:
    st32((c.r[29].w[0] + 328u), c.f[0]);
    set32(c.r[2], 0u + 15090u);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DF5D0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DF5C4; } }
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20736u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_001DF5CC; } }
L_001DF5C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 2;
L_001DF5CC:
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.budget -= 1;
L_001DF5D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0E00000u);
    c.budget -= 1;
L_001DF5D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 324u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    st32((c.r[29].w[0] + 332u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF5ECu); set32(c.r[5], c.r[17].w[0] + 208u);  if (depth < kMaxDepth) unit_0011(c, 48u, depth + 1u); else { c.pc = 0x00144FA0u; return; } if (c.pc != 0x001DF5ECu) [[unlikely]] return; }
L_001DF5EC:
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[3], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 304u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 312u), c.f[0]);
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
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 34;
L_001DF674:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 1608u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DF8EC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DF8EC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[29].w[0] + 240u);  if (t) { goto L_001DF8EC; } }
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[17].w[0] + 208u);
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[1].w[0] + 20808u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    c.f[1] = c.r[2].w[0];
    c.f[4] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[2].w[0] + 16u), c.f[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.f[2] = ld32((c.r[1].w[0] + 20736u));
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 248u), c.f[1]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[29].w[0] + 252u), c.f[0]);
    c.f[0] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 244u), c.f[0]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF738u); st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 48u, depth + 1u); else { c.pc = 0x00144FA0u; return; } if (c.pc != 0x001DF738u) [[unlikely]] return; }
L_001DF738:
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[3], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 208u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
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
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 240u);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[5], c.r[29].w[0] + 240u);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[1].w[0] + 20736u));
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 240u), c.f[0]);
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
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[7], c.r[29].w[0] + 240u);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[2].w[0] + 16u), c.f[1]);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[1].w[0] + 20728u));
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 240u), c.f[0]);
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
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 109;
L_001DF8EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 15250u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15120u);  if (t) { goto L_001DF904; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DFA2C; } }
L_001DF904:
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DFA2C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[29].w[0] + 144u);  if (t) { goto L_001DFA2C; } }
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 208u);
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[1].w[0] + 20808u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[1] = c.r[2].w[0];
    c.f[4] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[2].w[0] + 16u), c.f[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.f[2] = ld32((c.r[1].w[0] + 20720u));
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.f[0] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 148u), c.f[0]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DF9B8u); st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 48u, depth + 1u); else { c.pc = 0x00144FA0u; return; } if (c.pc != 0x001DF9B8u) [[unlikely]] return; }
L_001DF9B8:
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
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
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 29;
L_001DFA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFA34u); set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x001DFA34u) [[unlikely]] return; }
L_001DFA34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DFA68; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DFA68; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], 0u + 190u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DFA68; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 4;
L_001DFA68:
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].sd[0] < 15900ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 15920ll ? 1ull : 0ull;  if (t) { goto L_001DFAAC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001DFAAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_001DFAA4; } }
L_001DFA88:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 16u), 0u);
    c.r[3].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
L_001DFAA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DFA88u | kUnwind; return; } goto L_001DFA88; } }
L_001DFAAC:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[4].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[4].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_001DFB00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001DFD70; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 224u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 240u)));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 304u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[18].w[0] + 48u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001DFBAC; } }
L_001DFB88:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 9;
L_001DFBAC:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DFB88u | kUnwind; return; } goto L_001DFB88; } }
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DFBF4; } }
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DFBF4; } }
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DFC08; } }
L_001DFBF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFBFCu); set32(c.r[4], ld32((c.r[18].w[0] + 28u)));  if (depth < kMaxDepth) unit_004A(c, 9u, depth + 1u); else { c.pc = 0x00228100u; return; } if (c.pc != 0x001DFBFCu) [[unlikely]] return; }
L_001DFBFC:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC08u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 111u, depth + 1u); else { c.pc = 0x002E54C0u; return; } if (c.pc != 0x001DFC08u) [[unlikely]] return; }
L_001DFC08:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001DFD70; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 398u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DFD70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC30u); set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001CD4B0u; return; } if (c.pc != 0x001DFC30u) [[unlikely]] return; }
L_001DFC30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DFD70; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 2;
L_001DFC40:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DFCD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52450000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFC58u); c.r[5].d[0] = c.r[2].d[0] | 17996ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DFC58u) [[unlikely]] return; }
L_001DFC58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001DFC6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DFC6C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DFC6C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DFCCC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 224u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 224u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 232u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 232u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] + 240u)));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[3], ld32((c.r[3].w[0] + 240u)));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 22;
L_001DFCCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 32u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DFC40u | kUnwind; return; } goto L_001DFC40; } }
L_001DFCD4:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 2;
L_001DFCDC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DFD70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52450000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFCF4u); c.r[5].d[0] = c.r[2].d[0] | 17996ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DFCF4u) [[unlikely]] return; }
L_001DFCF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001DFD08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DFD08; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DFD08:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DFD68; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 224u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 224u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 232u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 232u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] + 240u)));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[3], ld32((c.r[3].w[0] + 240u)));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 22;
L_001DFD68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 36u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DFCDCu | kUnwind; return; } goto L_001DFCDC; } }
L_001DFD70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DFD90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001DFE5C; } }
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DFE5C; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[2].d[0] = c.r[5].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[29].w[0] + 16u);  if (t) { goto L_001DFDF0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DFDEC; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 395u));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[5].d[0] << 56;  if (t) { goto L_001DFDFC; } }
L_001DFDEC:
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_001DFDF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);  if (t) { goto L_001DFE50; } }
    c.r[2].d[0] = c.r[5].d[0] << 56;
    c.budget -= 1;
L_001DFDFC:
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DFE50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], c.r[29].w[0] + 16u);
    c.f[0] = c.r[2].w[0];
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 368u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DFE4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 16u), 0u);  if (t) { goto L_001DFE50; } }
L_001DFE4C:
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 1;
L_001DFE50:
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFE5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 163u, depth + 1u); else { c.pc = 0x001DFB00u; return; } if (c.pc != 0x001DFE5Cu) [[unlikely]] return; }
L_001DFE5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DFE70:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[21].w[0] + 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[20].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFEA8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0010(c, 139u, depth + 1u); else { c.pc = 0x00141A70u; return; } if (c.pc != 0x001DFEA8u) [[unlikely]] return; }
L_001DFEA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0038(c, 24u, depth); } }
    set32(c.r[19], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0038(c, 23u, depth); } }
L_001DFEBC:
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFED4u); set32(c.r[5], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 143u, depth + 1u); else { c.pc = 0x00141B60u; return; } if (c.pc != 0x001DFED4u) [[unlikely]] return; }
L_001DFED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0038(c, 22u, depth); } }
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DFF1C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DFF1C; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DFF1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF14u); set32(c.r[4], ld32((c.r[4].w[0] + 48u)));  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x001DFF14u) [[unlikely]] return; }
L_001DFF14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0038(c, 22u, depth); } }
L_001DFF1C:
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DFF5C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DFF5C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DFF5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DFF54u); set32(c.r[4], ld32((c.r[4].w[0] + 48u)));  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x001DFF54u) [[unlikely]] return; }
L_001DFF54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0038(c, 22u, depth); } }
L_001DFF5C:
    set32(c.r[17], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0038(c, 21u, depth); } }
L_001DFF68:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DFFA8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DFFC8; } }
L_001DFFA8:
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0038(c, 20u, depth); } }
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0038(c, 20u, depth); } }
L_001DFFC8:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[4], c.r[16].w[0] << 2);
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_0038(c, 20u, depth); } }
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0000u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0010(c, 141u, depth + 1u); else { c.pc = 0x00141AC0u; return; } if (c.pc != 0x001E0000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0038(c, 1u, depth);
}

}
