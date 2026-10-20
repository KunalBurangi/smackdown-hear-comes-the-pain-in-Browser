#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0,
    0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0,
    0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0,
    0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 204,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_002F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001BC000;
    case 2u: goto L_001BC028;
    case 3u: goto L_001BC104;
    case 4u: goto L_001BC14C;
    case 5u: goto L_001BC1A0;
    case 6u: goto L_001BC1F4;
    case 7u: goto L_001BC270;
    case 8u: goto L_001BC2BC;
    case 9u: goto L_001BC330;
    case 10u: goto L_001BC37C;
    case 11u: goto L_001BC42C;
    case 12u: goto L_001BC5C0;
    case 13u: goto L_001BC5E0;
    case 14u: goto L_001BCD28;
    case 15u: goto L_001BD030;
    case 16u: goto L_001BD040;
    case 17u: goto L_001BD108;
    case 18u: goto L_001BD130;
    case 19u: goto L_001BD1A0;
    case 20u: goto L_001BD1C8;
    case 21u: goto L_001BD26C;
    case 22u: goto L_001BD290;
    case 23u: goto L_001BD2C8;
    case 24u: goto L_001BD300;
    case 25u: goto L_001BD34C;
    case 26u: goto L_001BD370;
    case 27u: goto L_001BD3A4;
    case 28u: goto L_001BD3C8;
    case 29u: goto L_001BD3F4;
    case 30u: goto L_001BD418;
    case 31u: goto L_001BD474;
    case 32u: goto L_001BD4D8;
    case 33u: goto L_001BD51C;
    case 34u: goto L_001BD554;
    case 35u: goto L_001BD584;
    case 36u: goto L_001BD5C4;
    case 37u: goto L_001BD608;
    case 38u: goto L_001BD640;
    case 39u: goto L_001BD6B4;
    case 40u: goto L_001BD6D4;
    case 41u: goto L_001BD720;
    case 42u: goto L_001BD74C;
    case 43u: goto L_001BD7A0;
    case 44u: goto L_001BD7D0;
    case 45u: goto L_001BD81C;
    case 46u: goto L_001BD82C;
    case 47u: goto L_001BD874;
    case 48u: goto L_001BD8C0;
    case 49u: goto L_001BD8D0;
    case 50u: goto L_001BD930;
    case 51u: goto L_001BD9F0;
    case 52u: goto L_001BDAC4;
    case 53u: goto L_001BDB44;
    case 54u: goto L_001BDB9C;
    case 55u: goto L_001BDC2C;
    case 56u: goto L_001BDC70;
    case 57u: goto L_001BDCBC;
    case 58u: goto L_001BDCEC;
    case 59u: goto L_001BDD0C;
    case 60u: goto L_001BDD14;
    case 61u: goto L_001BDD2C;
    case 62u: goto L_001BDD40;
    case 63u: goto L_001BDD54;
    case 64u: goto L_001BDD7C;
    case 65u: goto L_001BDD90;
    case 66u: goto L_001BDDAC;
    case 67u: goto L_001BDDB4;
    case 68u: goto L_001BDDCC;
    case 69u: goto L_001BDDE0;
    case 70u: goto L_001BDDE8;
    case 71u: goto L_001BDE10;
    case 72u: goto L_001BDE28;
    case 73u: goto L_001BDE50;
    case 74u: goto L_001BDE58;
    case 75u: goto L_001BDE70;
    case 76u: goto L_001BDE84;
    case 77u: goto L_001BDE8C;
    case 78u: goto L_001BDEB4;
    case 79u: goto L_001BDECC;
    case 80u: goto L_001BDEEC;
    case 81u: goto L_001BDF04;
    case 82u: goto L_001BDF18;
    case 83u: goto L_001BDF2C;
    case 84u: goto L_001BDF54;
    case 85u: goto L_001BDF68;
    case 86u: goto L_001BDF84;
    case 87u: goto L_001BDF9C;
    case 88u: goto L_001BDFB0;
    case 89u: goto L_001BDFC4;
    case 90u: goto L_001BDFE4;
    case 91u: goto L_001BDFF8;
    case 92u: goto L_001BE01C;
    case 93u: goto L_001BE040;
    case 94u: goto L_001BE054;
    case 95u: goto L_001BE088;
    case 96u: goto L_001BE094;
    case 97u: goto L_001BE0A8;
    case 98u: goto L_001BE0CC;
    case 99u: goto L_001BE0F8;
    case 100u: goto L_001BE10C;
    case 101u: goto L_001BE148;
    case 102u: goto L_001BE154;
    case 103u: goto L_001BE164;
    case 104u: goto L_001BE190;
    case 105u: goto L_001BE1A4;
    case 106u: goto L_001BE1CC;
    case 107u: goto L_001BE1E0;
    case 108u: goto L_001BE21C;
    case 109u: goto L_001BE228;
    case 110u: goto L_001BE238;
    case 111u: goto L_001BE264;
    case 112u: goto L_001BE278;
    case 113u: goto L_001BE2A4;
    case 114u: goto L_001BE2B8;
    case 115u: goto L_001BE2F4;
    case 116u: goto L_001BE304;
    case 117u: goto L_001BE330;
    case 118u: goto L_001BE344;
    case 119u: goto L_001BE36C;
    case 120u: goto L_001BE380;
    case 121u: goto L_001BE3BC;
    case 122u: goto L_001BE3CC;
    case 123u: goto L_001BE3F8;
    case 124u: goto L_001BE40C;
    case 125u: goto L_001BE43C;
    case 126u: goto L_001BE444;
    case 127u: goto L_001BE470;
    case 128u: goto L_001BE484;
    case 129u: goto L_001BE5AC;
    case 130u: goto L_001BE628;
    case 131u: goto L_001BE640;
    case 132u: goto L_001BE6D8;
    case 133u: goto L_001BE70C;
    case 134u: goto L_001BE770;
    case 135u: goto L_001BE78C;
    case 136u: goto L_001BE7B8;
    case 137u: goto L_001BE7CC;
    case 138u: goto L_001BE7E4;
    case 139u: goto L_001BE810;
    case 140u: goto L_001BE824;
    case 141u: goto L_001BE904;
    case 142u: goto L_001BE99C;
    case 143u: goto L_001BE9AC;
    case 144u: goto L_001BEA6C;
    case 145u: goto L_001BEA78;
    case 146u: goto L_001BEC08;
    case 147u: goto L_001BEC18;
    case 148u: goto L_001BEC30;
    case 149u: goto L_001BED00;
    case 150u: goto L_001BED0C;
    case 151u: goto L_001BED64;
    case 152u: goto L_001BED74;
    case 153u: goto L_001BED8C;
    case 154u: goto L_001BEE50;
    case 155u: goto L_001BEE6C;
    case 156u: goto L_001BEE78;
    case 157u: goto L_001BEFD0;
    case 158u: goto L_001BEFE0;
    case 159u: goto L_001BEFF8;
    case 160u: goto L_001BF090;
    case 161u: goto L_001BF0A4;
    case 162u: goto L_001BF180;
    case 163u: goto L_001BF278;
    case 164u: goto L_001BF290;
    case 165u: goto L_001BF2BC;
    case 166u: goto L_001BF2D0;
    case 167u: goto L_001BF30C;
    case 168u: goto L_001BF318;
    case 169u: goto L_001BF328;
    case 170u: goto L_001BF354;
    case 171u: goto L_001BF368;
    case 172u: goto L_001BF390;
    case 173u: goto L_001BF3A4;
    case 174u: goto L_001BF3E0;
    case 175u: goto L_001BF3EC;
    case 176u: goto L_001BF3FC;
    case 177u: goto L_001BF428;
    case 178u: goto L_001BF43C;
    case 179u: goto L_001BF468;
    case 180u: goto L_001BF47C;
    case 181u: goto L_001BF4B8;
    case 182u: goto L_001BF4C8;
    case 183u: goto L_001BF4F4;
    case 184u: goto L_001BF508;
    case 185u: goto L_001BF530;
    case 186u: goto L_001BF544;
    case 187u: goto L_001BF580;
    case 188u: goto L_001BF590;
    case 189u: goto L_001BF5BC;
    case 190u: goto L_001BF5D0;
    case 191u: goto L_001BF5EC;
    case 192u: goto L_001BF614;
    case 193u: goto L_001BF628;
    case 194u: goto L_001BF650;
    case 195u: goto L_001BF674;
    case 196u: goto L_001BF688;
    case 197u: goto L_001BF6A8;
    case 198u: goto L_001BF784;
    case 199u: goto L_001BF794;
    case 200u: goto L_001BF7B0;
    case 201u: goto L_001BF7CC;
    case 202u: goto L_001BF7E0;
    case 203u: goto L_001BF7F4;
    case 204u: goto L_001BF7FC;
    case 205u: goto L_001BF828;
    case 206u: goto L_001BF85C;
    case 207u: goto L_001BF894;
    case 208u: goto L_001BF8A8;
    case 209u: goto L_001BF8BC;
    case 210u: goto L_001BF8D0;
    case 211u: goto L_001BF8E0;
    case 212u: goto L_001BF948;
    case 213u: goto L_001BF9F0;
    case 214u: goto L_001BFA24;
    case 215u: goto L_001BFA30;
    case 216u: goto L_001BFA44;
    case 217u: goto L_001BFAA0;
    case 218u: goto L_001BFADC;
    case 219u: goto L_001BFB84;
    case 220u: goto L_001BFC3C;
    case 221u: goto L_001BFC50;
    case 222u: goto L_001BFC9C;
    case 223u: goto L_001BFCA8;
    case 224u: goto L_001BFCB4;
    case 225u: goto L_001BFCCC;
    case 226u: goto L_001BFCF0;
    case 227u: goto L_001BFD2C;
    case 228u: goto L_001BFD38;
    case 229u: goto L_001BFD4C;
    case 230u: goto L_001BFDD0;
    case 231u: goto L_001BFEC0;
    case 232u: goto L_001BFF04;
    case 233u: goto L_001BFFB0;
    case 234u: goto L_001BFFC8;
    default: bad_entry(c, 0x001BC000u); return;
    }
L_001BC000:
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 10;
L_001BC028:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 26736u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BC06C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[1].w[0] + 19976u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[1] = ld32((c.r[1].w[0] - 24264u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 26736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[1].w[0] + 10948u), c.f[0]);
    c.budget -= 13;
L_001BC06C:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.f[0] = 0u;
    c.f[21] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BC08C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 240u)));  if (t) { goto L_001BC094; } }
L_001BC08C:
    c.f[21] = c.f[21] ^ fp::kSign;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 2;
L_001BC094:
    c.f[0] = 0u;
    c.f[20] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BC0B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC0B4; } }
L_001BC0B0:
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_001BC0B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001BC144; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);  if (t) { goto L_001BC0FC; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BC0FC; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BC0FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001BC17C; } }
L_001BC0FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC104u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001BC104u) [[unlikely]] return; }
L_001BC104:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC17C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);  if (t) { goto L_001BC17C; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BC17C; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BC17C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001BC17C; } }
L_001BC144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC14Cu);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001BC14Cu) [[unlikely]] return; }
L_001BC14C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC17C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BC17C; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BC17C; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001BC17C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_001BC198; } }
    c.f[1] = ld32((c.r[1].w[0] - 24264u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19976u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_001BC230; } }
L_001BC198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC1A0u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001BC1A0u) [[unlikely]] return; }
L_001BC1A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC1D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BC1D4; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BC1D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[1].w[0] + 19968u));  if (t) { goto L_001BC230; } }
L_001BC1D4:
    c.f[2] = ld32((c.r[18].w[0] + 228u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[18].w[0] + 1028u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[1].w[0] + 19960u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC1F4u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0034(c, 156u, depth + 1u); else { c.pc = 0x001D1970u; return; } if (c.pc != 0x001BC1F4u) [[unlikely]] return; }
L_001BC1F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC20C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 1605u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BC230; } }
L_001BC20C:
    set32(c.r[3], ld32((c.r[18].w[0] + 644u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC230; } }
    c.f[20] = ld32((c.r[2].w[0] + 228u));
    c.budget -= 1;
L_001BC230:
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 263u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 12572u);  if (t) { goto L_001BC248; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BC24C; } }
L_001BC248:
    c.f[20] = 0u;
    c.budget -= 1;
