#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0036[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 0, 72,
    0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0,
    234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275,
    0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 283, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0036(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001D8000;
    case 2u: goto L_001D8030;
    case 3u: goto L_001D803C;
    case 4u: goto L_001D8054;
    case 5u: goto L_001D8070;
    case 6u: goto L_001D8090;
    case 7u: goto L_001D80A0;
    case 8u: goto L_001D80B0;
    case 9u: goto L_001D80C8;
    case 10u: goto L_001D80D8;
    case 11u: goto L_001D80F8;
    case 12u: goto L_001D8110;
    case 13u: goto L_001D8130;
    case 14u: goto L_001D8158;
    case 15u: goto L_001D8164;
    case 16u: goto L_001D81B0;
    case 17u: goto L_001D81FC;
    case 18u: goto L_001D8210;
    case 19u: goto L_001D8250;
    case 20u: goto L_001D825C;
    case 21u: goto L_001D8274;
    case 22u: goto L_001D8290;
    case 23u: goto L_001D82B0;
    case 24u: goto L_001D82C0;
    case 25u: goto L_001D82D0;
    case 26u: goto L_001D82E8;
    case 27u: goto L_001D82F8;
    case 28u: goto L_001D8318;
    case 29u: goto L_001D8330;
    case 30u: goto L_001D8350;
    case 31u: goto L_001D83A4;
    case 32u: goto L_001D8420;
    case 33u: goto L_001D8430;
    case 34u: goto L_001D84E0;
    case 35u: goto L_001D8500;
    case 36u: goto L_001D8530;
    case 37u: goto L_001D8580;
    case 38u: goto L_001D85A4;
    case 39u: goto L_001D85F0;
    case 40u: goto L_001D860C;
    case 41u: goto L_001D861C;
    case 42u: goto L_001D8628;
    case 43u: goto L_001D8658;
    case 44u: goto L_001D8674;
    case 45u: goto L_001D8684;
    case 46u: goto L_001D8690;
    case 47u: goto L_001D86C0;
    case 48u: goto L_001D86DC;
    case 49u: goto L_001D86EC;
    case 50u: goto L_001D86F8;
    case 51u: goto L_001D8728;
    case 52u: goto L_001D8744;
    case 53u: goto L_001D8754;
    case 54u: goto L_001D8760;
    case 55u: goto L_001D87A0;
    case 56u: goto L_001D87D0;
    case 57u: goto L_001D8814;
    case 58u: goto L_001D8820;
    case 59u: goto L_001D8834;
    case 60u: goto L_001D8870;
    case 61u: goto L_001D8884;
    case 62u: goto L_001D8898;
    case 63u: goto L_001D88AC;
    case 64u: goto L_001D88E8;
    case 65u: goto L_001D8978;
    case 66u: goto L_001D8990;
    case 67u: goto L_001D89B0;
    case 68u: goto L_001D89C8;
    case 69u: goto L_001D89D8;
    case 70u: goto L_001D89E4;
    case 71u: goto L_001D89EC;
    case 72u: goto L_001D89FC;
    case 73u: goto L_001D8A08;
    case 74u: goto L_001D8A10;
    case 75u: goto L_001D8A20;
    case 76u: goto L_001D8A2C;
    case 77u: goto L_001D8A50;
    case 78u: goto L_001D8A90;
    case 79u: goto L_001D8AC0;
    case 80u: goto L_001D8AFC;
    case 81u: goto L_001D8B24;
    case 82u: goto L_001D8B9C;
    case 83u: goto L_001D8BC4;
    case 84u: goto L_001D8BE0;
    case 85u: goto L_001D8C28;
    case 86u: goto L_001D8C4C;
    case 87u: goto L_001D8CE8;
    case 88u: goto L_001D8D40;
    case 89u: goto L_001D8DAC;
    case 90u: goto L_001D8DF8;
    case 91u: goto L_001D8E90;
    case 92u: goto L_001D8EAC;
    case 93u: goto L_001D8ED0;
    case 94u: goto L_001D8EE4;
    case 95u: goto L_001D8EF0;
    case 96u: goto L_001D8F48;
    case 97u: goto L_001D8F64;
    case 98u: goto L_001D8F88;
    case 99u: goto L_001D8F9C;
    case 100u: goto L_001D8FA8;
    case 101u: goto L_001D9018;
    case 102u: goto L_001D9034;
    case 103u: goto L_001D9058;
    case 104u: goto L_001D906C;
    case 105u: goto L_001D9078;
    case 106u: goto L_001D9118;
    case 107u: goto L_001D9134;
    case 108u: goto L_001D9158;
    case 109u: goto L_001D916C;
    case 110u: goto L_001D9178;
    case 111u: goto L_001D91B8;
    case 112u: goto L_001D9208;
    case 113u: goto L_001D92CC;
    case 114u: goto L_001D92E8;
    case 115u: goto L_001D9338;
    case 116u: goto L_001D93C8;
    case 117u: goto L_001D9434;
    case 118u: goto L_001D9460;
    case 119u: goto L_001D946C;
    case 120u: goto L_001D948C;
    case 121u: goto L_001D94BC;
    case 122u: goto L_001D94DC;
    case 123u: goto L_001D95B8;
    case 124u: goto L_001D95E8;
    case 125u: goto L_001D95F8;
    case 126u: goto L_001D961C;
    case 127u: goto L_001D9638;
    case 128u: goto L_001D9694;
    case 129u: goto L_001D96A4;
    case 130u: goto L_001D9704;
    case 131u: goto L_001D9714;
    case 132u: goto L_001D9738;
    case 133u: goto L_001D9754;
    case 134u: goto L_001D9810;
    case 135u: goto L_001D9860;
    case 136u: goto L_001D98FC;
    case 137u: goto L_001D9930;
    case 138u: goto L_001D9948;
    case 139u: goto L_001D99B4;
    case 140u: goto L_001D9A1C;
    case 141u: goto L_001D9A30;
    case 142u: goto L_001D9BA4;
    case 143u: goto L_001D9BAC;
    case 144u: goto L_001D9BEC;
    case 145u: goto L_001D9BF8;
    case 146u: goto L_001D9C38;
    case 147u: goto L_001D9C54;
    case 148u: goto L_001D9C70;
    case 149u: goto L_001D9D80;
    case 150u: goto L_001D9E34;
    case 151u: goto L_001D9E64;
    case 152u: goto L_001D9EBC;
    case 153u: goto L_001D9EE0;
    case 154u: goto L_001D9F04;
    case 155u: goto L_001DA310;
    case 156u: goto L_001DA330;
    case 157u: goto L_001DA338;
    case 158u: goto L_001DA350;
    case 159u: goto L_001DA3B4;
    case 160u: goto L_001DA3C4;
    case 161u: goto L_001DA404;
    case 162u: goto L_001DA450;
    case 163u: goto L_001DA498;
    case 164u: goto L_001DA4B4;
    case 165u: goto L_001DA4F8;
    case 166u: goto L_001DA508;
    case 167u: goto L_001DA52C;
    case 168u: goto L_001DA548;
    case 169u: goto L_001DA588;
    case 170u: goto L_001DA5A0;
    case 171u: goto L_001DA5E8;
    case 172u: goto L_001DA604;
    case 173u: goto L_001DA648;
    case 174u: goto L_001DA658;
    case 175u: goto L_001DA67C;
    case 176u: goto L_001DA698;
    case 177u: goto L_001DA6D8;
    case 178u: goto L_001DA6F8;
    case 179u: goto L_001DA708;
    case 180u: goto L_001DA72C;
    case 181u: goto L_001DA748;
    case 182u: goto L_001DA770;
    case 183u: goto L_001DA7B0;
    case 184u: goto L_001DA7E8;
    case 185u: goto L_001DA824;
    case 186u: goto L_001DA848;
    case 187u: goto L_001DA874;
    case 188u: goto L_001DA88C;
    case 189u: goto L_001DA8B0;
    case 190u: goto L_001DA8CC;
    case 191u: goto L_001DA8E4;
    case 192u: goto L_001DA92C;
    case 193u: goto L_001DA93C;
    case 194u: goto L_001DA960;
    case 195u: goto L_001DA97C;
    case 196u: goto L_001DAAE8;
    case 197u: goto L_001DAB18;
    case 198u: goto L_001DAB34;
    case 199u: goto L_001DABEC;
    case 200u: goto L_001DABFC;
    case 201u: goto L_001DACB8;
    case 202u: goto L_001DACDC;
    case 203u: goto L_001DAD50;
    case 204u: goto L_001DAD5C;
    case 205u: goto L_001DAE10;
    case 206u: goto L_001DAE40;
    case 207u: goto L_001DAE5C;
    case 208u: goto L_001DAE90;
    case 209u: goto L_001DAEC0;
    case 210u: goto L_001DAED8;
    case 211u: goto L_001DAEF0;
    case 212u: goto L_001DAF20;
    case 213u: goto L_001DAF38;
    case 214u: goto L_001DAF50;
    case 215u: goto L_001DAF80;
    case 216u: goto L_001DAF98;
    case 217u: goto L_001DAFB0;
    case 218u: goto L_001DAFE0;
    case 219u: goto L_001DAFF8;
    case 220u: goto L_001DB010;
    case 221u: goto L_001DB040;
    case 222u: goto L_001DB058;
    case 223u: goto L_001DB070;
    case 224u: goto L_001DB0A0;
    case 225u: goto L_001DB0B8;
    case 226u: goto L_001DB0D0;
    case 227u: goto L_001DB100;
    case 228u: goto L_001DB118;
    case 229u: goto L_001DB130;
    case 230u: goto L_001DB140;
    case 231u: goto L_001DB150;
    case 232u: goto L_001DB160;
    case 233u: goto L_001DB170;
    case 234u: goto L_001DB180;
    case 235u: goto L_001DB190;
    case 236u: goto L_001DB1A0;
    case 237u: goto L_001DB1B0;
    case 238u: goto L_001DB1C0;
    case 239u: goto L_001DB1D0;
    case 240u: goto L_001DB1EC;
    case 241u: goto L_001DB228;
    case 242u: goto L_001DB248;
    case 243u: goto L_001DB280;
    case 244u: goto L_001DB2B0;
    case 245u: goto L_001DB2C8;
    case 246u: goto L_001DB2E0;
    case 247u: goto L_001DB334;
    case 248u: goto L_001DB3A4;
    case 249u: goto L_001DB3B4;
    case 250u: goto L_001DB3C4;
    case 251u: goto L_001DB3D4;
    case 252u: goto L_001DB3F8;
    case 253u: goto L_001DB410;
    case 254u: goto L_001DB420;
    case 255u: goto L_001DB430;
    case 256u: goto L_001DB454;
    case 257u: goto L_001DB4A0;
    case 258u: goto L_001DB5E0;
    case 259u: goto L_001DB5FC;
    case 260u: goto L_001DB650;
    case 261u: goto L_001DB680;
    case 262u: goto L_001DB700;
    case 263u: goto L_001DB720;
    case 264u: goto L_001DB740;
    case 265u: goto L_001DB758;
    case 266u: goto L_001DB768;
    case 267u: goto L_001DB780;
    case 268u: goto L_001DB7A4;
    case 269u: goto L_001DB7E0;
    case 270u: goto L_001DB800;
    case 271u: goto L_001DB840;
    case 272u: goto L_001DB870;
    case 273u: goto L_001DB888;
    case 274u: goto L_001DB8A0;
    case 275u: goto L_001DB8FC;
    case 276u: goto L_001DB910;
    case 277u: goto L_001DB988;
    case 278u: goto L_001DB9C4;
    case 279u: goto L_001DBA0C;
    case 280u: goto L_001DBA48;
    case 281u: goto L_001DBA68;
    case 282u: goto L_001DBA70;
    case 283u: goto L_001DBA78;
    case 284u: goto L_001DBAB4;
    case 285u: goto L_001DBAD8;
    case 286u: goto L_001DBAF0;
    case 287u: goto L_001DBB10;
    case 288u: goto L_001DBB30;
    case 289u: goto L_001DBB50;
    case 290u: goto L_001DBB64;
    case 291u: goto L_001DBB80;
    case 292u: goto L_001DBBA0;
    case 293u: goto L_001DBBE0;
    case 294u: goto L_001DBD5C;
    case 295u: goto L_001DBD7C;
    case 296u: goto L_001DBF98;
    case 297u: goto L_001DBFAC;
    default: bad_entry(c, 0x001D8000u); return;
    }
