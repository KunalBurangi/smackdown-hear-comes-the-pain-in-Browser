#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003B[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0,
    0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207,
    0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 214,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0,
    0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267,
    0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001EC000;
    case 2u: goto L_001EC00C;
    case 3u: goto L_001EC030;
    case 4u: goto L_001EC038;
    case 5u: goto L_001EC044;
    case 6u: goto L_001EC060;
    case 7u: goto L_001EC0A0;
    case 8u: goto L_001EC0D0;
    case 9u: goto L_001EC0F0;
    case 10u: goto L_001EC108;
    case 11u: goto L_001EC120;
    case 12u: goto L_001EC144;
    case 13u: goto L_001EC158;
    case 14u: goto L_001EC180;
    case 15u: goto L_001EC24C;
    case 16u: goto L_001EC284;
    case 17u: goto L_001EC29C;
    case 18u: goto L_001EC2B4;
    case 19u: goto L_001EC2C4;
    case 20u: goto L_001EC304;
    case 21u: goto L_001EC344;
    case 22u: goto L_001EC374;
    case 23u: goto L_001EC398;
    case 24u: goto L_001EC41C;
    case 25u: goto L_001EC42C;
    case 26u: goto L_001EC458;
    case 27u: goto L_001EC4AC;
    case 28u: goto L_001EC4D0;
    case 29u: goto L_001EC51C;
    case 30u: goto L_001EC570;
    case 31u: goto L_001EC604;
    case 32u: goto L_001EC614;
    case 33u: goto L_001EC654;
    case 34u: goto L_001EC670;
    case 35u: goto L_001EC6A0;
    case 36u: goto L_001EC6C0;
    case 37u: goto L_001EC6E0;
    case 38u: goto L_001EC720;
    case 39u: goto L_001EC734;
    case 40u: goto L_001EC780;
    case 41u: goto L_001EC7C0;
    case 42u: goto L_001EC890;
    case 43u: goto L_001EC8A0;
    case 44u: goto L_001EC8B4;
    case 45u: goto L_001ECAE0;
    case 46u: goto L_001ECB88;
    case 47u: goto L_001ECCB0;
    case 48u: goto L_001ECCEC;
    case 49u: goto L_001ECD2C;
    case 50u: goto L_001ECE20;
    case 51u: goto L_001ECE74;
    case 52u: goto L_001ECEA8;
    case 53u: goto L_001ECEC8;
    case 54u: goto L_001ECF1C;
    case 55u: goto L_001ECF50;
    case 56u: goto L_001ECF80;
    case 57u: goto L_001ECFA8;
    case 58u: goto L_001ECFCC;
    case 59u: goto L_001ED008;
    case 60u: goto L_001ED020;
    case 61u: goto L_001ED03C;
    case 62u: goto L_001ED08C;
    case 63u: goto L_001ED094;
    case 64u: goto L_001ED0B0;
    case 65u: goto L_001ED0C4;
    case 66u: goto L_001ED110;
    case 67u: goto L_001ED138;
    case 68u: goto L_001ED180;
    case 69u: goto L_001ED1EC;
    case 70u: goto L_001ED204;
    case 71u: goto L_001ED268;
    case 72u: goto L_001ED2C4;
    case 73u: goto L_001ED300;
    case 74u: goto L_001ED33C;
    case 75u: goto L_001ED420;
    case 76u: goto L_001ED470;
    case 77u: goto L_001ED4C0;
    case 78u: goto L_001ED4F0;
    case 79u: goto L_001ED6A8;
    case 80u: goto L_001ED6D8;
    case 81u: goto L_001ED720;
    case 82u: goto L_001ED940;
    case 83u: goto L_001ED94C;
    case 84u: goto L_001ED9A0;
    case 85u: goto L_001EDAA0;
    case 86u: goto L_001EDBA8;
    case 87u: goto L_001EDBFC;
    case 88u: goto L_001EDCA4;
    case 89u: goto L_001EDDA8;
    case 90u: goto L_001EDDB4;
    case 91u: goto L_001EDDE8;
    case 92u: goto L_001EDE18;
    case 93u: goto L_001EDED0;
    case 94u: goto L_001EDF00;
    case 95u: goto L_001EDFB4;
    case 96u: goto L_001EDFD8;
    case 97u: goto L_001EE004;
    case 98u: goto L_001EE03C;
    case 99u: goto L_001EE08C;
    case 100u: goto L_001EE0B8;
    case 101u: goto L_001EE10C;
    case 102u: goto L_001EE11C;
    case 103u: goto L_001EE1AC;
    case 104u: goto L_001EE1BC;
    case 105u: goto L_001EE1D0;
    case 106u: goto L_001EE338;
    case 107u: goto L_001EE3C0;
    case 108u: goto L_001EE418;
    case 109u: goto L_001EE498;
    case 110u: goto L_001EE4DC;
    case 111u: goto L_001EE52C;
    case 112u: goto L_001EE56C;
    case 113u: goto L_001EE58C;
    case 114u: goto L_001EE5DC;
    case 115u: goto L_001EE600;
    case 116u: goto L_001EE614;
    case 117u: goto L_001EE660;
    case 118u: goto L_001EE678;
    case 119u: goto L_001EE688;
    case 120u: goto L_001EE6E8;
    case 121u: goto L_001EE720;
    case 122u: goto L_001EE740;
    case 123u: goto L_001EE754;
    case 124u: goto L_001EE768;
    case 125u: goto L_001EE790;
    case 126u: goto L_001EE7B0;
    case 127u: goto L_001EE7C0;
    case 128u: goto L_001EE7D8;
    case 129u: goto L_001EE7E8;
    case 130u: goto L_001EE820;
    case 131u: goto L_001EE834;
    case 132u: goto L_001EE880;
    case 133u: goto L_001EE898;
    case 134u: goto L_001EE8A8;
    case 135u: goto L_001EE900;
    case 136u: goto L_001EE914;
    case 137u: goto L_001EE944;
    case 138u: goto L_001EE960;
    case 139u: goto L_001EE988;
    case 140u: goto L_001EE994;
    case 141u: goto L_001EE9BC;
    case 142u: goto L_001EE9D4;
    case 143u: goto L_001EEA10;
    case 144u: goto L_001EEA30;
    case 145u: goto L_001EEA44;
    case 146u: goto L_001EEB08;
    case 147u: goto L_001EEB18;
    case 148u: goto L_001EEB28;
    case 149u: goto L_001EEB3C;
    case 150u: goto L_001EEB4C;
    case 151u: goto L_001EEBA0;
    case 152u: goto L_001EEBD8;
    case 153u: goto L_001EEC04;
    case 154u: goto L_001EEC34;
    case 155u: goto L_001EEC54;
    case 156u: goto L_001EEC88;
    case 157u: goto L_001EEC98;
    case 158u: goto L_001EECA8;
    case 159u: goto L_001EECBC;
    case 160u: goto L_001EECC4;
    case 161u: goto L_001EED0C;
    case 162u: goto L_001EED1C;
    case 163u: goto L_001EED2C;
    case 164u: goto L_001EED40;
    case 165u: goto L_001EED5C;
    case 166u: goto L_001EED68;
    case 167u: goto L_001EEDB4;
    case 168u: goto L_001EEDD8;
    case 169u: goto L_001EEE90;
    case 170u: goto L_001EEEA4;
    case 171u: goto L_001EEEC8;
    case 172u: goto L_001EEEE8;
    case 173u: goto L_001EEEF0;
    case 174u: goto L_001EEF38;
    case 175u: goto L_001EEF48;
    case 176u: goto L_001EEF58;
    case 177u: goto L_001EEF78;
    case 178u: goto L_001EEF80;
    case 179u: goto L_001EEFD0;
    case 180u: goto L_001EEFD8;
    case 181u: goto L_001EF064;
    case 182u: goto L_001EF074;
    case 183u: goto L_001EF084;
    case 184u: goto L_001EF0A4;
    case 185u: goto L_001EF0AC;
    case 186u: goto L_001EF0F8;
    case 187u: goto L_001EF108;
    case 188u: goto L_001EF110;
    case 189u: goto L_001EF144;
    case 190u: goto L_001EF160;
    case 191u: goto L_001EF16C;
    case 192u: goto L_001EF1BC;
    case 193u: goto L_001EF1F0;
    case 194u: goto L_001EF200;
    case 195u: goto L_001EF210;
    case 196u: goto L_001EF2AC;
    case 197u: goto L_001EF2B4;
    case 198u: goto L_001EF300;
    case 199u: goto L_001EF308;
    case 200u: goto L_001EF358;
    case 201u: goto L_001EF360;
    case 202u: goto L_001EF3AC;
    case 203u: goto L_001EF3B4;
    case 204u: goto L_001EF404;
    case 205u: goto L_001EF40C;
    case 206u: goto L_001EF464;
    case 207u: goto L_001EF47C;
    case 208u: goto L_001EF48C;
    case 209u: goto L_001EF4A0;
    case 210u: goto L_001EF4EC;
    case 211u: goto L_001EF4F4;
    case 212u: goto L_001EF55C;
    case 213u: goto L_001EF570;
    case 214u: goto L_001EF57C;
    case 215u: goto L_001EF5D0;
    case 216u: goto L_001EF5EC;
    case 217u: goto L_001EF5F8;
    case 218u: goto L_001EF654;
    case 219u: goto L_001EF6B4;
    case 220u: goto L_001EF6BC;
    case 221u: goto L_001EF708;
    case 222u: goto L_001EF718;
    case 223u: goto L_001EF728;
    case 224u: goto L_001EF738;
    case 225u: goto L_001EF748;
    case 226u: goto L_001EF758;
    case 227u: goto L_001EF768;
    case 228u: goto L_001EF778;
    case 229u: goto L_001EF78C;
    case 230u: goto L_001EF794;
    case 231u: goto L_001EF7DC;
    case 232u: goto L_001EF7EC;
    case 233u: goto L_001EF7FC;
    case 234u: goto L_001EF810;
    case 235u: goto L_001EF82C;
    case 236u: goto L_001EF838;
    case 237u: goto L_001EF884;
    case 238u: goto L_001EF8B8;
    case 239u: goto L_001EF8E8;
    case 240u: goto L_001EF984;
    case 241u: goto L_001EF9D4;
    case 242u: goto L_001EFA0C;
    case 243u: goto L_001EFA24;
    case 244u: goto L_001EFA88;
    case 245u: goto L_001EFA90;
    case 246u: goto L_001EFAE0;
    case 247u: goto L_001EFAE8;
    case 248u: goto L_001EFB30;
    case 249u: goto L_001EFB38;
    case 250u: goto L_001EFB88;
    case 251u: goto L_001EFB90;
    case 252u: goto L_001EFBE8;
    case 253u: goto L_001EFC1C;
    case 254u: goto L_001EFC2C;
    case 255u: goto L_001EFC64;
    case 256u: goto L_001EFC98;
    case 257u: goto L_001EFCB8;
    case 258u: goto L_001EFCC8;
    case 259u: goto L_001EFCE4;
    case 260u: goto L_001EFD00;
    case 261u: goto L_001EFD38;
    case 262u: goto L_001EFD50;
    case 263u: goto L_001EFDE4;
    case 264u: goto L_001EFDFC;
    case 265u: goto L_001EFE28;
    case 266u: goto L_001EFE60;
    case 267u: goto L_001EFE7C;
    case 268u: goto L_001EFE8C;
    case 269u: goto L_001EFE9C;
    case 270u: goto L_001EFEB0;
    case 271u: goto L_001EFECC;
    case 272u: goto L_001EFF08;
    case 273u: goto L_001EFF18;
    case 274u: goto L_001EFF84;
    case 275u: goto L_001EFF98;
    case 276u: goto L_001EFFAC;
    case 277u: goto L_001EFFC8;
    default: bad_entry(c, 0x001EC000u); return;
    }
