#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A7[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0,
    0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112,
    0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 165, 0, 166, 167, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223,
    0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0,
    0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 247, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 255, 0, 0, 256, 0, 257, 0, 0, 258, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0,
    0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306,
};

void unit_00A7(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0039C000;
    case 2u: goto L_0039C07C;
    case 3u: goto L_0039C088;
    case 4u: goto L_0039C094;
    case 5u: goto L_0039C0A4;
    case 6u: goto L_0039C0C0;
    case 7u: goto L_0039C104;
    case 8u: goto L_0039C120;
    case 9u: goto L_0039C130;
    case 10u: goto L_0039C1D8;
    case 11u: goto L_0039C2F0;
    case 12u: goto L_0039C3B8;
    case 13u: goto L_0039C3C0;
    case 14u: goto L_0039C3E0;
    case 15u: goto L_0039C3FC;
    case 16u: goto L_0039C40C;
    case 17u: goto L_0039C424;
    case 18u: goto L_0039C430;
    case 19u: goto L_0039C45C;
    case 20u: goto L_0039C464;
    case 21u: goto L_0039C480;
    case 22u: goto L_0039C620;
    case 23u: goto L_0039C6E4;
    case 24u: goto L_0039C780;
    case 25u: goto L_0039C87C;
    case 26u: goto L_0039C8D0;
    case 27u: goto L_0039C934;
    case 28u: goto L_0039C980;
    case 29u: goto L_0039C990;
    case 30u: goto L_0039C9F0;
    case 31u: goto L_0039CA10;
    case 32u: goto L_0039CA34;
    case 33u: goto L_0039CAC0;
    case 34u: goto L_0039CAE8;
    case 35u: goto L_0039CB58;
    case 36u: goto L_0039CBC0;
    case 37u: goto L_0039CC50;
    case 38u: goto L_0039CC88;
    case 39u: goto L_0039CCB4;
    case 40u: goto L_0039CEA0;
    case 41u: goto L_0039CEB0;
    case 42u: goto L_0039CEC4;
    case 43u: goto L_0039CF00;
    case 44u: goto L_0039CF48;
    case 45u: goto L_0039CF70;
    case 46u: goto L_0039CFB8;
    case 47u: goto L_0039CFC4;
    case 48u: goto L_0039CFE0;
    case 49u: goto L_0039D004;
    case 50u: goto L_0039D090;
    case 51u: goto L_0039D0B4;
    case 52u: goto L_0039D13C;
    case 53u: goto L_0039D168;
    case 54u: goto L_0039D180;
    case 55u: goto L_0039D1A0;
    case 56u: goto L_0039D1B4;
    case 57u: goto L_0039D4A0;
    case 58u: goto L_0039D4C8;
    case 59u: goto L_0039D500;
    case 60u: goto L_0039D54C;
    case 61u: goto L_0039D55C;
    case 62u: goto L_0039D574;
    case 63u: goto L_0039D590;
    case 64u: goto L_0039D5D8;
    case 65u: goto L_0039D5EC;
    case 66u: goto L_0039D600;
    case 67u: goto L_0039D614;
    case 68u: goto L_0039D68C;
    case 69u: goto L_0039D69C;
    case 70u: goto L_0039D6AC;
    case 71u: goto L_0039D6D4;
    case 72u: goto L_0039D6F0;
    case 73u: goto L_0039D700;
    case 74u: goto L_0039D710;
    case 75u: goto L_0039D720;
    case 76u: goto L_0039D770;
    case 77u: goto L_0039D788;
    case 78u: goto L_0039D7A8;
    case 79u: goto L_0039D7D4;
    case 80u: goto L_0039D7DC;
    case 81u: goto L_0039D850;
    case 82u: goto L_0039D860;
    case 83u: goto L_0039D87C;
    case 84u: goto L_0039D91C;
    case 85u: goto L_0039D970;
    case 86u: goto L_0039D9B8;
    case 87u: goto L_0039D9D0;
    case 88u: goto L_0039D9E0;
    case 89u: goto L_0039DA2C;
    case 90u: goto L_0039DA44;
    case 91u: goto L_0039DA54;
    case 92u: goto L_0039DA78;
    case 93u: goto L_0039DA88;
    case 94u: goto L_0039DAA0;
    case 95u: goto L_0039DAE0;
    case 96u: goto L_0039DAF8;
    case 97u: goto L_0039DB0C;
    case 98u: goto L_0039DB24;
    case 99u: goto L_0039DB34;
    case 100u: goto L_0039DB70;
    case 101u: goto L_0039DB88;
    case 102u: goto L_0039DBA0;
    case 103u: goto L_0039DBB4;
    case 104u: goto L_0039DC00;
    case 105u: goto L_0039DC18;
    case 106u: goto L_0039DCB4;
    case 107u: goto L_0039DD38;
    case 108u: goto L_0039DDA4;
    case 109u: goto L_0039DE3C;
    case 110u: goto L_0039DEB4;
    case 111u: goto L_0039DEE0;
    case 112u: goto L_0039DEFC;
    case 113u: goto L_0039DF18;
    case 114u: goto L_0039DF2C;
    case 115u: goto L_0039DF34;
    case 116u: goto L_0039DF3C;
    case 117u: goto L_0039DF98;
    case 118u: goto L_0039DFFC;
    case 119u: goto L_0039E074;
    case 120u: goto L_0039E13C;
    case 121u: goto L_0039E170;
    case 122u: goto L_0039E1B4;
    case 123u: goto L_0039E200;
    case 124u: goto L_0039E258;
    case 125u: goto L_0039E2F0;
    case 126u: goto L_0039E30C;
    case 127u: goto L_0039E318;
    case 128u: goto L_0039E324;
    case 129u: goto L_0039E350;
    case 130u: goto L_0039E370;
    case 131u: goto L_0039E390;
    case 132u: goto L_0039E3B0;
    case 133u: goto L_0039E3CC;
    case 134u: goto L_0039E3E8;
    case 135u: goto L_0039E400;
    case 136u: goto L_0039E414;
    case 137u: goto L_0039E444;
    case 138u: goto L_0039E470;
    case 139u: goto L_0039E490;
    case 140u: goto L_0039E4DC;
    case 141u: goto L_0039E508;
    case 142u: goto L_0039E548;
    case 143u: goto L_0039E56C;
    case 144u: goto L_0039E584;
    case 145u: goto L_0039E59C;
    case 146u: goto L_0039E5A8;
    case 147u: goto L_0039E5B4;
    case 148u: goto L_0039E5C0;
    case 149u: goto L_0039E5CC;
    case 150u: goto L_0039E5E4;
    case 151u: goto L_0039E610;
    case 152u: goto L_0039E640;
    case 153u: goto L_0039E654;
    case 154u: goto L_0039E65C;
    case 155u: goto L_0039E66C;
    case 156u: goto L_0039E680;
    case 157u: goto L_0039E6C8;
    case 158u: goto L_0039E6E0;
    case 159u: goto L_0039E6FC;
    case 160u: goto L_0039E728;
    case 161u: goto L_0039E730;
    case 162u: goto L_0039E744;
    case 163u: goto L_0039E7A4;
    case 164u: goto L_0039E7B0;
    case 165u: goto L_0039E7B8;
    case 166u: goto L_0039E7C0;
    case 167u: goto L_0039E7C4;
    case 168u: goto L_0039E7CC;
    case 169u: goto L_0039E7E4;
    case 170u: goto L_0039E808;
    case 171u: goto L_0039E81C;
    case 172u: goto L_0039E828;
    case 173u: goto L_0039E830;
    case 174u: goto L_0039E850;
    case 175u: goto L_0039E890;
    case 176u: goto L_0039E8C0;
    case 177u: goto L_0039E908;
    case 178u: goto L_0039E924;
    case 179u: goto L_0039E954;
    case 180u: goto L_0039E99C;
    case 181u: goto L_0039E9BC;
    case 182u: goto L_0039E9E0;
    case 183u: goto L_0039EA90;
    case 184u: goto L_0039EAAC;
    case 185u: goto L_0039EAD0;
    case 186u: goto L_0039EB80;
    case 187u: goto L_0039EB88;
    case 188u: goto L_0039EC08;
    case 189u: goto L_0039EC2C;
    case 190u: goto L_0039EC68;
    case 191u: goto L_0039ECA4;
    case 192u: goto L_0039ECC8;
    case 193u: goto L_0039ED14;
    case 194u: goto L_0039ED20;
    case 195u: goto L_0039ED40;
    case 196u: goto L_0039ED50;
    case 197u: goto L_0039ED80;
    case 198u: goto L_0039ED90;
    case 199u: goto L_0039EDF0;
    case 200u: goto L_0039EE24;
    case 201u: goto L_0039EE2C;
    case 202u: goto L_0039EE70;
    case 203u: goto L_0039EE80;
    case 204u: goto L_0039EED4;
    case 205u: goto L_0039EF18;
    case 206u: goto L_0039EF70;
    case 207u: goto L_0039EF80;
    case 208u: goto L_0039EFA8;
    case 209u: goto L_0039F0B4;
    case 210u: goto L_0039F114;
    case 211u: goto L_0039F148;
    case 212u: goto L_0039F180;
    case 213u: goto L_0039F1AC;
    case 214u: goto L_0039F230;
    case 215u: goto L_0039F41C;
    case 216u: goto L_0039F430;
    case 217u: goto L_0039F450;
    case 218u: goto L_0039F470;
    case 219u: goto L_0039F49C;
    case 220u: goto L_0039F4C4;
    case 221u: goto L_0039F4D4;
    case 222u: goto L_0039F4E8;
    case 223u: goto L_0039F4FC;
    case 224u: goto L_0039F50C;
    case 225u: goto L_0039F514;
    case 226u: goto L_0039F534;
    case 227u: goto L_0039F55C;
    case 228u: goto L_0039F570;
    case 229u: goto L_0039F590;
    case 230u: goto L_0039F5A0;
    case 231u: goto L_0039F5B0;
    case 232u: goto L_0039F5C0;
    case 233u: goto L_0039F5D0;
    case 234u: goto L_0039F604;
    case 235u: goto L_0039F618;
    case 236u: goto L_0039F620;
    case 237u: goto L_0039F634;
    case 238u: goto L_0039F640;
    case 239u: goto L_0039F66C;
    case 240u: goto L_0039F690;
    case 241u: goto L_0039F6C8;
    case 242u: goto L_0039F6F0;
    case 243u: goto L_0039F710;
    case 244u: goto L_0039F728;
    case 245u: goto L_0039F750;
    case 246u: goto L_0039F774;
    case 247u: goto L_0039F778;
    case 248u: goto L_0039F7A4;
    case 249u: goto L_0039F7D0;
    case 250u: goto L_0039F890;
    case 251u: goto L_0039F8A0;
    case 252u: goto L_0039F8C0;
    case 253u: goto L_0039F8C8;
    case 254u: goto L_0039F8D0;
    case 255u: goto L_0039F8D8;
    case 256u: goto L_0039F8E4;
    case 257u: goto L_0039F8EC;
    case 258u: goto L_0039F8F8;
    case 259u: goto L_0039F900;
    case 260u: goto L_0039F924;
    case 261u: goto L_0039F9BC;
    case 262u: goto L_0039FA44;
    case 263u: goto L_0039FAD8;
    case 264u: goto L_0039FB10;
    case 265u: goto L_0039FB44;
    case 266u: goto L_0039FB4C;
    case 267u: goto L_0039FB78;
    case 268u: goto L_0039FBA0;
    case 269u: goto L_0039FBD8;
    case 270u: goto L_0039FBF4;
    case 271u: goto L_0039FC10;
    case 272u: goto L_0039FC1C;
    case 273u: goto L_0039FC28;
    case 274u: goto L_0039FC34;
    case 275u: goto L_0039FC4C;
    case 276u: goto L_0039FC70;
    case 277u: goto L_0039FC90;
    case 278u: goto L_0039FCB4;
    case 279u: goto L_0039FCC0;
    case 280u: goto L_0039FCCC;
    case 281u: goto L_0039FCE0;
    case 282u: goto L_0039FCF4;
    case 283u: goto L_0039FD00;
    case 284u: goto L_0039FD20;
    case 285u: goto L_0039FD3C;
    case 286u: goto L_0039FD44;
    case 287u: goto L_0039FD58;
    case 288u: goto L_0039FD70;
    case 289u: goto L_0039FD84;
    case 290u: goto L_0039FDB0;
    case 291u: goto L_0039FDF0;
    case 292u: goto L_0039FE00;
    case 293u: goto L_0039FE18;
    case 294u: goto L_0039FE30;
    case 295u: goto L_0039FE60;
    case 296u: goto L_0039FEA0;
    case 297u: goto L_0039FEB0;
    case 298u: goto L_0039FEDC;
    case 299u: goto L_0039FEF8;
    case 300u: goto L_0039FF08;
    case 301u: goto L_0039FF1C;
    case 302u: goto L_0039FF48;
    case 303u: goto L_0039FF70;
    case 304u: goto L_0039FFBC;
    case 305u: goto L_0039FFDC;
    case 306u: goto L_0039FFFC;
    default: bad_entry(c, 0x0039C000u); return;
    }