L_001D8000:
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D8054; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 9056u);
    set32(c.r[2], c.r[2].w[0] - 9040u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 28u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8030u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x001D8030u) [[unlikely]] return; }
L_001D8030:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D803Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001D803Cu) [[unlikely]] return; }
L_001D803C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D8058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8054u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001D8054u) [[unlikely]] return; }
L_001D8054:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D8058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D8070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D80C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8090u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0034(c, 63u, depth + 1u); else { c.pc = 0x001D0740u; return; } if (c.pc != 0x001D8090u) [[unlikely]] return; }
L_001D8090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D80B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D80A0u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0034(c, 67u, depth + 1u); else { c.pc = 0x001D07D0u; return; } if (c.pc != 0x001D80A0u) [[unlikely]] return; }
L_001D80A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D80B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D80B0u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0034(c, 68u, depth + 1u); else { c.pc = 0x001D07E0u; return; } if (c.pc != 0x001D80B0u) [[unlikely]] return; }
L_001D80B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D80C0; } }
L_001D80B8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001D80C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D80C8u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0034(c, 99u, depth + 1u); else { c.pc = 0x001D0E10u; return; } if (c.pc != 0x001D80C8u) [[unlikely]] return; }
L_001D80C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D80E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D80D8u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0034(c, 61u, depth + 1u); else { c.pc = 0x001D06C0u; return; } if (c.pc != 0x001D80D8u) [[unlikely]] return; }
L_001D80D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8114; } }
L_001D80E0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D8114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D80F8u);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001D80F8u) [[unlikely]] return; }
L_001D80F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], 0u + 514u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8110u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001D8110u) [[unlikely]] return; }
L_001D8110:
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001D8114:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D8130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48640000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8158u); c.r[5].d[0] = c.r[2].d[0] | 20590ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001D8158u) [[unlikely]] return; }
L_001D8158:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8164u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x001D8164u) [[unlikely]] return; }
L_001D8164:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 9104u);
    set32(c.r[2], c.r[2].w[0] - 9088u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], 0u + 900u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 36u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 40u), c.r[4].w[0]);
    st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D81B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001D81E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31184u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001D81FC; } }
L_001D81E4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D81FC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D81FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D81FCu) [[unlikely]] return; }
L_001D81FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001D8210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D8274; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 9104u);
    set32(c.r[2], c.r[2].w[0] - 9088u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 28u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8250u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x001D8250u) [[unlikely]] return; }
L_001D8250:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D825Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001D825Cu) [[unlikely]] return; }
L_001D825C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D8278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8274u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001D8274u) [[unlikely]] return; }
L_001D8274:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D8278:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D8290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D82E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D82B0u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0034(c, 63u, depth + 1u); else { c.pc = 0x001D0740u; return; } if (c.pc != 0x001D82B0u) [[unlikely]] return; }
L_001D82B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D82D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D82C0u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0034(c, 67u, depth + 1u); else { c.pc = 0x001D07D0u; return; } if (c.pc != 0x001D82C0u) [[unlikely]] return; }
L_001D82C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D82D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D82D0u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0034(c, 68u, depth + 1u); else { c.pc = 0x001D07E0u; return; } if (c.pc != 0x001D82D0u) [[unlikely]] return; }
L_001D82D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D82E0; } }
L_001D82D8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001D82E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D82E8u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0034(c, 99u, depth + 1u); else { c.pc = 0x001D0E10u; return; } if (c.pc != 0x001D82E8u) [[unlikely]] return; }
L_001D82E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D8300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D82F8u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0034(c, 61u, depth + 1u); else { c.pc = 0x001D06C0u; return; } if (c.pc != 0x001D82F8u) [[unlikely]] return; }
L_001D82F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8334; } }
L_001D8300:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D8334; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8318u);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001D8318u) [[unlikely]] return; }
L_001D8318:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], 0u + 513u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8330u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001D8330u) [[unlikely]] return; }
L_001D8330:
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001D8334:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D8350:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 144u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2480000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 136u), c.f[1]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D83A4u); st32((c.r[29].w[0] + 152u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 48u, depth + 1u); else { c.pc = 0x00144FA0u; return; } if (c.pc != 0x001D83A4u) [[unlikely]] return; }
L_001D83A4:
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 128u);
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
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[29].w[0] + 144u);
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
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8420u); set32(c.r[4], c.r[17].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x001D8420u) [[unlikely]] return; }
L_001D8420:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[17].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8430u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x001D8430u) [[unlikely]] return; }
L_001D8430:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D8450; } }
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 208u) & ~15u, c.r[3]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st128((c.r[17].w[0] + 224u) & ~15u, c.r[3]);  if (t) { goto L_001D84BC; } }
L_001D8450:
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st128((c.r[17].w[0] + 208u) & ~15u, c.r[3]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 224u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[1].w[0] + 20544u));
    c.f[1] = ld32((c.r[17].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 20544u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001D849C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20536u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 212u), c.f[0]);  if (t) { goto L_001D84BC; } }
L_001D849C:
    c.f[0] = ld32((c.r[1].w[0] + 20528u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D84BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20536u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_001D84BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001D84E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8500u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x001D8500u) [[unlikely]] return; }
L_001D8500:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9120u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D8530:
    set32(c.r[8], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], 0u + 250u);
    set32(c.r[4], ld32((c.r[8].w[0] + 168u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D8578; } }
    st32((c.r[8].w[0] + 776u), 0u);
    set32(c.r[5], 0u - 3u);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 398u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 398u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[8].w[0] + 394u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[8].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
L_001D8578:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D8580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D85A4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 312u, depth + 1u); else { c.pc = 0x001F3D90u; return; } if (c.pc != 0x001D85A4u) [[unlikely]] return; }
L_001D85A4:
    c.r[1].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D8780; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001D8718; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001D86B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001D8648; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001D85E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D8784; } }
L_001D85E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1264u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48640000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D85F0u); c.r[5].d[0] = c.r[2].d[0] | 20590ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001D85F0u) [[unlikely]] return; }
L_001D85F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001D85FC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001D85FC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 900u);  if (t) { goto L_001D8630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D860Cu); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001D860Cu) [[unlikely]] return; }
L_001D860C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D861C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D861Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 13u, depth + 1u); else { c.pc = 0x001D8130u; return; } if (c.pc != 0x001D861Cu) [[unlikely]] return; }
L_001D861C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8628u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001D8628u) [[unlikely]] return; }
L_001D8628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001D8640; } }
L_001D8630:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_001D8640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001D8788; } }
L_001D8648:
    set32(c.r[4], ld32((c.r[16].w[0] + 1264u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42640000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8658u); c.r[5].d[0] = c.r[2].d[0] | 20590ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001D8658u) [[unlikely]] return; }
L_001D8658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001D8664; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001D8664:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 900u);  if (t) { goto L_001D8698; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8674u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001D8674u) [[unlikely]] return; }
L_001D8674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D8684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8684u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 256u, depth + 1u); else { c.pc = 0x001D7F10u; return; } if (c.pc != 0x001D8684u) [[unlikely]] return; }
L_001D8684:
    set32(c.r[4], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8690u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001D8690u) [[unlikely]] return; }
L_001D8690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001D86A8; } }
L_001D8698:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_001D86A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8784; } }
L_001D86B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1264u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C670000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D86C0u); c.r[5].d[0] = c.r[2].d[0] | 20590ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001D86C0u) [[unlikely]] return; }
L_001D86C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001D86CC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001D86CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 900u);  if (t) { goto L_001D8700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D86DCu); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001D86DCu) [[unlikely]] return; }
L_001D86DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D86EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D86ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 240u, depth + 1u); else { c.pc = 0x001D7D10u; return; } if (c.pc != 0x001D86ECu) [[unlikely]] return; }
L_001D86EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D86F8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001D86F8u) [[unlikely]] return; }
L_001D86F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001D8710; } }
L_001D8700:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_001D8710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8784; } }
L_001D8718:
    set32(c.r[4], ld32((c.r[16].w[0] + 1264u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C670000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8728u); c.r[5].d[0] = c.r[2].d[0] | 20590ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001D8728u) [[unlikely]] return; }
L_001D8728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001D8734; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001D8734:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 900u);  if (t) { goto L_001D8768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8744u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001D8744u) [[unlikely]] return; }
L_001D8744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D8754; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8754u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 224u, depth + 1u); else { c.pc = 0x001D7B10u; return; } if (c.pc != 0x001D8754u) [[unlikely]] return; }
L_001D8754:
    set32(c.r[4], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8760u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001D8760u) [[unlikely]] return; }
L_001D8760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001D8778; } }
L_001D8768:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_001D8778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D8784; } }
L_001D8780:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D8784:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001D8788:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D87A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001D87C4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001D87C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D87D0u); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001D87D0u) [[unlikely]] return; }
L_001D87D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001D87DC; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001D87DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].d[0] = c.r[4].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D884C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8814u);  if (depth < kMaxDepth) unit_003F(c, 312u, depth + 1u); else { c.pc = 0x001FF210u; return; } if (c.pc != 0x001D8814u) [[unlikely]] return; }
L_001D8814:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001D8840; } }
L_001D8820:
    set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8834u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 37u, depth + 1u); else { c.pc = 0x001D8580u; return; } if (c.pc != 0x001D8834u) [[unlikely]] return; }
L_001D8834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D884C; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001D8840:
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8820u | kUnwind; return; } goto L_001D8820; } }
L_001D884C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D8870:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8884u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001D8884u) [[unlikely]] return; }
L_001D8884:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D8980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8898u);  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x001D8898u) [[unlikely]] return; }
L_001D8898:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D8980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D88ACu);  if (depth < kMaxDepth) unit_0034(c, 174u, depth + 1u); else { c.pc = 0x001D22D0u; return; } if (c.pc != 0x001D88ACu) [[unlikely]] return; }
L_001D88AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D8980; } }
    set32(c.r[2], c.r[29].w[0] + 32u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D88E8u); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001D88E8u) [[unlikely]] return; }
L_001D88E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = ld32((c.r[1].w[0] + 20504u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D8914; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20496u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D893C; } }
L_001D8914:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = ld32((c.r[1].w[0] + 20480u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001D893C; } }
    c.f[0] = ld32((c.r[1].w[0] + 20472u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D8980; } }