L_001BC24C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BC268; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_001BC268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC270u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001BC270u) [[unlikely]] return; }
L_001BC270:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BC298; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1480000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);  if (t) { goto L_001BC29C; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_001BC298:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.budget -= 1;
L_001BC29C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BC2B4; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_001BC2B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC2BCu);  if (depth < kMaxDepth) unit_002E(c, 300u, depth + 1u); else { c.pc = 0x001BBB40u; return; } if (c.pc != 0x001BC2BCu) [[unlikely]] return; }
L_001BC2BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_001BC2D0; } }
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 3;
L_001BC2D0:
    set32(c.r[4], ld32((c.r[18].w[0] + 124u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BC2F0; } }
    c.f[20] = c.f[1];
    c.budget -= 1;
L_001BC2F0:
    set32(c.r[4], ld32((c.r[18].w[0] + 140u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001BC310; } }
    c.f[20] = c.f[1];
    c.budget -= 1;
L_001BC310:
    c.r[16].d[0] = 0ull + 0ull;
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 10948u), c.f[0]);  if (t) { goto L_001BC400; } }
L_001BC330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 10880u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 10944u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 10948u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.f[12] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 10952u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[14] = ld32((c.r[2].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC37Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0001(c, 12u, depth + 1u); else { c.pc = 0x00104188u; return; } if (c.pc != 0x001BC37Cu) [[unlikely]] return; }
L_001BC37C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] + 31840u);
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
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 33;
L_001BC400:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BC330u | kUnwind; return; } goto L_001BC330; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 1272u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BC42C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001BC42C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[6], c.r[18].w[0] + 1032u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC42Cu); set32(c.r[7], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0015(c, 53u, depth + 1u); else { c.pc = 0x001564C0u; return; } if (c.pc != 0x001BC42Cu) [[unlikely]] return; }
L_001BC42C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[12], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BC4EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[5].d[0] | 2ull;
    c.r[9].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[3].d[0] = 0ull | 32769ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[4].d[0] = c.r[3].d[0] | 12ull;
    st64((c.r[10].w[0]), c.r[9].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[10].w[0] + 8u), 0ull);
    set32(c.r[3], 0u + 71u);
    st64((c.r[10].w[0] + 16u), 0ull);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 40;
L_001BC4EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[12], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BC5B4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[5].d[0] | 2ull;
    c.r[9].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[3].d[0] = 0ull | 32769ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], 0u + 128u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[4].d[0] = c.r[3].d[0] << 32;
    st64((c.r[10].w[0]), c.r[9].d[0]);
    set32(c.r[3], 0u + 68u);
    st64((c.r[10].w[0] + 8u), 0ull);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[10].w[0] + 16u), 0ull);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    set32(c.r[3], 0u + 66u);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 42;
L_001BC5B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31608u)));
    c.budget -= 3;
L_001BC5C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001BC5E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = c.r[19].sd[0] < 60ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001BC618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BC618:
    c.r[1].d[0] = c.r[19].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 100ll ? 1ull : 0ull;  if (t) { goto L_001BC62C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 128u);  if (t) { goto L_001BCBE8; } }
L_001BC62C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BC63C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BC63C:
    c.r[1].d[0] = c.r[19].sd[0] < 190ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 540ll ? 1ull : 0ull;  if (t) { goto L_001BC65C; } }
    set32(c.r[2], 0u + 2048u);
    set32(c.r[16], 0u + 288u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (t) { goto L_001BCBE8; } }
L_001BC65C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[19].sd[0] < 230ll ? 1ull : 0ull;  if (t) { goto L_001BC6E0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 234ll ? 1ull : 0ull;  if (t) { goto L_001BC688; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[19].sd[0] < 240ll ? 1ull : 0ull;  if (t) { goto L_001BC68C; } }
    set32(c.r[2], 0u + 2048u);
    set32(c.r[16], 0u + 288u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (t) { goto L_001BCBE8; } }
L_001BC688:
    c.r[2].d[0] = c.r[19].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 1;
L_001BC68C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[19].sd[0] < 290ll ? 1ull : 0ull;  if (t) { goto L_001BC6B4; } }
    c.r[1].d[0] = c.r[19].sd[0] < 244ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BC6B4; } }
    set32(c.r[2], 0u + 2048u);
    set32(c.r[16], 0u + 288u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (t) { goto L_001BCBE8; } }
L_001BC6B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BC6D8; } }
    c.r[1].d[0] = c.r[19].sd[0] < 294ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_001BC6D8; } }
    set32(c.r[16], 0u + 288u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (t) { goto L_001BCBE8; } }
L_001BC6D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 660u);  if (t) { goto L_001BCBEC; } }
L_001BC6E0:
    c.r[1].d[0] = c.r[19].sd[0] < 580ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 640ll ? 1ull : 0ull;  if (t) { goto L_001BC700; } }
    set32(c.r[2], 0u + 2048u);
    set32(c.r[16], 0u + 128u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (t) { goto L_001BCBE8; } }
L_001BC700:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_001BC718; } }
    set32(c.r[16], 0u + 288u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (t) { goto L_001BCBE8; } }
L_001BC718:
    c.r[1].d[0] = c.r[19].sd[0] < 700ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 799ll ? 1ull : 0ull;  if (t) { goto L_001BC72C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BC72C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_001BC744; } }
    set32(c.r[16], 0u + 128u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (t) { goto L_001BCBE8; } }
L_001BC744:
    c.r[1].d[0] = c.r[19].sd[0] < 999ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 1050ll ? 1ull : 0ull;  if (t) { goto L_001BC758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BC758:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BC768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 512u);  if (t) { goto L_001BCBE8; } }
L_001BC768:
    c.r[1].d[0] = c.r[19].sd[0] < 1100ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 1150ll ? 1ull : 0ull;  if (t) { goto L_001BC77C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 512u);  if (t) { goto L_001BCBE8; } }
L_001BC77C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BC78C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 512u);  if (t) { goto L_001BCBE8; } }
L_001BC78C:
    c.r[1].d[0] = c.r[19].sd[0] < 1200ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 1250ll ? 1ull : 0ull;  if (t) { goto L_001BC7A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 512u);  if (t) { goto L_001BCBE8; } }
L_001BC7A0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_001BC7B8; } }
    set32(c.r[16], 0u + 128u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (t) { goto L_001BCBE8; } }
L_001BC7B8:
    c.r[1].d[0] = c.r[19].sd[0] < 1300ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 1332ll ? 1ull : 0ull;  if (t) { goto L_001BC7D8; } }
    set32(c.r[2], 0u + 2048u);
    set32(c.r[16], 0u + 288u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (t) { goto L_001BCBE8; } }
L_001BC7D8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[19].sd[0] < 1500ll ? 1ull : 0ull;  if (t) { goto L_001BC7EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] | 256ull;  if (t) { goto L_001BCBE8; } }
L_001BC7EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 1563ll ? 1ull : 0ull;  if (t) { goto L_001BCBE8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[19].sd[0] < 1600ll ? 1ull : 0ull;  if (t) { goto L_001BC810; } }
    set32(c.r[2], 0u + 2048u);
    set32(c.r[16], 0u + 128u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (t) { goto L_001BCBE8; } }
L_001BC810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BCBE8; } }
    c.r[2].d[0] = c.r[19].sd[0] < 1670ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 1690ll ? 1ull : 0ull;  if (t) { goto L_001BCBE8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[19].sd[0] < 1700ll ? 1ull : 0ull;  if (t) { goto L_001BC840; } }
    set32(c.r[2], 0u + 2048u);
    set32(c.r[16], 0u + 128u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (t) { goto L_001BCBE8; } }
L_001BC840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 1800ll ? 1ull : 0ull;  if (t) { goto L_001BCBE8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[19].sd[0] < 1900ll ? 1ull : 0ull;  if (t) { goto L_001BC858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BC858:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 1950ll ? 1ull : 0ull;  if (t) { goto L_001BCBE8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BC870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BC870:
    c.r[1].d[0] = c.r[19].sd[0] < 2300ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 2400ll ? 1ull : 0ull;  if (t) { goto L_001BC884; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 256u);  if (t) { goto L_001BCBE8; } }
L_001BC884:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BC894; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 256u);  if (t) { goto L_001BCBE8; } }
L_001BC894:
    c.r[1].d[0] = c.r[19].sd[0] < 2600ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[19].sd[0] < 2700ll ? 1ull : 0ull;  if (t) { goto L_001BC8A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 288u);  if (t) { goto L_001BCBE8; } }
L_001BC8A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 3000ll ? 1ull : 0ull;  if (t) { goto L_001BCBE8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BC8C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 288u);  if (t) { goto L_001BCBE8; } }
L_001BC8C0:
    c.r[1].d[0] = c.r[19].sd[0] < 3200ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 3300ll ? 1ull : 0ull;  if (t) { goto L_001BC8D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BC8D4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BC8E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BC8E4:
    c.r[1].d[0] = c.r[19].sd[0] < 3500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 3550ll ? 1ull : 0ull;  if (t) { goto L_001BC8F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BC8F8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 256u);  if (t) { goto L_001BC91C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_001BCBE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 32ull;  if (t) { goto L_001BCBE8; } }
L_001BC91C:
    c.r[1].d[0] = c.r[19].sd[0] < 3600ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 3650ll ? 1ull : 0ull;  if (t) { goto L_001BC948; } }
    set32(c.r[3], 0u + 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_001BCBE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 32ull;  if (t) { goto L_001BCBE8; } }
L_001BC948:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 256u);  if (t) { goto L_001BC96C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_001BCBE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 32ull;  if (t) { goto L_001BCBE8; } }
L_001BC96C:
    c.r[1].d[0] = c.r[19].sd[0] < 3750ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 3800ll ? 1ull : 0ull;  if (t) { goto L_001BC984; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] | 128ull;  if (t) { goto L_001BCBE8; } }
L_001BC984:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_001BC994; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] | 128ull;  if (t) { goto L_001BCBE8; } }
L_001BC994:
    c.r[1].d[0] = c.r[19].sd[0] < 3850ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 3950ll ? 1ull : 0ull;  if (t) { goto L_001BC9B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] | 256ull;  if (t) { goto L_001BCBE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 32ull;  if (t) { goto L_001BCBE8; } }
L_001BC9B4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[19].sd[0] < 4000ll ? 1ull : 0ull;  if (t) { goto L_001BC9C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BC9C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BCBE8; } }
    c.r[2].d[0] = c.r[19].sd[0] < 4550ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 4699ll ? 1ull : 0ull;  if (t) { goto L_001BCBE8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BC9E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BC9E8:
    c.r[1].d[0] = c.r[19].sd[0] < 4970ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 5500ll ? 1ull : 0ull;  if (t) { goto L_001BC9FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BC9FC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BCA0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BCA0C:
    c.r[1].d[0] = c.r[19].sd[0] < 5550ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 5630ll ? 1ull : 0ull;  if (t) { goto L_001BCA20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BCA20:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BCA30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BCA30:
    c.r[1].d[0] = c.r[19].sd[0] < 5650ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 5750ll ? 1ull : 0ull;  if (t) { goto L_001BCA50; } }
    set32(c.r[2], 0u + 2048u);
    set32(c.r[16], 0u + 128u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (t) { goto L_001BCBE8; } }
L_001BCA50:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BCA60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 288u);  if (t) { goto L_001BCBE8; } }
L_001BCA60:
    c.r[1].d[0] = c.r[19].sd[0] < 5800ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 5820ll ? 1ull : 0ull;  if (t) { goto L_001BCA74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 288u);  if (t) { goto L_001BCBE8; } }
L_001BCA74:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BCA84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 288u);  if (t) { goto L_001BCBE8; } }
L_001BCA84:
    c.r[1].d[0] = c.r[19].sd[0] < 5850ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 5950ll ? 1ull : 0ull;  if (t) { goto L_001BCA98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 288u);  if (t) { goto L_001BCBE8; } }
L_001BCA98:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_001BCAB0; } }
    set32(c.r[16], 0u + 128u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (t) { goto L_001BCBE8; } }