L_0039C000:
    set32(c.r[17], c.r[29].w[0] + 88u);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[16], c.r[29].w[0] + 92u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[16].w[0]), 0u);  if (t) { goto L_0039C038; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 420u)));
    set32(c.r[3], c.r[29].w[0] + 84u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 428u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 424u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0039C070; } }
L_0039C038:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0039C054; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 424u)));
    set32(c.r[3], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0039C070; } }
L_0039C054:
    set32(c.r[2], ld32((c.r[29].w[0] + 428u)));
    set32(c.r[3], c.r[29].w[0] + 84u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 420u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 424u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_0039C070:
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C07Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 72u, depth + 1u); else { c.pc = 0x0039D6F0u; return; } if (c.pc != 0x0039C07Cu) [[unlikely]] return; }
L_0039C07C:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C088u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A7(c, 72u, depth + 1u); else { c.pc = 0x0039D6F0u; return; } if (c.pc != 0x0039C088u) [[unlikely]] return; }
L_0039C088:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C094u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A7(c, 72u, depth + 1u); else { c.pc = 0x0039D6F0u; return; } if (c.pc != 0x0039C094u) [[unlikely]] return; }
L_0039C094:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C0A4u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00A7(c, 6u, depth + 1u); else { c.pc = 0x0039C0C0u; return; } if (c.pc != 0x0039C0A4u) [[unlikely]] return; }
L_0039C0A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 432u);  c.pc = t; return; }
L_0039C0C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0039C0FC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0039C0FC; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0039C0FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C104u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0039C104u) [[unlikely]] return; }
L_0039C104:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0039C128; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C120u);  if (depth < kMaxDepth) unit_008E(c, 376u, depth + 1u); else { c.pc = 0x0033B750u; return; } if (c.pc != 0x0039C120u) [[unlikely]] return; }
L_0039C120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 49u);  if (t) { goto L_0039C144; } }
L_0039C128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C130u); set32(c.r[4], c.r[4].w[0] + 8896u);  if (depth < kMaxDepth) unit_000B(c, 149u, depth + 1u); else { c.pc = 0x0012D650u; return; } if (c.pc != 0x0039C130u) [[unlikely]] return; }
L_0039C130:
    set32(c.r[4], 0u + 49u);
    set32(c.r[3], 0u + 51u);
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 49u);
    c.budget -= 5;
L_0039C144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 5130u);  if (t) { goto L_0039C150; } }
    set32(c.r[3], 0u + 4930u);
    c.budget -= 1;
L_0039C150:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], 0u + 25500u);
    set32(c.r[4], ld32((c.r[1].w[0] - 13004u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0039C168; } }
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0039C168:
    set32(c.r[2], 0u + 84u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 8384u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0039C17C; } }
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0039C17C:
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0039C194; } }
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0039C1C8; } }
L_0039C194:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0039C1CC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0039C1B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0039C1C8; } }
L_0039C1B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0039C1C8; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0039C1C8:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039C1CC:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[11], 0u + 25500u);  if (t) { goto L_0039C2D8; } }
L_0039C1D8:
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[4].w[0] + 36u);
    c.r[5].d[0] = ld16((c.r[5].w[0] + 10u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);  if (t) { goto L_0039C1F8; } }
    breakpoint(c, 0x0039C1F4u);
    c.budget -= 1;
L_0039C1F8:
    c.r[13].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[4].w[0] + 40u);
    set32(c.r[12], c.r[13].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 1);
    st32((c.r[6].w[0]), c.r[12].w[0]);
    set32(c.r[12], ld32((c.r[18].w[0] + 4u)));
    c.r[12].d[0] = ld16((c.r[12].w[0] + 10u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[12].w[0], c.r[2].w[0]);  if (t) { goto L_0039C224; } }
    breakpoint(c, 0x0039C220u);
    c.budget -= 1;
L_0039C224:
    c.r[13].d[0] = c.lo.d[0];
    set32(c.r[12], c.r[13].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[10].d[0] == 0ull; st32((c.r[5].w[0]), c.r[12].w[0]);  if (t) { goto L_0039C254; } }
    set32(c.r[12], ld32((c.r[6].w[0])));
    set32(c.r[12], c.r[12].w[0] + 3u);
    st32((c.r[6].w[0]), c.r[12].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] + 3u);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 6;
L_0039C254:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_0039C288; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[5].d[0] = ld16((c.r[5].w[0] + 10u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);  if (t) { goto L_0039C270; } }
    breakpoint(c, 0x0039C26Cu);
    c.budget -= 1;
L_0039C270:
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 44u), c.r[5].w[0]);  if (t) { goto L_0039C28C; } }
L_0039C288:
    st32((c.r[4].w[0] + 44u), c.r[11].w[0]);
    c.budget -= 1;
L_0039C28C:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0039C2C0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.r[5].d[0] = ld16((c.r[5].w[0] + 10u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);  if (t) { goto L_0039C2A8; } }
    breakpoint(c, 0x0039C2A4u);
    c.budget -= 1;
L_0039C2A8:
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 48u), c.r[5].w[0]);  if (t) { goto L_0039C2C4; } }
L_0039C2C0:
    st32((c.r[4].w[0] + 48u), c.r[11].w[0]);
    c.budget -= 1;
L_0039C2C4:
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[4].w[0] + 56u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 60u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[11].w[0]);
    c.budget -= 5;
L_0039C2D8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C1D8u | kUnwind; return; } goto L_0039C1D8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[5].w[0] + 8384u);
    c.budget -= 2;
L_0039C2F0:
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 266u));
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[3].w[0] + 64u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C2F0u | kUnwind; return; } goto L_0039C2F0; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_0039C350; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], 0u + 200u);
    set32(c.r[2], 0u + 300u);
    st16((c.r[1].w[0] + 8650u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[1].w[0] + 8682u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[1].w[0] + 8714u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 8746u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0039C37C; } }
L_0039C350:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 25500u);
    st16((c.r[1].w[0] + 8650u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[1].w[0] + 8682u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[1].w[0] + 8714u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[1].w[0] + 8746u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
L_0039C37C:
    set32(c.r[3], 0u + 400u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[1].w[0] + 8778u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 25500u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], 0u + 1u);
    st16((c.r[1].w[0] + 8810u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[1].w[0] + 8842u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[1].w[0] + 8874u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C3B8u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0039C3B8u) [[unlikely]] return; }
L_0039C3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C3C0u);  if (depth < kMaxDepth) unit_00A6(c, 420u, depth + 1u); else { c.pc = 0x0039BE00u; return; } if (c.pc != 0x0039C3C0u) [[unlikely]] return; }
L_0039C3C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 25657u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0039C404; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C3E0u); st8((c.r[1].w[0] + 25657u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039C3E0u) [[unlikely]] return; }
L_0039C3E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0039C428; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C3FCu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0069(c, 366u, depth + 1u); else { c.pc = 0x002A7A20u; return; } if (c.pc != 0x0039C3FCu) [[unlikely]] return; }
L_0039C3FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039C424; } }
L_0039C404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C40Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039C40Cu) [[unlikely]] return; }
L_0039C40C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_0039C424; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C424u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 366u, depth + 1u); else { c.pc = 0x002A7A20u; return; } if (c.pc != 0x0039C424u) [[unlikely]] return; }
L_0039C424:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039C428:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] + 8384u);
    c.budget -= 2;
L_0039C430:
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[5].d[0] = ld16((c.r[5].w[0] + 64u));
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[3].w[0] + 266u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C430u | kUnwind; return; } goto L_0039C430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C45Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 87u, depth + 1u); else { c.pc = 0x0039D9D0u; return; } if (c.pc != 0x0039C45Cu) [[unlikely]] return; }
L_0039C45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C464u); set32(c.r[4], ld32((c.r[29].w[0] + 92u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0039C464u) [[unlikely]] return; }
L_0039C464:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0039C480:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 9256u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039C4A4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 13000u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0039C4AC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0039C4A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039C60C; } }
L_0039C4AC:
    set32(c.r[3], 0u + 59u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8384u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 60u);  if (t) { goto L_0039C5D4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0039C5B8; } }
    set32(c.r[3], 0u + 58u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 82u);  if (t) { goto L_0039C5B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039C5A8; } }
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 38u);  if (t) { goto L_0039C5A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039C5A8; } }
    set32(c.r[3], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 36u);  if (t) { goto L_0039C5A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039C5A8; } }
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 34u);  if (t) { goto L_0039C5A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039C5A8; } }
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 32u);  if (t) { goto L_0039C5A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039C5A8; } }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 30u);  if (t) { goto L_0039C5A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039C5A8; } }
    set32(c.r[3], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 28u);  if (t) { goto L_0039C5A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039C5A8; } }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 21u);  if (t) { goto L_0039C5A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039C5A8; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 19u);  if (t) { goto L_0039C5A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039C5A8; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 17u);  if (t) { goto L_0039C5A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039C5A8; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 13u);  if (t) { goto L_0039C5A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039C5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_0039C5F4; } }
L_0039C5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039C60C; } }
L_0039C5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0039C60C; } }
L_0039C5B8:
    set32(c.r[2], 0u + 23u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9076u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0039C5CC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0039C5CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039C60C; } }
L_0039C5D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9076u)));
    c.r[1].d[0] = c.r[2].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039C5EC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0039C5EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039C60C; } }
L_0039C5F4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] - 13072u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039C60C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0039C60C; } }
L_0039C60C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039C620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9072u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9073u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 25657u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039C658; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_0039C658:
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[6], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 8384u);
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[6], c.r[4].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] + 256u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[16].w[0]), c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + 256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[8].d[0] = ld8((c.r[1].w[0] + 25657u));
    c.budget -= 21;
    { const bool t = c.r[8].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0039C6D8; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039C8B8; } }
L_0039C6D8:
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 25500u);
    set32(c.r[2], c.r[12].w[0] << 5);
    c.budget -= 3;
L_0039C6E4:
    set32(c.r[11], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[11].w[0] + 266u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[9].d[0];  if (t) { goto L_0039C748; } }
    set32(c.r[2], ld32((c.r[11].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039C748; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 265u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[2].d[0]; set32(c.r[10], c.r[11].w[0] + 265u);  if (t) { goto L_0039C724; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_0039C724; } }
    set32(c.r[2], c.r[11].w[0] + 256u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_0039C724:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_0039C748; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_0039C748; } }
    set32(c.r[2], c.r[11].w[0] + 256u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0039C748:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[2].d[0] = c.r[12].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[12].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C6E4u | kUnwind; return; } goto L_0039C6E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 13040u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[10], 0u + 1u);
    set32(c.r[11], 0u + 3u);
    set32(c.r[14], c.r[14].w[0] + 8384u);
    set32(c.r[13], 0u + 25500u);
    set32(c.r[8], c.r[2].w[0] << 5);
    c.budget -= 10;