L_001D893C:
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001D8964; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20552u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 36u), c.f[0]);  if (t) { goto L_001D896C; } }
L_001D8964:
    c.f[0] = ld32((c.r[1].w[0] + 20488u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.budget -= 2;
L_001D896C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 368u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8978u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001D8978u) [[unlikely]] return; }
L_001D8978:
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.budget -= 2;
L_001D8980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D8990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D89B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x001D89B0u) [[unlikely]] return; }
L_001D89B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 32u);
    set32(c.r[2], c.r[2].w[0] - 9136u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D89C8u); st32((c.r[17].w[0] + 28u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001D89C8u) [[unlikely]] return; }
L_001D89C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D89D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D89D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 178u, depth + 1u); else { c.pc = 0x001D7020u; return; } if (c.pc != 0x001D89D8u) [[unlikely]] return; }
L_001D89D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D89E4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001D89E4u) [[unlikely]] return; }
L_001D89E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D89ECu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001D89ECu) [[unlikely]] return; }
L_001D89EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D89FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D89FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 185u, depth + 1u); else { c.pc = 0x001D7150u; return; } if (c.pc != 0x001D89FCu) [[unlikely]] return; }
L_001D89FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8A08u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001D8A08u) [[unlikely]] return; }
L_001D8A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8A10u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001D8A10u) [[unlikely]] return; }
L_001D8A10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D8A20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8A20u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 107u, depth + 1u); else { c.pc = 0x001D6210u; return; } if (c.pc != 0x001D8A20u) [[unlikely]] return; }
L_001D8A20:
    set32(c.r[4], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8A2Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001D8A2Cu) [[unlikely]] return; }
L_001D8A2C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D8A50:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_001D8A88; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 2;
L_001D8A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8A90u); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001D8A90u) [[unlikely]] return; }
L_001D8A90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001D8AA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001D8AA4; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D8AA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x494B0000u);  if (t) { goto L_001D8AB8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x494B0000u);
    c.budget -= 2;
L_001D8AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8AC0u); c.r[5].d[0] = c.r[2].d[0] | 21573ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001D8AC0u) [[unlikely]] return; }
L_001D8AC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001D8AD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001D8AD4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D8AD4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D8AF4; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[3].w[0] + 136u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 144u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 148u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 152u), 0u);
    c.budget -= 6;
L_001D8AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8AFCu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001D8AFCu) [[unlikely]] return; }
L_001D8AFC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8B68; } }
    set32(c.r[19], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 717u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4450u);  if (t) { goto L_001D8B34; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8B24u); set32(c.r[5], 0u + 112u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001D8B24u) [[unlikely]] return; }
L_001D8B24:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001D8B38; } }
    set32(c.r[2], 0u + 4450u);
    c.budget -= 1;
L_001D8B34:
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 1;
L_001D8B38:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 712u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D8B50; } }
    set32(c.r[2], 0u + 4452u);
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_001D8B50:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 541u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D8B68; } }
    set32(c.r[2], 0u + 4452u);
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_001D8B68:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 300u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D8B84; } }
    set32(c.r[2], 0u + 360u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D8CFC; } }
L_001D8B84:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 360u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D8BC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8B9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001D8B9Cu) [[unlikely]] return; }
L_001D8B9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8BC4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D8BBC; } }
    st32((c.r[17].w[0] + 168u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001D8BBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8BC4u);  if (depth < kMaxDepth) unit_0036(c, 60u, depth + 1u); else { c.pc = 0x001D8870u; return; } if (c.pc != 0x001D8BC4u) [[unlikely]] return; }
L_001D8BC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D8BC8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);  if (t) { goto L_001D8BD8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    c.budget -= 2;
L_001D8BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8BE0u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001D8BE0u) [[unlikely]] return; }
L_001D8BE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8BF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001D8BF4; } }
L_001D8BF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D8BF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D8C44; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 378u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D8C40; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8C28u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x00168C20u; return; } if (c.pc != 0x001D8C28u) [[unlikely]] return; }
L_001D8C28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8CFC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 164u), c.r[2].w[0]);  if (t) { goto L_001D8CFC; } }
L_001D8C40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D8C44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8C4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001D8C4Cu) [[unlikely]] return; }
L_001D8C4C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 1786u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001D8C64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_001D8CC4; } }
L_001D8C64:
    set32(c.r[2], 0u + 1778u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1785u);  if (t) { goto L_001D8C7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 2u);  if (t) { goto L_001D8CC4; } }
    set32(c.r[2], 0u + 1785u);
    c.budget -= 1;
L_001D8C7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1783u);  if (t) { goto L_001D8C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 3u);  if (t) { goto L_001D8CC4; } }
    set32(c.r[2], 0u + 1783u);
    c.budget -= 1;
L_001D8C90:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1792u);  if (t) { goto L_001D8CA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 5u);  if (t) { goto L_001D8CC4; } }
    set32(c.r[2], 0u + 1792u);
    c.budget -= 1;
L_001D8CA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1774u);  if (t) { goto L_001D8CB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 6u);  if (t) { goto L_001D8CC4; } }
    set32(c.r[2], 0u + 1774u);
    c.budget -= 1;
L_001D8CB8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D8CC4; } }
    set32(c.r[19], 0u + 7u);
    c.budget -= 1;
L_001D8CC4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001D8CFC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8CE8u); set32(c.r[5], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x00168C20u; return; } if (c.pc != 0x001D8CE8u) [[unlikely]] return; }
L_001D8CE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8CFC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 3;
L_001D8CFC:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 580u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D8D30; } }
    set32(c.r[2], 0u + 581u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D8D30; } }
    set32(c.r[2], 0u + 540u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D8D30; } }
    set32(c.r[2], 0u + 541u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D8D44; } }
L_001D8D30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8D40u); set32(c.r[5], ld32((c.r[17].w[0] + 164u)));  if (depth < kMaxDepth) unit_001A(c, 52u, depth + 1u); else { c.pc = 0x00168C40u; return; } if (c.pc != 0x001D8D40u) [[unlikely]] return; }
L_001D8D40:
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 1;
L_001D8D44:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D8D68; } }
    c.r[2].d[0] = c.r[3].sd[0] < 441ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D8DB8; } }
    c.r[1].d[0] = c.r[3].sd[0] < 453ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D8DB8; } }
L_001D8D68:
    set32(c.r[2], ld32((c.r[17].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001D8DB8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D8DB8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 402u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D8DB8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], 0u + 430u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D8DB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8DACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 192u, depth + 1u); else { c.pc = 0x001D29B0u; return; } if (c.pc != 0x001D8DACu) [[unlikely]] return; }
L_001D8DAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8DB8; } }
    st32((c.r[17].w[0] + 164u), 0u);
    c.budget -= 1;
L_001D8DB8:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D8DE0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 471ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D8E08; } }
    c.r[1].d[0] = c.r[3].sd[0] < 483ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D8E08; } }
L_001D8DE0:
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], 0u + 460u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D8E08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8DF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 192u, depth + 1u); else { c.pc = 0x001D29B0u; return; } if (c.pc != 0x001D8DF8u) [[unlikely]] return; }
L_001D8DF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8E08; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_001D8E08:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D9190; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[4], c.r[4].w[0] - 25200u);
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], c.r[4].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 1u);
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001D9190; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 441u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D8E88; } }
    set32(c.r[2], 0u + 471u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D8E84; } }
    set32(c.r[2], 0u + 444u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D8E84; } }
    set32(c.r[2], 0u + 474u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D8F08; } }
L_001D8E84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D8E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8E90u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_003C(c, 312u, depth + 1u); else { c.pc = 0x001F3D90u; return; } if (c.pc != 0x001D8E90u) [[unlikely]] return; }
L_001D8E90:
    c.r[1].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D8F08; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1264u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C670000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8EACu); c.r[5].d[0] = c.r[2].d[0] | 20590ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001D8EACu) [[unlikely]] return; }
L_001D8EAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001D8EC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001D8EC0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D8EC0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 900u);  if (t) { goto L_001D8EFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8ED0u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001D8ED0u) [[unlikely]] return; }
L_001D8ED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8EE4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8EE4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 224u, depth + 1u); else { c.pc = 0x001D7B10u; return; } if (c.pc != 0x001D8EE4u) [[unlikely]] return; }
L_001D8EE4:
    set32(c.r[4], ld32((c.r[17].w[0] + 1264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8EF0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001D8EF0u) [[unlikely]] return; }
L_001D8EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 164u)));  if (t) { goto L_001D8F0C; } }
    set32(c.r[3], 0u + 900u);
    c.budget -= 1;
L_001D8EFC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001D8F08:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_001D8F0C:
    set32(c.r[2], 0u + 442u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D8F40; } }
    set32(c.r[2], 0u + 472u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D8F3C; } }
    set32(c.r[2], 0u + 445u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D8F3C; } }
    set32(c.r[2], 0u + 475u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D8FC0; } }
L_001D8F3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D8F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8F48u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_003C(c, 312u, depth + 1u); else { c.pc = 0x001F3D90u; return; } if (c.pc != 0x001D8F48u) [[unlikely]] return; }
L_001D8F48:
    c.r[1].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D8FC0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1264u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C670000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8F64u); c.r[5].d[0] = c.r[2].d[0] | 20590ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001D8F64u) [[unlikely]] return; }
L_001D8F64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001D8F78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001D8F78; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D8F78:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 900u);  if (t) { goto L_001D8FB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8F88u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001D8F88u) [[unlikely]] return; }
L_001D8F88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8F9C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8F9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 240u, depth + 1u); else { c.pc = 0x001D7D10u; return; } if (c.pc != 0x001D8F9Cu) [[unlikely]] return; }
L_001D8F9C:
    set32(c.r[4], ld32((c.r[17].w[0] + 1264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8FA8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001D8FA8u) [[unlikely]] return; }
L_001D8FA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 164u)));  if (t) { goto L_001D8FC4; } }
    set32(c.r[3], 0u + 900u);
    c.budget -= 1;
L_001D8FB4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001D8FC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_001D8FC4:
    set32(c.r[2], 0u + 446u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D9010; } }
    set32(c.r[2], 0u + 447u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D900C; } }
    set32(c.r[2], 0u + 452u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D900C; } }
    set32(c.r[2], 0u + 476u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D900C; } }
    set32(c.r[2], 0u + 477u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D900C; } }
    set32(c.r[2], 0u + 482u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D9090; } }
L_001D900C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D9010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9018u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 312u, depth + 1u); else { c.pc = 0x001F3D90u; return; } if (c.pc != 0x001D9018u) [[unlikely]] return; }
L_001D9018:
    c.r[1].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D9090; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1264u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48640000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9034u); c.r[5].d[0] = c.r[2].d[0] | 20590ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001D9034u) [[unlikely]] return; }
L_001D9034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001D9048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001D9048; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D9048:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 900u);  if (t) { goto L_001D9084; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9058u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001D9058u) [[unlikely]] return; }
L_001D9058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D906C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D906Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 13u, depth + 1u); else { c.pc = 0x001D8130u; return; } if (c.pc != 0x001D906Cu) [[unlikely]] return; }
L_001D906C:
    set32(c.r[4], ld32((c.r[17].w[0] + 1264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9078u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001D9078u) [[unlikely]] return; }
L_001D9078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 164u)));  if (t) { goto L_001D9094; } }
    set32(c.r[3], 0u + 900u);
    c.budget -= 1;