L_001BCAB0:
    c.r[1].d[0] = c.r[19].sd[0] < 6050ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 6100ll ? 1ull : 0ull;  if (t) { goto L_001BCAC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BCAC4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BCAD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BCAD4:
    c.r[1].d[0] = c.r[19].sd[0] < 6200ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 6250ll ? 1ull : 0ull;  if (t) { goto L_001BCAE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BCAE8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[19].sd[0] < 6270ll ? 1ull : 0ull;  if (t) { goto L_001BCAF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BCAF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BCBE8; } }
    c.r[2].d[0] = c.r[19].sd[0] < 7000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 7020ll ? 1ull : 0ull;  if (t) { goto L_001BCBE8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BCB1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BCB1C:
    c.r[1].d[0] = c.r[19].sd[0] < 7040ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 7200ll ? 1ull : 0ull;  if (t) { goto L_001BCB38; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (t) { goto L_001BCBE8; } }
L_001BCB38:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_001BCB50; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (t) { goto L_001BCBE8; } }
L_001BCB50:
    c.r[1].d[0] = c.r[19].sd[0] < 7220ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < 7230ll ? 1ull : 0ull;  if (t) { goto L_001BCB68; } }
    set32(c.r[2], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_001BCBE8; } }
L_001BCB68:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = c.r[19].sd[0] < 9000ll ? 1ull : 0ull;  if (t) { goto L_001BCBE8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 10000ll ? 1ull : 0ull;  if (t) { goto L_001BCBE8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[19].sd[0] < 15000ll ? 1ull : 0ull;  if (t) { goto L_001BCB88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCBE8; } }
L_001BCB88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 16000ll ? 1ull : 0ull;  if (t) { goto L_001BCBE8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 15180u);  if (t) { goto L_001BCBE8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2048u);  if (t) { goto L_001BCBAC; } }
    set32(c.r[2], 0u + 15190u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[19].sd[0] < 15020ll ? 1ull : 0ull;  if (t) { goto L_001BCBC0; } }
L_001BCBAC:
    set32(c.r[2], 0u + 128u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[19].sd[0] < 15020ll ? 1ull : 0ull;
    c.budget -= 5;
L_001BCBC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[19].sd[0] < 15250ll ? 1ull : 0ull;  if (t) { goto L_001BCBD4; } }
    c.r[1].d[0] = c.r[19].sd[0] < 15151ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BCBE4; } }
L_001BCBD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 15253ll ? 1ull : 0ull;  if (t) { goto L_001BCBE8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BCBE8; } }
L_001BCBE4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.budget -= 1;
L_001BCBE8:
    set32(c.r[2], 0u + 660u);
    c.budget -= 1;
L_001BCBEC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_001BCC0C; } }
    set32(c.r[2], 0u + 1558u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1556u);  if (t) { goto L_001BCC08; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001BCC10; } }
L_001BCC08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_001BCC0C:
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_001BCC10:
    set32(c.r[2], 0u + 262u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);  if (t) { goto L_001BCC38; } }
    set32(c.r[2], c.r[19].w[0] - 256u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 15430u);  if (t) { goto L_001BCC34; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001BCC3C; } }
L_001BCC34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 1;
L_001BCC38:
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_001BCC3C:
    set32(c.r[2], 0u + 15190u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 293u);  if (t) { goto L_001BCC4C; } }
    c.r[16].d[0] = c.r[16].d[0] | 128ull;
    c.budget -= 1;
L_001BCC4C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001BCC74; } }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2048u);  if (t) { goto L_001BCC78; } }
    set32(c.r[2], 0u + 262u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 294u);  if (t) { goto L_001BCC74; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001BCC80; } }
L_001BCC74:
    set32(c.r[2], 0u + 2048u);
    c.budget -= 1;
L_001BCC78:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_001BCC80:
    set32(c.r[2], 0u + 1600u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 708u);  if (t) { goto L_001BCCA0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);  if (t) { goto L_001BCC9C; } }
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_001BCC9C:
    set32(c.r[2], 0u + 708u);
    c.budget -= 1;
L_001BCCA0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[19].sd[0] < 722ll ? 1ull : 0ull;  if (t) { goto L_001BCCB8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 734ll ? 1ull : 0ull;  if (t) { goto L_001BCCBC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 727u);  if (t) { goto L_001BCCC0; } }
L_001BCCB8:
    c.r[16].d[0] = c.r[16].d[0] | 32768ull;
    c.budget -= 1;
L_001BCCBC:
    set32(c.r[2], 0u + 727u);
    c.budget -= 1;
L_001BCCC0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_001BCCD8; } }
    set32(c.r[2], 0u + 753u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2700u);  if (t) { goto L_001BCCE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 1;
L_001BCCD8:
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 2700u);
    c.budget -= 2;
L_001BCCE0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 40u);  if (t) { goto L_001BCCEC; } }
    c.r[16].d[0] = c.r[16].d[0] | 256ull;
    c.budget -= 1;
L_001BCCEC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001BCD00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
L_001BCD00:
    c.r[2].d[0] = c.r[19].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001BCD20; } }
    c.r[1].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BCD1C; } }
    c.r[16].d[0] = c.r[16].d[0] | 32768ull;
    c.budget -= 1;
L_001BCD1C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001BCD20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD28u);  if (depth < kMaxDepth) unit_0034(c, 214u, depth + 1u); else { c.pc = 0x001D30C0u; return; } if (c.pc != 0x001BCD28u) [[unlikely]] return; }
L_001BCD28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BCD40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 4;
L_001BCD40:
    c.r[2].d[0] = c.r[19].sd[0] < 4450ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 660u);  if (t) { goto L_001BCDC0; } }
    c.r[1].d[0] = c.r[19].sd[0] < 4478ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 4469u);  if (t) { goto L_001BCDBC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001BCDBC; } }
    set32(c.r[2], 0u + 4475u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2048u);  if (t) { goto L_001BCDBC; } }
    set32(c.r[16], 0u + 128u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], c.r[19].w[0] - 4473u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];  if (t) { goto L_001BCDB4; } }
    set32(c.r[2], 0u + 4476u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (t) { goto L_001BCDB8; } }
    set32(c.r[2], 0u + 4456u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[19].w[0] - 4462u);  if (t) { goto L_001BCDB4; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BCDB4; } }
    set32(c.r[2], 0u + 4465u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001BCDBC; } }
L_001BCDB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.budget -= 1;
L_001BCDB8:
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_001BCDBC:
    set32(c.r[2], 0u + 660u);
    c.budget -= 1;
L_001BCDC0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001BCDCC; } }
    c.r[16].d[0] = c.r[16].d[0] | 4ull;
    c.budget -= 1;
L_001BCDCC:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] < 0; c.r[2].d[0] = c.r[19].sd[0] < 70ll ? 1ull : 0ull;  if (t) { goto L_001BCDE0; } }
    c.r[1].d[0] = c.r[19].sd[0] < 51ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BCFFC; } }
L_001BCDE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 74ll ? 1ull : 0ull;  if (t) { goto L_001BCDF0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_001BD000; } }
L_001BCDF0:
    c.r[2].d[0] = c.r[19].sd[0] < 150ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 222u);  if (t) { goto L_001BCE08; } }
    c.r[1].d[0] = c.r[19].sd[0] < 153ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BCFFC; } }
L_001BCE08:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001BCFFC; } }
    c.r[2].d[0] = c.r[19].sd[0] < 300ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[19].sd[0] < 370ll ? 1ull : 0ull;  if (t) { goto L_001BCE28; } }
    c.r[1].d[0] = c.r[19].sd[0] < 331ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BCFFC; } }
L_001BCE28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 380ll ? 1ull : 0ull;  if (t) { goto L_001BCE38; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BCFFC; } }
L_001BCE38:
    c.r[2].d[0] = c.r[19].sd[0] < 390ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[19].sd[0] < 400ll ? 1ull : 0ull;  if (t) { goto L_001BCE50; } }
    c.r[1].d[0] = c.r[19].sd[0] < 392ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BCFFC; } }
L_001BCE50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 402ll ? 1ull : 0ull;  if (t) { goto L_001BCE60; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BCFFC; } }
L_001BCE60:
    c.r[2].d[0] = c.r[19].sd[0] < 410ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[19].sd[0] < 441ll ? 1ull : 0ull;  if (t) { goto L_001BCE78; } }
    c.r[1].d[0] = c.r[19].sd[0] < 412ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BCFFC; } }
L_001BCE78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 491ll ? 1ull : 0ull;  if (t) { goto L_001BCE88; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BCFFC; } }
L_001BCE88:
    c.r[2].d[0] = c.r[19].sd[0] < 511ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 540u);  if (t) { goto L_001BCEA0; } }
    c.r[1].d[0] = c.r[19].sd[0] < 515ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BCFFC; } }
L_001BCEA0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001BCFFC; } }
    set32(c.r[2], 0u + 560u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 580u);  if (t) { goto L_001BCFFC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001BCFFC; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[19].w[0] - 610u);  if (t) { goto L_001BCFFC; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BCFFC; } }
    c.r[2].d[0] = c.r[19].sd[0] < 630ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[19].sd[0] < 640ll ? 1ull : 0ull;  if (t) { goto L_001BCEEC; } }
    c.r[1].d[0] = c.r[19].sd[0] < 632ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BCFFC; } }
L_001BCEEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 644ll ? 1ull : 0ull;  if (t) { goto L_001BCEFC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BCFFC; } }
L_001BCEFC:
    c.r[2].d[0] = c.r[19].sd[0] < 809ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 672u);  if (t) { goto L_001BCF20; } }
    c.r[1].d[0] = c.r[19].sd[0] < 812ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BCF1C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001BCFFC; } }
L_001BCF1C:
    set32(c.r[2], 0u + 672u);
    c.budget -= 1;
L_001BCF20:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[19].sd[0] < 1700ll ? 1ull : 0ull;  if (t) { goto L_001BCFFC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 1900ll ? 1ull : 0ull;  if (t) { goto L_001BCF38; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BCFFC; } }
L_001BCF38:
    set32(c.r[2], 0u + 804u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 802u);  if (t) { goto L_001BCFFC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001BCFFC; } }
    set32(c.r[2], c.r[19].w[0] - 808u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 903u);  if (t) { goto L_001BCFFC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001BCFFC; } }
    set32(c.r[2], 0u + 878u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 664u);  if (t) { goto L_001BCFFC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001BCFFC; } }
    set32(c.r[2], 0u + 677u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1570u);  if (t) { goto L_001BCFFC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001BCFFC; } }
    set32(c.r[2], 0u + 1645u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1600u);  if (t) { goto L_001BCFFC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001BCFFC; } }
    set32(c.r[2], 0u + 1604u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 750u);  if (t) { goto L_001BCFFC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001BCFFC; } }
    set32(c.r[2], 0u + 15310u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15320u);  if (t) { goto L_001BCFFC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001BCFFC; } }
    set32(c.r[2], 0u + 15700u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15710u);  if (t) { goto L_001BCFFC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001BCFFC; } }
    set32(c.r[2], 0u + 1650u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1652u);  if (t) { goto L_001BCFFC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001BCFFC; } }
    set32(c.r[2], 0u + 250u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001BD008; } }
L_001BCFFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 1;
L_001BD000:
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001BD008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BD030:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0038(c, 66u, depth); }
L_001BD040:
    set32(c.r[29], c.r[29].w[0] - 288u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = ld8((c.r[4].w[0] + 368u));
    c.f[21] = ld32((c.r[1].w[0] + 19952u));
    c.f[20] = c.r[3].w[0];
    set32(c.r[3], c.r[29].w[0] + 240u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], c.r[29].w[0] + 256u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    ld128((c.r[19].w[0] + 208u) & ~15u, c.r[4]);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[4]);
    ld128((c.r[19].w[0] + 224u) & ~15u, c.r[4]);
    c.budget -= 26;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; st128((c.r[29].w[0] + 256u) & ~15u, c.r[4]);  if (t) { goto L_001BD0B4; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_001BD0EC; } }
L_001BD0B4:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 370u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001BD0EC; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[3], 0u + 1290u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5824u);  if (t) { goto L_001BD0E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001BD0E8; } }
    set32(c.r[3], 0u + 5827u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001BD0EC; } }
L_001BD0E8:
    set32(c.r[18], c.r[18].w[0] + 12u);
    c.budget -= 1;