L_0039C780:
    set32(c.r[15], c.r[14].w[0] + c.r[8].w[0]);
    c.r[8].d[0] = ld16((c.r[15].w[0] + 266u));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[13].d[0];  if (t) { goto L_0039C80C; } }
    set32(c.r[8], ld32((c.r[15].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[12].d[0];  if (t) { goto L_0039C7A4; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[11].d[0];  if (t) { goto L_0039C80C; } }
L_0039C7A4:
    set32(c.r[8], c.r[3].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = ld8((c.r[8].w[0] + 48u));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0039C80C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[10].d[0];  if (t) { goto L_0039C7E0; } }
    set32(c.r[8], ld32((c.r[16].w[0])));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 265u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 9u)));
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_0039C7E0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_0039C7E0; } }
    set32(c.r[8], c.r[15].w[0] + 256u);
    st32((c.r[16].w[0] + 8u), c.r[8].w[0]);
    c.budget -= 2;
L_0039C7E0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[10].d[0];  if (t) { goto L_0039C80C; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 265u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 9u)));
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_0039C80C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_0039C80C; } }
    set32(c.r[8], c.r[15].w[0] + 256u);
    st32((c.r[16].w[0] + 12u), c.r[8].w[0]);
    c.budget -= 2;
L_0039C80C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[8].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[8], c.r[2].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C780u | kUnwind; return; } goto L_0039C780; } }
    st32((c.r[16].w[0] + 16u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 20u), c.r[6].w[0]);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[1].w[0] - 13072u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039C874; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_0039C854; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0039C854; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0039C854:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_0039C870; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0039C870; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0039C870:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0039C874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C87Cu);  if (depth < kMaxDepth) unit_00A7(c, 26u, depth + 1u); else { c.pc = 0x0039C8D0u; return; } if (c.pc != 0x0039C87Cu) [[unlikely]] return; }
L_0039C87C:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039C8B8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[2].w[0] + 1u);  if (t) { goto L_0039C8A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_0039C8B8; } }
L_0039C8A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[2].w[0] + 1u);  if (t) { goto L_0039C8B8; } }
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 1;
L_0039C8B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039C8D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 25657u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039C8F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0039C96C; } }
L_0039C8F8:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0039C918; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0039C918; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0039C918:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 255u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 8901u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0039C950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C934u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0039C934u) [[unlikely]] return; }
L_0039C934:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039C950; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0039C950:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039C95C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0039C95C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0039C968; } }
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 1;
L_0039C968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0039C96C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039C980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C990u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 55u, depth + 1u); else { c.pc = 0x0039D1A0u; return; } if (c.pc != 0x0039C990u) [[unlikely]] return; }
L_0039C990:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 13072u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0039C9A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039C9D8; } }
L_0039C9A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0039C9CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039C9C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0039C9DC; } }
L_0039C9C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0039C9D8; } }
L_0039C9CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0039C9D8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0039C9D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0039C9DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039C9F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CA10u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 28u, depth + 1u); else { c.pc = 0x0039C980u; return; } if (c.pc != 0x0039CA10u) [[unlikely]] return; }
L_0039CA10:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] + 32u);
    set32(c.r[2], c.r[4].w[0] << 1);
    c.budget -= 9;
L_0039CA34:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0039CA48; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0039CA48:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CA34u | kUnwind; return; } goto L_0039CA34; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull; st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039CA88; } }
    breakpoint(c, 0x0039CA84u);
    c.budget -= 1;
L_0039CA88:
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] ^ 6011ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039CAC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CAE8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 28u, depth + 1u); else { c.pc = 0x0039C980u; return; } if (c.pc != 0x0039CAE8u) [[unlikely]] return; }
L_0039CAE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9073u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8992u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 452u);  if (t) { goto L_0039CB2C; } }
    set32(c.r[3], c.r[6].w[0] + 552u);
    c.budget -= 1;
L_0039CB2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 13040u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0039CBB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 13072u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039CBBC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CB58u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A6(c, 352u, depth + 1u); else { c.pc = 0x0039B480u; return; } if (c.pc != 0x0039CB58u) [[unlikely]] return; }
L_0039CB58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0039CB74; } }
    set32(c.r[2], 0u + 6114u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0039CBB0; } }
L_0039CB74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 6128u);  if (t) { goto L_0039CBAC; } }
    set32(c.r[2], 0u + 6102u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0039CBB0; } }
L_0039CBAC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0039CBB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039CC2C; } }
L_0039CBB8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039CBBC:
    set32(c.r[2], c.r[4].w[0] << 1);
    c.budget -= 1;
L_0039CBC0:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0039CBD4; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0039CBD4:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CBC0u | kUnwind; return; } goto L_0039CBC0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], c.r[5].w[0] + 1u);
    mmi::div(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull; st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039CC14; } }
    breakpoint(c, 0x0039CC10u);
    c.budget -= 1;
L_0039CC14:
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0039CC2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039CC50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CC88u); c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_00A6(c, 352u, depth + 1u); else { c.pc = 0x0039B480u; return; } if (c.pc != 0x0039CC88u) [[unlikely]] return; }
L_0039CC88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0039CC9C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039CC9C:
    set32(c.r[2], 0u + 255u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 8901u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0039CCCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CCB4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0039CCB4u) [[unlikely]] return; }
L_0039CCB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039CCCC; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0039CCCC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 84u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 8384u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0039CE2C; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 38u);  if (t) { goto L_0039CDEC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039CDEC; } }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 36u);  if (t) { goto L_0039CDEC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039CDEC; } }
    set32(c.r[2], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 82u);  if (t) { goto L_0039CDEC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039CDC4; } }
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 33u);  if (t) { goto L_0039CD6C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039CD6C; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 29u);  if (t) { goto L_0039CD6C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039CD6C; } }
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 30u);  if (t) { goto L_0039CD6C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039CD6C; } }
    set32(c.r[2], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039CD6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039CE68; } }
L_0039CD6C:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0039CDA8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 6332u);  if (t) { goto L_0039CD90; } }
    set32(c.r[2], 0u + 6331u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0039CD94; } }
L_0039CD90:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0039CD94:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039CE74; } }
    set32(c.r[2], 0u + 6335u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0039CE70; } }
L_0039CDA8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 6334u);  if (t) { goto L_0039CDBC; } }
    set32(c.r[2], 0u + 6333u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0039CE70; } }
L_0039CDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0039CE70; } }
L_0039CDC4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 6340u);  if (t) { goto L_0039CDD8; } }
    set32(c.r[2], 0u + 6336u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0039CDDC; } }
L_0039CDD8:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0039CDDC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 6341u);  if (t) { goto L_0039CE70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0039CE70; } }
L_0039CDEC:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6338u);  if (t) { goto L_0039CE24; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 6339u);  if (t) { goto L_0039CE10; } }
    set32(c.r[2], 0u + 6337u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0039CE14; } }
L_0039CE10:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0039CE14:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 6342u);  if (t) { goto L_0039CE70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0039CE70; } }
L_0039CE24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0039CE70; } }
L_0039CE2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1u);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + 6129u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_0039CE70; } }
L_0039CE68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0039CE78; } }
L_0039CE70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0039CE74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0039CE78:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0039CEA0:
    c.budget -= 2;
    { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 234u)));  goto L_0039CEB0; }
L_0039CEB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CEC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0039CEC4u) [[unlikely]] return; }
L_0039CEC4:
    set32(c.r[4], c.r[16].w[0] - 7220u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 25326u));
    set32(c.r[2], c.r[2].w[0] - 248u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039CF00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 25657u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0039CF64; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 13056u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_0039CF54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CF48u);  if (depth < kMaxDepth) unit_00A7(c, 41u, depth + 1u); else { c.pc = 0x0039CEB0u; return; } if (c.pc != 0x0039CF48u) [[unlikely]] return; }
L_0039CF48:
    set32(c.r[2], c.r[2].w[0] + 6248u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_0039CF5C; } }
L_0039CF54:
    set32(c.r[2], ld32((c.r[1].w[0] - 13064u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0039CF5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039D070; } }
L_0039CF64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CF70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 352u, depth + 1u); else { c.pc = 0x0039B480u; return; } if (c.pc != 0x0039CF70u) [[unlikely]] return; }
L_0039CF70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 234u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039CFD8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_0039CFD4; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 13072u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039CFD4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 255u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 8901u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039CFBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CFB8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0039CFB8u) [[unlikely]] return; }
L_0039CFB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0039CFBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CFC4u);  if (depth < kMaxDepth) unit_00A7(c, 40u, depth + 1u); else { c.pc = 0x0039CEA0u; return; } if (c.pc != 0x0039CFC4u) [[unlikely]] return; }
L_0039CFC4:
    set32(c.r[2], c.r[2].w[0] + 6248u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039D070; } }
L_0039CFD4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039CFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CFE0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 28u, depth + 1u); else { c.pc = 0x0039C980u; return; } if (c.pc != 0x0039CFE0u) [[unlikely]] return; }
L_0039CFE0:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] + 252u);
    set32(c.r[2], c.r[4].w[0] << 1);
    c.budget -= 9;
L_0039D004:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0039D018; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0039D018:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D004u | kUnwind; return; } goto L_0039D004; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull; st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039D058; } }
    breakpoint(c, 0x0039D054u);
    c.budget -= 1;
L_0039D058:
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0039D070:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039D090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039D168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D0B4u);  if (depth < kMaxDepth) unit_00A7(c, 28u, depth + 1u); else { c.pc = 0x0039C980u; return; } if (c.pc != 0x0039D0B4u) [[unlikely]] return; }
L_0039D0B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 12976u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0039D0D0; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0039D134; } }
L_0039D0D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039D130; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039D128; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039D120; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039D118; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039D10C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039D134; } }
L_0039D10C:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0039D134; } }
L_0039D118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0039D134; } }
L_0039D120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0039D134; } }
L_0039D128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0039D134; } }
L_0039D130:
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 1;
L_0039D134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D13Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0039D13Cu) [[unlikely]] return; }
L_0039D13C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25566u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0039D158; } }
    set32(c.r[2], 0u + 7u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 2;
L_0039D158:
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D168u); set32(c.r[5], 0u + 721u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0039D168u) [[unlikely]] return; }
L_0039D168:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039D180:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[1].w[0] - 13064u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 13056u), c.r[5].w[0]);  c.pc = t; return; }
L_0039D1A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D1B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0039D1B4u) [[unlikely]] return; }
L_0039D1B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 100u);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 10u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_0039D1CC; } }
    breakpoint(c, 0x0039D1C8u);
    c.budget -= 1;
L_0039D1CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], 0u + 100u);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 10u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_0039D1E8; } }
    breakpoint(c, 0x0039D1E4u);
    c.budget -= 1;
L_0039D1E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], ld32((c.r[1].w[0] - 13072u)));
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0039D2B4; } }
    c.r[1].d[0] = c.r[6].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] << 3);  if (t) { goto L_0039D234; } }
    set32(c.r[3], c.r[6].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[1].w[0] - 21400u));  if (t) { goto L_0039D254; } }
L_0039D234:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    set32(c.r[5], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 19444u));
    c.budget -= 8;
L_0039D254:
    c.r[1].d[0] = c.r[4].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_0039D288; } }
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[1].w[0] - 21400u));  if (t) { goto L_0039D2A8; } }
L_0039D288:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 19444u));
    c.budget -= 8;
L_0039D2A8:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_0039D484; } }
L_0039D2B4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 86ll ? 1ull : 0ull;  if (t) { goto L_0039D480; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] << 3);  if (t) { goto L_0039D308; } }
    set32(c.r[3], c.r[6].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21392u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 43788ull;  if (t) { goto L_0039D2FC; } }
    c.r[1].d[0] = 0ull | 43780ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[5].w[0] + c.r[1].w[0]);  if (t) { goto L_0039D300; } }
L_0039D2FC:
    set32(c.r[3], c.r[5].w[0] + c.r[1].w[0]);
    c.budget -= 1;
L_0039D300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 86ll ? 1ull : 0ull;  if (t) { goto L_0039D374; } }
L_0039D308:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    set32(c.r[5], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 19452u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] - 100u);  if (t) { goto L_0039D354; } }
    set32(c.r[5], c.r[6].w[0] - 100u);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { goto L_0039D370; } }
L_0039D354:
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 24u);
    c.budget -= 7;
L_0039D370:
    c.r[1].d[0] = c.r[4].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 1;
L_0039D374:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] << 3);  if (t) { goto L_0039D3C0; } }
    set32(c.r[5], c.r[4].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21392u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 43788ull;  if (t) { goto L_0039D3B4; } }
    c.r[1].d[0] = 0ull | 43780ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[4].w[0] + c.r[1].w[0]);  if (t) { goto L_0039D3B8; } }