L_001EC000:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC00Cu); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EC00Cu) [[unlikely]] return; }
L_001EC00C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001EC018; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001EC018:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001EC044; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001EC044; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC030u);  if (depth < kMaxDepth) unit_0033(c, 100u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x001EC030u) [[unlikely]] return; }
L_001EC030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC038u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 100u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x001EC038u) [[unlikely]] return; }
L_001EC038:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC044u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001EC044u) [[unlikely]] return; }
L_001EC044:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EC060:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC0A0u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001EC0A0u) [[unlikely]] return; }
L_001EC0A0:
    set32(c.r[3], ld32((c.r[20].w[0] + 644u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 3u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC0D0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EC0D0u) [[unlikely]] return; }
L_001EC0D0:
    st32((c.r[21].w[0] + 60u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 644u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[19].w[0] + 644u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 644u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC0F0u); st32((c.r[18].w[0] + 644u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 271u, depth + 1u); else { c.pc = 0x001EBDF0u; return; } if (c.pc != 0x001EC0F0u) [[unlikely]] return; }
L_001EC0F0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC108u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EC108u) [[unlikely]] return; }
L_001EC108:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_001EC114; } }
    set32(c.r[20], c.r[20].w[0] + 436u);
    c.budget -= 1;
L_001EC114:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC120u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EC120u) [[unlikely]] return; }
L_001EC120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001EC12C; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001EC12C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_001EC138; } }
    set32(c.r[18], c.r[18].w[0] + 436u);
    c.budget -= 1;
L_001EC138:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC144u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EC144u) [[unlikely]] return; }
L_001EC144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001EC150; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001EC150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC158u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001EC158u) [[unlikely]] return; }
L_001EC158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001EC180:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 15010u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 644u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 28352u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[18], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 17;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001EC254; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 168u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EC254; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[3], 0u + 1600u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1602u);  if (t) { goto L_001EC240; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EC240; } }
    set32(c.r[3], 0u + 1604u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1612u);  if (t) { goto L_001EC240; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EC240; } }
    set32(c.r[3], 0u + 1610u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1645u);  if (t) { goto L_001EC240; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EC240; } }
    set32(c.r[3], c.r[4].w[0] - 1620u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 1624u);  if (t) { goto L_001EC240; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EC240; } }
    set32(c.r[3], 0u + 1606u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1623u);  if (t) { goto L_001EC240; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EC254; } }
L_001EC240:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC24Cu); set32(c.r[5], 0u + 660u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EC24Cu) [[unlikely]] return; }
L_001EC24C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001EC6A4; } }
L_001EC254:
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[3], 0u + 1630u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[7], 0u + 1600u);  if (t) { goto L_001EC2A4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001EC6A0; } }
    set32(c.r[5], 0u + 1634u);
    set32(c.r[6], 0u + 6u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC284u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EC284u) [[unlikely]] return; }
L_001EC284:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1634u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC29Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EC29Cu) [[unlikely]] return; }
L_001EC29C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC6A0; } }
L_001EC2A4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[7].d[0]; set32(c.r[6], 0u + 1602u);  if (t) { goto L_001EC558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC2B4u); set32(c.r[4], ld32((c.r[19].w[0] + 984u)));  if (depth < kMaxDepth) unit_0034(c, 155u, depth + 1u); else { c.pc = 0x001D1920u; return; } if (c.pc != 0x001EC2B4u) [[unlikely]] return; }
L_001EC2B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001EC32C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_001EC324; } }
L_001EC2C4:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001EC31C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 912u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 912u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EC31C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 644u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 644u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EC31C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC304u);  if (depth < kMaxDepth) unit_0034(c, 155u, depth + 1u); else { c.pc = 0x001D1920u; return; } if (c.pc != 0x001EC304u) [[unlikely]] return; }
L_001EC304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC31C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 912u)));
    st32((c.r[19].w[0] + 980u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 984u), c.r[16].w[0]);  if (t) { goto L_001EC32C; } }
L_001EC31C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 2;
L_001EC324:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC2C4u | kUnwind; return; } goto L_001EC2C4; } }
L_001EC32C:
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[3], 0u + 15010u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001EC34C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC344u); set32(c.r[5], 0u + 660u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EC344u) [[unlikely]] return; }
L_001EC344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC6A0; } }
L_001EC34C:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 474u));
    c.r[3].d[0] = c.r[5].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 64ull;  if (t) { goto L_001EC438; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 480u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EC434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC374u); set32(c.r[4], ld32((c.r[19].w[0] + 984u)));  if (depth < kMaxDepth) unit_0034(c, 155u, depth + 1u); else { c.pc = 0x001D1920u; return; } if (c.pc != 0x001EC374u) [[unlikely]] return; }
L_001EC374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC3A0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 644u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 644u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001EC3A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC398u); set32(c.r[5], 0u + 1612u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EC398u) [[unlikely]] return; }
L_001EC398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC6A0; } }
L_001EC3A0:
    set32(c.r[3], ld32((c.r[19].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001EC424; } }
    c.f[1] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21616u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001EC3F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 212u), c.f[0]);  if (t) { goto L_001EC410; } }
L_001EC3F0:
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001EC414; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_001EC410:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001EC414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC41Cu); set32(c.r[5], 0u + 1603u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EC41Cu) [[unlikely]] return; }
L_001EC41C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC6A0; } }
L_001EC424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC42Cu); set32(c.r[5], 0u + 1602u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EC42Cu) [[unlikely]] return; }
L_001EC42C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC6A0; } }
L_001EC434:
    c.r[3].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 1;
L_001EC438:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 128ull;  if (t) { goto L_001EC50C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 480u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EC508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC458u); set32(c.r[4], ld32((c.r[19].w[0] + 984u)));  if (depth < kMaxDepth) unit_0034(c, 155u, depth + 1u); else { c.pc = 0x001D1920u; return; } if (c.pc != 0x001EC458u) [[unlikely]] return; }
L_001EC458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC48C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 644u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 644u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EC48C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 1610u);  if (t) { goto L_001EC4C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1611u);  if (t) { goto L_001EC4C8; } }
L_001EC48C:
    set32(c.r[3], ld32((c.r[19].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 75u);  if (t) { goto L_001EC4A4; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[5], c.r[2].w[0] + 76u);
    c.budget -= 2;
L_001EC4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC4ACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001EC4ACu) [[unlikely]] return; }
L_001EC4AC:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 392u));
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[19].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_001EC4C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC4D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EC4D0u) [[unlikely]] return; }
L_001EC4D0:
    c.r[7].d[0] = ld8((c.r[19].w[0] + 392u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 33u);
    set32(c.r[6], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[19].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 400u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 400u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EC6A0; } }
L_001EC508:
    c.r[3].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 1;
L_001EC50C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001EC524; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC51Cu); set32(c.r[5], 0u + 1605u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EC51Cu) [[unlikely]] return; }
L_001EC51C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC6A0; } }
L_001EC524:
    c.f[1] = ld32((c.r[18].w[0] + 224u));
    c.f[0] = ld32((c.r[19].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EC53C; } }
    st32((c.r[19].w[0] + 224u), c.f[1]);
    c.budget -= 1;
L_001EC53C:
    c.f[1] = ld32((c.r[18].w[0] + 232u));
    c.f[0] = ld32((c.r[19].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EC6A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 232u), c.f[1]);  if (t) { goto L_001EC6A0; } }
L_001EC558:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; set32(c.r[3], 0u + 15010u);  if (t) { goto L_001EC578; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001EC6A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC570u); set32(c.r[5], 0u + 660u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EC570u) [[unlikely]] return; }
L_001EC570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC6A0; } }
L_001EC578:
    set32(c.r[5], 0u + 1612u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001EC6A0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EC6A0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[3], 0u + 1645u);
    set32(c.r[8], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_001EC5D4; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_001EC5D4; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0]; set32(c.r[3], 0u + 1604u);  if (t) { goto L_001EC5D4; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_001EC5D4; } }
    set32(c.r[3], 0u + 1610u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_001EC5D4; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[5].d[0];  if (t) { goto L_001EC6A0; } }
L_001EC5D4:
    set32(c.r[2], 0u + 1645u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001EC64C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001EC5F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1622u);  if (t) { goto L_001EC68C; } }
L_001EC5F8:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC604u); set32(c.r[16], 0u + 1620u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001EC604u) [[unlikely]] return; }
L_001EC604:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC614u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001EC614u) [[unlikely]] return; }
L_001EC614:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 4868u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001EC62C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EC630; } }
L_001EC62C:
    set32(c.r[16], 0u + 1621u);
    c.budget -= 1;
L_001EC630:
    set32(c.r[2], 0u + 3583u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001EC644; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EC68C; } }
L_001EC644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1624u);  if (t) { goto L_001EC68C; } }
L_001EC64C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC654u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 56u, depth + 1u); else { c.pc = 0x001C4830u; return; } if (c.pc != 0x001EC654u) [[unlikely]] return; }
L_001EC654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC678; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 984u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1606u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC670u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001EC670u) [[unlikely]] return; }
L_001EC670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC6A0; } }
L_001EC678:
    set32(c.r[3], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[16], 0u + 1623u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 896u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 896u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_001EC68C:
    set32(c.r[5], ld32((c.r[19].w[0] + 984u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC6A0u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001EC6A0u) [[unlikely]] return; }
L_001EC6A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001EC6A4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EC6C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001EC758; } }
L_001EC6E0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001EC754; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_001EC754; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001EC754; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 240u)));
    c.f[12] = ld32((c.r[1].w[0] + 21424u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC720u); set32(c.r[4], c.r[17].w[0] + 208u);  if (depth < kMaxDepth) unit_0011(c, 83u, depth + 1u); else { c.pc = 0x00145900u; return; } if (c.pc != 0x001EC720u) [[unlikely]] return; }
L_001EC720:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC754; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 912u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC734u); set32(c.r[5], ld32((c.r[18].w[0] + 912u)));  if (depth < kMaxDepth) unit_003F(c, 348u, depth + 1u); else { c.pc = 0x001FF740u; return; } if (c.pc != 0x001EC734u) [[unlikely]] return; }
L_001EC734:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EC754; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001EC76C; } }
L_001EC754:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001EC758:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC6E0u | kUnwind; return; } goto L_001EC6E0; } }
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_001EC76C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EC780:
    set32(c.r[29], c.r[29].w[0] - 448u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.f[0] = ld32((c.r[1].w[0] + 21416u));
    st32((c.r[29].w[0] + 428u), c.r[2].w[0]);
    set32(c.r[5], c.r[18].w[0] + 208u);
    st32((c.r[29].w[0] + 416u), 0u);
    st32((c.r[29].w[0] + 420u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC7C0u); st32((c.r[29].w[0] + 424u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 48u, depth + 1u); else { c.pc = 0x00144FA0u; return; } if (c.pc != 0x001EC7C0u) [[unlikely]] return; }
L_001EC7C0:
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[3], c.r[29].w[0] + 352u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[3], c.r[29].w[0] + 416u);
    set32(c.r[4], c.r[18].w[0] + 224u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.f[0] = 0u;
    c.r[3].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 304u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001EC828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC82C; } }