L_001BD0EC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[5], 0u - c.r[16].w[0]);  if (t) { goto L_001BD100; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001BD170; } }
L_001BD100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD108u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD108u) [[unlikely]] return; }
L_001BD108:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[19].w[0] + 212u), 0u);  if (t) { goto L_001BD120; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.budget -= 3;
L_001BD120:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD130u); st32((c.r[19].w[0] + 232u), c.f[21]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD130u) [[unlikely]] return; }
L_001BD130:
    c.f[1] = ld32((c.r[19].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);  if (t) { goto L_001BD168; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[2], 0u + 560u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 710u);  if (t) { goto L_001BD164; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BD7B8; } }
L_001BD164:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.budget -= 1;
L_001BD168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 228u), c.r[2].w[0]);  if (t) { goto L_001BD7B8; } }
L_001BD170:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_001BD184; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_001BD1D0; } }
L_001BD184:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u - c.r[16].w[0]);  if (t) { goto L_001BD908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD1A0u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD1A0u) [[unlikely]] return; }
L_001BD1A0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[19].w[0] + 212u), 0u);  if (t) { goto L_001BD1B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.budget -= 3;
L_001BD1B8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD1C8u); st32((c.r[19].w[0] + 232u), c.f[20]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD1C8u) [[unlikely]] return; }
L_001BD1C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 224u);  if (t) { goto L_001BD7BC; } }
L_001BD1D0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_001BD1E4; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_001BD274; } }
L_001BD1E4:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BD908; } }
    set32(c.r[2], 0u + 164u);
    c.f[0] = ld32((c.r[1].w[0] + 19944u));
    st32((c.r[19].w[0] + 224u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BD234; } }
    c.f[1] = ld32((c.r[19].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1300000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BD234; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    st32((c.r[19].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 2;
L_001BD234:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], 0u + 5u);
    c.f[0] = ld32((c.r[1].w[0] + 19944u));
    st32((c.r[19].w[0] + 232u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19936u));
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[19].w[0] + 212u), c.f[0]);  if (t) { goto L_001BD260; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19928u));
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.budget -= 3;
L_001BD260:
    c.r[5].d[0] = ld8((c.r[19].w[0] + 369u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD26Cu); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD26Cu) [[unlikely]] return; }
L_001BD26C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD7B8; } }
L_001BD274:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; set32(c.r[5], 0u - c.r[16].w[0]);  if (t) { goto L_001BD288; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_001BD2E4; } }
L_001BD288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD290u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD290u) [[unlikely]] return; }
L_001BD290:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[19].w[0] + 212u), 0u);  if (t) { goto L_001BD2A8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.budget -= 3;
L_001BD2A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2860000u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[19].w[0] + 232u), c.r[2].w[0]);  if (t) { goto L_001BD2BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2830000u);
    st32((c.r[19].w[0] + 232u), c.r[2].w[0]);
    c.budget -= 2;
L_001BD2BC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD2C8u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD2C8u) [[unlikely]] return; }
L_001BD2C8:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 397u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001BD7B8; } }
L_001BD2E4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; set32(c.r[5], 0u - c.r[16].w[0]);  if (t) { goto L_001BD2F8; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_001BD354; } }
L_001BD2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD300u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD300u) [[unlikely]] return; }
L_001BD300:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[19].w[0] + 212u), 0u);  if (t) { goto L_001BD318; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.budget -= 3;
L_001BD318:
    st32((c.r[19].w[0] + 232u), c.f[21]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 369u));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);  if (t) { goto L_001BD338; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1B00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 224u), c.f[0]);  if (t) { goto L_001BD340; } }
L_001BD338:
    c.f[0] = c.r[2].w[0];
    st32((c.r[19].w[0] + 224u), c.f[0]);
    c.budget -= 2;
L_001BD340:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD34Cu); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD34Cu) [[unlikely]] return; }
L_001BD34C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD7B8; } }
L_001BD354:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; set32(c.r[5], 0u - c.r[16].w[0]);  if (t) { goto L_001BD368; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 12u);  if (t) { goto L_001BD3AC; } }
L_001BD368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD370u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD370u) [[unlikely]] return; }
L_001BD370:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], 0u + 11u);
    c.f[0] = ld32((c.r[1].w[0] + 19920u));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[19].w[0] + 212u), c.f[0]);  if (t) { goto L_001BD390; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19912u));
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.budget -= 3;
L_001BD390:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2140000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 232u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD3A4u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD3A4u) [[unlikely]] return; }
L_001BD3A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD7B8; } }
L_001BD3AC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; set32(c.r[5], 0u - c.r[16].w[0]);  if (t) { goto L_001BD3C0; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 14u);  if (t) { goto L_001BD3FC; } }
L_001BD3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD3C8u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD3C8u) [[unlikely]] return; }
L_001BD3C8:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[19].w[0] + 212u), 0u);  if (t) { goto L_001BD3E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.budget -= 3;
L_001BD3E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2140000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 232u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD3F4u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD3F4u) [[unlikely]] return; }
L_001BD3F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD7B8; } }
L_001BD3FC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BD410; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 16u);  if (t) { goto L_001BD490; } }
L_001BD410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD418u);  if (depth < kMaxDepth) unit_0038(c, 50u, depth + 1u); else { c.pc = 0x001E0890u; return; } if (c.pc != 0x001BD418u) [[unlikely]] return; }
L_001BD418:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st128((c.r[19].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 15u);
    c.f[0] = ld32((c.r[1].w[0] + 19904u));
    c.f[1] = ld32((c.r[19].w[0] + 224u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 19904u));
    c.f[1] = ld32((c.r[19].w[0] + 232u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 19936u));
    c.budget -= 17;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[19].w[0] + 212u), c.f[0]);  if (t) { goto L_001BD468; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19928u));
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.budget -= 3;
L_001BD468:
    c.r[5].d[0] = ld8((c.r[19].w[0] + 369u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD474u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD474u) [[unlikely]] return; }
L_001BD474:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 397u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001BD7B8; } }
L_001BD490:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BD4A4; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 18u);  if (t) { goto L_001BD4F4; } }
L_001BD4A4:
    set32(c.r[2], 0u + 17u);
    c.f[0] = ld32((c.r[1].w[0] + 19936u));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[19].w[0] + 212u), c.f[0]);  if (t) { goto L_001BD4C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19928u));
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.budget -= 3;
L_001BD4C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2860000u);
    st32((c.r[19].w[0] + 224u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 232u), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[19].w[0] + 369u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD4D8u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD4D8u) [[unlikely]] return; }
L_001BD4D8:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 397u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001BD7B8; } }
L_001BD4F4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BD524; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2140000u);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 208u);
    st32((c.r[19].w[0] + 212u), c.f[0]);
    st32((c.r[19].w[0] + 224u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD51Cu); st32((c.r[19].w[0] + 232u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD51Cu) [[unlikely]] return; }
L_001BD51C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD7B8; } }
L_001BD524:
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 21u);  if (t) { goto L_001BD538; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_001BD58C; } }
L_001BD538:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u - c.r[16].w[0]);  if (t) { goto L_001BD908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD554u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD554u) [[unlikely]] return; }
L_001BD554:
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[19].w[0] + 212u), 0u);  if (t) { goto L_001BD56C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.budget -= 3;
L_001BD56C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[1].w[0] + 19896u));
    set32(c.r[4], c.r[19].w[0] + 208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD584u); st32((c.r[19].w[0] + 232u), c.f[0]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD584u) [[unlikely]] return; }
L_001BD584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD7B8; } }
L_001BD58C:
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 23u);  if (t) { goto L_001BD5A0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_001BD610; } }
L_001BD5A0:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BD908; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 369u));
    set32(c.r[4], c.r[19].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD5C4u); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD5C4u) [[unlikely]] return; }
L_001BD5C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.f[0] = ld32((c.r[1].w[0] + 19936u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 212u), c.f[0]);  if (t) { goto L_001BD5E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19888u));
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.budget -= 3;
L_001BD5E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19880u));
    st32((c.r[19].w[0] + 224u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19880u));
    st32((c.r[19].w[0] + 232u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[19].w[0] + 369u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD608u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD608u) [[unlikely]] return; }
L_001BD608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD7B8; } }
L_001BD610:
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 25u);  if (t) { goto L_001BD624; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_001BD6BC; } }
L_001BD624:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u - c.r[16].w[0]);  if (t) { goto L_001BD908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD640u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD640u) [[unlikely]] return; }
L_001BD640:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.f[0] = ld32((c.r[1].w[0] + 19912u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 212u), c.f[0]);  if (t) { goto L_001BD660; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19920u));
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.budget -= 3;
L_001BD660:
    c.f[1] = ld32((c.r[19].w[0] + 224u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BD688; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19872u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 224u), c.f[0]);  if (t) { goto L_001BD69C; } }
L_001BD688:
    c.f[0] = ld32((c.r[1].w[0] + 19864u));
    st32((c.r[19].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 212u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.budget -= 5;
L_001BD69C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[1].w[0] + 19856u));
    set32(c.r[4], c.r[19].w[0] + 208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD6B4u); st32((c.r[19].w[0] + 232u), c.f[0]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD6B4u) [[unlikely]] return; }
L_001BD6B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD7B8; } }
L_001BD6BC:
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 100u);  if (t) { goto L_001BD73C; } }
    set32(c.r[5], 0u - c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD6D4u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD6D4u) [[unlikely]] return; }
L_001BD6D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[19].w[0] + 232u), c.f[20]);
    c.f[1] = ld32((c.r[19].w[0] + 224u));
    c.f[0] = ld32((c.r[1].w[0] + 19848u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BD700; } }
    st32((c.r[19].w[0] + 224u), c.f[0]);
    c.budget -= 1;
L_001BD700:
    c.f[1] = ld32((c.r[19].w[0] + 224u));
    c.f[0] = ld32((c.r[1].w[0] + 19840u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001BD718; } }
    st32((c.r[19].w[0] + 224u), c.f[0]);
    c.budget -= 1;
L_001BD718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD720u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD720u) [[unlikely]] return; }
L_001BD720:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 394u));
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001BD7B8; } }
L_001BD73C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[5], 0u - c.r[16].w[0]);  if (t) { goto L_001BD7B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD74Cu); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD74Cu) [[unlikely]] return; }
L_001BD74C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19832u));
    st32((c.r[19].w[0] + 232u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[19].w[0] + 224u));
    c.f[0] = ld32((c.r[1].w[0] + 19824u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BD780; } }
    st32((c.r[19].w[0] + 224u), c.f[0]);
    c.budget -= 1;
L_001BD780:
    c.f[1] = ld32((c.r[19].w[0] + 224u));
    c.f[0] = ld32((c.r[1].w[0] + 19816u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001BD798; } }
    st32((c.r[19].w[0] + 224u), c.f[0]);
    c.budget -= 1;
L_001BD798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD7A0u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BD7A0u) [[unlikely]] return; }
L_001BD7A0:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 394u));
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[19].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001BD7B8:
    set32(c.r[2], c.r[29].w[0] + 224u);
    c.budget -= 1;
L_001BD7BC:
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD7D0u); c.r[5].d[0] = c.r[2].d[0] | 18543ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BD7D0u) [[unlikely]] return; }
L_001BD7D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001BD7DC; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BD7DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53330000u);  if (t) { goto L_001BD868; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    c.f[0] = ld32((c.r[19].w[0] + 224u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[1] = ld32((c.r[2].w[0] + 48u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    c.f[0] = ld32((c.r[19].w[0] + 232u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 212u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD81Cu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001BD81Cu) [[unlikely]] return; }
L_001BD81C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD82Cu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x001BD82Cu) [[unlikely]] return; }
L_001BD82C:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    st32((c.r[3].w[0] + 80u), c.f[0]);
    st32((c.r[3].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    st32((c.r[3].w[0] + 88u), c.f[0]);
    st32((c.r[3].w[0] + 72u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    st32((c.r[3].w[0] + 48u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 56u), c.f[0]);  if (t) { goto L_001BD908; } }
L_001BD868:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD874u); c.r[5].d[0] = c.r[2].d[0] | 19799ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BD874u) [[unlikely]] return; }
L_001BD874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001BD880; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BD880:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001BD908; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.f[0] = ld32((c.r[19].w[0] + 224u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = ld32((c.r[2].w[0] + 48u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.f[0] = ld32((c.r[19].w[0] + 232u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 212u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD8C0u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001BD8C0u) [[unlikely]] return; }
L_001BD8C0:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD8D0u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x001BD8D0u) [[unlikely]] return; }
L_001BD8D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    st32((c.r[3].w[0] + 80u), c.f[0]);
    st32((c.r[3].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    st32((c.r[3].w[0] + 88u), c.f[0]);
    st32((c.r[3].w[0] + 72u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    st32((c.r[3].w[0] + 48u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    st32((c.r[3].w[0] + 56u), c.f[0]);
    c.budget -= 14;
L_001BD908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_001BD930:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[29].w[0] + 180u), 0u);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 188u), 0u);  if (t) { goto L_001BD978; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 180u), c.f[0]);
    st32((c.r[29].w[0] + 188u), c.f[0]);
    c.budget -= 5;
L_001BD978:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BD99C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 180u), 0u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 184u), 0u);
    st32((c.r[29].w[0] + 188u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
L_001BD99C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_001BD9B4; } }
    st32((c.r[29].w[0] + 180u), 0u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 184u), 0u);
    st32((c.r[29].w[0] + 188u), 0u);
    c.budget -= 4;
L_001BD9B4:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], c.r[29].w[0] + 176u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[12]);
    c.f[13] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD9F0u); c.f[12] = ld32((c.r[29].w[0] + 184u));  if (depth < kMaxDepth) unit_0006(c, 219u, depth + 1u); else { c.pc = 0x0011A5D8u; return; } if (c.pc != 0x001BD9F0u) [[unlikely]] return; }