L_0039D3B4:
    set32(c.r[10], c.r[4].w[0] + c.r[1].w[0]);
    c.budget -= 1;
L_0039D3B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_0039D430; } }
L_0039D3C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    set32(c.r[6], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 19452u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0039D40C; } }
    set32(c.r[5], c.r[4].w[0] - 100u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[2].w[0] + 16u);  if (t) { goto L_0039D42C; } }
L_0039D40C:
    set32(c.r[5], c.r[4].w[0] - 100u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[10], c.r[2].w[0] + 24u);
    c.budget -= 8;
L_0039D42C:
    c.r[9].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 1;
L_0039D430:
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[8].d[0] = ld8((c.r[3].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3u));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 4u));
    c.r[6].d[0] = ld8((c.r[10].w[0]));
    c.r[5].d[0] = ld8((c.r[10].w[0] + 1u));
    set32(c.r[3], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[10].w[0] + 2u));
    set32(c.r[8], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[10].w[0] + 3u));
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = ld8((c.r[10].w[0] + 4u));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_0039D484; } }
L_0039D480:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0039D484:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039D4A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D4C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0039D4C8u) [[unlikely]] return; }
L_0039D4C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 28368u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[17].w[0]);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[18].w[0] + 20u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039D500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0039D574; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 28368u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039D54C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039D54C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D54Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039D54Cu) [[unlikely]] return; }
L_0039D54C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D55Cu); st32((c.r[17].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0039D55Cu) [[unlikely]] return; }
L_0039D55C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039D578; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D574u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0039D574u) [[unlikely]] return; }
L_0039D574:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039D578:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039D590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].sd[0] < 1200ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039D5B4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 2;
L_0039D5B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], 0u + 120u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0039D61C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2000u);  if (t) { goto L_0039D5F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D5D8u); set32(c.r[4], 0u + 2000u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039D5D8u) [[unlikely]] return; }
L_0039D5D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0039D5F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D5ECu);  if (depth < kMaxDepth) unit_00A7(c, 125u, depth + 1u); else { c.pc = 0x0039E2F0u; return; } if (c.pc != 0x0039D5ECu) [[unlikely]] return; }
L_0039D5EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039D5F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_0039D61C; } }
L_0039D5F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D600u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039D600u) [[unlikely]] return; }
L_0039D600:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0039D618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D614u);  if (depth < kMaxDepth) unit_00A7(c, 125u, depth + 1u); else { c.pc = 0x0039E2F0u; return; } if (c.pc != 0x0039D614u) [[unlikely]] return; }
L_0039D614:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039D618:
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 1;
L_0039D61C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < 201ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 200u);  if (t) { goto L_0039D634; } }
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0039D634:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039D6D4; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0039D6D4; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);  if (t) { goto L_0039D6B4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0039D6A4; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0039D694; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039D684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039D6B8; } }
L_0039D684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D68Cu);  if (depth < kMaxDepth) unit_00A7(c, 87u, depth + 1u); else { c.pc = 0x0039D9D0u; return; } if (c.pc != 0x0039D68Cu) [[unlikely]] return; }
L_0039D68C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039D6B8; } }
L_0039D694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D69Cu);  if (depth < kMaxDepth) unit_00A7(c, 87u, depth + 1u); else { c.pc = 0x0039D9D0u; return; } if (c.pc != 0x0039D69Cu) [[unlikely]] return; }
L_0039D69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039D6B8; } }
L_0039D6A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D6ACu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A7(c, 87u, depth + 1u); else { c.pc = 0x0039D9D0u; return; } if (c.pc != 0x0039D6ACu) [[unlikely]] return; }
L_0039D6AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039D6B8; } }
L_0039D6B4:
    st8((c.r[1].w[0] + 25664u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0039D6B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0039D6D4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D6D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039D6D4u) [[unlikely]] return; }
L_0039D6D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039D6F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039D700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0039D710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039D720:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[4], ld32((c.r[1].w[0] + 8984u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039D738; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0039D738:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_0039D748; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0039D748:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0039D754; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0039D754:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0039D764; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0039D764:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039D770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D788u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0039D788u) [[unlikely]] return; }
L_0039D788:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0039D7E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D7A8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0039D7A8u) [[unlikely]] return; }
L_0039D7A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25566u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039D7E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 721u);  if (t) { goto L_0039D7D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D7D4u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0039D7D4u) [[unlikely]] return; }
L_0039D7D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D7DCu);  if (depth < kMaxDepth) unit_0057(c, 53u, depth + 1u); else { c.pc = 0x0025C620u; return; } if (c.pc != 0x0039D7DCu) [[unlikely]] return; }
L_0039D7DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0039D9BC; } }
L_0039D7E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 58u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 8384u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039D7FC; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0039D7FC:
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 59u);  if (t) { goto L_0039D824; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9076u)));
    c.r[1].d[0] = c.r[2].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0039D820; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0039D820:
    set32(c.r[2], 0u + 59u);
    c.budget -= 1;
L_0039D824:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0039D840; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9076u)));
    c.r[1].d[0] = c.r[2].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0039D840; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0039D840:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039D858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D850u);  if (depth < kMaxDepth) unit_002A(c, 78u, depth + 1u); else { c.pc = 0x001A9020u; return; } if (c.pc != 0x0039D850u) [[unlikely]] return; }
L_0039D850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039D9B8; } }
L_0039D858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D860u);  if (depth < kMaxDepth) unit_00A7(c, 75u, depth + 1u); else { c.pc = 0x0039D720u; return; } if (c.pc != 0x0039D860u) [[unlikely]] return; }
L_0039D860:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0039D884; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0039D884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D87Cu);  if (depth < kMaxDepth) unit_002A(c, 78u, depth + 1u); else { c.pc = 0x001A9020u; return; } if (c.pc != 0x0039D87Cu) [[unlikely]] return; }
L_0039D87C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039D9B8; } }
L_0039D884:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[2].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039D8C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8897u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8896u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[2].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039D8C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8896u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0039D8C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 25u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 26u);  if (t) { goto L_0039D8DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8896u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0039D8DC:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[7].w[0] - 13038u);
    set32(c.r[6], c.r[17].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] - 13036u);
    set32(c.r[4], 0u + 4u);
    st8((c.r[1].w[0] - 13040u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[1].w[0] - 13039u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 16;
L_0039D91C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D91Cu | kUnwind; return; } goto L_0039D91C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[17].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 12992u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[1].w[0] - 13004u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 40u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[1].w[0] - 13000u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[1].w[0] - 12996u), c.r[2].w[0]);
    c.budget -= 13;
L_0039D970:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D970u | kUnwind; return; } goto L_0039D970; } }
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    set32(c.r[2], c.r[2].w[0] - 12984u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 64u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D9B8u); st8((c.r[1].w[0] - 12976u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 415u, depth + 1u); else { c.pc = 0x0039BD80u; return; } if (c.pc != 0x0039D9B8u) [[unlikely]] return; }
L_0039D9B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0039D9BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039D9D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 13072u), c.r[4].w[0]);  c.pc = t; return; }
L_0039D9E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 9256u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039DA14; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8898u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039DA24; } }
L_0039DA14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8897u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8898u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0039DA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DA2Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0039DA2Cu) [[unlikely]] return; }
L_0039DA2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DA44u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00A7(c, 87u, depth + 1u); else { c.pc = 0x0039D9D0u; return; } if (c.pc != 0x0039DA44u) [[unlikely]] return; }
L_0039DA44:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0039DA68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DA54u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0039DA54u) [[unlikely]] return; }
L_0039DA54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25566u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039DB88; } }
L_0039DA68:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0039DA98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DA78u);  if (depth < kMaxDepth) unit_00A7(c, 123u, depth + 1u); else { c.pc = 0x0039E200u; return; } if (c.pc != 0x0039DA78u) [[unlikely]] return; }
L_0039DA78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039DB88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DA88u);  if (depth < kMaxDepth) unit_00A7(c, 75u, depth + 1u); else { c.pc = 0x0039D720u; return; } if (c.pc != 0x0039DA88u) [[unlikely]] return; }
L_0039DA88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039DB2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0039DB8C; } }
L_0039DA98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DAA0u);  if (depth < kMaxDepth) unit_00A7(c, 75u, depth + 1u); else { c.pc = 0x0039D720u; return; } if (c.pc != 0x0039DAA0u) [[unlikely]] return; }
L_0039DAA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039DB2C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 11u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8984u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039DB2C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 9256u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0039DB04; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0039DB2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DAE0u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039DAE0u) [[unlikely]] return; }
L_0039DAE0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039DB88; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DAF8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A7(c, 57u, depth + 1u); else { c.pc = 0x0039D4A0u; return; } if (c.pc != 0x0039DAF8u) [[unlikely]] return; }
L_0039DAF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039DB88; } }
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_0039DB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DB0Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039DB0Cu) [[unlikely]] return; }
L_0039DB0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039DB88; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DB24u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A7(c, 57u, depth + 1u); else { c.pc = 0x0039D4A0u; return; } if (c.pc != 0x0039DB24u) [[unlikely]] return; }
L_0039DB24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039DB88; } }
L_0039DB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DB34u);  if (depth < kMaxDepth) unit_00A7(c, 21u, depth + 1u); else { c.pc = 0x0039C480u; return; } if (c.pc != 0x0039DB34u) [[unlikely]] return; }
L_0039DB34:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039DB88; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], 0u + 84u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 8384u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0039DB88; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039DB88; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0039DB88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DB70u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039DB70u) [[unlikely]] return; }
L_0039DB70:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039DB88; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DB88u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 57u, depth + 1u); else { c.pc = 0x0039D4A0u; return; } if (c.pc != 0x0039DB88u) [[unlikely]] return; }
L_0039DB88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0039DB8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039DBA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[7], c.r[7].w[0] + 6192u);
    set32(c.r[6], c.r[29].w[0]);
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
L_0039DBB4:
    ld128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039DBB4u | kUnwind; return; } goto L_0039DBB4; } }
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 4u)));
    st32((c.r[6].w[0]), c.f[0]);
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 6200u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0039DC00:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DC18u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_00A6(c, 401u, depth + 1u); else { c.pc = 0x0039BB70u; return; } if (c.pc != 0x0039DC18u) [[unlikely]] return; }
L_0039DC18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9073u)));
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039DC50; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 370u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0039DC50; } }
    st8((c.r[29].w[0] + 304u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0039DC50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], 0u + 84u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8384u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0039DC98; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9072u)));
    set32(c.r[4], c.r[4].w[0] + 28320u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 1300u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0039DC98; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[29].w[0] + 305u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0039DC98:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 8384u);
    set32(c.r[5], 0u + 100u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28320u);  if (t) { goto L_0039DD10; } }
L_0039DCB4:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 266u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);  if (t) { goto L_0039DCC8; } }
    breakpoint(c, 0x0039DCC4u);
    c.budget -= 1;
L_0039DCC8:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 2);  if (t) { goto L_0039DD0C; } }
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0039DD0C; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 1284u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0039DCF4; } }
    st8((c.r[29].w[0] + 306u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0039DCF4:
    set32(c.r[3], ld32((c.r[7].w[0] + 1288u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0039DD20; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 307u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039DD1C; } }
L_0039DD0C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0039DD10:
    c.r[3].d[0] = c.r[8].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039DCB4u | kUnwind; return; } goto L_0039DCB4; } }
L_0039DD1C:
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039DD20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 8384u);
    set32(c.r[7], c.r[7].w[0] + 28320u);
    set32(c.r[5], 0u + 25500u);
    set32(c.r[3], c.r[9].w[0] << 2);
    c.budget -= 6;
L_0039DD38:
    set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[3].w[0] + 308u);
    c.budget -= 6;
    { const bool t = c.r[8].d[0] == 0ull; st32((c.r[6].w[0]), c.r[5].w[0]);  if (t) { goto L_0039DD68; } }
    c.r[3].d[0] = ld8((c.r[8].w[0] + 899u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[9].w[0] << 5);  if (t) { goto L_0039DD68; } }
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 266u));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0039DD68:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[9].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039DD38u | kUnwind; return; } goto L_0039DD38; } }
    set32(c.r[3], c.r[2].w[0] - 41u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0039DD94; } }
    set32(c.r[3], 0u + 43u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[2].w[0] - 44u);  if (t) { goto L_0039DDF0; } }