L_001EC828:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001EC82C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21496u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EC878; } }
    c.f[1] = ld32((c.r[18].w[0] + 312u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EC860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC864; } }
L_001EC860:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001EC864:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21496u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ECA14; } }
L_001EC878:
    set32(c.r[2], c.r[29].w[0] + 336u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[0] = ld32((c.r[18].w[0] + 212u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC890u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001EC890u) [[unlikely]] return; }
L_001EC890:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC8A0u); set32(c.r[6], c.r[18].w[0] + 304u);  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x001EC8A0u) [[unlikely]] return; }
L_001EC8A0:
    set32(c.r[2], c.r[29].w[0] + 256u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC8B4u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001EC8B4u) [[unlikely]] return; }
L_001EC8B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 444u), c.f[0]);  if (t) { goto L_001EC8DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 444u), c.f[0]);  if (t) { goto L_001EC8FC; } }
L_001EC8DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001EC8FC; } }
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 444u), c.f[0]);
    c.budget -= 3;
L_001EC8FC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 585u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001EC9E8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    c.f[2] = ld32((c.r[29].w[0] + 444u));
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EC94C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_001EC968; } }
L_001EC94C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 7;
L_001EC968:
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.r[1].d[0] = c.r[3].sd[0] < 1665ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001ECA14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    c.f[2] = ld32((c.r[29].w[0] + 444u));
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EC9B4; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_001EC9D0; } }
L_001EC9B4:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 7;
L_001EC9D0:
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.r[1].d[0] = c.r[3].sd[0] < 2432ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ECA14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001ECA14; } }
L_001EC9E8:
    c.f[1] = ld32((c.r[29].w[0] + 444u));
    c.f[0] = ld32((c.r[1].w[0] + 21536u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ECA10; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21528u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ECA14; } }
L_001ECA10:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001ECA14:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 378u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 208u);  if (t) { goto L_001ECCCC; } }
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], c.r[29].w[0] + 224u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 21688u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[18].w[0] + 212u));
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ECA6C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 586u)));  if (t) { goto L_001ECA88; } }
L_001ECA6C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 586u)));
    c.budget -= 7;
L_001ECA88:
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[4], c.r[3].w[0] + 512u);
    c.r[4].d[0] = c.r[4].d[0] & 4095ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 10));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_001ECABC; } }
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_001ECABC; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    c.budget -= 1;
L_001ECABC:
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001ECCCC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4D550000u);  if (t) { goto L_001ECAD8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001ECAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECAE0u); c.r[5].d[0] = c.r[2].d[0] | 19285ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001ECAE0u) [[unlikely]] return; }
L_001ECAE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ECAF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001ECAF4; } }
L_001ECAF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001ECAF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001ECB68; } }
    c.f[2] = ld32((c.r[1].w[0] + 21688u));
    c.f[3] = ld32((c.r[2].w[0] + 44u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ECB3C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001ECB58; } }
L_001ECB3C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001ECB58:
    set32(c.r[2], c.r[2].w[0] + 512u);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
L_001ECB68:
    ld128((c.r[18].w[0] + 208u) & ~15u, c.r[3]);
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[5], 0u - c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    ld128((c.r[18].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECB88u); st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001ECB88u) [[unlikely]] return; }
L_001ECB88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    c.f[2] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ECBC8; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_001ECBE4; } }
L_001ECBC8:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 7;
L_001ECBE4:
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.r[3].d[0] = c.r[3].sd[0] < 768ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001ECC5C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    c.f[2] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ECC30; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_001ECC4C; } }
L_001ECC30:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 7;
L_001ECC4C:
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.r[1].d[0] = c.r[3].sd[0] < 3329ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001ECCCC; } }
L_001ECC5C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 378u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ECC84; } }
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1600000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001ECCA4; } }
L_001ECC84:
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1C00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ECCCC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001ECCA4:
    set32(c.r[5], 0u + 15190u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECCB0u); st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001ECCB0u) [[unlikely]] return; }
L_001ECCB0:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 393u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001ED008; } }
L_001ECCCC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001ECF58; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 15020u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECCECu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001ECCECu) [[unlikely]] return; }
L_001ECCEC:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 375u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ECEB0; } }
    set32(c.r[2], c.r[29].w[0] + 160u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 176u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    ld128((c.r[18].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    ld128((c.r[18].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 368u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECD2Cu); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001ECD2Cu) [[unlikely]] return; }
L_001ECD2C:
    c.f[1] = ld32((c.r[18].w[0] + 228u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001ECEA8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ECD84; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_001ECDA0; } }
L_001ECD84:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 7;
L_001ECDA0:
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.r[1].d[0] = c.r[3].sd[0] < 1149ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001ECEA8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ECDEC; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_001ECE08; } }
L_001ECDEC:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 7;
L_001ECE08:
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.r[1].d[0] = c.r[3].sd[0] < 2948ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ECEA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECE20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 77u, depth + 1u); else { c.pc = 0x001D58D0u; return; } if (c.pc != 0x001ECE20u) [[unlikely]] return; }
L_001ECE20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ECEA8; } }
    set32(c.r[2], c.r[29].w[0] + 112u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 128u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 15180u);
    ld128((c.r[18].w[0] + 208u) & ~15u, c.r[6]);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], 0u - 9u);
    set32(c.r[3], c.r[3].w[0] << 3);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[6]);
    ld128((c.r[18].w[0] + 224u) & ~15u, c.r[6]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[6]);
    c.r[6].d[0] = ld8((c.r[18].w[0] + 400u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECE74u); st8((c.r[18].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001ECE74u) [[unlikely]] return; }
L_001ECE74:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 400u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; st8((c.r[18].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001ECE9C; } }
    set32(c.r[6], c.r[6].w[0] + 436u);
    c.budget -= 1;
L_001ECE9C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECEA8u); set32(c.r[5], 0u + 300u);  if (depth < kMaxDepth) unit_002F(c, 16u, depth + 1u); else { c.pc = 0x001BD040u; return; } if (c.pc != 0x001ECEA8u) [[unlikely]] return; }
L_001ECEA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 589u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001ED008; } }
L_001ECEB0:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 379u));
    set32(c.r[3], 0u + 254u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001ED008; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECEC8u);  if (depth < kMaxDepth) unit_0034(c, 210u, depth + 1u); else { c.pc = 0x001D2E40u; return; } if (c.pc != 0x001ECEC8u) [[unlikely]] return; }
L_001ECEC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED008; } }
    set32(c.r[2], c.r[29].w[0] + 64u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 80u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 15180u);
    ld128((c.r[18].w[0] + 208u) & ~15u, c.r[6]);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], 0u - 9u);
    set32(c.r[3], c.r[3].w[0] << 3);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[6]);
    ld128((c.r[18].w[0] + 224u) & ~15u, c.r[6]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[6]);
    c.r[6].d[0] = ld8((c.r[18].w[0] + 400u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECF1Cu); st8((c.r[18].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001ECF1Cu) [[unlikely]] return; }
L_001ECF1C:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 400u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 208u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECF50u); st128((c.r[18].w[0] + 224u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001ECF50u) [[unlikely]] return; }
L_001ECF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001ED00C; } }
L_001ECF58:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 474u));
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 32ull;  if (t) { goto L_001ECF88; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 15020u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECF80u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001ECF80u) [[unlikely]] return; }
L_001ECF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED008; } }
L_001ECF88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ECFB0; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 15100u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECFA8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001ECFA8u) [[unlikely]] return; }
L_001ECFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED008; } }
L_001ECFB0:
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ED008; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECFCCu); set32(c.r[16], 0u + 15110u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001ECFCCu) [[unlikely]] return; }
L_001ECFCC:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 1770u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001ECFF0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001ECFF0; } }
    set32(c.r[16], 0u + 15115u);
    c.budget -= 1;
L_001ECFF0:
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED008u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001ED008u) [[unlikely]] return; }
L_001ED008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001ED00C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 448u);  c.pc = t; return; }
L_001ED020:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED03Cu); c.r[4].d[0] = ld8((c.r[4].w[0] + 368u));  if (depth < kMaxDepth) unit_0046(c, 152u, depth + 1u); else { c.pc = 0x0021A970u; return; } if (c.pc != 0x001ED03Cu) [[unlikely]] return; }
L_001ED03C:
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], 0u + 1562u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001ED0B0; } }
    set32(c.r[3], 0u + 1561u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].d[0] = c.r[16].sd[0] < 59ll ? 1ull : 0ull;  if (t) { goto L_001ED0B4; } }
    set32(c.r[2], c.r[29].w[0] + 48u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[17].w[0] + 208u);
    ld128((c.r[17].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 368u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED08Cu); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001ED08Cu) [[unlikely]] return; }
L_001ED08C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED094u); c.r[4].d[0] = ld8((c.r[17].w[0] + 368u));  if (depth < kMaxDepth) unit_0046(c, 151u, depth + 1u); else { c.pc = 0x0021A950u; return; } if (c.pc != 0x001ED094u) [[unlikely]] return; }
L_001ED094:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21408u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 232u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 368u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED0B0u); set32(c.r[4], c.r[17].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001ED0B0u) [[unlikely]] return; }
L_001ED0B0:
    c.r[3].d[0] = c.r[16].sd[0] < 59ll ? 1ull : 0ull;
    c.budget -= 1;
L_001ED0B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ED140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED0C4u);  if (depth < kMaxDepth) unit_003F(c, 311u, depth + 1u); else { c.pc = 0x001FF1D0u; return; } if (c.pc != 0x001ED0C4u) [[unlikely]] return; }
L_001ED0C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED140; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], 0u + 1562u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1555u);  if (t) { goto L_001ED0F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001ED0F0; } }
    set32(c.r[3], 0u + 1551u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001ED140; } }
L_001ED0F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 1562u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001ED130; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 660u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED110u); st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001ED110u) [[unlikely]] return; }
L_001ED110:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 392u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 7);
    set32(c.r[3], 0u - 129u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001ED4D8; } }
L_001ED130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED138u); set32(c.r[5], 0u + 1556u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001ED138u) [[unlikely]] return; }
L_001ED138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001ED4DC; } }
L_001ED140:
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], 0u + 1562u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001ED1B8; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ED1B8; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 400u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED180u); st8((c.r[17].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 92u, depth + 1u); else { c.pc = 0x001E1700u; return; } if (c.pc != 0x001ED180u) [[unlikely]] return; }
L_001ED180:
    c.r[7].d[0] = ld8((c.r[17].w[0] + 392u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 33u);
    set32(c.r[6], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 400u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 400u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001ED4D8; } }
L_001ED1B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], 0u + 1561u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1551u);  if (t) { goto L_001ED2D0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ED4D8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001ED4D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED1ECu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001ED1ECu) [[unlikely]] return; }
L_001ED1EC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001ED250; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 28320u);  if (t) { goto L_001ED244; } }
L_001ED204:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001ED240; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[17].d[0];  if (t) { goto L_001ED240; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 624u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001ED240; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ED240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001ED250; } }
L_001ED240:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001ED244:
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED204u | kUnwind; return; } goto L_001ED204; } }
L_001ED250:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001ED2B8; } }
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 28320u);  if (t) { goto L_001ED2A4; } }
L_001ED268:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001ED2A0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 624u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001ED2A0; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ED2A0; } }
    st8((c.r[7].w[0] + 372u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 912u)));
    st8((c.r[7].w[0] + 373u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001ED2A0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001ED2A4:
    c.r[3].d[0] = c.r[8].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED268u | kUnwind; return; } goto L_001ED268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001ED2C8; } }