L_001BD9F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 19920u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20000u));
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 204u), c.f[2]);  if (t) { goto L_001BDA24; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19992u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 204u), c.f[0]);  if (t) { goto L_001BDA44; } }
L_001BDA24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19984u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BDA44; } }
    c.f[0] = ld32((c.r[1].w[0] + 19992u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 204u), c.f[0]);
    c.budget -= 3;
L_001BDA44:
    c.f[2] = ld32((c.r[29].w[0] + 204u));
    c.f[0] = ld32((c.r[17].w[0] + 212u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BDA60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_001BDA64; } }
L_001BDA60:
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 1;
L_001BDA64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BDA9C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 19992u));
    c.f[0] = 0u;
    c.f[2] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDA9C; } }
    c.f[2] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_001BDA9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19912u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001BDC50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);  if (t) { goto L_001BDABC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001BDABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDAC4u); c.r[5].d[0] = c.r[2].d[0] | 18543ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BDAC4u) [[unlikely]] return; }
L_001BDAC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001BDAD0; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BDAD0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BDC50; } }
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    c.f[1] = ld32((c.r[17].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BDB10; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19992u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 212u), c.f[0]);  if (t) { goto L_001BDB34; } }
L_001BDB10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19984u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDB34; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19992u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_001BDB34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[1].w[0] + 19984u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDB44u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001BDB44u) [[unlikely]] return; }
L_001BDB44:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 96u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = 0u;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[1] = 0u;
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = 0u;
    c.f[12] = ld32((c.r[1].w[0] + 19912u));
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDB9Cu); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 369u, depth + 1u); else { c.pc = 0x00103C38u; return; } if (c.pc != 0x001BDB9Cu) [[unlikely]] return; }
L_001BDB9C:
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[29].w[0] + 112u);
    set32(c.r[4], c.r[29].w[0] + 48u);
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[12] = ld32((c.r[1].w[0] + 19920u));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC2Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 369u, depth + 1u); else { c.pc = 0x00103C38u; return; } if (c.pc != 0x001BDC2Cu) [[unlikely]] return; }
L_001BDC2C:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 96u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 112u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 128u) & ~15u, c.r[3]);
    c.budget -= 9;
L_001BDC50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001BDC70:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BDC9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BF62C; } }
L_001BDC9C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = ld8((c.r[18].w[0] + 368u));  if (t) { goto L_001BDCC8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 4734u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BDCCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDCBCu);  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001BDCBCu) [[unlikely]] return; }
L_001BDCBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BDCC8; } }
    set32(c.r[16], 0u + 42u);
    c.budget -= 1;
L_001BDCC8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BDCCC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001BDCF8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 5417u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BDCF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDCECu);  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001BDCECu) [[unlikely]] return; }
L_001BDCEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BDCF8; } }
    set32(c.r[16], 0u + 40u);
    c.budget -= 1;
L_001BDCF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BDD98; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 50u, depth + 1u); else { c.pc = 0x001BD930u; return; } if (c.pc != 0x001BDD0Cu) [[unlikely]] return; }
L_001BDD0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD14u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 15u, depth + 1u); else { c.pc = 0x001BD030u; return; } if (c.pc != 0x001BDD14u) [[unlikely]] return; }
L_001BDD14:
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001BDD24; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001BDD24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD2Cu); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BDD2Cu) [[unlikely]] return; }
L_001BDD2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BDD38; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BDD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD40u); c.f[12] = ld32((c.r[18].w[0] + 228u));  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001BDD40u) [[unlikely]] return; }
L_001BDD40:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[4], 0u + 144u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD54u); st8((c.r[2].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BDD54u) [[unlikely]] return; }
L_001BDD54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BDD7C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.f[13] = ld32((c.r[1].w[0] + 20000u));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[14] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD7Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 226u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001BDD7Cu) [[unlikely]] return; }
L_001BDD7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001BDD88; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_001BDD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD90u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001BDD90u) [[unlikely]] return; }
L_001BDD90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BF62C; } }
L_001BDD98:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001BDE38; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDDACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 50u, depth + 1u); else { c.pc = 0x001BD930u; return; } if (c.pc != 0x001BDDACu) [[unlikely]] return; }
L_001BDDAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDDB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 15u, depth + 1u); else { c.pc = 0x001BD030u; return; } if (c.pc != 0x001BDDB4u) [[unlikely]] return; }
L_001BDDB4:
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001BDDC4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001BDDC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDDCCu); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BDDCCu) [[unlikely]] return; }
L_001BDDCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BDDD8; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BDDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDDE0u); c.f[12] = ld32((c.r[18].w[0] + 228u));  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001BDDE0u) [[unlikely]] return; }
L_001BDDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDDE8u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BDDE8u) [[unlikely]] return; }
L_001BDDE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BDE10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.f[12] = ld32((c.r[1].w[0] + 20000u));
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[14] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE10u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 226u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001BDE10u) [[unlikely]] return; }
L_001BDE10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001BDE20; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001BDE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE28u); set32(c.r[4], c.r[18].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001BDE28u) [[unlikely]] return; }
L_001BDE28:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001BF628; } }
L_001BDE38:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_001BDEDC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 50u, depth + 1u); else { c.pc = 0x001BD930u; return; } if (c.pc != 0x001BDE50u) [[unlikely]] return; }
L_001BDE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE58u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 15u, depth + 1u); else { c.pc = 0x001BD030u; return; } if (c.pc != 0x001BDE58u) [[unlikely]] return; }
L_001BDE58:
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001BDE68; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001BDE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE70u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BDE70u) [[unlikely]] return; }
L_001BDE70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BDE7C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BDE7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE84u); c.f[12] = ld32((c.r[18].w[0] + 228u));  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001BDE84u) [[unlikely]] return; }
L_001BDE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE8Cu); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BDE8Cu) [[unlikely]] return; }
L_001BDE8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BDEB4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.f[13] = ld32((c.r[1].w[0] + 20000u));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[14] = c.r[3].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDEB4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 226u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001BDEB4u) [[unlikely]] return; }
L_001BDEB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001BDEC4; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001BDEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDECCu); set32(c.r[4], c.r[18].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001BDECCu) [[unlikely]] return; }
L_001BDECC:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001BF628; } }
L_001BDEDC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BDF70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDEECu);  if (depth < kMaxDepth) unit_002F(c, 15u, depth + 1u); else { c.pc = 0x001BD030u; return; } if (c.pc != 0x001BDEECu) [[unlikely]] return; }
L_001BDEEC:
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001BDEFC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001BDEFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF04u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BDF04u) [[unlikely]] return; }
L_001BDF04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BDF10; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BDF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF18u); c.f[12] = ld32((c.r[18].w[0] + 228u));  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001BDF18u) [[unlikely]] return; }
L_001BDF18:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[4], 0u + 144u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF2Cu); st8((c.r[2].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BDF2Cu) [[unlikely]] return; }
L_001BDF2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BDF54; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 60u)));
    c.f[13] = ld32((c.r[1].w[0] + 20000u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[14] = ld32((c.r[1].w[0] + 19808u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF54u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 226u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001BDF54u) [[unlikely]] return; }
L_001BDF54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001BDF60; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_001BDF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF68u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001BDF68u) [[unlikely]] return; }
L_001BDF68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF628; } }
L_001BDF70:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_001BE000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 15u, depth + 1u); else { c.pc = 0x001BD030u; return; } if (c.pc != 0x001BDF84u) [[unlikely]] return; }
L_001BDF84:
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001BDF94; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001BDF94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF9Cu); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BDF9Cu) [[unlikely]] return; }
L_001BDF9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BDFA8; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BDFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDFB0u); c.f[12] = ld32((c.r[18].w[0] + 228u));  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001BDFB0u) [[unlikely]] return; }
L_001BDFB0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[4], 0u + 112u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDFC4u); st8((c.r[2].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BDFC4u) [[unlikely]] return; }
L_001BDFC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BDFE4; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDFE4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_002F(c, 213u, depth + 1u); else { c.pc = 0x001BF9F0u; return; } if (c.pc != 0x001BDFE4u) [[unlikely]] return; }
L_001BDFE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001BDFF0; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_001BDFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDFF8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001BDFF8u) [[unlikely]] return; }
L_001BDFF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF628; } }
L_001BE000:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001BE05C; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[4], 0u + 112u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE01Cu); st8((c.r[2].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BE01Cu) [[unlikely]] return; }
L_001BE01C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BE040; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.f[12] = ld32((c.r[1].w[0] + 20000u));
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE040u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 213u, depth + 1u); else { c.pc = 0x001BF9F0u; return; } if (c.pc != 0x001BE040u) [[unlikely]] return; }
L_001BE040:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001BE04C; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_001BE04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE054u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001BE054u) [[unlikely]] return; }
L_001BE054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF628; } }
L_001BE05C:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_001BE070; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001BE0D4; } }
L_001BE070:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[5], 0u - c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    ld128((c.r[2].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE088u); st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001BE088u) [[unlikely]] return; }
L_001BE088:
    set32(c.r[5], 0u - c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE094u); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BE094u) [[unlikely]] return; }
L_001BE094:
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0A8u); st32((c.r[18].w[0] + 224u), c.f[0]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BE0A8u) [[unlikely]] return; }
L_001BE0A8:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_001BE0B8; } }
    set32(c.r[6], c.r[6].w[0] + 436u);
    c.budget -= 1;
L_001BE0B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001BE0C4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BE0C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 16u, depth + 1u); else { c.pc = 0x001BD040u; return; } if (c.pc != 0x001BE0CCu) [[unlikely]] return; }
L_001BE0CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF628; } }
L_001BE0D4:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_001BE1AC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001BE0F0; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001BE0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0F8u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BE0F8u) [[unlikely]] return; }
L_001BE0F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BE104; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BE104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE10Cu); c.f[12] = ld32((c.r[18].w[0] + 228u));  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001BE10Cu) [[unlikely]] return; }
L_001BE10C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st8((c.r[2].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 672u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 144u);  if (t) { goto L_001BE15C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 676u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 164u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 164u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE148u); set32(c.r[6], 0u + 1050u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001BE148u) [[unlikely]] return; }
L_001BE148:
    set32(c.r[5], ld32((c.r[18].w[0] + 676u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE154u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 111u, depth + 1u); else { c.pc = 0x001CD650u; return; } if (c.pc != 0x001BE154u) [[unlikely]] return; }
L_001BE154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BF62C; } }
L_001BE15C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE164u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BE164u) [[unlikely]] return; }
L_001BE164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE190; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[4].w[0];
    c.f[14] = c.r[3].w[0];
    c.f[13] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE190u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 226u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001BE190u) [[unlikely]] return; }