L_0039DD94:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28320u);  if (t) { goto L_0039DDE0; } }
L_0039DDA4:
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039DDDC; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0039DDDC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 8650u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 340u), c.r[3].w[0]);  if (t) { goto L_0039DDEC; } }
L_0039DDDC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0039DDE0:
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039DDA4u | kUnwind; return; } goto L_0039DDA4; } }
L_0039DDEC:
    set32(c.r[3], c.r[2].w[0] - 44u);
    c.budget -= 1;
L_0039DDF0:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0039DE08; } }
    set32(c.r[3], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0039DE8C; } }
L_0039DE08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9072u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 8649u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8384u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 28320u);  if (t) { goto L_0039DE80; } }
L_0039DE3C:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039DE7C; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[7], c.r[8].w[0] << 5);  if (t) { goto L_0039DE7C; } }
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 265u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[9].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0039DE7C; } }
    set32(c.r[3], c.r[3].w[0] + 8650u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 340u), c.r[3].w[0]);  if (t) { goto L_0039DE8C; } }
L_0039DE7C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0039DE80:
    c.r[3].d[0] = c.r[8].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039DE3Cu | kUnwind; return; } goto L_0039DE3C; } }
L_0039DE8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 9256u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0039DEA0; } }
    st8((c.r[29].w[0] + 344u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0039DEA0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 348u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] + 28320u);
    c.budget -= 5;
L_0039DEB4:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] + 352u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039DEB4u | kUnwind; return; } goto L_0039DEB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DEE0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0039DEE0u) [[unlikely]] return; }
L_0039DEE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039DF34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DEFCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0039DEFCu) [[unlikely]] return; }
L_0039DEFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25566u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039DF34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF18u);  if (depth < kMaxDepth) unit_00A7(c, 75u, depth + 1u); else { c.pc = 0x0039D720u; return; } if (c.pc != 0x0039DF18u) [[unlikely]] return; }
L_0039DF18:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_0039DF34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF2Cu);  if (depth < kMaxDepth) unit_008E(c, 327u, depth + 1u); else { c.pc = 0x0033B0F0u; return; } if (c.pc != 0x0039DF2Cu) [[unlikely]] return; }
L_0039DF2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF34u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_008E(c, 291u, depth + 1u); else { c.pc = 0x0033A990u; return; } if (c.pc != 0x0039DF34u) [[unlikely]] return; }
L_0039DF34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF3Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0039DF3Cu) [[unlikely]] return; }
L_0039DF3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0039E134; } }
    set32(c.r[3], 0u + 255u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8901u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0039E134; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9072u)));
    set32(c.r[6], c.r[6].w[0] + 8649u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[3].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[8], 0u + 25500u);
    set32(c.r[9], c.r[9].w[0] + 8384u);
    set32(c.r[7], c.r[11].w[0] << 5);
    c.budget -= 14;
L_0039DF98:
    set32(c.r[10], c.r[9].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld16((c.r[10].w[0] + 266u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[8].d[0];  if (t) { goto L_0039DFC4; } }
    set32(c.r[7], ld32((c.r[10].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0039DFC4; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 265u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_0039DFC4; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0039DFC4:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[7].d[0] = c.r[11].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[7], c.r[11].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039DF98u | kUnwind; return; } goto L_0039DF98; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[7].d[0]; set32(c.r[11], 0u + 2u);  if (t) { goto L_0039E03C; } }
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[13].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 2u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[11], c.r[11].w[0] + 8384u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 25500u);  if (t) { goto L_0039E02C; } }
L_0039DFFC:
    set32(c.r[12], c.r[11].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld16((c.r[12].w[0] + 266u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[10].d[0];  if (t) { goto L_0039E028; } }
    set32(c.r[7], ld32((c.r[12].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[9].d[0];  if (t) { goto L_0039E020; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[8].d[0];  if (t) { goto L_0039E028; } }
L_0039E020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0039E038; } }
L_0039E028:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.budget -= 1;
L_0039E02C:
    c.r[7].d[0] = c.r[13].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[7], c.r[13].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039DFFCu | kUnwind; return; } goto L_0039DFFC; } }
L_0039E038:
    set32(c.r[11], 0u + 2u);
    c.budget -= 1;
L_0039E03C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[11].d[0]; set32(c.r[7], 0u + 3u);  if (t) { goto L_0039E04C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; set32(c.r[15], 0u + 255u);  if (t) { goto L_0039E05C; } }
L_0039E04C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st32((c.r[29].w[0] + 360u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 364u), c.r[2].w[0]);  if (t) { goto L_0039E134; } }
L_0039E05C:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[14].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[15].d[0] + 0ull;
    set32(c.r[10], c.r[10].w[0] + 8384u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 25500u);  if (t) { goto L_0039E128; } }
L_0039E074:
    set32(c.r[12], c.r[10].w[0] + c.r[13].w[0]);
    c.r[2].d[0] = ld16((c.r[12].w[0] + 266u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[9].d[0];  if (t) { goto L_0039E124; } }
    c.r[8].d[0] = ld8((c.r[12].w[0] + 274u));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_0039E124; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == c.r[7].d[0]; c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0039E0D4; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0039E0BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[29].w[0] + 360u), c.r[15].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8658u);
    set32(c.r[2], c.r[2].w[0] + c.r[13].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 364u), c.r[2].w[0]);  if (t) { goto L_0039E134; } }
L_0039E0BC:
    set32(c.r[2], c.r[2].w[0] + 8658u);
    set32(c.r[2], c.r[2].w[0] + c.r[13].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st32((c.r[29].w[0] + 360u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 364u), c.r[15].w[0]);  if (t) { goto L_0039E134; } }
L_0039E0D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[15].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0039E0E8; } }
    st32((c.r[29].w[0] + 360u), c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 364u), c.r[7].w[0]);  if (t) { goto L_0039E124; } }
L_0039E0E8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[11].d[0];  if (t) { goto L_0039E11C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 265u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0039E114; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] != c.r[3].d[0];  if (t) { goto L_0039E10C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 360u), c.r[8].w[0]);  if (t) { goto L_0039E124; } }
L_0039E10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 364u), c.r[8].w[0]);  if (t) { goto L_0039E124; } }
L_0039E114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 360u), c.r[8].w[0]);  if (t) { goto L_0039E124; } }
L_0039E11C:
    st32((c.r[29].w[0] + 360u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 364u), c.r[8].w[0]);
    c.budget -= 2;
L_0039E124:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.budget -= 1;
L_0039E128:
    c.r[2].d[0] = c.r[14].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[13], c.r[14].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E074u | kUnwind; return; } goto L_0039E074; } }
L_0039E134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E13Cu);  if (depth < kMaxDepth) unit_00A7(c, 123u, depth + 1u); else { c.pc = 0x0039E200u; return; } if (c.pc != 0x0039E13Cu) [[unlikely]] return; }
L_0039E13C:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 304u));
    set32(c.r[3], c.r[29].w[0] + 306u);
    st8((c.r[29].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], c.r[29].w[0] + 308u);
    set32(c.r[6], c.r[16].w[0] + 4u);
    set32(c.r[5], 0u + 4u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 305u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
L_0039E170:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E170u | kUnwind; return; } goto L_0039E170; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[7], c.r[29].w[0] + 352u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    set32(c.r[5], 0u + 4u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 344u));
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 348u)));
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 9;
L_0039E1B4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E1B4u | kUnwind; return; } goto L_0039E1B4; } }
    set32(c.r[3], c.r[29].w[0] + 360u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 368u));
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_0039E200:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 111u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039E2DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 11u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8984u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0039E2D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9072u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8649u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 100u);
    set32(c.r[5], c.r[5].w[0] << 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[1].w[0] + 96u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 8384u);  if (t) { goto L_0039E2CC; } }
L_0039E258:
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld16((c.r[5].w[0] + 266u));
    set32(c.r[2], c.r[7].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0039E284; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);  if (t) { goto L_0039E278; } }
    breakpoint(c, 0x0039E274u);
    c.budget -= 1;
L_0039E278:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E288; } }
L_0039E284:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0039E288:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0039E298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 86u);  if (t) { goto L_0039E2AC; } }
L_0039E298:
    c.r[2].d[0] = c.r[7].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);  if (t) { goto L_0039E2A8; } }
    breakpoint(c, 0x0039E2A4u);
    c.budget -= 1;
L_0039E2A8:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0039E2AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0039E2C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 265u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[9].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039E2C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E2DC; } }
L_0039E2C8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0039E2CC:
    c.r[2].d[0] = c.r[8].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E258u | kUnwind; return; } goto L_0039E258; } }
L_0039E2D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039E2DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039E2F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E30Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x0039E30Cu) [[unlikely]] return; }
L_0039E30C:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E318u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0039E318u) [[unlikely]] return; }
L_0039E318:
    set32(c.r[4], c.r[17].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E324u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0039E324u) [[unlikely]] return; }
L_0039E324:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 28288u);
    set32(c.r[3], c.r[3].w[0] - 28272u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 28256u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E350u); st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 215u, depth + 1u); else { c.pc = 0x003A5C10u; return; } if (c.pc != 0x0039E350u) [[unlikely]] return; }
L_0039E350:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00150000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[4], c.r[17].w[0] + 920u);
    set32(c.r[5], c.r[5].w[0] - 28672u);
    set32(c.r[6], c.r[6].w[0] - 28624u);
    set32(c.r[7], 0u + 80u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E370u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x0039E370u) [[unlikely]] return; }
L_0039E370:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00140000u);
    set32(c.r[4], c.r[17].w[0] + 1088u);
    set32(c.r[5], c.r[5].w[0] - 8080u);
    set32(c.r[6], c.r[6].w[0] - 20016u);
    set32(c.r[7], 0u + 256u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E390u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x0039E390u) [[unlikely]] return; }
L_0039E390:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[4], c.r[17].w[0] + 1600u);
    set32(c.r[5], c.r[5].w[0] + 2000u);
    set32(c.r[6], c.r[6].w[0] + 2144u);
    set32(c.r[7], 0u + 368u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E3B0u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x0039E3B0u) [[unlikely]] return; }
L_0039E3B0:
    st32((c.r[17].w[0] + 1988u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[17].w[0] + 1992u), 0u);
    st32((c.r[17].w[0] + 1996u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E3CCu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x0039E3CCu) [[unlikely]] return; }
L_0039E3CC:
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 60u), 0u);
    st32((c.r[17].w[0] + 64u), 0u);
    st32((c.r[17].w[0] + 56u), c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E3E8u); st32((c.r[17].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0039E3E8u) [[unlikely]] return; }
L_0039E3E8:
    set32(c.r[25], ld32((c.r[17].w[0] + 96u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 96u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E400u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039E400u) [[unlikely]] return; }
L_0039E400:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E414u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x0039E414u) [[unlikely]] return; }
L_0039E414:
    set32(c.r[2], 0u + 255u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 84u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0039E43C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0039E440; } }
L_0039E43C:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_0039E440:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039E444:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 904u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E444u | kUnwind; return; } goto L_0039E444; } }
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E470u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0039E470u) [[unlikely]] return; }
L_0039E470:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039E490:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0039E5E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 28288u);
    set32(c.r[3], c.r[3].w[0] - 28272u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 28256u);
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 10;
L_0039E4DC:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 904u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 904u);  if (t) { goto L_0039E508; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039E508; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E508u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039E508u) [[unlikely]] return; }
L_0039E508:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E4DCu | kUnwind; return; } goto L_0039E4DC; } }
    set32(c.r[2], c.r[18].w[0] + 1988u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039E554; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039E554; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1988u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039E554; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_0039E548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E548u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0039E548u) [[unlikely]] return; }
L_0039E548:
    st32((c.r[18].w[0] + 1996u), 0u);
    st32((c.r[18].w[0] + 1992u), 0u);
    st32((c.r[18].w[0] + 1988u), 0u);
    c.budget -= 3;