L_001D9084:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001D9090:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_001D9094:
    set32(c.r[2], 0u + 443u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D9110; } }
    set32(c.r[2], 0u + 448u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D910C; } }
    set32(c.r[2], 0u + 449u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D910C; } }
    set32(c.r[2], 0u + 450u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D910C; } }
    set32(c.r[2], 0u + 451u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D910C; } }
    set32(c.r[2], 0u + 473u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D910C; } }
    set32(c.r[2], 0u + 478u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D910C; } }
    set32(c.r[2], 0u + 479u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D910C; } }
    set32(c.r[2], 0u + 480u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D910C; } }
    set32(c.r[2], 0u + 481u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D9190; } }
L_001D910C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D9110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9118u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 312u, depth + 1u); else { c.pc = 0x001F3D90u; return; } if (c.pc != 0x001D9118u) [[unlikely]] return; }
L_001D9118:
    c.r[1].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D9190; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1264u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42640000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9134u); c.r[5].d[0] = c.r[2].d[0] | 20590ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001D9134u) [[unlikely]] return; }
L_001D9134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001D9148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001D9148; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D9148:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 900u);  if (t) { goto L_001D9184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9158u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001D9158u) [[unlikely]] return; }
L_001D9158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D916C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D916Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 256u, depth + 1u); else { c.pc = 0x001D7F10u; return; } if (c.pc != 0x001D916Cu) [[unlikely]] return; }
L_001D916C:
    set32(c.r[4], ld32((c.r[17].w[0] + 1264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9178u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001D9178u) [[unlikely]] return; }
L_001D9178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 164u)));  if (t) { goto L_001D9194; } }
    set32(c.r[3], 0u + 900u);
    c.budget -= 1;
L_001D9184:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001D9190:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_001D9194:
    c.r[2].d[0] = c.r[3].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D9200; } }
    c.r[1].d[0] = c.r[3].sd[0] < 78ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D91FC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D91B8u); set32(c.r[5], 0u + 51u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001D91B8u) [[unlikely]] return; }
L_001D91B8:
    set32(c.r[6], ld32((c.r[17].w[0] + 164u)));
    c.r[7].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], 0u - 129u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[6], c.r[6].w[0] - 70u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[17].w[0] + 164u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 397u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 397u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 395u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 17;
L_001D91FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D9200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9208u);  if (depth < kMaxDepth) unit_0034(c, 97u, depth + 1u); else { c.pc = 0x001D0D70u; return; } if (c.pc != 0x001D9208u) [[unlikely]] return; }
L_001D9208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D9310; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 1735u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9310; } }
    set32(c.r[2], 0u + 1737u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9310; } }
    set32(c.r[2], 0u + 1738u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9310; } }
    set32(c.r[2], 0u + 1740u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9310; } }
    set32(c.r[2], 0u + 1743u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9310; } }
    set32(c.r[2], 0u + 1744u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9310; } }
    set32(c.r[2], 0u + 1765u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9310; } }
    set32(c.r[2], 0u + 1766u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9310; } }
    set32(c.r[2], 0u + 1767u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9310; } }
    set32(c.r[2], 0u + 1768u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9310; } }
    set32(c.r[2], 0u + 1771u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9310; } }
    set32(c.r[2], 0u + 1773u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9310; } }
    set32(c.r[2], 0u + 1789u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9310; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_001D92C4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 2;
L_001D92C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D92CCu); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001D92CCu) [[unlikely]] return; }
L_001D92CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001D92E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001D92E0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D92E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D92E8u);  if (depth < kMaxDepth) unit_003D(c, 26u, depth + 1u); else { c.pc = 0x001F4440u; return; } if (c.pc != 0x001D92E8u) [[unlikely]] return; }
L_001D92E8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001D9310; } }
    set32(c.r[2], 0u + 1705u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 394u));
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_001D9310:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 50u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D9370; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D9370; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9338u); set32(c.r[5], 0u + 92u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001D9338u) [[unlikely]] return; }
L_001D9338:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], 0u - 65u);
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 397u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 397u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 395u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
L_001D9370:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 809u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D93C0; } }
    set32(c.r[2], 0u + 808u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D93BC; } }
    set32(c.r[2], 0u + 903u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D93BC; } }
    set32(c.r[2], 0u + 812u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D93BC; } }
    set32(c.r[2], 0u + 813u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D93BC; } }
    set32(c.r[2], 0u + 806u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D9414; } }
L_001D93BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D93C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D93C8u);  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001D93C8u) [[unlikely]] return; }
L_001D93C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D9414; } }
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], 0u + 812u);
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 808u);  if (t) { goto L_001D93F8; } }
    set32(c.r[2], 0u + 813u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D93FC; } }
    set32(c.r[2], 0u + 808u);
    c.budget -= 1;
L_001D93F8:
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 1;
L_001D93FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 806u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D9414; } }
    set32(c.r[2], 0u + 808u);
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_001D9414:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 664u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 677u);  if (t) { goto L_001D9440; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 33u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9434u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 35u, depth + 1u); else { c.pc = 0x001B0680u; return; } if (c.pc != 0x001D9434u) [[unlikely]] return; }
L_001D9434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D9464; } }
    set32(c.r[2], 0u + 677u);
    c.budget -= 1;
L_001D9440:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D9460; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 385u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 33u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9460u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 35u, depth + 1u); else { c.pc = 0x001B0680u; return; } if (c.pc != 0x001D9460u) [[unlikely]] return; }
L_001D9460:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D9464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D946Cu);  if (depth < kMaxDepth) unit_0034(c, 97u, depth + 1u); else { c.pc = 0x001D0D70u; return; } if (c.pc != 0x001D946Cu) [[unlikely]] return; }
L_001D946C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D94B4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 667u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D94B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D948Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 85u, depth + 1u); else { c.pc = 0x001D0B30u; return; } if (c.pc != 0x001D948Cu) [[unlikely]] return; }
L_001D948C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D94B0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].sd[0] < 7000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D94BC; } }
    c.r[1].d[0] = c.r[3].sd[0] < 7200ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D94BC; } }
L_001D94B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D94B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D94BCu);  if (depth < kMaxDepth) unit_003E(c, 8u, depth + 1u); else { c.pc = 0x001F81D0u; return; } if (c.pc != 0x001D94BCu) [[unlikely]] return; }
L_001D94BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D94F0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 262u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D94F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D94DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 310u, depth + 1u); else { c.pc = 0x001F3C80u; return; } if (c.pc != 0x001D94DCu) [[unlikely]] return; }
L_001D94DC:
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 120u);
    st32((c.r[17].w[0] + 640u), c.r[2].w[0]);
    c.budget -= 5;
L_001D94F0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 370u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D9510; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 768u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D9510; } }
    st32((c.r[17].w[0] + 768u), 0u);
    c.budget -= 1;
L_001D9510:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 5289u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9538; } }
    set32(c.r[2], 0u + 5286u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9538; } }
    set32(c.r[2], 0u + 5293u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D957C; } }
L_001D9538:
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D957C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D957C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D957C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001D9578; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D957C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D9578:
    st32((c.r[17].w[0] + 768u), c.r[2].w[0]);
    c.budget -= 1;
L_001D957C:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 15350u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D95B0; } }
    set32(c.r[2], 0u + 15360u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D95B0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 15370ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D968C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 15390ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D9688; } }
L_001D95B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D95B8u); c.r[4].d[0] = ld8((c.r[17].w[0] + 369u));  if (depth < kMaxDepth) unit_0035(c, 45u, depth + 1u); else { c.pc = 0x001D50B0u; return; } if (c.pc != 0x001D95B8u) [[unlikely]] return; }
L_001D95B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D9688; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 168u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 464u)));
    st32((c.r[17].w[0] + 644u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D95E8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001D95E8u) [[unlikely]] return; }
L_001D95E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[17].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D95F8u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001D95F8u) [[unlikely]] return; }
L_001D95F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001D960C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001D960C; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D960C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[19].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D961Cu); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001D961Cu) [[unlikely]] return; }
L_001D961C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001D9630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001D9630; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D9630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9638u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001D9638u) [[unlikely]] return; }
L_001D9638:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 392u));
    set32(c.r[4], 0u - 33u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[3], 0u - 2u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[19].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[19].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 20;
L_001D9688:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D968C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9694u);  if (depth < kMaxDepth) unit_0034(c, 111u, depth + 1u); else { c.pc = 0x001D0F60u; return; } if (c.pc != 0x001D9694u) [[unlikely]] return; }
L_001D9694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D96D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D96A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 112u, depth + 1u); else { c.pc = 0x001D0F70u; return; } if (c.pc != 0x001D96A4u) [[unlikely]] return; }
L_001D96A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D96D4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 15610u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D96D4; } }
    set32(c.r[2], 0u + 15620u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D96D4; } }
    set32(c.r[2], 0u + 15520u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D97AC; } }
L_001D96D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 644u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9704u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001D9704u) [[unlikely]] return; }
L_001D9704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[17].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9714u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001D9714u) [[unlikely]] return; }
L_001D9714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001D9728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001D9728; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D9728:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[19].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9738u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001D9738u) [[unlikely]] return; }
L_001D9738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001D974C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001D974C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D974C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9754u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001D9754u) [[unlikely]] return; }
L_001D9754:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 392u));
    set32(c.r[4], 0u - 33u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[3], 0u - 2u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[19].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[19].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 369u));
    st8((c.r[19].w[0] + 369u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 22;
L_001D97AC:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].sd[0] < 15550ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D9890; } }
    c.r[1].d[0] = c.r[3].sd[0] < 15570ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D9890; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D9860; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 644u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 464u)));
    st32((c.r[17].w[0] + 644u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9810u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001D9810u) [[unlikely]] return; }
L_001D9810:
    c.r[7].d[0] = ld8((c.r[19].w[0] + 392u));
    set32(c.r[4], 0u - 33u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[3], 0u - 2u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], 0u + 11u);
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[19].w[0] + 392u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 393u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[19].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D9860; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 60u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9860u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 161u, depth + 1u); else { c.pc = 0x00211F40u; return; } if (c.pc != 0x001D9860u) [[unlikely]] return; }
L_001D9860:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 392u));
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[2], 0u - 2u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 393u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
L_001D9890:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].sd[0] < 15370ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D98FC; } }
    c.r[1].d[0] = c.r[3].sd[0] < 15390ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D98FC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D98FC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 644u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 28352u);
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[2], 0u + 11u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], ld32((c.r[4].w[0])));  if (t) { goto L_001D98FC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 720u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D98FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 161u, depth + 1u); else { c.pc = 0x00211F40u; return; } if (c.pc != 0x001D98FCu) [[unlikely]] return; }
L_001D98FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 724u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9918; } }
    set32(c.r[2], 0u + 722u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D9930; } }
L_001D9918:
    set32(c.r[2], ld32((c.r[17].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D9930; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9930u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 110u, depth + 1u); else { c.pc = 0x001B9B30u; return; } if (c.pc != 0x001D9930u) [[unlikely]] return; }
L_001D9930:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 732u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D999C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9948u); set32(c.r[4], ld32((c.r[17].w[0] + 240u)));  if (depth < kMaxDepth) unit_0038(c, 65u, depth + 1u); else { c.pc = 0x001E0D30u; return; } if (c.pc != 0x001D9948u) [[unlikely]] return; }
L_001D9948:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001D9960; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001D9968; } }
L_001D9960:
    set32(c.r[2], 0u + 733u);
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_001D9968:
    st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 65u);
    st8((c.r[17].w[0] + 368u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 394u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 592u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D999C; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[17].w[0] + 592u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001D999C:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 733u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D99F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D99B4u); set32(c.r[4], ld32((c.r[17].w[0] + 240u)));  if (depth < kMaxDepth) unit_0038(c, 65u, depth + 1u); else { c.pc = 0x001E0D30u; return; } if (c.pc != 0x001D99B4u) [[unlikely]] return; }