L_001BE190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001BE19C; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_001BE19C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE1A4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001BE1A4u) [[unlikely]] return; }
L_001BE1A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF628; } }
L_001BE1AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001BE280; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001BE1C4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001BE1C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE1CCu); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BE1CCu) [[unlikely]] return; }
L_001BE1CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BE1D8; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BE1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE1E0u); c.f[12] = ld32((c.r[18].w[0] + 228u));  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001BE1E0u) [[unlikely]] return; }
L_001BE1E0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st8((c.r[2].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 672u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 144u);  if (t) { goto L_001BE230; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 676u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 164u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 164u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE21Cu); set32(c.r[6], 0u + 1150u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001BE21Cu) [[unlikely]] return; }
L_001BE21C:
    set32(c.r[5], ld32((c.r[18].w[0] + 676u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE228u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 111u, depth + 1u); else { c.pc = 0x001CD650u; return; } if (c.pc != 0x001BE228u) [[unlikely]] return; }
L_001BE228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BF62C; } }
L_001BE230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE238u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BE238u) [[unlikely]] return; }
L_001BE238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BE264; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.f[13] = ld32((c.r[1].w[0] + 20000u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[4].w[0];
    c.f[14] = c.r[3].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE264u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 226u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001BE264u) [[unlikely]] return; }
L_001BE264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001BE270; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_001BE270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE278u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001BE278u) [[unlikely]] return; }
L_001BE278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF628; } }
L_001BE280:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 13u);  if (t) { goto L_001BE34C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001BE29C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001BE29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE2A4u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BE2A4u) [[unlikely]] return; }
L_001BE2A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BE2B0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BE2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE2B8u); c.f[12] = ld32((c.r[18].w[0] + 228u));  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001BE2B8u) [[unlikely]] return; }
L_001BE2B8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st8((c.r[2].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 672u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 144u);  if (t) { goto L_001BE2FC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 676u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 164u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 164u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE2F4u); set32(c.r[6], 0u + 1000u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001BE2F4u) [[unlikely]] return; }
L_001BE2F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BF62C; } }
L_001BE2FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE304u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BE304u) [[unlikely]] return; }
L_001BE304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BE330; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.f[13] = ld32((c.r[1].w[0] + 20000u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[4].w[0];
    c.f[14] = c.r[3].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE330u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 226u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001BE330u) [[unlikely]] return; }
L_001BE330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001BE33C; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_001BE33C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE344u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001BE344u) [[unlikely]] return; }
L_001BE344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF628; } }
L_001BE34C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001BE414; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001BE364; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001BE364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE36Cu); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BE36Cu) [[unlikely]] return; }
L_001BE36C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BE378; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BE378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE380u); c.f[12] = ld32((c.r[18].w[0] + 228u));  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001BE380u) [[unlikely]] return; }
L_001BE380:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st8((c.r[2].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 672u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 144u);  if (t) { goto L_001BE3C4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 676u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 164u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 164u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE3BCu); set32(c.r[6], 0u + 1100u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001BE3BCu) [[unlikely]] return; }
L_001BE3BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BF62C; } }
L_001BE3C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE3CCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BE3CCu) [[unlikely]] return; }
L_001BE3CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE3F8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[4].w[0];
    c.f[14] = c.r[3].w[0];
    c.f[13] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE3F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 226u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001BE3F8u) [[unlikely]] return; }
L_001BE3F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001BE404; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_001BE404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE40Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001BE40Cu) [[unlikely]] return; }
L_001BE40C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF628; } }
L_001BE414:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 15u);  if (t) { goto L_001BE48C; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001BE430; } }
    set32(c.r[6], c.r[6].w[0] + 436u);
    c.budget -= 1;
L_001BE430:
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE43Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002F(c, 16u, depth + 1u); else { c.pc = 0x001BD040u; return; } if (c.pc != 0x001BE43Cu) [[unlikely]] return; }
L_001BE43C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE444u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BE444u) [[unlikely]] return; }
L_001BE444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE470; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[4].w[0];
    c.f[14] = c.r[3].w[0];
    c.f[13] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE470u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 226u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001BE470u) [[unlikely]] return; }
L_001BE470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001BE47C; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_001BE47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE484u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001BE484u) [[unlikely]] return; }
L_001BE484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF628; } }
L_001BE48C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001BE500; } }
    st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[18].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[18].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE4C8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.budget -= 5;
L_001BE4C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[18].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE4E4; } }
    st32((c.r[2].w[0] + 228u), c.f[0]);
    c.budget -= 1;
L_001BE4E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40F00000u);
    st32((c.r[18].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xC0F00000u);  if (t) { goto L_001BF628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 232u), c.r[2].w[0]);  if (t) { goto L_001BF628; } }
L_001BE500:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 17u);  if (t) { goto L_001BE59C; } }
    st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[18].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[18].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[3] = c.r[2].w[0];
    st32((c.r[18].w[0] + 228u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    st32((c.r[3].w[0] + 228u), c.f[3]);
    st32((c.r[18].w[0] + 224u), c.f[2]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[18].w[0] + 232u), c.f[1]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 19912u));
    st32((c.r[18].w[0] + 212u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.f[0] = ld32((c.r[1].w[0] + 19912u));
    c.budget -= 36;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 212u), c.f[0]);  if (t) { goto L_001BF628; } }
L_001BE59C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[18].w[0] + 224u);  if (t) { goto L_001BE648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE5ACu);  if (depth < kMaxDepth) unit_0038(c, 65u, depth + 1u); else { c.pc = 0x001E0D30u; return; } if (c.pc != 0x001BE5ACu) [[unlikely]] return; }
L_001BE5AC:
    st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[18].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[18].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE5EC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 368u));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st8((c.r[2].w[0] + 368u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_001BE5EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[18].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE608; } }
    st32((c.r[2].w[0] + 228u), c.f[0]);
    c.budget -= 1;
L_001BE608:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[18].w[0] + 232u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    st32((c.r[18].w[0] + 212u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 368u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE628u); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BE628u) [[unlikely]] return; }
L_001BE628:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF628; } }
    c.r[5].d[0] = ld8((c.r[18].w[0] + 368u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE640u); set32(c.r[4], c.r[2].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BE640u) [[unlikely]] return; }
L_001BE640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF628; } }
L_001BE648:
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_001BE6C8; } }
    st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[18].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[18].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[18].w[0] + 232u), c.f[1]);
    st32((c.r[18].w[0] + 228u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF628; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 228u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 212u), c.f[0]);  if (t) { goto L_001BF628; } }
L_001BE6C8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[18].w[0] + 224u);  if (t) { goto L_001BE778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE6D8u);  if (depth < kMaxDepth) unit_0038(c, 65u, depth + 1u); else { c.pc = 0x001E0D30u; return; } if (c.pc != 0x001BE6D8u) [[unlikely]] return; }
L_001BE6D8:
    st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[18].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[18].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[18].w[0] + 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[18].w[0] + 228u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 368u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE70Cu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BE70Cu) [[unlikely]] return; }
L_001BE70C:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF628; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 228u), c.f[1]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 212u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 368u));
    set32(c.r[4], c.r[3].w[0] + 208u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE770u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BE770u) [[unlikely]] return; }
L_001BE770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF628; } }
L_001BE778:
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 21u);  if (t) { goto L_001BE7D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE78Cu); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BE78Cu) [[unlikely]] return; }
L_001BE78C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BE7B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.f[13] = ld32((c.r[1].w[0] + 20000u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[4].w[0];
    c.f[14] = c.r[3].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE7B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 226u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001BE7B8u) [[unlikely]] return; }
L_001BE7B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001BE7C4; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_001BE7C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE7CCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001BE7CCu) [[unlikely]] return; }
L_001BE7CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF628; } }
L_001BE7D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 144u);  if (t) { goto L_001BE82C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE7E4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BE7E4u) [[unlikely]] return; }
L_001BE7E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE810; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[4].w[0];
    c.f[14] = c.r[3].w[0];
    c.f[13] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE810u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 226u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001BE810u) [[unlikely]] return; }
L_001BE810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001BE81C; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_001BE81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE824u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001BE824u) [[unlikely]] return; }
L_001BE824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF628; } }
L_001BE82C:
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 40u);  if (t) { goto L_001BEA0C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.f[0] = ld32((c.r[18].w[0] + 212u));
    c.f[2] = ld32((c.r[2].w[0] + 212u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001BE858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_001BE85C; } }
L_001BE858:
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 1;
L_001BE85C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BE894; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 19992u));
    c.f[0] = 0u;
    c.f[2] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BE894; } }
    c.f[2] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_001BE894:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19912u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BE8AC; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001BE8AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[3], c.r[18].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 176u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], 0u - c.r[17].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE904u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001BE904u) [[unlikely]] return; }
L_001BE904:
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xC2000000u);  if (t) { goto L_001BE928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.f[0]);  if (t) { goto L_001BE940; } }
L_001BE928:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BE940; } }
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.budget -= 1;
L_001BE940:
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[1] = 0u;
    st32((c.r[18].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 224u), c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[18].w[0] + 212u), 0u);  if (t) { goto L_001BE96C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20000u));
    c.budget -= 2;
L_001BE96C:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[18].w[0] + 208u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[2].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 19800u));
    st32((c.r[18].w[0] + 232u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19944u));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE99Cu); st32((c.r[2].w[0] + 232u), c.f[0]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BE99Cu) [[unlikely]] return; }
L_001BE99C:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE9ACu); set32(c.r[4], c.r[2].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BE9ACu) [[unlikely]] return; }
L_001BE9AC:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 393u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[6], 0u - 2u);
    set32(c.r[5], c.r[2].w[0] << 3);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], 0u - 9u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[18].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[3].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[18].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001BF628; } }
L_001BEA0C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001BEC9C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[3], c.r[18].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 160u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], 0u - c.r[17].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA6Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001BEA6Cu) [[unlikely]] return; }
L_001BEA6C:
    set32(c.r[5], 0u - c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA78u); set32(c.r[4], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001BEA78u) [[unlikely]] return; }
L_001BEA78:
    c.f[1] = ld32((c.r[18].w[0] + 224u));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BEA90; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001BEA90:
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xC2000000u);  if (t) { goto L_001BEAB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.f[0]);  if (t) { goto L_001BEACC; } }
L_001BEAB4:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BEACC; } }
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.budget -= 1;
L_001BEACC:
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 4204u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BEB18; } }
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xC1980000u);  if (t) { goto L_001BEB00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.f[0]);  if (t) { goto L_001BEB18; } }
L_001BEB00:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BEB18; } }
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.budget -= 1;
L_001BEB18:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BEB84; } }
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], 0u + 5417u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 19912u));
    st32((c.r[18].w[0] + 212u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19920u));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[3].w[0] + 212u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0xC2140000u);  if (t) { goto L_001BEBE4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.f[0] = ld32((c.r[1].w[0] + 19912u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 212u), c.f[0]);  if (t) { goto L_001BEBE0; } }
L_001BEB84:
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], 0u + 5417u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 19920u));
    st32((c.r[18].w[0] + 212u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19912u));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[3].w[0] + 212u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BEBE0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.f[0] = ld32((c.r[1].w[0] + 19920u));
    st32((c.r[2].w[0] + 212u), c.f[0]);
    c.budget -= 3;
L_001BEBE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2140000u);
    c.budget -= 1;
L_001BEBE4:
    set32(c.r[4], c.r[18].w[0] + 208u);
    st32((c.r[18].w[0] + 232u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 232u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 228u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC08u); st32((c.r[2].w[0] + 228u), 0u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BEC08u) [[unlikely]] return; }
L_001BEC08:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC18u); set32(c.r[4], c.r[2].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BEC18u) [[unlikely]] return; }
L_001BEC18:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BEC28; } }
    set32(c.r[6], c.r[6].w[0] + 436u);
    c.budget -= 1;
L_001BEC28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC30u); set32(c.r[5], 0u + 255u);  if (depth < kMaxDepth) unit_002F(c, 16u, depth + 1u); else { c.pc = 0x001BD040u; return; } if (c.pc != 0x001BEC30u) [[unlikely]] return; }
L_001BEC30:
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 5417u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BF628; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 393u));
    set32(c.r[6], 0u - 2u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], 0u - 9u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[18].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[3].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[18].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001BF628; } }
L_001BEC9C:
    set32(c.r[2], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 42u);  if (t) { goto L_001BEDE8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[18].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 144u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], 0u - c.r[17].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED00u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001BED00u) [[unlikely]] return; }
L_001BED00:
    set32(c.r[5], 0u - c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED0Cu); set32(c.r[4], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001BED0Cu) [[unlikely]] return; }