L_0039E554:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[4], c.r[18].w[0] + 1600u);
    set32(c.r[5], c.r[5].w[0] + 2144u);
    set32(c.r[6], 0u + 368u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E56Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x0039E56Cu) [[unlikely]] return; }
L_0039E56C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00140000u);
    set32(c.r[4], c.r[18].w[0] + 1088u);
    set32(c.r[5], c.r[5].w[0] - 20016u);
    set32(c.r[6], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E584u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x0039E584u) [[unlikely]] return; }
L_0039E584:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[4], c.r[18].w[0] + 920u);
    set32(c.r[5], c.r[5].w[0] - 28624u);
    set32(c.r[6], 0u + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E59Cu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x0039E59Cu) [[unlikely]] return; }
L_0039E59C:
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E5A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A9(c, 218u, depth + 1u); else { c.pc = 0x003A5C70u; return; } if (c.pc != 0x0039E5A8u) [[unlikely]] return; }
L_0039E5A8:
    set32(c.r[4], c.r[18].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E5B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0039E5B4u) [[unlikely]] return; }
L_0039E5B4:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E5C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0039E5C0u) [[unlikely]] return; }
L_0039E5C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E5CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x0039E5CCu) [[unlikely]] return; }
L_0039E5CC:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0039E5E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E5E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0039E5E4u) [[unlikely]] return; }
L_0039E5E4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0039E5E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039E610:
    set32(c.r[29], c.r[29].w[0] - 2304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E640u); st32((c.r[29].w[0] + 2300u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x0039E640u) [[unlikely]] return; }
L_0039E640:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 2280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E654u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0039E654u) [[unlikely]] return; }
L_0039E654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E65Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039E65Cu) [[unlikely]] return; }
L_0039E65C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0039E66C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E66Cu);  if (depth < kMaxDepth) unit_001F(c, 475u, depth + 1u); else { c.pc = 0x0017FD30u; return; } if (c.pc != 0x0039E66Cu) [[unlikely]] return; }
L_0039E66C:
    st32((c.r[17].w[0] + 1984u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 2280u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1984u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E680u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 494u, depth + 1u); else { c.pc = 0x0017FF40u; return; } if (c.pc != 0x0039E680u) [[unlikely]] return; }
L_0039E680:
    set32(c.r[3], ld32((c.r[17].w[0] + 1984u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 1988u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1996u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_0039E6A4; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0039E6A4:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0039E710; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 5);  if (t) { goto L_0039E6D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039E6C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E6C8u); set32(c.r[4], c.r[4].w[0] - 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0039E6C8u) [[unlikely]] return; }
L_0039E6C8:
    st32((c.r[17].w[0] + 1996u), 0u);
    st32((c.r[17].w[0] + 1992u), 0u);
    st32((c.r[17].w[0] + 1988u), 0u);
    set32(c.r[2], c.r[16].w[0] << 5);
    c.budget -= 4;
L_0039E6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E6E0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0039E6E0u) [[unlikely]] return; }
L_0039E6E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 176u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E6FCu); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0039E6FCu) [[unlikely]] return; }
L_0039E6FC:
    st32((c.r[17].w[0] + 1988u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1988u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 1992u), c.r[2].w[0]);
    c.budget -= 5;
L_0039E710:
    set32(c.r[2], ld32((c.r[17].w[0] + 1988u)));
    set32(c.r[3], c.r[16].w[0] << 5);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1996u), c.r[2].w[0]);  if (t) { goto L_0039E748; } }
L_0039E728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E730u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 8u, depth + 1u); else { c.pc = 0x00180090u; return; } if (c.pc != 0x0039E730u) [[unlikely]] return; }
L_0039E730:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1988u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E744u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0020(c, 10u, depth + 1u); else { c.pc = 0x001800D0u; return; } if (c.pc != 0x0039E744u) [[unlikely]] return; }
L_0039E744:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0039E748:
    set32(c.r[4], ld32((c.r[17].w[0] + 1984u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 4096u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E728u | kUnwind; return; } goto L_0039E728; } }
    set32(c.r[2], 0u + 4351u);
    st16((c.r[29].w[0] + 2296u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 2298u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 16320u);
    set32(c.r[2], 0u + 16327u);
    st16((c.r[29].w[0] + 2292u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 2294u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 1996u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1988u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_0039E794; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0039E794:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 2296u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E7A4u); set32(c.r[6], c.r[29].w[0] + 2292u);  if (depth < kMaxDepth) unit_0020(c, 20u, depth + 1u); else { c.pc = 0x00180280u; return; } if (c.pc != 0x0039E7A4u) [[unlikely]] return; }
L_0039E7A4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E7B0u); set32(c.r[5], c.r[17].w[0] + 1988u);  if (depth < kMaxDepth) unit_0020(c, 43u, depth + 1u); else { c.pc = 0x00180690u; return; } if (c.pc != 0x0039E7B0u) [[unlikely]] return; }
L_0039E7B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E7B8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 46u, depth + 1u); else { c.pc = 0x00180720u; return; } if (c.pc != 0x0039E7B8u) [[unlikely]] return; }
L_0039E7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E7C0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 48u, depth + 1u); else { c.pc = 0x00180760u; return; } if (c.pc != 0x0039E7C0u) [[unlikely]] return; }
L_0039E7C0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039E7C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E7CCu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039E7CCu) [[unlikely]] return; }
L_0039E7CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_0039E7E8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1988u)));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E7E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0039E7E4u) [[unlikely]] return; }
L_0039E7E4:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0039E7E8:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 904u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E7C4u | kUnwind; return; } goto L_0039E7C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E808u);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x0039E808u) [[unlikely]] return; }
L_0039E808:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E81Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0020(c, 26u, depth + 1u); else { c.pc = 0x00180340u; return; } if (c.pc != 0x0039E81Cu) [[unlikely]] return; }
L_0039E81C:
    set32(c.r[4], c.r[29].w[0] + 2280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E828u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0039E828u) [[unlikely]] return; }
L_0039E828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E830u); set32(c.r[4], ld32((c.r[29].w[0] + 2300u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0039E830u) [[unlikely]] return; }
L_0039E830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2304u);  c.pc = t; return; }
L_0039E850:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3616u)));
    c.f[0] = c.r[2].w[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E890u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00A7(c, 195u, depth + 1u); else { c.pc = 0x0039ED40u; return; } if (c.pc != 0x0039E890u) [[unlikely]] return; }
L_0039E890:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3618u)));
    c.f[21] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3620u)));
    c.f[20] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E8C0u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00A7(c, 195u, depth + 1u); else { c.pc = 0x0039ED40u; return; } if (c.pc != 0x0039E8C0u) [[unlikely]] return; }
L_0039E8C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[17].w[0] + 1088u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3622u)));
    c.f[12] = c.f[21];
    st32((c.r[17].w[0] + 1248u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 1252u), c.f[0]);
    ld128((c.r[1].w[0] + 3680u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 1136u) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[25], ld32((c.r[17].w[0] + 1264u)));
    c.f[14] = ld32((c.r[1].w[0] + 3872u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E908u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039E908u) [[unlikely]] return; }
L_0039E908:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3632u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E924u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00A7(c, 195u, depth + 1u); else { c.pc = 0x0039ED40u; return; } if (c.pc != 0x0039E924u) [[unlikely]] return; }
L_0039E924:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3634u)));
    c.f[21] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3636u)));
    c.f[1] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E954u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00A7(c, 195u, depth + 1u); else { c.pc = 0x0039ED40u; return; } if (c.pc != 0x0039E954u) [[unlikely]] return; }
L_0039E954:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[17].w[0] + 1344u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3638u)));
    c.f[12] = c.f[21];
    st32((c.r[17].w[0] + 1504u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 1508u), c.f[0]);
    ld128((c.r[1].w[0] + 3680u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 1392u) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[25], ld32((c.r[17].w[0] + 1520u)));
    c.f[14] = ld32((c.r[1].w[0] + 3872u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E99Cu); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039E99Cu) [[unlikely]] return; }
L_0039E99C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3648u)));
    set32(c.r[18], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E9BCu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00A7(c, 195u, depth + 1u); else { c.pc = 0x0039ED40u; return; } if (c.pc != 0x0039E9BCu) [[unlikely]] return; }
L_0039E9BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3650u)));
    c.f[21] = c.f[0];
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = ld32((c.r[1].w[0] + 3652u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E9E0u); c.f[20] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00A7(c, 195u, depth + 1u); else { c.pc = 0x0039ED40u; return; } if (c.pc != 0x0039E9E0u) [[unlikely]] return; }
L_0039E9E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 908u)));
    c.f[1] = ld32((c.r[1].w[0] + 3656u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], c.r[18].w[0] << 5);
    set32(c.r[2], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[21];
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[4].w[0] + 20u), c.f[1]);
    st32((c.r[4].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 1988u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld64((c.r[6].w[0] + 16u));
    st64((c.r[29].w[0] + 120u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 256u), c.r[6].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[5].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 115u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 164u), c.f[0]);
    ld128((c.r[1].w[0] + 3680u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[14] = ld32((c.r[1].w[0] + 3872u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 44;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EA90u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039EA90u) [[unlikely]] return; }
L_0039EA90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3664u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EAACu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00A7(c, 195u, depth + 1u); else { c.pc = 0x0039ED40u; return; } if (c.pc != 0x0039EAACu) [[unlikely]] return; }
L_0039EAAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3666u)));
    c.f[21] = c.f[0];
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = ld32((c.r[1].w[0] + 3668u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EAD0u); c.f[20] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00A7(c, 195u, depth + 1u); else { c.pc = 0x0039ED40u; return; } if (c.pc != 0x0039EAD0u) [[unlikely]] return; }
L_0039EAD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 912u)));
    c.f[1] = ld32((c.r[1].w[0] + 3672u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], c.r[18].w[0] << 5);
    set32(c.r[2], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[21];
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[4].w[0] + 20u), c.f[1]);
    st32((c.r[4].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 1988u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld64((c.r[6].w[0] + 16u));
    st64((c.r[29].w[0] + 104u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 256u), c.r[6].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[5].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 99u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 164u), c.f[0]);
    ld128((c.r[1].w[0] + 3680u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[14] = ld32((c.r[1].w[0] + 3872u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 44;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EB80u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039EB80u) [[unlikely]] return; }
L_0039EB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EB88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 207u, depth + 1u); else { c.pc = 0x0039EF80u; return; } if (c.pc != 0x0039EB88u) [[unlikely]] return; }
L_0039EB88:
    set32(c.r[6], ld32((c.r[17].w[0] + 1988u)));
    set32(c.r[2], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = ld64((c.r[6].w[0] + 16u));
    st64((c.r[29].w[0] + 88u), c.r[6].d[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 904u)));
    st64((c.r[7].w[0] + 256u), c.r[6].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[5].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 83u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 164u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3808u)));
    c.f[0] = c.r[2].w[0];
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EC08u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00A7(c, 195u, depth + 1u); else { c.pc = 0x0039ED40u; return; } if (c.pc != 0x0039EC08u) [[unlikely]] return; }
L_0039EC08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3810u)));
    c.f[21] = c.f[0];
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = ld32((c.r[1].w[0] + 3812u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EC2Cu); c.f[20] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00A7(c, 195u, depth + 1u); else { c.pc = 0x0039ED40u; return; } if (c.pc != 0x0039EC2Cu) [[unlikely]] return; }
L_0039EC2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 904u)));
    c.f[1] = ld32((c.r[1].w[0] + 3816u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.f[21];
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[3].w[0] + 20u), c.f[1]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 904u)));
    c.f[14] = ld32((c.r[1].w[0] + 3872u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EC68u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039EC68u) [[unlikely]] return; }
L_0039EC68:
    set32(c.r[2], ld32((c.r[17].w[0] + 868u)));
    st32((c.r[17].w[0] + 1980u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1980u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039ED18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] + 3856u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3824u)));
    c.f[0] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ECA4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00A7(c, 195u, depth + 1u); else { c.pc = 0x0039ED40u; return; } if (c.pc != 0x0039ECA4u) [[unlikely]] return; }