L_001ED2B8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED2C4u); st8((c.r[17].w[0] + 371u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 5u, depth + 1u); else { c.pc = 0x001F8170u; return; } if (c.pc != 0x001ED2C4u) [[unlikely]] return; }
L_001ED2C4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001ED2C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001ED4D8; } }
L_001ED2D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001ED4D8; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 474u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 948u)));  if (t) { goto L_001ED2F4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 949u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 948u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001ED2F4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001ED318; } }
L_001ED300:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 948u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001ED314; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_001ED314:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_001ED318:
    c.r[2].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED300u | kUnwind; return; } goto L_001ED300; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);  if (t) { goto L_001ED334; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001ED334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED33Cu); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001ED33Cu) [[unlikely]] return; }
L_001ED33C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001ED348; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001ED348:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 40u);  if (t) { goto L_001ED358; } }
    set32(c.r[3], c.r[4].w[0] + 32u);
    c.budget -= 1;
L_001ED358:
    c.r[6].d[0] = ld8((c.r[3].w[0] + 2u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 28000u);
    c.r[4].d[0] = ld64((c.r[3].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st64((c.r[5].w[0]), c.r[4].d[0]);
    c.r[3].d[0] = c.r[6].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0] + 8u), c.f[0]);  if (t) { goto L_001ED3A8; } }
    set32(c.r[3], c.r[6].w[0] - 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[1].w[0] + 21400u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = c.r[3].w[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[4] = fp::add(c.f[0], c.f[1]);  if (t) { goto L_001ED3D0; } }
L_001ED3A8:
    set32(c.r[3], c.r[6].w[0] - 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[1].w[0] + 21392u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = c.r[3].w[0];
    c.f[4] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
L_001ED3D0:
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[3] = ld32((c.r[29].w[0] + 96u));
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    st32((c.r[29].w[0] + 96u), c.f[3]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 104u), c.f[1]);  if (t) { goto L_001ED43C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);  if (t) { goto L_001ED414; } }
    set32(c.r[17], c.r[17].w[0] + 436u);
    c.budget -= 1;
L_001ED414:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED420u); c.r[5].d[0] = c.r[2].d[0] | 17524ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001ED420u) [[unlikely]] return; }
L_001ED420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001ED42C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001ED42C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_001ED4D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_001ED4D8; } }
L_001ED43C:
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ED48C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);  if (t) { goto L_001ED464; } }
    set32(c.r[17], c.r[17].w[0] + 436u);
    c.budget -= 1;
L_001ED464:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED470u); c.r[5].d[0] = c.r[2].d[0] | 17524ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001ED470u) [[unlikely]] return; }
L_001ED470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001ED47C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001ED47C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001ED4D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_001ED4D8; } }
L_001ED48C:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ED4D8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);  if (t) { goto L_001ED4B4; } }
    set32(c.r[17], c.r[17].w[0] + 436u);
    c.budget -= 1;
L_001ED4B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED4C0u); c.r[5].d[0] = c.r[2].d[0] | 17524ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001ED4C0u) [[unlikely]] return; }
L_001ED4C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001ED4CC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001ED4CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001ED4D8; } }
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 1;
L_001ED4D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001ED4DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001ED4F0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EDED0; } }
    ld128((c.r[19].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 256u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 224u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 256u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[18], 0u + 20u);
    set32(c.r[17], 0u + 52u);
    set32(c.r[16], 0u + 42u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    c.f[20] = c.r[3].w[0];
    set32(c.r[3], 0u + 801u);
    c.budget -= 27;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[21], 0u + 1u);  if (t) { goto L_001ED59C; } }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u + 30u);
    set32(c.r[16], 0u - 1u);
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_001ED59C:
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[3], 0u + 4575u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_001ED5C0; } }
    set32(c.r[18], 0u + 20u);
    c.f[20] = c.r[3].w[0];
    set32(c.r[17], 0u + 52u);
    set32(c.r[16], 0u - 1u);
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_001ED5C0:
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[3], 0u + 803u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_001ED5E4; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.f[20] = c.r[3].w[0];
    set32(c.r[17], 0u + 30u);
    set32(c.r[16], 0u - 1u);
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_001ED5E4:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 474u));
    set32(c.r[3], 0u + 800u);
    c.r[4].d[0] = ld16((c.r[19].w[0] + 560u));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[19].w[0] + 560u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001ED694; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[3], 0u + 50u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001ED694; } }
    c.r[4].d[0] = ld16((c.r[19].w[0] + 560u));
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001ED62C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 878u);  if (t) { goto L_001ED63C; } }
L_001ED62C:
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ED63C; } }
    set32(c.r[7], 0u + 873u);
    c.budget -= 1;
L_001ED63C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001ED694; } }
    st32((c.r[19].w[0] + 164u), c.r[7].w[0]);
    set32(c.r[6], 0u + 1u);
    st32((c.r[19].w[0] + 168u), 0u);
    set32(c.r[3], 0u - 33u);
    st32((c.r[19].w[0] + 172u), 0u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    st32((c.r[19].w[0] + 176u), 0u);
    set32(c.r[5], ld32((c.r[19].w[0] + 60u)));
    st32((c.r[5].w[0] + 164u), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 60u)));
    st32((c.r[5].w[0] + 168u), 0u);
    set32(c.r[5], ld32((c.r[19].w[0] + 60u)));
    st32((c.r[5].w[0] + 172u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 60u)));
    st32((c.r[5].w[0] + 176u), 0u);
    set32(c.r[6], ld32((c.r[19].w[0] + 60u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 394u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 20;
L_001ED694:
    set32(c.r[3], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[18].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001EDD7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED6A8u);  if (depth < kMaxDepth) unit_0043(c, 125u, depth + 1u); else { c.pc = 0x0020EB00u; return; } if (c.pc != 0x001ED6A8u) [[unlikely]] return; }
L_001ED6A8:
    set32(c.r[3], ld32((c.r[19].w[0] + 944u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ED6E0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_001ED6E0; } }
    st8((c.r[19].w[0] + 588u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 588u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED6D8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 29u, depth + 1u); else { c.pc = 0x001F0370u; return; } if (c.pc != 0x001ED6D8u) [[unlikely]] return; }
L_001ED6D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 284u), c.f[0]);  if (t) { goto L_001ED944; } }
L_001ED6E0:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 472u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001ED810; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_001ED810; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001ED810; } }
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 240u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED720u); set32(c.r[4], ld32((c.r[19].w[0] + 240u)));  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001ED720u) [[unlikely]] return; }
L_001ED720:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21672u));
    c.f[2] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 284u), c.f[2]);  if (t) { goto L_001ED74C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 284u), c.f[0]);  if (t) { goto L_001ED770; } }
L_001ED74C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ED770; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.budget -= 4;
L_001ED770:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    c.f[2] = ld32((c.r[29].w[0] + 284u));
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ED7B0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_001ED7CC; } }
L_001ED7B0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 7;
L_001ED7CC:
    c.r[5].d[0] = c.r[3].d[0] & 4095ull;
    set32(c.r[4], c.r[20].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 9));
    st8((c.r[19].w[0] + 588u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EDD74; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 369u));
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 585u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001EDD74; } }
L_001ED810:
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[2], 0u + 4575u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001ED89C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[1].w[0] + 21688u));
    c.f[3] = ld32((c.r[19].w[0] + 212u));
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ED860; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001ED87C; } }
L_001ED860:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001ED87C:
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[2], c.r[2].w[0] + 256u);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 9));
    st8((c.r[19].w[0] + 588u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 212u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 284u), c.f[0]);  if (t) { goto L_001ED944; } }
L_001ED89C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[1].w[0] + 21688u));
    c.f[3] = ld32((c.r[19].w[0] + 212u));
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ED8D8; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001ED8F4; } }
L_001ED8D8:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001ED8F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[2], c.r[2].w[0] + 2304u);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 9));
    st8((c.r[19].w[0] + 588u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 212u));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 370u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED944; } }
    c.r[5].d[0] = ld8((c.r[19].w[0] + 588u));
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001ED944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED940u);  if (depth < kMaxDepth) unit_003C(c, 29u, depth + 1u); else { c.pc = 0x001F0370u; return; } if (c.pc != 0x001ED940u) [[unlikely]] return; }
L_001ED940:
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.budget -= 1;
L_001ED944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED94Cu);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001ED94Cu) [[unlikely]] return; }
L_001ED94C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EDCC8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[3], 0u + 801u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_001ED974; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 585u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001ED978; } }
L_001ED974:
    st8((c.r[19].w[0] + 585u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001ED978:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ED9D4; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 588u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ED9D4; } }
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED9A0u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0038(c, 51u, depth + 1u); else { c.pc = 0x001E08F0u; return; } if (c.pc != 0x001ED9A0u) [[unlikely]] return; }
L_001ED9A0:
    st32((c.r[29].w[0] + 284u), c.f[0]);
    set32(c.r[3], 0u + 801u);
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001ED9C8; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 588u));
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 585u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001ED9D4; } }
L_001ED9C8:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 588u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st8((c.r[19].w[0] + 585u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001ED9D4:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 370u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EDCC8; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 588u));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EDCC8; } }
    c.f[1] = ld32((c.r[19].w[0] + 224u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EDA14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x428C0000u);  if (t) { goto L_001EDA1C; } }
L_001EDA14:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    c.budget -= 2;
L_001EDA1C:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EDCC8; } }
    c.f[1] = ld32((c.r[19].w[0] + 232u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EDA50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x428C0000u);  if (t) { goto L_001EDA58; } }
L_001EDA50:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    c.budget -= 2;
L_001EDA58:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EDCC8; } }
    set32(c.r[2], c.r[29].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    ld128((c.r[19].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    ld128((c.r[19].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 368u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDAA0u); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001EDAA0u) [[unlikely]] return; }
L_001EDAA0:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 368u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2000000u);
    c.r[4].d[0] = ld8((c.r[19].w[0] + 588u));
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 8u);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[4].d[0] & 7ull;  if (t) { goto L_001EDB00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001EDB00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001EDAFC; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001EDB00; } }
L_001EDAFC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_001EDB00:
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1D80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EDB90; } }
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EDB3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41D80000u);  if (t) { goto L_001EDB44; } }
L_001EDB3C:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D80000u);
    c.budget -= 2;
L_001EDB44:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EDB90; } }
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 7u);  if (t) { goto L_001EDB84; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001EDB90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EDB90; } }
L_001EDB84:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001EDB90; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_001EDB90:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001EDBDC; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 588u));
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDBA8u); set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (depth < kMaxDepth) unit_0038(c, 54u, depth + 1u); else { c.pc = 0x001E0990u; return; } if (c.pc != 0x001EDBA8u) [[unlikely]] return; }
L_001EDBA8:
    st32((c.r[29].w[0] + 284u), c.f[0]);
    set32(c.r[2], 0u + 801u);
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EDBD0; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 588u));
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 585u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EDBDC; } }
L_001EDBD0:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 588u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st8((c.r[19].w[0] + 585u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001EDBDC:
    ld128((c.r[19].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    ld128((c.r[19].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 369u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDBFCu); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001EDBFCu) [[unlikely]] return; }
L_001EDBFC:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 369u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1D80000u);
    c.r[5].d[0] = ld8((c.r[19].w[0] + 588u));
    c.f[2] = ld32((c.r[29].w[0] + 224u));
    c.f[1] = c.r[3].w[0];
    set32(c.r[20], 0u - 1u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 8u);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[4].d[0] & 7ull;  if (t) { goto L_001EDC94; } }
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 5u);  if (t) { goto L_001EDC94; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EDC90; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_001EDC6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2100000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EDC90; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_001EDC6C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EDC94; } }
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2100000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EDC94; } }
L_001EDC90:
    c.r[20].d[0] = ld8((c.r[19].w[0] + 369u));
    c.budget -= 1;