L_001BED0C:
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0xC23C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1B80000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2180000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[18].w[0] + 208u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[6], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[6].w[0] + 224u), c.f[0]);
    st32((c.r[18].w[0] + 228u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[6].w[0] + 228u), c.r[7].w[0]);
    st32((c.r[18].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 232u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 212u), 0u);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED64u); st32((c.r[2].w[0] + 212u), c.f[0]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BED64u) [[unlikely]] return; }
L_001BED64:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED74u); set32(c.r[4], c.r[2].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BED74u) [[unlikely]] return; }
L_001BED74:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BED84; } }
    set32(c.r[6], c.r[6].w[0] + 436u);
    c.budget -= 1;
L_001BED84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED8Cu); set32(c.r[5], 0u + 255u);  if (depth < kMaxDepth) unit_002F(c, 16u, depth + 1u); else { c.pc = 0x001BD040u; return; } if (c.pc != 0x001BED8Cu) [[unlikely]] return; }
L_001BED8C:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 393u));
    set32(c.r[6], 0u - 2u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], 0u - 9u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[18].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[3].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[18].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001BF628; } }
L_001BEDE8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001BF064; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[18].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 128u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.f[0] = ld32((c.r[2].w[0] + 212u));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEE50u); st32((c.r[29].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_0038(c, 65u, depth + 1u); else { c.pc = 0x001E0D30u; return; } if (c.pc != 0x001BEE50u) [[unlikely]] return; }
L_001BEE50:
    st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[5], 0u - c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEE6Cu); st8((c.r[3].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001BEE6Cu) [[unlikely]] return; }
L_001BEE6C:
    set32(c.r[5], 0u - c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEE78u); set32(c.r[4], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001BEE78u) [[unlikely]] return; }
L_001BEE78:
    c.f[1] = ld32((c.r[18].w[0] + 224u));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001BEE90; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001BEE90:
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xC2000000u);  if (t) { goto L_001BEEB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 128u), c.f[0]);  if (t) { goto L_001BEECC; } }
L_001BEEB4:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BEECC; } }
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.budget -= 1;
L_001BEECC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BEF40; } }
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40F00000u);
    c.f[2] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 224u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[2].w[0] + 224u), c.f[1]);
    c.f[1] = ld32((c.r[1].w[0] + 19912u));
    st32((c.r[18].w[0] + 212u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BEF30; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.f[0] = ld32((c.r[1].w[0] + 19912u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 212u), c.f[0]);  if (t) { goto L_001BEFA8; } }
L_001BEF30:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.f[0] = ld32((c.r[1].w[0] + 19920u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 212u), c.f[0]);  if (t) { goto L_001BEFA8; } }
L_001BEF40:
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40F00000u);
    c.f[2] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[18].w[0] + 224u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[2].w[0] + 224u), c.f[1]);
    c.f[1] = ld32((c.r[1].w[0] + 19920u));
    st32((c.r[18].w[0] + 212u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BEF9C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.f[0] = ld32((c.r[1].w[0] + 19912u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 212u), c.f[0]);  if (t) { goto L_001BEFA8; } }
L_001BEF9C:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.f[0] = ld32((c.r[1].w[0] + 19920u));
    st32((c.r[2].w[0] + 212u), c.f[0]);
    c.budget -= 3;
L_001BEFA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2140000u);
    set32(c.r[4], c.r[18].w[0] + 208u);
    st32((c.r[18].w[0] + 232u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 232u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 228u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEFD0u); st32((c.r[2].w[0] + 228u), 0u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BEFD0u) [[unlikely]] return; }
L_001BEFD0:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEFE0u); set32(c.r[4], c.r[2].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001BEFE0u) [[unlikely]] return; }
L_001BEFE0:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BEFF0; } }
    set32(c.r[6], c.r[6].w[0] + 436u);
    c.budget -= 1;
L_001BEFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEFF8u); set32(c.r[5], 0u + 255u);  if (depth < kMaxDepth) unit_002F(c, 16u, depth + 1u); else { c.pc = 0x001BD040u; return; } if (c.pc != 0x001BEFF8u) [[unlikely]] return; }
L_001BEFF8:
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 4734u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BF628; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 393u));
    set32(c.r[6], 0u - 2u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], 0u - 9u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[18].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[3].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[18].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001BF628; } }
L_001BF064:
    set32(c.r[2], 0u + 43u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BF07C; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 44u);  if (t) { goto L_001BF254; } }
L_001BF07C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BF088; } }
    set32(c.r[6], c.r[6].w[0] + 436u);
    c.budget -= 1;
L_001BF088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF090u); set32(c.r[5], 0u + 255u);  if (depth < kMaxDepth) unit_002F(c, 16u, depth + 1u); else { c.pc = 0x001BD040u; return; } if (c.pc != 0x001BF090u) [[unlikely]] return; }
L_001BF090:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.f[0] = ld32((c.r[2].w[0] + 232u));
    c.f[13] = ld32((c.r[2].w[0] + 224u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF0A4u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0006(c, 219u, depth + 1u); else { c.pc = 0x0011A5D8u; return; } if (c.pc != 0x001BF0A4u) [[unlikely]] return; }
L_001BF0A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.f[2] = ld32((c.r[1].w[0] + 20000u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 19912u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[2].w[0] + 212u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    c.f[1] = ld32((c.r[2].w[0] + 212u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[2].w[0] + 212u);  if (t) { goto L_001BF0F4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19992u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_001BF114; } }
L_001BF0F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19984u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BF114; } }
    c.f[0] = ld32((c.r[1].w[0] + 19992u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 3;
L_001BF114:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    c.f[1] = ld32((c.r[2].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BF154; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19992u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 212u), c.f[0]);  if (t) { goto L_001BF174; } }
L_001BF154:
    c.f[0] = ld32((c.r[1].w[0] + 19984u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF174; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19992u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_001BF174:
    c.f[12] = ld32((c.r[18].w[0] + 212u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF180u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001BF180u) [[unlikely]] return; }
L_001BF180:
    set32(c.r[7], ld32((c.r[18].w[0] + 60u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC28B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC26E0000u);
    set32(c.r[2], 0u + 45u);
    st32((c.r[7].w[0] + 224u), 0u);
    st32((c.r[7].w[0] + 228u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 232u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 236u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 224u), 0u);
    st32((c.r[18].w[0] + 228u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 232u), c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st32((c.r[18].w[0] + 236u), c.r[4].w[0]);  if (t) { goto L_001BF1E8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC2780000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2900000u);
    st32((c.r[3].w[0] + 232u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.f[1] = ld32((c.r[18].w[0] + 212u));
    c.f[0] = ld32((c.r[2].w[0] + 212u));
    st32((c.r[18].w[0] + 212u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 212u), c.f[1]);
    c.budget -= 11;
L_001BF1E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 224u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[18].w[0] + 224u);
    set32(c.r[2], c.r[18].w[0] + 224u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[12]);  if (t) { goto L_001BF628; } }
L_001BF254:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001BF298; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001BF26C; } }
    set32(c.r[6], c.r[6].w[0] + 436u);
    c.budget -= 1;
L_001BF26C:
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF278u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_002F(c, 16u, depth + 1u); else { c.pc = 0x001BD040u; return; } if (c.pc != 0x001BF278u) [[unlikely]] return; }
L_001BF278:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BF288; } }
    set32(c.r[6], c.r[6].w[0] + 436u);
    c.budget -= 1;
L_001BF288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF290u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_002F(c, 16u, depth + 1u); else { c.pc = 0x001BD040u; return; } if (c.pc != 0x001BF290u) [[unlikely]] return; }
L_001BF290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF628; } }
L_001BF298:
    set32(c.r[2], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 51u);  if (t) { goto L_001BF370; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001BF2B4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001BF2B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF2BCu); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BF2BCu) [[unlikely]] return; }
L_001BF2BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BF2C8; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BF2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF2D0u); c.f[12] = ld32((c.r[18].w[0] + 228u));  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001BF2D0u) [[unlikely]] return; }
L_001BF2D0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st8((c.r[2].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 672u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 144u);  if (t) { goto L_001BF320; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 676u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 164u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 164u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF30Cu); set32(c.r[6], 0u + 1050u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001BF30Cu) [[unlikely]] return; }
L_001BF30C:
    set32(c.r[5], ld32((c.r[18].w[0] + 676u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF318u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 111u, depth + 1u); else { c.pc = 0x001CD650u; return; } if (c.pc != 0x001BF318u) [[unlikely]] return; }
L_001BF318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BF62C; } }
L_001BF320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF328u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BF328u) [[unlikely]] return; }
L_001BF328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF354; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[4].w[0];
    c.f[14] = c.r[3].w[0];
    c.f[13] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF354u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 226u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001BF354u) [[unlikely]] return; }
L_001BF354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001BF360; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_001BF360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF368u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001BF368u) [[unlikely]] return; }
L_001BF368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF628; } }
L_001BF370:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001BF444; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001BF388; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001BF388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF390u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BF390u) [[unlikely]] return; }
L_001BF390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BF39C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BF39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF3A4u); c.f[12] = ld32((c.r[18].w[0] + 228u));  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001BF3A4u) [[unlikely]] return; }
L_001BF3A4:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st8((c.r[2].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 672u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 144u);  if (t) { goto L_001BF3F4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 676u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 164u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 164u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF3E0u); set32(c.r[6], 0u + 1150u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001BF3E0u) [[unlikely]] return; }
L_001BF3E0:
    set32(c.r[5], ld32((c.r[18].w[0] + 676u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF3ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 111u, depth + 1u); else { c.pc = 0x001CD650u; return; } if (c.pc != 0x001BF3ECu) [[unlikely]] return; }
L_001BF3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BF62C; } }
L_001BF3F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF3FCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BF3FCu) [[unlikely]] return; }
L_001BF3FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BF428; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.f[13] = ld32((c.r[1].w[0] + 20000u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[4].w[0];
    c.f[14] = c.r[3].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF428u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 226u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001BF428u) [[unlikely]] return; }
L_001BF428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001BF434; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_001BF434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF43Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001BF43Cu) [[unlikely]] return; }
L_001BF43C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF628; } }
L_001BF444:
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_001BF510; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001BF460; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001BF460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF468u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BF468u) [[unlikely]] return; }
L_001BF468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BF474; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BF474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF47Cu); c.f[12] = ld32((c.r[18].w[0] + 228u));  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001BF47Cu) [[unlikely]] return; }
L_001BF47C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st8((c.r[2].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 672u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 144u);  if (t) { goto L_001BF4C0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 676u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 164u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 164u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF4B8u); set32(c.r[6], 0u + 1000u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001BF4B8u) [[unlikely]] return; }
L_001BF4B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BF62C; } }
L_001BF4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF4C8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BF4C8u) [[unlikely]] return; }
L_001BF4C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BF4F4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.f[13] = ld32((c.r[1].w[0] + 20000u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[4].w[0];
    c.f[14] = c.r[3].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF4F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 226u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001BF4F4u) [[unlikely]] return; }
L_001BF4F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001BF500; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_001BF500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF508u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001BF508u) [[unlikely]] return; }
L_001BF508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF628; } }
L_001BF510:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001BF5D8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001BF528; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001BF528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF530u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BF530u) [[unlikely]] return; }
L_001BF530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BF53C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BF53C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF544u); c.f[12] = ld32((c.r[18].w[0] + 228u));  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001BF544u) [[unlikely]] return; }
L_001BF544:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st8((c.r[2].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 672u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 144u);  if (t) { goto L_001BF588; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 676u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 164u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 164u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF580u); set32(c.r[6], 0u + 1100u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001BF580u) [[unlikely]] return; }
L_001BF580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BF62C; } }
L_001BF588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF590u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BF590u) [[unlikely]] return; }
L_001BF590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF5BC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[4].w[0];
    c.f[14] = c.r[3].w[0];
    c.f[13] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF5BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 226u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001BF5BCu) [[unlikely]] return; }