L_0039ECA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3826u)));
    c.f[21] = c.f[0];
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = ld32((c.r[1].w[0] + 3828u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ECC8u); c.f[20] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00A7(c, 195u, depth + 1u); else { c.pc = 0x0039ED40u; return; } if (c.pc != 0x0039ECC8u) [[unlikely]] return; }
L_0039ECC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1980u)));
    c.f[1] = ld32((c.r[1].w[0] + 3832u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.f[21];
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[3].w[0] + 20u), c.f[1]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    ld128((c.r[1].w[0] + 3712u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1980u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1980u)));
    c.f[14] = ld32((c.r[1].w[0] + 3872u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ED14u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039ED14u) [[unlikely]] return; }
L_0039ED14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039ED18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ED20u);  if (depth < kMaxDepth) unit_00A7(c, 212u, depth + 1u); else { c.pc = 0x0039F180u; return; } if (c.pc != 0x0039ED20u) [[unlikely]] return; }
L_0039ED20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0039ED40:
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::mul(c.f[12], c.f[0]);  c.pc = t; return; }
L_0039ED50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 72u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 128u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039ED80; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ED80u); st32((c.r[4].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 198u, depth + 1u); else { c.pc = 0x0039ED90u; return; } if (c.pc != 0x0039ED80u) [[unlikely]] return; }
L_0039ED80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039ED90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039EDF8; } }
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0039EE70; } }
    c.f[0] = ld32((c.r[1].w[0] + 3864u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 68u), c.f[0]);  if (t) { goto L_0039EDE8; } }
    st32((c.r[16].w[0] + 68u), c.f[1]);
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
L_0039EDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EDF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x0039EDF0u) [[unlikely]] return; }
L_0039EDF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0039EE74; } }
L_0039EDF8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0039EE34; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039EE1C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_0039EE70; } }
L_0039EE1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EE24u);  if (depth < kMaxDepth) unit_00A7(c, 203u, depth + 1u); else { c.pc = 0x0039EE80u; return; } if (c.pc != 0x0039EE24u) [[unlikely]] return; }
L_0039EE24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EE2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x0039EE2Cu) [[unlikely]] return; }
L_0039EE2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039EE70; } }
L_0039EE34:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0039EE70; } }
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[1].w[0] + 3864u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 68u), c.f[1]);  if (t) { goto L_0039EE68; } }
    st32((c.r[16].w[0] + 68u), c.f[0]);
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
L_0039EE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EE70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x0039EE70u) [[unlikely]] return; }
L_0039EE70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0039EE74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039EE80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[3].d[0] = c.r[5].d[0] & 16384ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 4096ull;  if (t) { goto L_0039EEDC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_0039EEC4; } }
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 80u), 0u);  if (t) { goto L_0039EECC; } }
L_0039EEC4:
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.budget -= 2;
L_0039EECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EED4u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0039EED4u) [[unlikely]] return; }
L_0039EED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0039EF74; } }
L_0039EEDC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039EF20; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0039EF00; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 80u), 0u);  if (t) { goto L_0039EF10; } }
L_0039EF00:
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 80u), 0u);
    c.budget -= 4;
L_0039EF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EF18u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0039EF18u) [[unlikely]] return; }
L_0039EF18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039EF70; } }
L_0039EF20:
    c.r[3].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039EF70; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039EF44; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
L_0039EF44:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0039EF64; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 3u);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
L_0039EF64:
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EF70u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0039EF70u) [[unlikely]] return; }
L_0039EF70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0039EF74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039EF80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0039F14C; } }
L_0039EFA8:
    set32(c.r[16], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 856u)));
    st32((c.r[16].w[0] + 1968u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1968u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[6], c.r[16].w[0] + 1968u);  if (t) { goto L_0039F148; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[10], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 3700u)));
    set32(c.r[2], 0u + 255u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[10].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0039EFE0; } }
    breakpoint(c, 0x0039EFDCu);
    c.budget -= 1;
L_0039EFE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], ld32((c.r[1].w[0] + 3704u)));
    c.r[9].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[10].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0039F000; } }
    breakpoint(c, 0x0039EFFCu);
    c.budget -= 1;
L_0039F000:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], ld32((c.r[1].w[0] + 3708u)));
    c.r[8].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[10].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0039F020; } }
    breakpoint(c, 0x0039F01Cu);
    c.budget -= 1;
L_0039F020:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], ld32((c.r[1].w[0] + 3696u)));
    c.r[7].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[10].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0039F040; } }
    breakpoint(c, 0x0039F03Cu);
    c.budget -= 1;
L_0039F040:
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[5].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 52u), c.r[9].w[0]);
    st32((c.r[5].w[0] + 56u), c.r[8].w[0]);
    st32((c.r[5].w[0] + 60u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039F080; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 6280u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[3].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 356u), 0u);  if (t) { goto L_0039F0A4; } }
L_0039F080:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0039F0A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 6288u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[3].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 356u), 0u);
    c.budget -= 7;
L_0039F0A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F0B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 195u, depth + 1u); else { c.pc = 0x0039ED40u; return; } if (c.pc != 0x0039F0B4u) [[unlikely]] return; }
L_0039F0B4:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[21] = c.f[0];  if (t) { goto L_0039F0E4; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 335u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0039F104; } }
L_0039F0E4:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 341u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.budget -= 8;
L_0039F104:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F114u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 195u, depth + 1u); else { c.pc = 0x0039ED40u; return; } if (c.pc != 0x0039F114u) [[unlikely]] return; }
L_0039F114:
    set32(c.r[3], ld32((c.r[16].w[0] + 1968u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = c.f[21];
    st32((c.r[3].w[0] + 16u), c.f[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1968u)));
    c.f[14] = ld32((c.r[1].w[0] + 3872u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F148u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039F148u) [[unlikely]] return; }
L_0039F148:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0039F14C:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039EFA8u | kUnwind; return; } goto L_0039EFA8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039F180:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F1ACu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 195u, depth + 1u); else { c.pc = 0x0039ED40u; return; } if (c.pc != 0x0039F1ACu) [[unlikely]] return; }
L_0039F1AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], 0u + 3u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[21] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_0039F1F4; } }
    set32(c.r[3], c.r[16].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 335u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[20], c.f[0]);  if (t) { goto L_0039F220; } }
L_0039F1F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 341u);
    c.f[1] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[1]);
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 11;
L_0039F220:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F230u); set32(c.r[4], ld32((c.r[2].w[0] + 1968u)));  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x0039F230u) [[unlikely]] return; }
L_0039F230:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + 80u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], 0u + 255u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0039F258; } }
    breakpoint(c, 0x0039F254u);
    c.budget -= 1;
L_0039F258:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 60u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.r[1].d[0] = c.r[4].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 8);  if (t) { goto L_0039F2A4; } }
    set32(c.r[2], 0u + 30u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0039F294; } }
    breakpoint(c, 0x0039F290u);
    c.budget -= 1;
L_0039F294:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);  if (t) { goto L_0039F2C4; } }
L_0039F2A4:
    set32(c.r[4], c.r[4].w[0] - 30u);
    set32(c.r[2], 0u + 30u);
    set32(c.r[3], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0039F2C0; } }
    breakpoint(c, 0x0039F2BCu);
    c.budget -= 1;
L_0039F2C0:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0039F2C4:
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0039F2D8; } }
    breakpoint(c, 0x0039F2D4u);
    c.budget -= 1;
L_0039F2D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], ld32((c.r[1].w[0] + 3744u)));
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_0039F2F8; } }
    breakpoint(c, 0x0039F2F4u);
    c.budget -= 1;
L_0039F2F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], ld32((c.r[1].w[0] + 3748u)));
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 80u), c.r[5].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_0039F31C; } }
    breakpoint(c, 0x0039F318u);
    c.budget -= 1;
L_0039F31C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], ld32((c.r[1].w[0] + 3752u)));
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 84u), c.r[5].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_0039F340; } }
    breakpoint(c, 0x0039F33Cu);
    c.budget -= 1;
L_0039F340:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], ld32((c.r[1].w[0] + 3756u)));
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 88u), c.r[5].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_0039F364; } }
    breakpoint(c, 0x0039F360u);
    c.budget -= 1;
L_0039F364:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], ld32((c.r[1].w[0] + 3728u)));
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 92u), c.r[5].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_0039F388; } }
    breakpoint(c, 0x0039F384u);
    c.budget -= 1;
L_0039F388:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], ld32((c.r[1].w[0] + 3732u)));
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 64u), c.r[5].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_0039F3AC; } }
    breakpoint(c, 0x0039F3A8u);
    c.budget -= 1;
L_0039F3AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], ld32((c.r[1].w[0] + 3736u)));
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 68u), c.r[5].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_0039F3D0; } }
    breakpoint(c, 0x0039F3CCu);
    c.budget -= 1;
L_0039F3D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], ld32((c.r[1].w[0] + 3740u)));
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 72u), c.r[5].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);  if (t) { goto L_0039F3F4; } }
    breakpoint(c, 0x0039F3F0u);
    c.budget -= 1;
L_0039F3F4:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[17].w[0] + 1600u);
    set32(c.r[5], 0u + 40u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 1760u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F41Cu); st32((c.r[17].w[0] + 1764u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 17u, depth + 1u); else { c.pc = 0x00160A20u; return; } if (c.pc != 0x0039F41Cu) [[unlikely]] return; }
L_0039F41C:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F430u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x0039F430u) [[unlikely]] return; }
L_0039F430:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[14] = ld32((c.r[1].w[0] + 3872u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[21];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F450u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039F450u) [[unlikely]] return; }
L_0039F450:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0039F470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 72u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 128u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039F57C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_0039F49C:
    set32(c.r[3], c.r[4].w[0] - 2u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0039F4B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0039F57C; } }
L_0039F4B4:
    set32(c.r[25], ld32((c.r[16].w[0] + 1264u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F4C4u); set32(c.r[4], c.r[16].w[0] + 1088u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039F4C4u) [[unlikely]] return; }
L_0039F4C4:
    set32(c.r[25], ld32((c.r[16].w[0] + 1520u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F4D4u); set32(c.r[4], c.r[16].w[0] + 1344u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039F4D4u) [[unlikely]] return; }
L_0039F4D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 908u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F4E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039F4E8u) [[unlikely]] return; }
L_0039F4E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 912u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F4FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039F4FCu) [[unlikely]] return; }
L_0039F4FC:
    set32(c.r[25], ld32((c.r[16].w[0] + 1776u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F50Cu); set32(c.r[4], c.r[16].w[0] + 1600u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039F50Cu) [[unlikely]] return; }
L_0039F50C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0039F538; } }
L_0039F514:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1968u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039F534; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F534u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039F534u) [[unlikely]] return; }
L_0039F534:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0039F538:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F514u | kUnwind; return; } goto L_0039F514; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 904u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F55Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039F55Cu) [[unlikely]] return; }
L_0039F55C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1980u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F570u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039F570u) [[unlikely]] return; }
L_0039F570:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 3;
L_0039F57C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039F590:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F470u | kUnwind; return; } goto L_0039F470; }
L_0039F5A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E490u | kUnwind; return; } goto L_0039E490; }
L_0039F5B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039ED50u | kUnwind; return; } goto L_0039ED50; }
L_0039F5C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E490u | kUnwind; return; } goto L_0039E490; }
L_0039F5D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[10], 0u + 20u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F604u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008A(c, 214u, depth + 1u); else { c.pc = 0x0032A240u; return; } if (c.pc != 0x0039F604u) [[unlikely]] return; }
L_0039F604:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 27808u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0039F654; } }
L_0039F618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F620u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039F620u) [[unlikely]] return; }
L_0039F620:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 35u);  if (t) { goto L_0039F644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F634u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x0039F634u) [[unlikely]] return; }
L_0039F634:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F640u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0039F640u) [[unlikely]] return; }
L_0039F640:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039F644:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 4;
L_0039F654:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F618u | kUnwind; return; } goto L_0039F618; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F66Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A7(c, 249u, depth + 1u); else { c.pc = 0x0039F7D0u; return; } if (c.pc != 0x0039F66Cu) [[unlikely]] return; }
L_0039F66C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039F690:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0039F728; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 27808u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0039F6F8; } }
L_0039F6C8:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 28u);  if (t) { goto L_0039F6F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039F6F0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F6F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039F6F0u) [[unlikely]] return; }
L_0039F6F0:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0039F6F8:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F6C8u | kUnwind; return; } goto L_0039F6C8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F710u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0039F710u) [[unlikely]] return; }
L_0039F710:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0039F72C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F728u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0039F728u) [[unlikely]] return; }
L_0039F728:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0039F72C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039F750:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F774u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039F774u) [[unlikely]] return; }
L_0039F774:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039F778:
    set32(c.r[2], c.r[16].w[0] << 2);
    ld128((c.r[17].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F7A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039F7A4u) [[unlikely]] return; }