L_001EDC94:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001EDCC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDCA4u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0038(c, 51u, depth + 1u); else { c.pc = 0x001E08F0u; return; } if (c.pc != 0x001EDCA4u) [[unlikely]] return; }
L_001EDCA4:
    st32((c.r[29].w[0] + 284u), c.f[0]);
    set32(c.r[3], 0u + 801u);
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EDCC4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 585u), static_cast<std::uint8_t>(c.r[20].w[0]));  if (t) { goto L_001EDCC8; } }
L_001EDCC4:
    st8((c.r[19].w[0] + 585u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 1;
L_001EDCC8:
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[3], 0u + 4575u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001EDD74; } }
    c.f[1] = ld32((c.r[29].w[0] + 284u));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 284u), c.f[1]);  if (t) { goto L_001EDD04; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 284u), c.f[0]);  if (t) { goto L_001EDD28; } }
L_001EDD04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EDD28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.budget -= 4;
L_001EDD28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 284u));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001EDD54; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 284u), c.f[0]);  if (t) { goto L_001EDD74; } }
L_001EDD54:
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EDD74; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.budget -= 4;
L_001EDD74:
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    st32((c.r[19].w[0] + 648u), c.f[0]);
    c.budget -= 2;
L_001EDD7C:
    set32(c.r[4], ld32((c.r[19].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[17].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  if (t) { goto L_001EDEAC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EDEAC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[19].w[0] + 648u));
    c.f[13] = ld32((c.r[1].w[0] + 21496u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDDA8u); set32(c.r[4], c.r[19].w[0] + 212u);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x001EDDA8u) [[unlikely]] return; }
L_001EDDA8:
    c.f[12] = ld32((c.r[19].w[0] + 212u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDDB4u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001EDDB4u) [[unlikely]] return; }
L_001EDDB4:
    c.f[2] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[2], c.r[29].w[0] + 128u);
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    st32((c.r[29].w[0] + 192u), c.f[2]);
    st32((c.r[29].w[0] + 196u), c.f[1]);
    st32((c.r[29].w[0] + 200u), c.f[0]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDDE8u); st32((c.r[29].w[0] + 136u), c.f[20]);  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x001EDDE8u) [[unlikely]] return; }
L_001EDDE8:
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[0] = c.f[20] ^ fp::kSign;
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[19].w[0] + 224u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[19].w[0] + 232u), c.f[1]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE18u); st32((c.r[29].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x001EDE18u) [[unlikely]] return; }
L_001EDE18:
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], 0u + 900u);
    st32((c.r[4].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    st32((c.r[4].w[0] + 232u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001EDE48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[19].w[0] + 212u));  if (t) { goto L_001EDE54; } }
L_001EDE48:
    c.f[1] = ld32((c.r[19].w[0] + 212u));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_001EDE54:
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[3].w[0] + 212u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    c.f[1] = ld32((c.r[3].w[0] + 212u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[3].w[0] + 212u);  if (t) { goto L_001EDE8C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { goto L_001EDEAC; } }
L_001EDE8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001EDEAC; } }
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 3;
L_001EDEAC:
    set32(c.r[3], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_001EDED0; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 560u));
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001EDED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDED0u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8E30u; return; } if (c.pc != 0x001EDED0u) [[unlikely]] return; }
L_001EDED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_001EDF00:
    set32(c.r[29], c.r[29].w[0] - 560u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 393u));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EDF58; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.r[1].d[0] = c.r[2].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_001EDF58; } }
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001EDF58:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 589u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001EDF6C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 589u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001EDF6C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EDF88; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001EDF88:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001EDF98; } }
    set32(c.r[20], 0u + 1u);
    c.budget -= 1;
L_001EDF98:
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EDFAC; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EDFAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDFB4u); set32(c.r[5], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_003C(c, 39u, depth + 1u); else { c.pc = 0x001F06E0u; return; } if (c.pc != 0x001EDFB4u) [[unlikely]] return; }
L_001EDFB4:
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 448u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (t) { goto L_001EDFCC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001EDFCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D550000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDFD8u); c.r[5].d[0] = c.r[2].d[0] | 19285ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EDFD8u) [[unlikely]] return; }
L_001EDFD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EDFE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001EDFEC; } }
L_001EDFE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EDFEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 464u);  if (t) { goto L_001EDFFC; } }
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    st32((c.r[29].w[0] + 452u), c.f[0]);
    c.budget -= 2;
L_001EDFFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE004u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_0011(c, 48u, depth + 1u); else { c.pc = 0x00144FA0u; return; } if (c.pc != 0x001EE004u) [[unlikely]] return; }
L_001EE004:
    set32(c.r[3], c.r[29].w[0] + 528u);
    set32(c.r[2], c.r[29].w[0] + 464u);
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
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE03Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001EE03Cu) [[unlikely]] return; }
L_001EE03C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE07C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[29].w[0] + 528u);  if (t) { goto L_001EE080; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 62u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[16].w[0] + 224u);  if (t) { goto L_001EE07C; } }
    set32(c.r[2], c.r[29].w[0] + 528u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);  if (t) { goto L_001EE084; } }
L_001EE07C:
    set32(c.r[2], c.r[29].w[0] + 528u);
    c.budget -= 1;
L_001EE080:
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.budget -= 1;
L_001EE084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE08Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 89u, depth + 1u); else { c.pc = 0x001E1460u; return; } if (c.pc != 0x001EE08Cu) [[unlikely]] return; }
L_001EE08C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], 0u - c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 416u);
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE0B8u); st32((c.r[29].w[0] + 432u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001EE0B8u) [[unlikely]] return; }
L_001EE0B8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001EE124; } }
    c.f[1] = ld32((c.r[29].w[0] + 424u));
    c.f[0] = ld32((c.r[1].w[0] + 21384u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EE124; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 404u));
    c.f[0] = ld32((c.r[1].w[0] + 21680u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001EE124; } }
    c.f[0] = ld32((c.r[1].w[0] + 21520u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EE124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE10Cu);  if (depth < kMaxDepth) unit_0038(c, 89u, depth + 1u); else { c.pc = 0x001E1460u; return; } if (c.pc != 0x001EE10Cu) [[unlikely]] return; }
L_001EE10C:
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE11Cu); set32(c.r[5], 0u + 1678u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EE11Cu) [[unlikely]] return; }
L_001EE11C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { [[clang::musttail]] return unit_003C(c, 28u, depth); } }
L_001EE124:
    c.f[1] = ld32((c.r[16].w[0] + 304u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001EE144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE148; } }
L_001EE144:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001EE148:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21456u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[29].w[0] + 384u);  if (t) { goto L_001EE198; } }
    c.f[1] = ld32((c.r[16].w[0] + 312u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EE17C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE180; } }
L_001EE17C:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001EE180:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21456u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EE330; } }
    set32(c.r[2], c.r[29].w[0] + 384u);
    c.budget -= 1;
L_001EE198:
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.f[0] = ld32((c.r[16].w[0] + 212u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE1ACu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001EE1ACu) [[unlikely]] return; }
L_001EE1AC:
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE1BCu); set32(c.r[6], c.r[16].w[0] + 304u);  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x001EE1BCu) [[unlikely]] return; }
L_001EE1BC:
    set32(c.r[2], c.r[29].w[0] + 304u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE1D0u); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001EE1D0u) [[unlikely]] return; }
L_001EE1D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 556u), c.f[0]);  if (t) { goto L_001EE1F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 556u), c.f[0]);  if (t) { goto L_001EE218; } }
L_001EE1F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001EE218; } }
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 556u), c.f[0]);
    c.budget -= 3;
L_001EE218:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 585u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001EE304; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    c.f[2] = ld32((c.r[29].w[0] + 556u));
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EE268; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001EE284; } }
L_001EE268:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001EE284:
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.r[1].d[0] = c.r[2].sd[0] < 1665ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001EE330; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    c.f[2] = ld32((c.r[29].w[0] + 556u));
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EE2D0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001EE2EC; } }
L_001EE2D0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001EE2EC:
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.r[1].d[0] = c.r[2].sd[0] < 2432ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EE330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 2u);  if (t) { goto L_001EE330; } }
L_001EE304:
    c.f[1] = ld32((c.r[29].w[0] + 556u));
    c.f[0] = ld32((c.r[1].w[0] + 21536u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EE32C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21528u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EE330; } }
L_001EE32C:
    set32(c.r[19], 0u + 2u);
    c.budget -= 1;
L_001EE330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE338u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001EE338u) [[unlikely]] return; }
L_001EE338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE34C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE36C; } }
L_001EE34C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EE36C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001EE36C; } }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001EE36C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE390; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 375u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001EE390; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_001EE390:
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EE3A4; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EE3A4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EE3E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4D550000u);  if (t) { goto L_001EE3B8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001EE3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE3C0u); c.r[5].d[0] = c.r[2].d[0] | 19285ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EE3C0u) [[unlikely]] return; }
L_001EE3C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE3D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001EE3D4; } }
L_001EE3D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EE3D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE3E0; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EE3E0:
    c.f[0] = ld32((c.r[29].w[0] + 528u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[29].w[0] + 288u);  if (t) { goto L_001EE408; } }
    c.f[0] = ld32((c.r[29].w[0] + 536u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EE490; } }
L_001EE408:
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE418u); set32(c.r[5], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001EE418u) [[unlikely]] return; }
L_001EE418:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    st32((c.r[29].w[0] + 552u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 552u));
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EE45C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_001EE478; } }
L_001EE45C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 7;
L_001EE478:
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    set32(c.r[3], c.r[3].w[0] + 512u);
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    set32(c.r[3], c.r[3].w[0] >> 10);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001EE49C; } }
L_001EE490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE498u);  if (depth < kMaxDepth) unit_0038(c, 89u, depth + 1u); else { c.pc = 0x001E1460u; return; } if (c.pc != 0x001EE498u) [[unlikely]] return; }
L_001EE498:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_001EE49C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EE6E8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 585u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001EE6E8; } }
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[5], 0u - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE4DCu); st128((c.r[29].w[0] + 272u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001EE4DCu) [[unlikely]] return; }
L_001EE4DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 7200ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xC1A80000u);  if (t) { goto L_001EE4FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1980000u);
    c.f[1] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE500; } }
L_001EE4FC:
    c.f[1] = c.r[3].w[0];
    c.budget -= 1;
L_001EE500:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001EE53C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 378u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EE53C; } }
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EE53C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE52Cu);  if (depth < kMaxDepth) unit_0034(c, 209u, depth + 1u); else { c.pc = 0x001D2D80u; return; } if (c.pc != 0x001EE52Cu) [[unlikely]] return; }
L_001EE52C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE53C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001EE6E8; } }
L_001EE53C:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 62u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 51u);  if (t) { goto L_001EE6E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EE6E8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EE6E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE56Cu);  if (depth < kMaxDepth) unit_0034(c, 209u, depth + 1u); else { c.pc = 0x001D2D80u; return; } if (c.pc != 0x001EE56Cu) [[unlikely]] return; }
L_001EE56C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE6E8; } }
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[5], 0u - c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE58Cu); st128((c.r[4].w[0]) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001EE58Cu) [[unlikely]] return; }
L_001EE58C:
    c.f[1] = ld32((c.r[29].w[0] + 280u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1980000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0xC1400000u);  if (t) { goto L_001EE694; } }
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21424u));
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001EE5DC; } }
    c.f[0] = ld32((c.r[1].w[0] + 21376u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EE5DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE5DCu); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EE5DCu) [[unlikely]] return; }