L_001D99B4:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_001D99CC; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 2;
L_001D99CC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D99DC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D99DC:
    st8((c.r[17].w[0] + 368u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 592u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D99F4; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[17].w[0] + 592u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001D99F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 726u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D9B24; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D9B24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9A1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 81u, depth + 1u); else { c.pc = 0x001D5AC0u; return; } if (c.pc != 0x001D9A1Cu) [[unlikely]] return; }
L_001D9A1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D9B24; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9A30u); set32(c.r[5], ld32((c.r[2].w[0] + 240u)));  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001D9A30u) [[unlikely]] return; }
L_001D9A30:
    st32((c.r[29].w[0] + 220u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[17].w[0] + 212u));
    c.f[1] = ld32((c.r[29].w[0] + 220u));
    c.f[0] = ld32((c.r[1].w[0] + 20544u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 220u), c.f[1]);  if (t) { goto L_001D9A68; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20536u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 220u), c.f[0]);  if (t) { goto L_001D9A8C; } }
L_001D9A68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20528u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D9A8C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20536u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 220u), c.f[0]);
    c.budget -= 4;
L_001D9A8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 20536u));
    c.f[2] = ld32((c.r[29].w[0] + 220u));
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20520u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D9ACC; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001D9AE8; } }
L_001D9ACC:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001D9AE8:
    c.r[3].d[0] = c.r[2].d[0] & 4095ull;
    c.r[2].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D9B24; } }
    c.r[1].d[0] = c.r[3].sd[0] < 3841ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D9B24; } }
    c.r[1].d[0] = c.r[3].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001D9B20; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_001D9B24; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001D9B20:
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 1;
L_001D9B24:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 1682u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9B4C; } }
    set32(c.r[2], 0u + 1684u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D9B4C; } }
    set32(c.r[2], 0u + 1683u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D9BF0; } }
L_001D9B4C:
    c.r[9].d[0] = ld8((c.r[17].w[0] + 394u));
    set32(c.r[6], 0u - 65u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[2], 0u - 2u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.r[6].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 394u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 397u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 397u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 393u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[17].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 369u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9BA4u); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001D9BA4u) [[unlikely]] return; }
L_001D9BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9BACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x001D9BACu) [[unlikely]] return; }
L_001D9BAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D9BBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 212u), 0u);  if (t) { goto L_001D9BC8; } }
L_001D9BBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20544u));
    st32((c.r[17].w[0] + 212u), c.f[0]);
    c.budget -= 3;
L_001D9BC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20464u));
    st32((c.r[17].w[0] + 224u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20456u));
    st32((c.r[17].w[0] + 232u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 369u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9BECu); set32(c.r[4], c.r[17].w[0] + 208u);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001D9BECu) [[unlikely]] return; }
L_001D9BEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D9BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9BF8u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001D9BF8u) [[unlikely]] return; }
L_001D9BF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D9C20; } }
    st8((c.r[17].w[0] + 590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D9C28; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 587u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001D9C28; } }
L_001D9C20:
    set32(c.r[2], 0u - 1u);
    st8((c.r[17].w[0] + 585u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001D9C28:
    set32(c.r[19], ld32((c.r[17].w[0] + 164u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9C38u); set32(c.r[5], 0u + 115u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001D9C38u) [[unlikely]] return; }
L_001D9C38:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_001D9C7C; } }
    set32(c.r[19], ld32((c.r[17].w[0] + 164u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9C54u); set32(c.r[5], 0u + 116u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001D9C54u) [[unlikely]] return; }
L_001D9C54:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_001D9C7C; } }
    set32(c.r[19], ld32((c.r[17].w[0] + 164u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9C70u); set32(c.r[5], 0u + 117u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001D9C70u) [[unlikely]] return; }
L_001D9C70:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_001D9CC0; } }
L_001D9C7C:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 923u));
    c.r[3].d[0] = c.r[5].d[0] & 63ull;
    c.r[1].d[0] = c.r[3].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + 5u);  if (t) { goto L_001D9CAC; } }
    set32(c.r[3], 0u - 64u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(31ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 923u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001D9CC0; } }
    set32(c.r[4], c.r[3].w[0] + 5u);
    c.budget -= 1;
L_001D9CAC:
    set32(c.r[3], 0u - 64u);
    c.r[4].d[0] = c.r[4].d[0] & 63ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 923u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001D9CC0:
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D9CDC; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D9CE8; } }
L_001D9CDC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D9CE8; } }
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 1;
L_001D9CE8:
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D9D24; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], 0u + 100u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_001D9D0C; } }
    breakpoint(c, 0x001D9D08u);
    c.budget -= 1;
L_001D9D0C:
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], 0u + 72u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D9D24; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 2;
L_001D9D24:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 402u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D9D88; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 30u);  if (t) { goto L_001D9D58; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D9D88; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 1;
L_001D9D58:
    set32(c.r[2], 0u + 20u);
    st32((c.r[17].w[0] + 640u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_001D9D78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001D9D78; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_001D9D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9D80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001D9D80u) [[unlikely]] return; }
L_001D9D80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_001DAE70; } }
L_001D9D88:
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D9EBC; } }
    set32(c.r[3], 0u + 704u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D9EBC; } }
    set32(c.r[3], 0u + 551u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D9EBC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D9EBC; } }
    c.r[2].d[0] = c.r[4].sd[0] < 1011ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001D9DD0; } }
    c.r[1].d[0] = c.r[4].sd[0] < 1015ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001D9E24; } }
L_001D9DD0:
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    c.r[2].d[0] = c.r[3].sd[0] < 1058ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D9DEC; } }
    c.r[1].d[0] = c.r[3].sd[0] < 1062ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001D9E24; } }
L_001D9DEC:
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    c.r[2].d[0] = c.r[3].sd[0] < 1111ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D9E08; } }
    c.r[1].d[0] = c.r[3].sd[0] < 1115ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001D9E24; } }
L_001D9E08:
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    c.r[2].d[0] = c.r[3].sd[0] < 1155ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D9E2C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 1159ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D9E28; } }
L_001D9E24:
    set32(c.r[20], 0u + 1u);
    c.budget -= 1;
L_001D9E28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D9E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9E34u);  if (depth < kMaxDepth) unit_0034(c, 158u, depth + 1u); else { c.pc = 0x001D1A70u; return; } if (c.pc != 0x001D9E34u) [[unlikely]] return; }
L_001D9E34:
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    c.r[3].d[0] = c.r[4].sd[0] < 450ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D9E5C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 458ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D9E5C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001D9E9C; } }
L_001D9E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9E64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 229u, depth + 1u); else { c.pc = 0x001D34E0u; return; } if (c.pc != 0x001D9E64u) [[unlikely]] return; }
L_001D9E64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D9E88; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D9EBC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D9EBC; } }
L_001D9E88:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001D9EBC; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_001D9EBC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001D9E9C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D9EB4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_001D9EBC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D9EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9EBCu);  if (depth < kMaxDepth) unit_0035(c, 196u, depth + 1u); else { c.pc = 0x001D7760u; return; } if (c.pc != 0x001D9EBCu) [[unlikely]] return; }
L_001D9EBC:
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    c.r[3].d[0] = c.r[4].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D9F04; } }
    c.r[1].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D9F04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9EE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 158u, depth + 1u); else { c.pc = 0x001D1A70u; return; } if (c.pc != 0x001D9EE0u) [[unlikely]] return; }
L_001D9EE0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D9EFC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D9F04; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D9EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9F04u);  if (depth < kMaxDepth) unit_0035(c, 196u, depth + 1u); else { c.pc = 0x001D7760u; return; } if (c.pc != 0x001D9F04u) [[unlikely]] return; }
L_001D9F04:
    set32(c.r[4], ld32((c.r[17].w[0] + 644u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D9F1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001D9F30; } }
L_001D9F1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 5;
L_001D9F30:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[4].d[0] = c.r[3].sd[0] < 1620ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], 0u + 1604u);  if (t) { goto L_001D9F50; } }
    c.r[4].d[0] = c.r[3].sd[0] < 1630ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001DADE8; } }
    set32(c.r[4], 0u + 1604u);
    c.budget -= 1;
L_001D9F50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DAA68; } }
    set32(c.r[4], 0u + 1645u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DAA68; } }
    set32(c.r[4], 0u + 1612u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DAA68; } }
    set32(c.r[4], 0u + 1611u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DAA68; } }
    set32(c.r[4], 0u + 1610u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DAA68; } }
    set32(c.r[4], 0u + 1606u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DAA68; } }
    set32(c.r[4], 0u + 1605u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DAA68; } }
    set32(c.r[4], 0u + 1603u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DAA68; } }
    set32(c.r[4], 0u + 1602u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DAA68; } }
    set32(c.r[4], 0u + 1601u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DAA68; } }
    set32(c.r[4], 0u + 1600u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DAA68; } }
    set32(c.r[4], 0u + 15700u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15730u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    c.r[4].d[0] = c.r[3].sd[0] < 15710ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], 0u + 15720u);  if (t) { goto L_001DA004; } }
    c.r[4].d[0] = c.r[3].sd[0] < 15720ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15720u);
    c.budget -= 1;
L_001DA004:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 1633u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 1632u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 1630u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 1631u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 1609u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 1608u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15250u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15476u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15430u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15190u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15180u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15100u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15150u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15115u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15110u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15140u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15130u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15120u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15090u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15070u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15060u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15050u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15040u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15030u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15020u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 15330u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA8FC; } }
    set32(c.r[4], 0u + 1902u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA87C; } }
    set32(c.r[4], 0u + 1901u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA87C; } }
    set32(c.r[4], 0u + 1900u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA87C; } }
    set32(c.r[4], 0u + 1903u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA87C; } }
    set32(c.r[4], 0u + 1576u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA7B0; } }
    set32(c.r[4], 0u + 1578u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA7B0; } }
    set32(c.r[4], 0u + 1577u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA7B0; } }
    set32(c.r[4], 0u + 1573u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA7B0; } }
    set32(c.r[4], 0u + 1570u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA7B0; } }
    set32(c.r[4], 0u + 1575u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA7B0; } }
    set32(c.r[4], 0u + 1571u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA7B0; } }
    set32(c.r[4], 0u + 1572u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA7B0; } }
    set32(c.r[4], 0u + 1574u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA750; } }
    c.r[4].d[0] = c.r[3].sd[0] < 15500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], 0u + 15080u);  if (t) { goto L_001DA1FC; } }
    c.r[4].d[0] = c.r[3].sd[0] < 15510ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001DA6E0; } }
    set32(c.r[4], 0u + 15080u);
    c.budget -= 1;
L_001DA1FC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DA598; } }
    set32(c.r[4], 0u + 15470u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DA448; } }
    set32(c.r[4], 0u + 1558u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA3E0; } }
    set32(c.r[4], 0u + 1556u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA3E0; } }
    set32(c.r[4], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA3D8; } }
    set32(c.r[4], 0u + 62u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA3BC; } }
    set32(c.r[4], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA3BC; } }
    set32(c.r[4], 0u + 660u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA2CC; } }
    c.r[4].d[0] = c.r[3].sd[0] < 6250ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], 0u + 6007u);  if (t) { goto L_001DA274; } }
    c.r[4].d[0] = c.r[3].sd[0] < 6258ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001DA2C0; } }
    set32(c.r[4], 0u + 6007u);
    c.budget -= 1;