L_0039F7A4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F778u | kUnwind; return; } goto L_0039F778; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0039F7D0:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st32((c.r[4].w[0] + 64u), c.r[5].w[0]);  if (t) { goto L_0039F870; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 30u);  if (t) { goto L_0039F864; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0039F834; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0039F820; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039F80C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F87C; } }
L_0039F80C:
    set32(c.r[5], 0u + 284u);
    set32(c.r[3], 0u + 30u);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0039F87C; } }
L_0039F820:
    set32(c.r[5], 0u + 196u);
    set32(c.r[3], 0u + 30u);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0039F87C; } }
L_0039F834:
    c.f[0] = c.r[6].w[0];
    set32(c.r[3], 0u + 88u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0039F87C; } }
L_0039F864:
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0039F87C; } }
L_0039F870:
    set32(c.r[3], 0u + 30u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
L_0039F87C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039F890:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 28u)));  c.pc = t; return; }
L_0039F8A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F8C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A7(c, 233u, depth + 1u); else { c.pc = 0x0039F5D0u; return; } if (c.pc != 0x0039F8C0u) [[unlikely]] return; }
L_0039F8C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F8C8u); set32(c.r[4], c.r[19].w[0] + 68u);  if (depth < kMaxDepth) unit_00A7(c, 233u, depth + 1u); else { c.pc = 0x0039F5D0u; return; } if (c.pc != 0x0039F8C8u) [[unlikely]] return; }
L_0039F8C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F8D0u); set32(c.r[4], c.r[19].w[0] + 136u);  if (depth < kMaxDepth) unit_00A7(c, 233u, depth + 1u); else { c.pc = 0x0039F5D0u; return; } if (c.pc != 0x0039F8D0u) [[unlikely]] return; }
L_0039F8D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F8D8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x0039F8D8u) [[unlikely]] return; }
L_0039F8D8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F8E4u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0039F8E4u) [[unlikely]] return; }
L_0039F8E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F8ECu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x0039F8ECu) [[unlikely]] return; }
L_0039F8EC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F8F8u); set32(c.r[4], c.r[19].w[0] + 480u);  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0039F8F8u) [[unlikely]] return; }
L_0039F8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F900u); set32(c.r[4], c.r[19].w[0] + 752u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0039F900u) [[unlikely]] return; }
L_0039F900:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 6304u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F924u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00A7(c, 249u, depth + 1u); else { c.pc = 0x0039F7D0u; return; } if (c.pc != 0x0039F924u) [[unlikely]] return; }
L_0039F924:
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[18], c.r[29].w[0] + 84u);
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0039F97C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 331u);  if (t) { goto L_0039F998; } }
L_0039F97C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 331u);
    c.budget -= 7;
L_0039F998:
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[16], c.r[29].w[0] + 84u);
    set32(c.r[4], c.r[19].w[0] + 68u);
    set32(c.r[5], 0u + 4u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F9BCu); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00A7(c, 249u, depth + 1u); else { c.pc = 0x0039F7D0u; return; } if (c.pc != 0x0039F9BCu) [[unlikely]] return; }
L_0039F9BC:
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    st32((c.r[19].w[0] + 68u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    st32((c.r[19].w[0] + 72u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0039FA10; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_0039FA2C; } }
L_0039FA10:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 7;
L_0039FA2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42920000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[19].w[0] + 136u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FA44u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A7(c, 249u, depth + 1u); else { c.pc = 0x0039F7D0u; return; } if (c.pc != 0x0039FA44u) [[unlikely]] return; }
L_0039FA44:
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    st32((c.r[19].w[0] + 136u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    st32((c.r[19].w[0] + 140u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0039FA98; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 152u), c.r[3].w[0]);  if (t) { goto L_0039FAB4; } }
L_0039FA98:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 7;
L_0039FAB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A50000u);
    set32(c.r[25], ld32((c.r[19].w[0] + 384u)));
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42680000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FAD8u); set32(c.r[4], c.r[19].w[0] + 208u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039FAD8u) [[unlikely]] return; }
L_0039FAD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A50000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[19].w[0] + 496u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 500u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[19].w[0] + 504u), c.r[4].w[0]);
    c.f[14] = 0u;
    set32(c.r[25], ld32((c.r[19].w[0] + 656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43AD0000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FB10u); set32(c.r[4], c.r[19].w[0] + 480u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039FB10u) [[unlikely]] return; }
L_0039FB10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43900000u);
    st32((c.r[19].w[0] + 912u), c.r[2].w[0]);
    c.f[14] = 0u;
    st32((c.r[19].w[0] + 916u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A30000u);
    set32(c.r[25], ld32((c.r[19].w[0] + 928u)));
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42780000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FB44u); set32(c.r[4], c.r[19].w[0] + 752u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039FB44u) [[unlikely]] return; }
L_0039FB44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FB4Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0039FB4Cu) [[unlikely]] return; }
L_0039FB4C:
    ld128((c.r[2].w[0]) & ~15u, c.r[7]);
    set32(c.r[6], 0u + 73u);
    set32(c.r[3], 0u + 331u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[19].w[0] + 800u) & ~15u, c.r[7]);
    set32(c.r[2], 0u + 10u);
    st32((c.r[19].w[0] + 1008u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 1012u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FB78u); st32((c.r[19].w[0] + 1016u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 284u, depth + 1u); else { c.pc = 0x0039FD20u; return; } if (c.pc != 0x0039FB78u) [[unlikely]] return; }
L_0039FB78:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0039FBA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0039FC4C; } }
    set32(c.r[4], c.r[17].w[0] + 752u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_0039FBD8; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FBD8u); st32((c.r[17].w[0] + 928u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x0039FBD8u) [[unlikely]] return; }
L_0039FBD8:
    set32(c.r[4], c.r[17].w[0] + 480u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_0039FBF4; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17536u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FBF4u); st32((c.r[17].w[0] + 656u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x0039FBF4u) [[unlikely]] return; }
L_0039FBF4:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_0039FC10; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17536u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC10u); st32((c.r[17].w[0] + 384u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x0039FC10u) [[unlikely]] return; }
L_0039FC10:
    set32(c.r[4], c.r[17].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC1Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A7(c, 240u, depth + 1u); else { c.pc = 0x0039F690u; return; } if (c.pc != 0x0039FC1Cu) [[unlikely]] return; }
L_0039FC1C:
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC28u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A7(c, 240u, depth + 1u); else { c.pc = 0x0039F690u; return; } if (c.pc != 0x0039FC28u) [[unlikely]] return; }
L_0039FC28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC34u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A7(c, 240u, depth + 1u); else { c.pc = 0x0039F690u; return; } if (c.pc != 0x0039FC34u) [[unlikely]] return; }
L_0039FC34:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039FC50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0039FC4Cu) [[unlikely]] return; }
L_0039FC4C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039FC50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039FC70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC90u); set32(c.r[4], 0u + 31u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0039FC90u) [[unlikely]] return; }
L_0039FC90:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 60u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 812u), c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 928u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FCB4u); set32(c.r[4], c.r[17].w[0] + 752u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039FCB4u) [[unlikely]] return; }
L_0039FCB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FCC0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00A7(c, 245u, depth + 1u); else { c.pc = 0x0039F750u; return; } if (c.pc != 0x0039FCC0u) [[unlikely]] return; }
L_0039FCC0:
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FCCCu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00A7(c, 245u, depth + 1u); else { c.pc = 0x0039F750u; return; } if (c.pc != 0x0039FCCCu) [[unlikely]] return; }
L_0039FCCC:
    st32((c.r[17].w[0] + 268u), c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 384u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FCE0u); set32(c.r[4], c.r[17].w[0] + 208u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039FCE0u) [[unlikely]] return; }
L_0039FCE0:
    st32((c.r[17].w[0] + 540u), c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 656u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FCF4u); set32(c.r[4], c.r[17].w[0] + 480u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039FCF4u) [[unlikely]] return; }
L_0039FCF4:
    set32(c.r[4], c.r[17].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FD00u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00A7(c, 245u, depth + 1u); else { c.pc = 0x0039F750u; return; } if (c.pc != 0x0039FD00u) [[unlikely]] return; }
L_0039FD00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039FD20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FD3Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0039FD3Cu) [[unlikely]] return; }
L_0039FD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FD44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 214u, depth + 1u); else { c.pc = 0x0031DA70u; return; } if (c.pc != 0x0039FD44u) [[unlikely]] return; }
L_0039FD44:
    st32((c.r[17].w[0] + 1020u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 1008u);
    set32(c.r[5], c.r[17].w[0] + 136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FD58u); st32((c.r[17].w[0] + 1024u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_008B(c, 305u, depth + 1u); else { c.pc = 0x0032F370u; return; } if (c.pc != 0x0039FD58u) [[unlikely]] return; }
L_0039FD58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039FD70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FD84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 233u, depth + 1u); else { c.pc = 0x0039F5D0u; return; } if (c.pc != 0x0039FD84u) [[unlikely]] return; }
L_0039FD84:
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 80u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039FDB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0039FE18; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039FDF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039FDF0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FDF0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039FDF0u) [[unlikely]] return; }
L_0039FDF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FE00u); st32((c.r[17].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_00A7(c, 240u, depth + 1u); else { c.pc = 0x0039F690u; return; } if (c.pc != 0x0039FE00u) [[unlikely]] return; }
L_0039FE00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039FE1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FE18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0039FE18u) [[unlikely]] return; }
L_0039FE18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039FE1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039FE30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FE60u); st32((c.r[4].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0039FE60u) [[unlikely]] return; }
L_0039FE60:
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0039FED0; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 13u));
    c.r[20].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0039FECC; } }
    st32((c.r[19].w[0] + 80u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FEA0u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 292u, depth + 1u); else { c.pc = 0x0031E860u; return; } if (c.pc != 0x0039FEA0u) [[unlikely]] return; }
L_0039FEA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039FEB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FEB0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031E800u; return; } if (c.pc != 0x0039FEB0u) [[unlikely]] return; }
L_0039FEB0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039FEB4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0039FECC; } }
    st32((c.r[19].w[0] + 80u), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0039FECC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0039FED0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FEDCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A7(c, 249u, depth + 1u); else { c.pc = 0x0039F7D0u; return; } if (c.pc != 0x0039FEDCu) [[unlikely]] return; }
L_0039FEDC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0039FF24; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 68u);  if (t) { goto L_0039FF0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FEF8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039FEF8u) [[unlikely]] return; }
L_0039FEF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0039FF08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FF08u);  if (depth < kMaxDepth) unit_00A7(c, 233u, depth + 1u); else { c.pc = 0x0039F5D0u; return; } if (c.pc != 0x0039FF08u) [[unlikely]] return; }
L_0039FF08:
    st32((c.r[19].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 1;
L_0039FF0C:
    set32(c.r[4], ld32((c.r[19].w[0] + 68u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FF1Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A7(c, 249u, depth + 1u); else { c.pc = 0x0039F7D0u; return; } if (c.pc != 0x0039FF1Cu) [[unlikely]] return; }
L_0039FF1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0039FF50; } }
L_0039FF24:
    set32(c.r[4], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039FF48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039FF48; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FF48u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039FF48u) [[unlikely]] return; }
L_0039FF48:
    st32((c.r[19].w[0] + 68u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 2;
L_0039FF50:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0039FF70:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FFBCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0039FFBCu) [[unlikely]] return; }
L_0039FFBC:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00A8(c, 37u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FFDCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0039FFDCu) [[unlikely]] return; }
L_0039FFDC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 272u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 76u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00A8(c, 2u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FFFCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0039FFFCu) [[unlikely]] return; }
L_0039FFFC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 1;
    [[clang::musttail]] return unit_00A8(c, 1u, depth);
}

}