L_001EE5DC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EE6E8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EE6E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE600u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001EE600u) [[unlikely]] return; }
L_001EE600:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE614u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001EE614u) [[unlikely]] return; }
L_001EE614:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EE6E8; } }
L_001EE620:
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[5], 0u + 128u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EE670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE660u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001EE660u) [[unlikely]] return; }
L_001EE660:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EE680; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EE670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE678u); set32(c.r[5], 0u + 712u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EE678u) [[unlikely]] return; }
L_001EE678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 589u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001EE68C; } }
L_001EE680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE688u); set32(c.r[5], 0u + 713u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EE688u) [[unlikely]] return; }
L_001EE688:
    st8((c.r[16].w[0] + 589u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001EE68C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE6E8; } }
L_001EE694:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EE6E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EE6E8; } }
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21480u));
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001EE6E8; } }
    c.f[0] = ld32((c.r[1].w[0] + 21368u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EE6E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE6E8u); set32(c.r[5], 0u + 62u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EE6E8u) [[unlikely]] return; }
L_001EE6E8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001EE770; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 585u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EE770; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EE770; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 224u);  if (t) { goto L_001EE770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE720u);  if (depth < kMaxDepth) unit_0038(c, 62u, depth + 1u); else { c.pc = 0x001E0C50u; return; } if (c.pc != 0x001EE720u) [[unlikely]] return; }
L_001EE720:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EE770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE740u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 585u)));  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001D5040u; return; } if (c.pc != 0x001EE740u) [[unlikely]] return; }
L_001EE740:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001EE770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE754u);  if (depth < kMaxDepth) unit_0034(c, 103u, depth + 1u); else { c.pc = 0x001D0E60u; return; } if (c.pc != 0x001EE754u) [[unlikely]] return; }
L_001EE754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EE770; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE768u); set32(c.r[6], 0u + 1261u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001EE768u) [[unlikely]] return; }
L_001EE768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 27u, depth); } }
L_001EE770:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001EE7F4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EE7F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE790u); st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001EE790u) [[unlikely]] return; }
L_001EE790:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EE7B8; } }
    set32(c.r[5], 0u + 60u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE7B0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EE7B0u) [[unlikely]] return; }
L_001EE7B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 27u, depth); } }
L_001EE7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE7C0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001EE7C0u) [[unlikely]] return; }
L_001EE7C0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EE7E0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE7D8u); set32(c.r[5], 0u + 717u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EE7D8u) [[unlikely]] return; }
L_001EE7D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 27u, depth); } }
L_001EE7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE7E8u); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EE7E8u) [[unlikely]] return; }
L_001EE7E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 27u, depth); } }
L_001EE7F0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001EE7F4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_001EE8B4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EE8B4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EE8B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE820u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001EE820u) [[unlikely]] return; }
L_001EE820:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE840; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE834u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001EE834u) [[unlikely]] return; }
L_001EE834:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EE8B4; } }
L_001EE840:
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[5], 0u + 128u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EE890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE880u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001EE880u) [[unlikely]] return; }
L_001EE880:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EE8A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EE890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE898u); set32(c.r[5], 0u + 712u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EE898u) [[unlikely]] return; }
L_001EE898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 589u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001EE8AC; } }
L_001EE8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE8A8u); set32(c.r[5], 0u + 713u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EE8A8u) [[unlikely]] return; }
L_001EE8A8:
    st8((c.r[16].w[0] + 589u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001EE8AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 27u, depth); } }
L_001EE8B4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001EE968; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    c.r[17].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[18].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] << 1);  if (t) { goto L_001EE920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE900u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001EE900u) [[unlikely]] return; }
L_001EE900:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EE91C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE914u); set32(c.r[5], 0u + 712u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EE914u) [[unlikely]] return; }
L_001EE914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 27u, depth); } }
L_001EE91C:
    set32(c.r[2], c.r[17].w[0] << 1);
    c.budget -= 1;
L_001EE920:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EE954; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 60u);  if (t) { goto L_001EE958; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE944u); set32(c.r[5], 0u + 560u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EE944u) [[unlikely]] return; }
L_001EE944:
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 640u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_003C(c, 27u, depth); } }
L_001EE954:
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_001EE958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE960u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EE960u) [[unlikely]] return; }
L_001EE960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 589u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_003C(c, 27u, depth); } }
L_001EE968:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EE99C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EE99C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE988u);  if (depth < kMaxDepth) unit_0038(c, 95u, depth + 1u); else { c.pc = 0x001E1750u; return; } if (c.pc != 0x001EE988u) [[unlikely]] return; }
L_001EE988:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE994u); set32(c.r[5], 0u + 53u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EE994u) [[unlikely]] return; }
L_001EE994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 589u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_003C(c, 27u, depth); } }
L_001EE99C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EE9C4; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EE9C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE9BCu); st8((c.r[16].w[0] + 589u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 51u, depth + 1u); else { c.pc = 0x001E4A80u; return; } if (c.pc != 0x001EE9BCu) [[unlikely]] return; }
L_001EE9BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 27u, depth); } }
L_001EE9C4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 11u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE9D4u); c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));  if (depth < kMaxDepth) unit_0035(c, 45u, depth + 1u); else { c.pc = 0x001D50B0u; return; } if (c.pc != 0x001EE9D4u) [[unlikely]] return; }
L_001EE9D4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EEB20; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 585u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EEB20; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EEB20; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    set32(c.r[2], 0u + 15300u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[16].w[0] + 224u);  if (t) { goto L_001EEB20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA10u);  if (depth < kMaxDepth) unit_0038(c, 60u, depth + 1u); else { c.pc = 0x001E0BD0u; return; } if (c.pc != 0x001EEA10u) [[unlikely]] return; }
L_001EEA10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EEB20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA30u);  if (depth < kMaxDepth) unit_0034(c, 209u, depth + 1u); else { c.pc = 0x001D2D80u; return; } if (c.pc != 0x001EEA30u) [[unlikely]] return; }
L_001EEA30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EEB20; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA44u); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0038(c, 58u, depth + 1u); else { c.pc = 0x001E0AF0u; return; } if (c.pc != 0x001EEA44u) [[unlikely]] return; }
L_001EEA44:
    st32((c.r[29].w[0] + 548u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[16].w[0] + 212u));
    c.f[1] = ld32((c.r[29].w[0] + 548u));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 548u), c.f[1]);  if (t) { goto L_001EEA7C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 548u), c.f[0]);  if (t) { goto L_001EEAA0; } }
L_001EEA7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EEAA0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 548u), c.f[0]);
    c.budget -= 4;
L_001EEAA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 548u));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001EEACC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 548u), c.f[0]);  if (t) { goto L_001EEAEC; } }
L_001EEACC:
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EEAEC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 548u), c.f[0]);
    c.budget -= 4;
L_001EEAEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EEB10; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB08u); set32(c.r[5], 0u + 15360u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EEB08u) [[unlikely]] return; }
L_001EEB08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 589u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_003C(c, 10u, depth); } }
L_001EEB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB18u); set32(c.r[5], 0u + 15350u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EEB18u) [[unlikely]] return; }
L_001EEB18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EEB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB28u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001EEB28u) [[unlikely]] return; }
L_001EEB28:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EEC5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB3Cu);  if (depth < kMaxDepth) unit_0034(c, 180u, depth + 1u); else { c.pc = 0x001D23D0u; return; } if (c.pc != 0x001EEB3Cu) [[unlikely]] return; }
L_001EEB3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EEC5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0034(c, 169u, depth + 1u); else { c.pc = 0x001D21B0u; return; } if (c.pc != 0x001EEB4Cu) [[unlikely]] return; }
L_001EEB4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EEC5C; } }
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_001EEC5C; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001EEC5C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EEC2C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 170u);
    set32(c.r[4], c.r[4].w[0] + 28352u);
    c.budget -= 4;
L_001EEBA0:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EEBC0; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 1686u);  if (t) { goto L_001EEBC8; } }
L_001EEBC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EEBA0u | kUnwind; return; } goto L_001EEBA0; } }
L_001EEBC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEBD8u); st32((c.r[16].w[0] + 644u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EEBD8u) [[unlikely]] return; }
L_001EEBD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    st32((c.r[16].w[0] + 212u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC04u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EEC04u) [[unlikely]] return; }
L_001EEC04:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 31208u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EEC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC34u);  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x001EEC34u) [[unlikely]] return; }
L_001EEC34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EEC44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 944u), 0u);  if (t) { goto L_001EEC4C; } }
L_001EEC44:
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 944u), c.r[2].w[0]);
    c.budget -= 2;
L_001EEC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 41u, depth + 1u); else { c.pc = 0x001F07C0u; return; } if (c.pc != 0x001EEC54u) [[unlikely]] return; }
L_001EEC54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EEC5C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 379u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001EFBF0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_001EFBF0; } }
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], 0u + 254u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 251u);  if (t) { goto L_001EECFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 210u, depth + 1u); else { c.pc = 0x001D2E40u; return; } if (c.pc != 0x001EEC88u) [[unlikely]] return; }
L_001EEC88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EECA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001EEC98u) [[unlikely]] return; }
L_001EEC98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EECA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EECA8u);  if (depth < kMaxDepth) unit_0034(c, 94u, depth + 1u); else { c.pc = 0x001D0CF0u; return; } if (c.pc != 0x001EECA8u) [[unlikely]] return; }
L_001EECA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 256u);  if (t) { goto L_001EECB4; } }
    set32(c.r[5], 0u + 262u);
    c.budget -= 1;
L_001EECB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EECBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EECBCu) [[unlikely]] return; }
L_001EECBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EECC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EECC4u) [[unlikely]] return; }
L_001EECC4:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[5], 0u - 129u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EECFC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EEDA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 210u, depth + 1u); else { c.pc = 0x001D2E40u; return; } if (c.pc != 0x001EED0Cu) [[unlikely]] return; }
L_001EED0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EED24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001EED1Cu) [[unlikely]] return; }
L_001EED1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EED24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED2Cu);  if (depth < kMaxDepth) unit_0034(c, 94u, depth + 1u); else { c.pc = 0x001D0CF0u; return; } if (c.pc != 0x001EED2Cu) [[unlikely]] return; }
L_001EED2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EED48; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED40u); set32(c.r[5], 0u + 664u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EED40u) [[unlikely]] return; }
L_001EED40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EED60; } }
L_001EED48:
    set32(c.r[5], 0u + 256u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED5Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EED5Cu) [[unlikely]] return; }
L_001EED5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EED60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED68u);  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EED68u) [[unlikely]] return; }
L_001EED68:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[5], 0u - 129u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EEDA0:
    set32(c.r[3], 0u + 253u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 221u);  if (t) { goto L_001EEF28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEDB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 94u, depth + 1u); else { c.pc = 0x001D0CF0u; return; } if (c.pc != 0x001EEDB4u) [[unlikely]] return; }
L_001EEDB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EEEC0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EEEC0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 464u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEDD8u); st32((c.r[16].w[0] + 644u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EEDD8u) [[unlikely]] return; }
L_001EEDD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.f[2] = ld32((c.r[16].w[0] + 212u));
    c.f[0] = ld32((c.r[2].w[0] + 212u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EEDF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_001EEDFC; } }