L_001BF5BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001BF5C8; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_001BF5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF5D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001BF5D0u) [[unlikely]] return; }
L_001BF5D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF628; } }
L_001BF5D8:
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 144u);  if (t) { goto L_001BF628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF5ECu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BF5ECu) [[unlikely]] return; }
L_001BF5EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF614; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF614u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_002F(c, 226u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001BF614u) [[unlikely]] return; }
L_001BF614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001BF620; } }
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_001BF620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF628u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001BF628u) [[unlikely]] return; }
L_001BF628:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BF62C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001BF650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 20035ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF674u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BF674u) [[unlikely]] return; }
L_001BF674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BF680; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BF680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF688u);  if (depth < kMaxDepth) unit_0033(c, 100u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x001BF688u) [[unlikely]] return; }
L_001BF688:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 400u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[16].w[0] + 392u), c.r[2].d[0]);  if (t) { goto L_001BF69C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001BF69C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF6A8u); c.r[5].d[0] = c.r[2].d[0] | 21580ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BF6A8u) [[unlikely]] return; }
L_001BF6A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF6B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001BF6BC; } }
L_001BF6B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BF6BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF6C8; } }
    st32((c.r[2].w[0] + 76u), 0u);
    c.budget -= 1;
L_001BF6C8:
    st16((c.r[16].w[0] + 562u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull & 1ull;
    st32((c.r[16].w[0] + 628u), 0u);
    set32(c.r[4], 0u - 2u);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 395u));
    set32(c.r[2], 0u - 33u);
    set32(c.r[3], c.r[5].w[0] << 5);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].sd[0] < 3500ll ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 5850ll ? 1ull : 0ull;  if (t) { goto L_001BF720; } }
    c.r[2].d[0] = c.r[3].sd[0] < 3700ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BF7CC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 5850ll ? 1ull : 0ull;
    c.budget -= 1;
L_001BF720:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 1620ll ? 1ull : 0ull;  if (t) { goto L_001BF738; } }
    c.r[2].d[0] = c.r[3].sd[0] < 5950ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BF7CC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 1620ll ? 1ull : 0ull;
    c.budget -= 1;
L_001BF738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 2600ll ? 1ull : 0ull;  if (t) { goto L_001BF750; } }
    c.r[2].d[0] = c.r[3].sd[0] < 1629ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BF7CC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2600ll ? 1ull : 0ull;
    c.budget -= 1;
L_001BF750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 1570ll ? 1ull : 0ull;  if (t) { goto L_001BF768; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2699ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BF7CC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 1570ll ? 1ull : 0ull;
    c.budget -= 1;
L_001BF768:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001BF77C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 1583ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BF7CC; } }
L_001BF77C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF784u);  if (depth < kMaxDepth) unit_0034(c, 90u, depth + 1u); else { c.pc = 0x001D0BC0u; return; } if (c.pc != 0x001BF784u) [[unlikely]] return; }
L_001BF784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001BF7CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF794u);  if (depth < kMaxDepth) unit_0034(c, 135u, depth + 1u); else { c.pc = 0x001D1520u; return; } if (c.pc != 0x001BF794u) [[unlikely]] return; }
L_001BF794:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001BF7CC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001BF7A8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001BF7A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF7B0u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BF7B0u) [[unlikely]] return; }
L_001BF7B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BF7BC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BF7BC:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF7CCu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001BF7CCu) [[unlikely]] return; }
L_001BF7CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 1264u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF7E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BF7E0u) [[unlikely]] return; }
L_001BF7E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1268u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF7F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BF7F4u) [[unlikely]] return; }
L_001BF7F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF7FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 238u, depth + 1u); else { c.pc = 0x001D36A0u; return; } if (c.pc != 0x001BF7FCu) [[unlikely]] return; }
L_001BF7FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF818; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001BF820; } }
L_001BF818:
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001BF820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF828u);  if (depth < kMaxDepth) unit_0034(c, 153u, depth + 1u); else { c.pc = 0x001D18D0u; return; } if (c.pc != 0x001BF828u) [[unlikely]] return; }
L_001BF828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF84C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);  if (t) { goto L_001BF850; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 764u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 764u), c.r[2].w[0]);
    c.budget -= 3;
L_001BF84C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    c.budget -= 1;
L_001BF850:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF85Cu); c.r[5].d[0] = c.r[2].d[0] | 20304ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BF85Cu) [[unlikely]] return; }
L_001BF85C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001BF868; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BF868:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001BF8D0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001BF8D0; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF894u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0033(c, 36u, depth + 1u); else { c.pc = 0x001CC810u; return; } if (c.pc != 0x001BF894u) [[unlikely]] return; }
L_001BF894:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8A8u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0033(c, 36u, depth + 1u); else { c.pc = 0x001CC810u; return; } if (c.pc != 0x001BF8A8u) [[unlikely]] return; }
L_001BF8A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 210u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8BCu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0033(c, 36u, depth + 1u); else { c.pc = 0x001CC810u; return; } if (c.pc != 0x001BF8BCu) [[unlikely]] return; }
L_001BF8BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8D0u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0033(c, 36u, depth + 1u); else { c.pc = 0x001CC810u; return; } if (c.pc != 0x001BF8D0u) [[unlikely]] return; }
L_001BF8D0:
    set32(c.r[5], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8E0u); set32(c.r[4], ld32((c.r[16].w[0] + 164u)));  if (depth < kMaxDepth) unit_002F(c, 13u, depth + 1u); else { c.pc = 0x001BC5E0u; return; } if (c.pc != 0x001BF8E0u) [[unlikely]] return; }
L_001BF8E0:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 392u));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[16].w[0] + 392u), c.r[2].d[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 397u));
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BF924; } }
    c.r[2].d[0] = c.r[3].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BF924; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001BF940; } }
L_001BF924:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 394u));
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
L_001BF940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF948u);  if (depth < kMaxDepth) unit_0034(c, 202u, depth + 1u); else { c.pc = 0x001D2BF0u; return; } if (c.pc != 0x001BF948u) [[unlikely]] return; }
L_001BF948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF968; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 394u));
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001BF968:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].sd[0] < 5950ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 15110ll ? 1ull : 0ull;  if (t) { goto L_001BF988; } }
    c.r[3].d[0] = c.r[4].sd[0] < 6250ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BF9A4; } }
    c.r[3].d[0] = c.r[4].sd[0] < 15110ll ? 1ull : 0ull;
    c.budget -= 1;
L_001BF988:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 15490u);  if (t) { goto L_001BF99C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 15150ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BF9A4; } }
L_001BF99C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001BF9D0; } }
L_001BF9A4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 370u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001BF9D0; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_001BF9D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BF9F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA24u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x001BFA24u) [[unlikely]] return; }
L_001BFA24:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA30u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x001BFA30u) [[unlikely]] return; }
L_001BFA30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54410000u);
    set32(c.r[4], c.r[18].w[0] + 24u);
    c.r[5].d[0] = c.r[2].d[0] | 21076ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA44u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001BFA44u) [[unlikely]] return; }
L_001BFA44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 9616u);
    set32(c.r[2], c.r[2].w[0] - 9600u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 9584u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 96u), c.f[21]);
    st32((c.r[18].w[0] + 52u), c.f[20]);
    st32((c.r[18].w[0] + 60u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 64u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 56u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BFAA0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[17], c.r[2].w[0] + 208u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFADCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 48u, depth + 1u); else { c.pc = 0x00144FA0u; return; } if (c.pc != 0x001BFADCu) [[unlikely]] return; }
L_001BFADC:
    ld128((c.r[17].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
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
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.f[3] = ld32((c.r[3].w[0] + 224u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[2].w[0] + 224u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.f[2] = ld32((c.r[3].w[0] + 232u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 232u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.f[13] = ld32((c.r[1].w[0] + 19792u));
    c.f[1] = ld32((c.r[2].w[0] + 212u));
    set32(c.r[4], c.r[3].w[0] + 212u);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB84u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x001BFB84u) [[unlikely]] return; }
L_001BFB84:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001BFC3C; } }
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[3].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[3].w[0] + 232u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.f[1] = ld32((c.r[4].w[0] + 212u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 212u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    c.f[1] = ld32((c.r[3].w[0] + 212u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[3].w[0] + 212u);  if (t) { goto L_001BFC00; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19992u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { goto L_001BFC20; } }
L_001BFC00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19984u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BFC20; } }
    c.f[0] = ld32((c.r[1].w[0] + 19992u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 3;
L_001BFC20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001BFC3C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC3Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BFC3Cu) [[unlikely]] return; }
L_001BFC3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001BFC50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BFCCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 9616u);
    set32(c.r[3], c.r[3].w[0] - 9600u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 9584u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC9Cu); st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001BFC9Cu) [[unlikely]] return; }
L_001BFC9C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFCA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x001BFCA8u) [[unlikely]] return; }
L_001BFCA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFCB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x001BFCB4u) [[unlikely]] return; }
L_001BFCB4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001BFCD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFCCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001BFCCCu) [[unlikely]] return; }
L_001BFCCC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BFCD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BFCF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD2Cu); c.f[20] = c.f[14];  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x001BFD2Cu) [[unlikely]] return; }
L_001BFD2C:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD38u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x001BFD38u) [[unlikely]] return; }
L_001BFD38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D590000u);
    set32(c.r[4], c.r[18].w[0] + 24u);
    c.r[5].d[0] = c.r[2].d[0] | 21076ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD4Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001BFD4Cu) [[unlikely]] return; }
L_001BFD4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 9680u);
    set32(c.r[3], c.r[3].w[0] - 9664u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 9648u);
    set32(c.r[3], c.r[18].w[0] + 80u);
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[18].w[0] + 96u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    ld128((c.r[17].w[0] + 208u) & ~15u, c.r[2]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[22]));
    st128((c.r[18].w[0] + 80u) & ~15u, c.r[2]);
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[18].w[0] + 96u) & ~15u, c.r[2]);  if (t) { goto L_001BFDA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = ld32((c.r[17].w[0] + 212u));  if (t) { goto L_001BFE20; } }
L_001BFDA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[22]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[17].w[0] + 224u);  if (t) { goto L_001BFDC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = ld32((c.r[17].w[0] + 212u));  if (t) { goto L_001BFE20; } }
L_001BFDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFDD0u); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001BFDD0u) [[unlikely]] return; }
L_001BFDD0:
    c.f[22] = fp::add(c.f[22], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[18].w[0] + 84u), c.f[22]);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BFE00; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19992u));
    c.f[0] = fp::sub(c.f[22], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), c.f[0]);  if (t) { goto L_001BFE20; } }
L_001BFE00:
    c.f[0] = ld32((c.r[1].w[0] + 19984u));
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::add(c.f[22], c.f[21]);  if (t) { goto L_001BFE24; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19992u));
    c.f[0] = fp::add(c.f[22], c.f[0]);
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.budget -= 4;
L_001BFE20:
    c.f[1] = fp::add(c.f[22], c.f[21]);
    c.budget -= 1;
L_001BFE24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[18].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 20000u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BFE50; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19992u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 128u), c.f[0]);  if (t) { goto L_001BFE70; } }
L_001BFE50:
    c.f[0] = ld32((c.r[1].w[0] + 19984u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BFE70; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 19992u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 128u), c.f[0]);
    c.budget -= 4;
L_001BFE70:
    st32((c.r[18].w[0] + 52u), c.f[20]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 64u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 68u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 56u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BFEC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 224u));
    st32((c.r[4].w[0] + 96u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.f[0] = ld32((c.r[2].w[0] + 232u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF04u); st32((c.r[29].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 48u, depth + 1u); else { c.pc = 0x00144FA0u; return; } if (c.pc != 0x001BFF04u) [[unlikely]] return; }
L_001BFF04:
    ld128((c.r[16].w[0] + 96u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[1] = ld32((c.r[1].w[0] + 19784u));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    c.f[3] = ld32((c.r[3].w[0] + 224u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[2].w[0] + 224u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 224u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[1] = ld32((c.r[1].w[0] + 19784u));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[3] = ld32((c.r[3].w[0] + 232u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[2].w[0] + 232u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 232u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.f[12] = ld32((c.r[16].w[0] + 84u));
    c.f[13] = ld32((c.r[1].w[0] + 19960u));
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFFB0u); set32(c.r[4], c.r[2].w[0] + 212u);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x001BFFB0u) [[unlikely]] return; }
L_001BFFB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[1].w[0] + 19960u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFFC8u); set32(c.r[4], c.r[2].w[0] + 212u);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x001BFFC8u) [[unlikely]] return; }
L_001BFFC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001BFFF8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0030(c, 3u, depth); } }
L_001BFFF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0030(c, 5u, depth); } }
    [[clang::musttail]] return unit_0030(c, 1u, depth);
}

}