L_001DA274:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA2C0; } }
    set32(c.r[4], 0u + 6005u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA2C0; } }
    set32(c.r[4], 0u + 6000u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA2C0; } }
    set32(c.r[4], 0u + 6001u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA2C0; } }
    set32(c.r[4], 0u + 5970u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA2C0; } }
    set32(c.r[4], 0u + 5950u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DA2C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DAE6C; } }
L_001DA2C0:
    st8((c.r[17].w[0] + 369u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 368u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001DAE6C; } }
L_001DA2CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DA2EC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 604u), c.f[0]);  if (t) { goto L_001DAE6C; } }
L_001DA2EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 228u), c.f[0]);  if (t) { goto L_001DA304; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001DA304:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA310u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DA310u) [[unlikely]] return; }
L_001DA310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001DA324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DA324; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA324:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA330u); c.f[12] = ld32((c.r[2].w[0] + 52u));  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001DA330u) [[unlikely]] return; }
L_001DA330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA338u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 66u, depth + 1u); else { c.pc = 0x001E0DC0u; return; } if (c.pc != 0x001DA338u) [[unlikely]] return; }
L_001DA338:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 660u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DA3A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA350u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 159u, depth + 1u); else { c.pc = 0x001D1C40u; return; } if (c.pc != 0x001DA350u) [[unlikely]] return; }
L_001DA350:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001DA39C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DA394; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001DA38C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001DA384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 228u));  if (t) { goto L_001DA3A8; } }
L_001DA384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 168u), c.r[3].w[0]);  if (t) { goto L_001DA3A4; } }
L_001DA38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 168u), 0u);  if (t) { goto L_001DA3A4; } }
L_001DA394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 168u), c.r[3].w[0]);  if (t) { goto L_001DA3A4; } }
L_001DA39C:
    set32(c.r[2], 0u + 3u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 2;
L_001DA3A4:
    c.f[0] = ld32((c.r[17].w[0] + 228u));
    c.budget -= 1;
L_001DA3A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA3B4u); st32((c.r[17].w[0] + 604u), c.f[0]);  if (depth < kMaxDepth) unit_0036(c, 60u, depth + 1u); else { c.pc = 0x001D8870u; return; } if (c.pc != 0x001DA3B4u) [[unlikely]] return; }
L_001DA3B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DAE6C; } }
L_001DA3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA3C4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001DA3C4u) [[unlikely]] return; }
L_001DA3C4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DA3D8; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 2;
L_001DA3D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001DAE6C; } }
L_001DA3E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[17].w[0] + 804u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 20568u));
    st32((c.r[17].w[0] + 808u), c.f[0]);
    st32((c.r[17].w[0] + 800u), 0u);
    c.f[12] = ld32((c.r[17].w[0] + 212u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA404u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001DA404u) [[unlikely]] return; }
L_001DA404:
    set32(c.r[4], c.r[17].w[0] + 800u);
    set32(c.r[3], c.r[29].w[0] + 144u);
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
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 228u), c.f[0]);  if (t) { goto L_001DAE6C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DA448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA450u);  if (depth < kMaxDepth) unit_0039(c, 24u, depth + 1u); else { c.pc = 0x001E4490u; return; } if (c.pc != 0x001DA450u) [[unlikely]] return; }
L_001DA450:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DA580; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 644u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001DA57C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_001DA490; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 2;
L_001DA490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA498u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DA498u) [[unlikely]] return; }
L_001DA498:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001DA4AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DA4AC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA4B4u);  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001CD4B0u; return; } if (c.pc != 0x001DA4B4u) [[unlikely]] return; }
L_001DA4B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DA57C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[17].w[0] + 652u));
    st32((c.r[17].w[0] + 212u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 480u)));
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA4F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001DA4F8u) [[unlikely]] return; }
L_001DA4F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[17].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA508u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DA508u) [[unlikely]] return; }
L_001DA508:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001DA51C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DA51C; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA51C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA52Cu); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DA52Cu) [[unlikely]] return; }
L_001DA52C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001DA540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DA540; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA548u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001DA548u) [[unlikely]] return; }
L_001DA548:
    st32((c.r[16].w[0] + 60u), c.r[17].w[0]);
    set32(c.r[3], 0u + 35u);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DAE6C; } }
    set32(c.r[4], 0u + 1903u);
    set32(c.r[3], 0u + 255u);
    st32((c.r[17].w[0] + 164u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 164u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 168u), 0u);
    st32((c.r[16].w[0] + 168u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_001DAE6C; } }
L_001DA57C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DA580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA588u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001DA588u) [[unlikely]] return; }
L_001DA588:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 644u), c.r[3].w[0]);  if (t) { goto L_001DAE6C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DA598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA5A0u);  if (depth < kMaxDepth) unit_0039(c, 24u, depth + 1u); else { c.pc = 0x001E4490u; return; } if (c.pc != 0x001DA5A0u) [[unlikely]] return; }
L_001DA5A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DA6D0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 644u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001DA6CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_001DA5E0; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 2;
L_001DA5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA5E8u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DA5E8u) [[unlikely]] return; }
L_001DA5E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001DA5FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DA5FC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA604u);  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001CD4B0u; return; } if (c.pc != 0x001DA604u) [[unlikely]] return; }
L_001DA604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DA6CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[17].w[0] + 652u));
    st32((c.r[17].w[0] + 212u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 480u)));
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA648u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001DA648u) [[unlikely]] return; }
L_001DA648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[17].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA658u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DA658u) [[unlikely]] return; }
L_001DA658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001DA66C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DA66C; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA66C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA67Cu); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DA67Cu) [[unlikely]] return; }
L_001DA67C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001DA690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DA690; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA698u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001DA698u) [[unlikely]] return; }
L_001DA698:
    st32((c.r[16].w[0] + 60u), c.r[17].w[0]);
    set32(c.r[3], 0u + 255u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], 0u + 35u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DAE6C; } }
    set32(c.r[3], 0u + 1903u);
    st32((c.r[17].w[0] + 164u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 168u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 168u), 0u);  if (t) { goto L_001DAE6C; } }
L_001DA6CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DA6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA6D8u); set32(c.r[5], 0u + 226u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001DA6D8u) [[unlikely]] return; }
L_001DA6D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DAE6C; } }
L_001DA6E0:
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA6F8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001DA6F8u) [[unlikely]] return; }
L_001DA6F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[17].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA708u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DA708u) [[unlikely]] return; }
L_001DA708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001DA71C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DA71C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA71C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[19].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA72Cu); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DA72Cu) [[unlikely]] return; }
L_001DA72C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001DA740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DA740; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA748u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001DA748u) [[unlikely]] return; }
L_001DA748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DAE6C; } }
L_001DA750:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001DA770; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA770u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001DA770u) [[unlikely]] return; }
L_001DA770:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001DA7B0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 720u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001DA7A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[2].w[0])));  if (t) { goto L_001DA7A4; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA7A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA7B0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 161u, depth + 1u); else { c.pc = 0x00211F40u; return; } if (c.pc != 0x001DA7B0u) [[unlikely]] return; }
L_001DA7B0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001DAE6C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DA804; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 1571u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DA7E0; } }
    set32(c.r[2], 0u + 1575u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DA804; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001DA7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA7E8u);  if (depth < kMaxDepth) unit_003C(c, 310u, depth + 1u); else { c.pc = 0x001F3C80u; return; } if (c.pc != 0x001DA7E8u) [[unlikely]] return; }
L_001DA7E8:
    set32(c.r[3], ld32((c.r[17].w[0] + 640u)));
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 120u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 640u), c.r[2].w[0]);
    c.budget -= 7;
L_001DA804:
    set32(c.r[3], ld32((c.r[19].w[0] + 480u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.r[5].d[0] = c.r[2].d[0] | 20035ull;
    set32(c.r[4], c.r[17].w[0] + 436u);
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    ld128((c.r[19].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA824u); st128((c.r[17].w[0] + 224u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DA824u) [[unlikely]] return; }
L_001DA824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001DA838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DA838; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA838:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[19].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA848u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DA848u) [[unlikely]] return; }
L_001DA848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001DA85C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DA85C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA85C:
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA874u); st32((c.r[19].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001DA874u) [[unlikely]] return; }
L_001DA874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DAE6C; } }
L_001DA87C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[17].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA88Cu); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DA88Cu) [[unlikely]] return; }
L_001DA88C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001DA8A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DA8A0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA8A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[19].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA8B0u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DA8B0u) [[unlikely]] return; }
L_001DA8B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001DA8C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DA8C4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA8C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA8CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001DA8CCu) [[unlikely]] return; }
L_001DA8CC:
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA8E4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001DA8E4u) [[unlikely]] return; }
L_001DA8E4:
    st32((c.r[19].w[0] + 60u), c.r[17].w[0]);
    set32(c.r[3], 0u + 255u);
    st32((c.r[19].w[0] + 24u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 370u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001DAE6C; } }
L_001DA8FC:
    set32(c.r[3], ld32((c.r[19].w[0] + 480u)));
    set32(c.r[2], 0u + 1609u);
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[7], 0u + 1u);  if (t) { goto L_001DA918; } }
    st32((c.r[17].w[0] + 168u), 0u);
    c.budget -= 1;
L_001DA918:
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA92Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001DA92Cu) [[unlikely]] return; }
L_001DA92C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[17].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA93Cu); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DA93Cu) [[unlikely]] return; }
L_001DA93C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001DA950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DA950; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA950:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[19].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA960u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DA960u) [[unlikely]] return; }
L_001DA960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001DA974; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DA974; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA97Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001DA97Cu) [[unlikely]] return; }
L_001DA97C:
    st32((c.r[19].w[0] + 60u), c.r[17].w[0]);
    set32(c.r[3], 0u + 255u);
    st32((c.r[19].w[0] + 24u), c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 370u));
    set32(c.r[3], 0u + 15020u);
    st8((c.r[19].w[0] + 370u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DAE6C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[3], 0u + 66u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 67u);  if (t) { goto L_001DA9BC; } }
    set32(c.r[3], 0u + 200u);
    st32((c.r[17].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[3], 0u + 67u);
    c.budget -= 3;
L_001DA9BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 68u);  if (t) { goto L_001DA9D0; } }
    set32(c.r[3], 0u + 202u);
    st32((c.r[17].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[3], 0u + 68u);
    c.budget -= 3;
L_001DA9D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 97u);  if (t) { goto L_001DA9E4; } }
    set32(c.r[3], 0u + 204u);
    st32((c.r[17].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[3], 0u + 97u);
    c.budget -= 3;
L_001DA9E4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 98u);  if (t) { goto L_001DA9F8; } }
    set32(c.r[3], 0u + 206u);
    st32((c.r[17].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[3], 0u + 98u);
    c.budget -= 3;
L_001DA9F8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 99u);  if (t) { goto L_001DAA0C; } }
    set32(c.r[3], 0u + 208u);
    st32((c.r[17].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[3], 0u + 99u);
    c.budget -= 3;
L_001DAA0C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 161u);  if (t) { goto L_001DAA20; } }
    set32(c.r[3], 0u + 210u);
    st32((c.r[17].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[3], 0u + 161u);
    c.budget -= 3;
L_001DAA20:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 160u);  if (t) { goto L_001DAA34; } }
    set32(c.r[3], 0u + 212u);
    st32((c.r[17].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[3], 0u + 160u);
    c.budget -= 3;
L_001DAA34:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 159u);  if (t) { goto L_001DAA48; } }
    set32(c.r[3], 0u + 214u);
    st32((c.r[17].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[3], 0u + 159u);
    c.budget -= 3;
L_001DAA48:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DAA58; } }
    set32(c.r[3], 0u + 216u);
    st32((c.r[17].w[0] + 172u), c.r[3].w[0]);
    c.budget -= 2;