L_001EEDF8:
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 1;
L_001EEDFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EEE34; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = 0u;
    c.f[2] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EEE34; } }
    c.f[2] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_001EEE34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21616u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EEE5C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21544u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EEE84; } }
L_001EEE5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21536u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001EEE80; } }
    c.f[0] = ld32((c.r[1].w[0] + 21528u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EEE98; } }
L_001EEE80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EEE84:
    set32(c.r[5], 0u + 15740u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEE90u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_003A(c, 284u, depth + 1u); else { c.pc = 0x001EBF70u; return; } if (c.pc != 0x001EEE90u) [[unlikely]] return; }
L_001EEE90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 352u)));  if (t) { goto L_001EEEA8; } }
L_001EEE98:
    set32(c.r[5], 0u + 15750u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEEA4u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_003A(c, 284u, depth + 1u); else { c.pc = 0x001EBF70u; return; } if (c.pc != 0x001EEEA4u) [[unlikely]] return; }
L_001EEEA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.budget -= 1;
L_001EEEA8:
    set32(c.r[4], 0u + 254u);
    ld128((c.r[3].w[0] + 224u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[4].w[0]);  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EEEC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEEC8u);  if (depth < kMaxDepth) unit_0034(c, 94u, depth + 1u); else { c.pc = 0x001D0CF0u; return; } if (c.pc != 0x001EEEC8u) [[unlikely]] return; }
L_001EEEC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 256u);  if (t) { goto L_001EEED4; } }
    set32(c.r[5], 0u + 262u);
    c.budget -= 1;
L_001EEED4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEEE8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EEEE8u) [[unlikely]] return; }
L_001EEEE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEEF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EEEF0u) [[unlikely]] return; }
L_001EEEF0:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[5], 0u - 129u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EEF28:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EEFB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 210u, depth + 1u); else { c.pc = 0x001D2E40u; return; } if (c.pc != 0x001EEF38u) [[unlikely]] return; }
L_001EEF38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EEF50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001EEF48u) [[unlikely]] return; }
L_001EEF48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EEF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF58u);  if (depth < kMaxDepth) unit_0034(c, 94u, depth + 1u); else { c.pc = 0x001D0CF0u; return; } if (c.pc != 0x001EEF58u) [[unlikely]] return; }
L_001EEF58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 12016u);  if (t) { goto L_001EEF64; } }
    set32(c.r[5], 0u + 12016u);
    c.budget -= 1;
L_001EEF64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF78u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EEF78u) [[unlikely]] return; }
L_001EEF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EEF80u) [[unlikely]] return; }
L_001EEF80:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[5], 0u - 129u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EEFB8:
    set32(c.r[3], 0u + 220u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 252u);  if (t) { goto L_001EF054; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEFD0u); set32(c.r[5], 0u + 12523u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EEFD0u) [[unlikely]] return; }
L_001EEFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEFD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EEFD8u) [[unlikely]] return; }
L_001EEFD8:
    c.r[10].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[11], 0u - 9u);
    set32(c.r[12], c.r[3].w[0] << 3);
    set32(c.r[7], 0u - 129u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[5], 0u - 65u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[3], 0u - 2u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[10].d[0] = c.r[10].d[0] & c.r[11].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[12].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[7].d[0] = c.r[10].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 394u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 397u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[11].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 397u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF054:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EF0E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF064u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 210u, depth + 1u); else { c.pc = 0x001D2E40u; return; } if (c.pc != 0x001EF064u) [[unlikely]] return; }
L_001EF064:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF07C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF074u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001EF074u) [[unlikely]] return; }
L_001EF074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF07C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF084u);  if (depth < kMaxDepth) unit_0034(c, 94u, depth + 1u); else { c.pc = 0x001D0CF0u; return; } if (c.pc != 0x001EF084u) [[unlikely]] return; }
L_001EF084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 256u);  if (t) { goto L_001EF090; } }
    set32(c.r[5], 0u + 262u);
    c.budget -= 1;
L_001EF090:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF0A4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EF0A4u) [[unlikely]] return; }
L_001EF0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF0ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EF0ACu) [[unlikely]] return; }
L_001EF0AC:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[5], 0u - 129u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF0E4:
    set32(c.r[3], 0u + 246u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EF118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF0F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x001EF0F8u) [[unlikely]] return; }
L_001EF0F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF108u); set32(c.r[5], 0u + 1671u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EF108u) [[unlikely]] return; }
L_001EF108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF110u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EF110u) [[unlikely]] return; }
L_001EF110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF118:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 379u));
    set32(c.r[3], 0u + 247u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 244u);  if (t) { goto L_001EF1A4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF14C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF144u); set32(c.r[5], 0u + 679u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EF144u) [[unlikely]] return; }
L_001EF144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF164; } }
L_001EF14C:
    set32(c.r[5], 0u + 256u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF160u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EF160u) [[unlikely]] return; }
L_001EF160:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EF164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF16Cu);  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EF16Cu) [[unlikely]] return; }
L_001EF16C:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 9u);
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 129u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF1A4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001EF294; } }
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 282u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28320u);  if (t) { goto L_001EF1DC; } }
L_001EF1BC:
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EF1D8; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_003C(c, 27u, depth); } }
L_001EF1D8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001EF1DC:
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF1BCu | kUnwind; return; } goto L_001EF1BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF1F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 363u, depth + 1u); else { c.pc = 0x002A78F0u; return; } if (c.pc != 0x001EF1F0u) [[unlikely]] return; }
L_001EF1F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF200u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001EF200u) [[unlikely]] return; }
L_001EF200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 27u, depth); } }
L_001EF208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF210u); set32(c.r[5], 0u + 263u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EF210u) [[unlikely]] return; }
L_001EF210:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2380000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x425C0000u);
    st32((c.r[16].w[0] + 224u), c.r[3].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 228u), 0u);
    c.r[3].d[0] = 0ull & 1ull;
    st32((c.r[16].w[0] + 232u), c.r[4].w[0]);
    set32(c.r[8], c.r[3].w[0] << 3);
    st32((c.r[16].w[0] + 236u), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[16].w[0] + 208u), 0u);
    set32(c.r[7], 0u - 9u);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    set32(c.r[5], 0u - 129u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    st32((c.r[16].w[0] + 212u), c.f[0]);
    st32((c.r[16].w[0] + 216u), 0u);
    st32((c.r[16].w[0] + 220u), c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 394u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF294:
    set32(c.r[2], 0u + 242u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 243u);  if (t) { goto L_001EF2EC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF2ACu); set32(c.r[5], 0u + 265u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EF2ACu) [[unlikely]] return; }
L_001EF2AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF2B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EF2B4u) [[unlikely]] return; }
L_001EF2B4:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 9u);
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 129u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF2EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001EF340; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF300u); set32(c.r[5], 0u + 266u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EF300u) [[unlikely]] return; }
L_001EF300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF308u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EF308u) [[unlikely]] return; }
L_001EF308:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 9u);
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 129u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF340:
    set32(c.r[2], 0u + 240u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 241u);  if (t) { goto L_001EF398; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF358u); set32(c.r[5], 0u + 267u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EF358u) [[unlikely]] return; }
L_001EF358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF360u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EF360u) [[unlikely]] return; }
L_001EF360:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 9u);
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 129u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF398:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001EF3EC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF3ACu); set32(c.r[5], 0u + 268u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EF3ACu) [[unlikely]] return; }
L_001EF3AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF3B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EF3B4u) [[unlikely]] return; }
L_001EF3B4:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 9u);
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 129u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF3EC:
    set32(c.r[2], 0u + 238u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 237u);  if (t) { goto L_001EF444; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF404u); set32(c.r[5], 0u + 271u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EF404u) [[unlikely]] return; }
L_001EF404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF40Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EF40Cu) [[unlikely]] return; }
L_001EF40C:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 9u);
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 129u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF444:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001EF494; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF464u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001EF464u) [[unlikely]] return; }
L_001EF464:
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF484; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF47Cu); set32(c.r[5], 0u + 677u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EF47Cu) [[unlikely]] return; }
L_001EF47C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF48Cu); set32(c.r[5], 0u + 664u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EF48Cu) [[unlikely]] return; }
L_001EF48C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF494:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EF498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF4A0u);  if (depth < kMaxDepth) unit_0034(c, 210u, depth + 1u); else { c.pc = 0x001D2E40u; return; } if (c.pc != 0x001EF4A0u) [[unlikely]] return; }
L_001EF4A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF584; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 379u));
    set32(c.r[3], 0u + 245u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001EF584; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001EF4FC; } }
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[16].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF4E4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001EF4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF4ECu); set32(c.r[5], 0u + 294u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EF4ECu) [[unlikely]] return; }
L_001EF4EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF4F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EF4F4u) [[unlikely]] return; }
L_001EF4F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF4FC:
    c.f[1] = ld32((c.r[16].w[0] + 232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF568; } }
    c.f[1] = ld32((c.r[16].w[0] + 224u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EF538; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41B40000u);  if (t) { goto L_001EF540; } }
L_001EF538:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B40000u);
    c.budget -= 2;
L_001EF540:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF564; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF55Cu); set32(c.r[5], 0u + 262u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EF55Cu) [[unlikely]] return; }
L_001EF55C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF574; } }
L_001EF564:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EF568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF570u); set32(c.r[5], 0u + 291u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EF570u) [[unlikely]] return; }
L_001EF570:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EF574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF57Cu);  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EF57Cu) [[unlikely]] return; }
L_001EF57C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF584:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 379u));
    set32(c.r[3], 0u + 230u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 231u);  if (t) { goto L_001EF5A8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001EF5A8; } }
    set32(c.r[3], 0u + 232u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 224u);  if (t) { goto L_001EF630; } }
L_001EF5A8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 379u));
    set32(c.r[2], 0u + 230u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF5D8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 12517u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF5D0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EF5D0u) [[unlikely]] return; }
L_001EF5D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF5F0; } }
L_001EF5D8:
    set32(c.r[5], 0u + 12516u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF5ECu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EF5ECu) [[unlikely]] return; }
L_001EF5EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EF5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF5F8u);  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EF5F8u) [[unlikely]] return; }
L_001EF5F8:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[5], 0u - 129u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF630:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001EF6F4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 12070u);
    set32(c.r[4], 0u + 12069u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 28320u);  if (t) { goto L_001EF68C; } }
L_001EF654:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EF688; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001EF678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_001EF698; } }
L_001EF678:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001EF688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_001EF698; } }
L_001EF688:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001EF68C:
    c.r[3].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF654u | kUnwind; return; } goto L_001EF654; } }
L_001EF698:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
    set32(c.r[5], 0u + 12069u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF6B4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EF6B4u) [[unlikely]] return; }
L_001EF6B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF6BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EF6BCu) [[unlikely]] return; }
L_001EF6BC:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[5], 0u - 129u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF6F4:
    set32(c.r[3], 0u + 229u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 217u);  if (t) { goto L_001EF7CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF708u); c.f[12] = ld32((c.r[16].w[0] + 224u));  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x001EF708u) [[unlikely]] return; }
L_001EF708:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 21360u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF718u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 76u, depth + 1u); else { c.pc = 0x00100600u; return; } if (c.pc != 0x001EF718u) [[unlikely]] return; }
L_001EF718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EF740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF728u); c.f[12] = ld32((c.r[16].w[0] + 224u));  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x001EF728u) [[unlikely]] return; }
L_001EF728:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 21352u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF738u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 78u, depth + 1u); else { c.pc = 0x00100620u; return; } if (c.pc != 0x001EF738u) [[unlikely]] return; }
L_001EF738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF750; } }
L_001EF740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF748u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001EF748u) [[unlikely]] return; }
L_001EF748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF758u);  if (depth < kMaxDepth) unit_0034(c, 210u, depth + 1u); else { c.pc = 0x001D2E40u; return; } if (c.pc != 0x001EF758u) [[unlikely]] return; }
L_001EF758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF768u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001EF768u) [[unlikely]] return; }
L_001EF768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF778u);  if (depth < kMaxDepth) unit_0034(c, 94u, depth + 1u); else { c.pc = 0x001D0CF0u; return; } if (c.pc != 0x001EF778u) [[unlikely]] return; }
L_001EF778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 256u);  if (t) { goto L_001EF784; } }
    set32(c.r[5], 0u + 262u);
    c.budget -= 1;
L_001EF784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF78Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EF78Cu) [[unlikely]] return; }
L_001EF78C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF794u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EF794u) [[unlikely]] return; }
L_001EF794:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[5], 0u - 129u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF7CC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF7DCu);  if (depth < kMaxDepth) unit_0034(c, 210u, depth + 1u); else { c.pc = 0x001D2E40u; return; } if (c.pc != 0x001EF7DCu) [[unlikely]] return; }
L_001EF7DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF7F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF7ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001EF7ECu) [[unlikely]] return; }
L_001EF7EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF7F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF7FCu);  if (depth < kMaxDepth) unit_0034(c, 94u, depth + 1u); else { c.pc = 0x001D0CF0u; return; } if (c.pc != 0x001EF7FCu) [[unlikely]] return; }
L_001EF7FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF818; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF810u); set32(c.r[5], 0u + 664u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EF810u) [[unlikely]] return; }
L_001EF810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF830; } }
L_001EF818:
    set32(c.r[5], 0u + 256u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF82Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EF82Cu) [[unlikely]] return; }
L_001EF82C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EF830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF838u);  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EF838u) [[unlikely]] return; }
L_001EF838:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[5], 0u - 129u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF870:
    set32(c.r[3], 0u + 228u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 227u);  if (t) { goto L_001EF9DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF884u);  if (depth < kMaxDepth) unit_005B(c, 211u, depth + 1u); else { c.pc = 0x0026D9B0u; return; } if (c.pc != 0x001EF884u) [[unlikely]] return; }
L_001EF884:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EF9CC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EF9CC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 12503u);
    set32(c.r[6], 0u + 111u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF8B8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EF8B8u) [[unlikely]] return; }
L_001EF8B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] + 21344u));
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 244u), 0u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 248u), c.f[0]);
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF8E8u); st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 48u, depth + 1u); else { c.pc = 0x00144FA0u; return; } if (c.pc != 0x001EF8E8u) [[unlikely]] return; }
L_001EF8E8:
    set32(c.r[3], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[29].w[0] + 240u);
    set32(c.r[4], c.r[29].w[0] + 240u);
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
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = ld32((c.r[16].w[0] + 224u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 228u));
    c.f[0] = ld32((c.r[1].w[0] + 21336u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    c.f[2] = ld32((c.r[16].w[0] + 232u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 35;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 232u), c.f[0]);  if (t) { goto L_001EF978; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001EF978:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF984u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001EF984u) [[unlikely]] return; }
L_001EF984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001EF990; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001EF990:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EF9B0; } }
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    st32((c.r[4].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_001EF9B0:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 394u));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF9D4u);  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001EF9D4u) [[unlikely]] return; }
L_001EF9D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EF9DC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001EFAC8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 800u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EFA80; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA0Cu); set32(c.r[5], 0u + 12027u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EFA0Cu) [[unlikely]] return; }
L_001EFA0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], 0u + 12027u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA24u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EFA24u) [[unlikely]] return; }
L_001EFA24:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 394u));
    set32(c.r[7], 0u - 65u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 394u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EFA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA88u); set32(c.r[5], 0u + 12021u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EFA88u) [[unlikely]] return; }
L_001EFA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EFA90u) [[unlikely]] return; }
L_001EFA90:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[5], 0u - 129u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EFAC8:
    set32(c.r[2], 0u + 226u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 223u);  if (t) { goto L_001EFB20; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFAE0u); set32(c.r[5], 0u + 12028u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EFAE0u) [[unlikely]] return; }
L_001EFAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFAE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EFAE8u) [[unlikely]] return; }
L_001EFAE8:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[5], 0u - 129u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EFB20:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EFB70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB30u); set32(c.r[5], 0u + 263u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EFB30u) [[unlikely]] return; }
L_001EFB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EFB38u) [[unlikely]] return; }
L_001EFB38:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[5], 0u - 129u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EFB70:
    set32(c.r[2], 0u + 222u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EFBE0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB88u); set32(c.r[5], 0u + 12038u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EFB88u) [[unlikely]] return; }
L_001EFB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 76u, depth + 1u); else { c.pc = 0x001E1190u; return; } if (c.pc != 0x001EFB90u) [[unlikely]] return; }
L_001EFB90:
    c.r[9].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[7], 0u - 129u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[5], 0u - 9u);
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 394u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EFBE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFBE8u);  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001EFBE8u) [[unlikely]] return; }
L_001EFBE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EFBF0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 375u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001EFE30; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001EFE30; } }
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFC1Cu); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001EFC1Cu) [[unlikely]] return; }
L_001EFC1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFC2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 60u, depth + 1u); else { c.pc = 0x002F8D20u; return; } if (c.pc != 0x001EFC2Cu) [[unlikely]] return; }
L_001EFC2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = ld32((c.r[1].w[0] + 21328u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EFC5C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21320u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EFE04; } }
L_001EFC5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFC64u);  if (depth < kMaxDepth) unit_0035(c, 77u, depth + 1u); else { c.pc = 0x001D58D0u; return; } if (c.pc != 0x001EFC64u) [[unlikely]] return; }
L_001EFC64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EFE04; } }
    c.f[0] = ld32((c.r[16].w[0] + 228u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EFE04; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EFCEC; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFC98u); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0038(c, 62u, depth + 1u); else { c.pc = 0x001E0C50u; return; } if (c.pc != 0x001EFC98u) [[unlikely]] return; }
L_001EFC98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40F00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EFCEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFCB8u); c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001D5040u; return; } if (c.pc != 0x001EFCB8u) [[unlikely]] return; }
L_001EFCB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EFCEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFCC8u); c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));  if (depth < kMaxDepth) unit_0035(c, 45u, depth + 1u); else { c.pc = 0x001D50B0u; return; } if (c.pc != 0x001EFCC8u) [[unlikely]] return; }
L_001EFCC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EFCEC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EFCEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFCE4u); set32(c.r[5], 0u + 164u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EFCE4u) [[unlikely]] return; }
L_001EFCE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EFCEC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EFDC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFD00u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001EFD00u) [[unlikely]] return; }
L_001EFD00:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EFD18; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EFD50; } }
L_001EFD18:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], 0u + 716u);  if (t) { goto L_001EFD2C; } }
    set32(c.r[18], 0u + 703u);
    c.budget -= 1;
L_001EFD2C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFD38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EFD38u) [[unlikely]] return; }
L_001EFD38:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EFD48; } }
    set32(c.r[6], c.r[6].w[0] + 436u);
    c.budget -= 1;
L_001EFD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFD50u); set32(c.r[5], 0u + 300u);  if (depth < kMaxDepth) unit_002F(c, 16u, depth + 1u); else { c.pc = 0x001BD040u; return; } if (c.pc != 0x001EFD50u) [[unlikely]] return; }
L_001EFD50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 596u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
    c.r[10].d[0] = ld8((c.r[16].w[0] + 394u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[8], 0u - 65u);
    set32(c.r[7], c.r[3].w[0] << 6);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 402u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 402u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 400u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 400u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 596u), static_cast<std::uint16_t>(0u));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 589u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EFDC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], 0u + 711u);  if (t) { goto L_001EFDD8; } }
    set32(c.r[18], 0u + 705u);
    c.budget -= 1;
L_001EFDD8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFDE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EFDE4u) [[unlikely]] return; }
L_001EFDE4:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EFDF4; } }
    set32(c.r[6], c.r[6].w[0] + 436u);
    c.budget -= 1;
L_001EFDF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFDFCu); set32(c.r[5], 0u + 300u);  if (depth < kMaxDepth) unit_002F(c, 16u, depth + 1u); else { c.pc = 0x001BD040u; return; } if (c.pc != 0x001EFDFCu) [[unlikely]] return; }
L_001EFDFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EFE04:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 590u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 590u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 590u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFE28u);  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001EFE28u) [[unlikely]] return; }
L_001EFE28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EFE30:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EFFA4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 585u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001EFFA0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 378u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 224u);  if (t) { goto L_001EFFA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFE60u);  if (depth < kMaxDepth) unit_0038(c, 62u, depth + 1u); else { c.pc = 0x001E0C50u; return; } if (c.pc != 0x001EFE60u) [[unlikely]] return; }
L_001EFE60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21312u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EFFA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFE7Cu);  if (depth < kMaxDepth) unit_0034(c, 209u, depth + 1u); else { c.pc = 0x001D2D80u; return; } if (c.pc != 0x001EFE7Cu) [[unlikely]] return; }
L_001EFE7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EFFA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFE8Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001D5040u; return; } if (c.pc != 0x001EFE8Cu) [[unlikely]] return; }
L_001EFE8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EFEA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFE9Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));  if (depth < kMaxDepth) unit_0035(c, 45u, depth + 1u); else { c.pc = 0x001D50B0u; return; } if (c.pc != 0x001EFE9Cu) [[unlikely]] return; }
L_001EFE9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EFEB8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EFEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFEB0u);  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001EFEB0u) [[unlikely]] return; }
L_001EFEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EFEB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EFED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFECCu);  if (depth < kMaxDepth) unit_003D(c, 54u, depth + 1u); else { c.pc = 0x001F5060u; return; } if (c.pc != 0x001EFECCu) [[unlikely]] return; }
L_001EFECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EFED4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 369u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 31224u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001EFF10; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 150u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFF08u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001EFF08u) [[unlikely]] return; }
L_001EFF08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EFF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFF18u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001EFF18u) [[unlikely]] return; }
L_001EFF18:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EFF60; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EFF40; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 369u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EFF5C; } }
L_001EFF40:
    set32(c.r[2], ld32((c.r[16].w[0] + 624u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EFF60; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 369u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EFF60; } }
L_001EFF5C:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001EFF60:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EFF8C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 630u);  if (t) { goto L_001EFF90; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFF84u); set32(c.r[5], 0u + 631u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EFF84u) [[unlikely]] return; }
L_001EFF84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EFF8C:
    set32(c.r[5], 0u + 630u);
    c.budget -= 1;
L_001EFF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFF98u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001EFF98u) [[unlikely]] return; }
L_001EFF98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 9u, depth); } }
L_001EFFA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EFFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFFACu);  if (depth < kMaxDepth) unit_0038(c, 89u, depth + 1u); else { c.pc = 0x001E1460u; return; } if (c.pc != 0x001EFFACu) [[unlikely]] return; }
L_001EFFAC:
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 128u);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFFC8u); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001EFFC8u) [[unlikely]] return; }
L_001EFFC8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_003C(c, 4u, depth); } }
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1C00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { [[clang::musttail]] return unit_003C(c, 4u, depth); } }
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = ld32((c.r[1].w[0] + 21680u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    [[clang::musttail]] return unit_003C(c, 1u, depth);
}

}