L_001DAA58:
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 172u), c.r[3].w[0]);  if (t) { goto L_001DAE6C; } }
L_001DAA68:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 1604u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DAA84; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 896u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[17].w[0] + 896u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001DAA84:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 1645u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DAA98; } }
    st16((c.r[17].w[0] + 896u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001DAA98:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 1606u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DAAC0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DAAC0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 896u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[17].w[0] + 896u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001DAAC0:
    set32(c.r[3], ld32((c.r[19].w[0] + 480u)));
    set32(c.r[2], 0u + 255u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001DAADC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001DAADC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAAE8u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DAAE8u) [[unlikely]] return; }
L_001DAAE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001DAAFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DAAFC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DAAFC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_001DAB10; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 2;
L_001DAB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAB18u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DAB18u) [[unlikely]] return; }
L_001DAB18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001DAB2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DAB2C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DAB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAB34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001DAB34u) [[unlikely]] return; }
L_001DAB34:
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], 0u + 1601u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DADD4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 984u)));
    set32(c.r[3], c.r[29].w[0] + 112u);
    st16((c.r[2].w[0] + 896u), static_cast<std::uint16_t>(0u));
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 128u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2480000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 120u), c.f[1]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 112u);
    set32(c.r[4], ld32((c.r[19].w[0] + 64u)));
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
    set32(c.r[2], c.r[29].w[0] + 128u);
    set32(c.r[4], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[3], c.r[29].w[0] + 128u);
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
    set32(c.r[4], c.r[17].w[0] + 224u);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DABECu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x001DABECu) [[unlikely]] return; }
L_001DABEC:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[17].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DABFCu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x001DABFCu) [[unlikely]] return; }
L_001DABFC:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DAC18; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001DAC2C; } }
L_001DAC18:
    ld128((c.r[19].w[0] + 208u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 208u) & ~15u, c.r[3]);
    ld128((c.r[19].w[0] + 224u) & ~15u, c.r[3]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st128((c.r[17].w[0] + 224u) & ~15u, c.r[3]);  if (t) { goto L_001DAC9C; } }
L_001DAC2C:
    ld128((c.r[19].w[0] + 208u) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st128((c.r[17].w[0] + 208u) & ~15u, c.r[3]);
    ld128((c.r[19].w[0] + 224u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 224u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[1].w[0] + 20544u));
    c.f[1] = ld32((c.r[17].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 20544u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DAC78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20536u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 212u), c.f[0]);  if (t) { goto L_001DAC9C; } }
L_001DAC78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20528u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DAC9C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20536u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_001DAC9C:
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DAE6C; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001DAD2C; } }
L_001DACB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DAD28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DACDCu);  if (depth < kMaxDepth) unit_0034(c, 155u, depth + 1u); else { c.pc = 0x001D1920u; return; } if (c.pc != 0x001DACDCu) [[unlikely]] return; }
L_001DACDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DAD28; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 1603u);
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001DAD28; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[17].d[0];  if (t) { goto L_001DAD28; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 644u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 644u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DAD28; } }
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_001DAD28:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001DAD2C:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DACB8u | kUnwind; return; } goto L_001DACB8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001DAD68; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAD50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001DAD50u) [[unlikely]] return; }
L_001DAD50:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAD5Cu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001DAD5Cu) [[unlikely]] return; }
L_001DAD5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DAE6C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001DAD68:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_001DAE6C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20544u));
    c.f[1] = ld32((c.r[18].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 20544u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DADAC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20536u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 212u), c.f[0]);  if (t) { goto L_001DAE6C; } }
L_001DADAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20528u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DAE6C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20536u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 212u), c.f[0]);  if (t) { goto L_001DAE6C; } }
L_001DADD4:
    c.f[0] = ld32((c.r[19].w[0] + 224u));
    st32((c.r[17].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 232u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 232u), c.f[0]);  if (t) { goto L_001DAE6C; } }
L_001DADE8:
    set32(c.r[3], ld32((c.r[19].w[0] + 480u)));
    set32(c.r[2], 0u + 255u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001DAE04; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001DAE04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAE10u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DAE10u) [[unlikely]] return; }
L_001DAE10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001DAE24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DAE24; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DAE24:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_001DAE38; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 2;
L_001DAE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAE40u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DAE40u) [[unlikely]] return; }
L_001DAE40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001DAE54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DAE54; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DAE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAE5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001DAE5Cu) [[unlikely]] return; }
L_001DAE5C:
    c.f[0] = ld32((c.r[19].w[0] + 224u));
    st32((c.r[17].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 232u));
    st32((c.r[17].w[0] + 232u), c.f[0]);
    c.budget -= 4;
L_001DAE6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001DAE70:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001DAE90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DAED8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAEC0u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001DAEC0u) [[unlikely]] return; }
L_001DAEC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DAEDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAED8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001DAED8u) [[unlikely]] return; }
L_001DAED8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DAEDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DAEF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DAF38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAF20u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001DAF20u) [[unlikely]] return; }
L_001DAF20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DAF3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAF38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001DAF38u) [[unlikely]] return; }
L_001DAF38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DAF3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DAF50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DAF98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8864u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAF80u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001DAF80u) [[unlikely]] return; }
L_001DAF80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DAF9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAF98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001DAF98u) [[unlikely]] return; }
L_001DAF98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DAF9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DAFB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DAFF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAFE0u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001DAFE0u) [[unlikely]] return; }
L_001DAFE0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DAFFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAFF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001DAFF8u) [[unlikely]] return; }
L_001DAFF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DAFFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DB010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DB058; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB040u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001DB040u) [[unlikely]] return; }
L_001DB040:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DB05C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB058u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001DB058u) [[unlikely]] return; }
L_001DB058:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DB05C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DB070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DB0B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB0A0u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001DB0A0u) [[unlikely]] return; }
L_001DB0A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DB0BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB0B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001DB0B8u) [[unlikely]] return; }
L_001DB0B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DB0BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DB0D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DB118; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8784u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB100u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001DB100u) [[unlikely]] return; }
L_001DB100:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DB11C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB118u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001DB118u) [[unlikely]] return; }
L_001DB118:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DB11C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DB130:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7870u | kUnwind; return; } [[clang::musttail]] return unit_0035(c, 203u, depth); }
L_001DB140:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D78D0u | kUnwind; return; } [[clang::musttail]] return unit_0035(c, 205u, depth); }
L_001DB150:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7B90u | kUnwind; return; } [[clang::musttail]] return unit_0035(c, 227u, depth); }
L_001DB160:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7BF0u | kUnwind; return; } [[clang::musttail]] return unit_0035(c, 229u, depth); }
L_001DB170:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7D90u | kUnwind; return; } [[clang::musttail]] return unit_0035(c, 243u, depth); }
L_001DB180:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7DF0u | kUnwind; return; } [[clang::musttail]] return unit_0035(c, 245u, depth); }
L_001DB190:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7F90u | kUnwind; return; } [[clang::musttail]] return unit_0035(c, 259u, depth); }
L_001DB1A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D7FF0u | kUnwind; return; } [[clang::musttail]] return unit_0035(c, 261u, depth); }
L_001DB1B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D81B0u | kUnwind; return; } goto L_001D81B0; }
L_001DB1C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8210u | kUnwind; return; } goto L_001D8210; }
L_001DB1D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB1ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 262u, depth + 1u); else { c.pc = 0x001DB700u; return; } if (c.pc != 0x001DB1ECu) [[unlikely]] return; }
L_001DB1EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[16].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 8704u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[17].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] + 64u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB228u); set32(c.r[5], c.r[5].w[0] + 20576u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DB228u) [[unlikely]] return; }
L_001DB228:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB23C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001DB23C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB248u); c.r[5].d[0] = c.r[2].d[0] | 18543ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DB248u) [[unlikely]] return; }
L_001DB248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DB258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DB25C; } }
L_001DB258:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB25C:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DB280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DB2C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8688u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB2B0u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001DB2B0u) [[unlikely]] return; }
L_001DB2B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DB2CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB2C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001DB2C8u) [[unlikely]] return; }
L_001DB2C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DB2CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DB2E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 394u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DB3F8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 395u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DB3F8; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB3F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB334u);  if (depth < kMaxDepth) unit_0034(c, 144u, depth + 1u); else { c.pc = 0x001D1700u; return; } if (c.pc != 0x001DB334u) [[unlikely]] return; }
L_001DB334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DB3A4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DB3A4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 984u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 368u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001DB368; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001DB384; } }
L_001DB368:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001DB384:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.f[0] = ld32((c.r[1].w[0] + 20696u));
    set32(c.r[4], c.r[2].w[0] + 212u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[13] = ld32((c.r[1].w[0] + 20688u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB3A4u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x001DB3A4u) [[unlikely]] return; }
L_001DB3A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[20] = ld32((c.r[1].w[0] + 20680u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB3B4u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0034(c, 138u, depth + 1u); else { c.pc = 0x001D15E0u; return; } if (c.pc != 0x001DB3B4u) [[unlikely]] return; }
L_001DB3B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DB3DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB3C4u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0034(c, 139u, depth + 1u); else { c.pc = 0x001D1610u; return; } if (c.pc != 0x001DB3C4u) [[unlikely]] return; }
L_001DB3C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DB3DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB3D4u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0034(c, 140u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x001DB3D4u) [[unlikely]] return; }
L_001DB3D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DB3E4; } }
L_001DB3DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[20] = ld32((c.r[1].w[0] + 20672u));
    c.budget -= 2;
L_001DB3E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.f[13] = c.f[20];
    c.f[12] = ld32((c.r[2].w[0] + 1020u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB3F8u); set32(c.r[4], c.r[2].w[0] + 212u);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x001DB3F8u) [[unlikely]] return; }
L_001DB3F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 984u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DB6B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB410u);  if (depth < kMaxDepth) unit_0034(c, 90u, depth + 1u); else { c.pc = 0x001D0BC0u; return; } if (c.pc != 0x001DB410u) [[unlikely]] return; }
L_001DB410:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DB47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB420u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0034(c, 98u, depth + 1u); else { c.pc = 0x001D0DE0u; return; } if (c.pc != 0x001DB420u) [[unlikely]] return; }
L_001DB420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DB47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB430u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0034(c, 117u, depth + 1u); else { c.pc = 0x001D0FC0u; return; } if (c.pc != 0x001DB430u) [[unlikely]] return; }
L_001DB430:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DB47C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], 0u + 1576u);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DB47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB454u);  if (depth < kMaxDepth) unit_0034(c, 130u, depth + 1u); else { c.pc = 0x001D1470u; return; } if (c.pc != 0x001DB454u) [[unlikely]] return; }
L_001DB454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DB47C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], 0u + 220u);
    set32(c.r[4], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001DB47C; } }
    set32(c.r[3], 0u + 198u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DB688; } }
L_001DB47C:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 984u)));
    c.f[13] = ld32((c.r[4].w[0] + 1024u));
    set32(c.r[2], ld32((c.r[4].w[0] + 240u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 240u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB4A0u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 97u, depth + 1u); else { c.pc = 0x00145DD0u; return; } if (c.pc != 0x001DB4A0u) [[unlikely]] return; }
L_001DB4A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20664u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DB4B8; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_001DB4B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20656u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DB4D0; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_001DB4D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20648u));
    c.f[3] = ld32((c.r[2].w[0] + 1020u));
    c.f[2] = ld32((c.r[2].w[0] + 212u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 76u), c.f[2]);  if (t) { goto L_001DB508; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20640u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.f[1]);  if (t) { goto L_001DB52C; } }
L_001DB508:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20632u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DB52C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20640u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 76u), c.f[1]);
    c.budget -= 4;
L_001DB52C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[29].w[0] + 76u));
    c.f[1] = ld32((c.r[1].w[0] + 20624u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DB550; } }
    st32((c.r[29].w[0] + 76u), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001DB574; } }
L_001DB550:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20616u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DB574; } }
    st32((c.r[29].w[0] + 76u), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001DB574; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB574:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DB5C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[29].w[0] + 76u));
    c.f[1] = ld32((c.r[1].w[0] + 20664u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DB5A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.f[1]);  if (t) { goto L_001DB5B8; } }
L_001DB5A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20656u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DB5B8; } }
    st32((c.r[29].w[0] + 76u), c.f[1]);
    c.budget -= 1;
L_001DB5B8:
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[16].w[0] + 64u), c.f[1]);
    c.budget -= 2;
L_001DB5C0:
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001DB5E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB5E0u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0034(c, 130u, depth + 1u); else { c.pc = 0x001D1470u; return; } if (c.pc != 0x001DB5E0u) [[unlikely]] return; }
L_001DB5E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DB5FC; } }
L_001DB5E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[16].w[0] + 64u));
    c.f[13] = ld32((c.r[1].w[0] + 20608u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB5FCu); set32(c.r[4], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x001DB5FCu) [[unlikely]] return; }
L_001DB5FC:
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = 0u;
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DB624; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB628; } }
L_001DB624:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 1;
L_001DB628:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20600u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DB650; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[16].w[0] + 68u));
    c.f[13] = ld32((c.r[1].w[0] + 20592u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB650u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x001DB650u) [[unlikely]] return; }
L_001DB650:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB680u); set32(c.r[4], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_0011(c, 59u, depth + 1u); else { c.pc = 0x001453E0u; return; } if (c.pc != 0x001DB680u) [[unlikely]] return; }
L_001DB680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001DB6E8; } }
L_001DB688:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 320u);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[3], c.r[16].w[0] + 48u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);  if (t) { goto L_001DB6E4; } }
L_001DB6B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 320u);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[3], c.r[16].w[0] + 48u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.budget -= 11;
L_001DB6E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001DB6E8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001DB700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C4F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 20299ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB720u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001DB720u) [[unlikely]] return; }
L_001DB720:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 8688u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DB740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB758u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001DB758u) [[unlikely]] return; }
L_001DB758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DB768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB768u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 239u, depth + 1u); else { c.pc = 0x001DB1D0u; return; } if (c.pc != 0x001DB768u) [[unlikely]] return; }
L_001DB768:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DB780:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB7A4u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0036(c, 286u, depth + 1u); else { c.pc = 0x001DBAF0u; return; } if (c.pc != 0x001DB7A4u) [[unlikely]] return; }
L_001DB7A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[16].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 8736u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[17].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] + 64u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB7E0u); set32(c.r[5], c.r[5].w[0] + 20576u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DB7E0u) [[unlikely]] return; }
L_001DB7E0:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DB7F4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001DB7F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB800u); c.r[5].d[0] = c.r[2].d[0] | 18543ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DB800u) [[unlikely]] return; }
L_001DB800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DB810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001DB814; } }
L_001DB810:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB814:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 92u), c.f[20]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001DB840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DB888; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8720u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB870u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001DB870u) [[unlikely]] return; }
L_001DB870:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001DB88C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB888u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001DB888u) [[unlikely]] return; }
L_001DB888:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001DB88C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DB8A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 984u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DB9CC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DB9CC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 984u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB8FCu); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x001DB8FCu) [[unlikely]] return; }
L_001DB8FC:
    c.f[13] = c.f[0];
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB910u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 97u, depth + 1u); else { c.pc = 0x00145DD0u; return; } if (c.pc != 0x001DB910u) [[unlikely]] return; }
L_001DB910:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20664u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DB928; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_001DB928:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20656u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001DB940; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_001DB940:
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[12] = c.f[0];
    c.f[1] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DB96C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = ld32((c.r[16].w[0] + 92u));  if (t) { goto L_001DB974; } }
L_001DB96C:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[13] = ld32((c.r[16].w[0] + 92u));
    c.budget -= 2;
L_001DB974:
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 52u);  if (t) { goto L_001DB990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB988u);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x001DB988u) [[unlikely]] return; }
L_001DB988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 48u));  if (t) { goto L_001DB998; } }
L_001DB990:
    st32((c.r[16].w[0] + 52u), c.f[12]);
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.budget -= 2;
L_001DB998:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB9C4u); set32(c.r[4], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_0011(c, 59u, depth + 1u); else { c.pc = 0x001453E0u; return; } if (c.pc != 0x001DB9C4u) [[unlikely]] return; }
L_001DB9C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DBA68; } }
L_001DB9CC:
    st32((c.r[16].w[0] + 68u), 0u);
    c.f[12] = 0u;
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001DB9F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = ld32((c.r[16].w[0] + 92u));  if (t) { goto L_001DB9F8; } }
L_001DB9F0:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[13] = ld32((c.r[16].w[0] + 92u));
    c.budget -= 2;
L_001DB9F8:
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 52u);  if (t) { goto L_001DBA14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBA0Cu);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x001DBA0Cu) [[unlikely]] return; }
L_001DBA0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 48u));  if (t) { goto L_001DBA1C; } }
L_001DBA14:
    st32((c.r[16].w[0] + 52u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.budget -= 2;
L_001DBA1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 36u), c.f[1]);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[29].w[0] + 40u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBA48u); set32(c.r[4], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_0011(c, 59u, depth + 1u); else { c.pc = 0x001453E0u; return; } if (c.pc != 0x001DBA48u) [[unlikely]] return; }
L_001DBA48:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DBA68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBA68u);  if (depth < kMaxDepth) unit_000F(c, 43u, depth + 1u); else { c.pc = 0x0013C510u; return; } if (c.pc != 0x001DBA68u) [[unlikely]] return; }
L_001DBA68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBA70u);  if (depth < kMaxDepth) unit_0025(c, 408u, depth + 1u); else { c.pc = 0x00197D00u; return; } if (c.pc != 0x001DBA70u) [[unlikely]] return; }
L_001DBA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBA78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 316u, depth + 1u); else { c.pc = 0x00167380u; return; } if (c.pc != 0x001DBA78u) [[unlikely]] return; }
L_001DBA78:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DBAD8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 984u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001DBAD8; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 912u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 980u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 436u);  if (t) { goto L_001DBAD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBAB4u); c.r[5].d[0] = c.r[2].d[0] | 16707ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DBAB4u) [[unlikely]] return; }
L_001DBAB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001DBAC0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001DBAC0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001DBAD8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBAD8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001DBAD8u) [[unlikely]] return; }
L_001DBAD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001DBAF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 16707ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBB10u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001DBB10u) [[unlikely]] return; }
L_001DBB10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 8720u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001DBB30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBB50u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001DBB50u) [[unlikely]] return; }
L_001DBB50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DBB64; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBB64u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0036(c, 267u, depth + 1u); else { c.pc = 0x001DB780u; return; } if (c.pc != 0x001DBB64u) [[unlikely]] return; }
L_001DBB64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DBB80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBBA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x001DBBA0u) [[unlikely]] return; }
L_001DBBA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 128u);
    set32(c.r[2], c.r[2].w[0] - 8752u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001DBBE0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[3].w[0] + 31904u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] + 31840u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
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
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 31840u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[3], c.r[29].w[0] + 128u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[3], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + 48u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[3]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[9].w[3]);
    vu::mulbc(c.vu0, 14u, 9u, 9u, c.vu0.q);
    vu::ftoi(c.vu0, 15u, 10u, 9u, 4);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[10]);
    set32(c.r[5], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    set32(c.r[20], c.r[5].w[0] - 1792u);
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 85;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[19], c.r[4].w[0] - 1792u);  if (t) { goto L_001DBEB8; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[3], 0u + 128u);
    set32(c.r[4], ld32((c.r[4].w[0] + 364u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001DBD54; } }
    set32(c.r[3], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DBEB8; } }
L_001DBD54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001DBE80; } }
L_001DBD5C:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DBE7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBD7Cu); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x001DBD7Cu) [[unlikely]] return; }
L_001DBD7C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; set32(c.r[3], c.r[29].w[0] + 112u);  if (t) { goto L_001DBE7C; } }
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + 48u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[3]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[9].w[3]);
    vu::mulbc(c.vu0, 14u, 9u, 9u, c.vu0.q);
    vu::ftoi(c.vu0, 15u, 10u, 9u, 4);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[10]);
    set32(c.r[3], 0u + 128u);
    set32(c.r[6], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    set32(c.r[6], c.r[6].w[0] - 1792u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    set32(c.r[6], c.r[6].w[0] - c.r[20].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1792u);
    set32(c.r[5], c.r[5].w[0] - c.r[19].w[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[5].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    c.budget -= 35;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);  if (t) { goto L_001DBE48; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 64ll ? 1ull : 0ull;  if (t) { goto L_001DBE7C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DBE7C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 900ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DBE7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001DBE8C; } }
L_001DBE48:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[3], c.r[3].w[0] + 10u);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 81ll ? 1ull : 0ull;  if (t) { goto L_001DBE7C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DBE7C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DBE7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001DBE8C; } }
L_001DBE7C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001DBE80:
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DBD5Cu | kUnwind; return; } goto L_001DBD5C; } }
L_001DBE8C:
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[3], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DBEAC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[3], 0u + 28u);  if (t) { goto L_001DBEB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_001DBEB8; } }
L_001DBEAC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001DBEB8; } }
    st32((c.r[21].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 1;
L_001DBEB8:
    set32(c.r[3], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 364u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001DBF70; } }
    c.f[2] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 20584u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001DBF10; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], 0u - 1u);  if (t) { goto L_001DBF10; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_001DBF10:
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 364u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 364u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001DBF48; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[3], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DBF48; } }
    st32((c.r[5].w[0] + 364u), c.r[3].w[0]);
    c.budget -= 1;
L_001DBF48:
    set32(c.r[5], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DBF70; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[3], 0u + 28u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001DBF70; } }
    st32((c.r[5].w[0] + 364u), c.r[3].w[0]);
    c.budget -= 1;
L_001DBF70:
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[3], 0u + 128u);
    set32(c.r[5], ld32((c.r[4].w[0] + 364u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001DBFC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_001DBF90; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001DBF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBF98u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001DBF98u) [[unlikely]] return; }
L_001DBF98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001DBFA4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001DBFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBFACu);  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001CD4B0u; return; } if (c.pc != 0x001DBFACu) [[unlikely]] return; }
L_001DBFAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DBFC0; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[4], 0u + 128u);
    st32((c.r[3].w[0] + 364u), c.r[4].w[0]);
    c.budget -= 3;
L_001DBFC0:
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001DBFD8; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 2;
L_001DBFD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
}

}
