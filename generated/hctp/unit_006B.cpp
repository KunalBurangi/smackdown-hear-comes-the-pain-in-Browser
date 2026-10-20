#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006B[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0,
    0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62,
    0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96,
    0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115,
    0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0,
    0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232,
    0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 237, 0, 0,
    0, 238, 0, 0, 239, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0,
    247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254,
    0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    281, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0,
};

void unit_006B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002AC000;
    case 2u: goto L_002AC014;
    case 3u: goto L_002AC020;
    case 4u: goto L_002AC030;
    case 5u: goto L_002AC1E4;
    case 6u: goto L_002AC230;
    case 7u: goto L_002AC4E0;
    case 8u: goto L_002AC540;
    case 9u: goto L_002AC564;
    case 10u: goto L_002AC570;
    case 11u: goto L_002AC590;
    case 12u: goto L_002AC5B0;
    case 13u: goto L_002AC5B8;
    case 14u: goto L_002AC5CC;
    case 15u: goto L_002AC670;
    case 16u: goto L_002AC68C;
    case 17u: goto L_002AC698;
    case 18u: goto L_002AC6B8;
    case 19u: goto L_002AC6F0;
    case 20u: goto L_002AC72C;
    case 21u: goto L_002AC74C;
    case 22u: goto L_002AC770;
    case 23u: goto L_002AC788;
    case 24u: goto L_002AC7B0;
    case 25u: goto L_002AC7C8;
    case 26u: goto L_002AC7D4;
    case 27u: goto L_002AC7E8;
    case 28u: goto L_002AC7F8;
    case 29u: goto L_002AC814;
    case 30u: goto L_002AC840;
    case 31u: goto L_002AC870;
    case 32u: goto L_002AC894;
    case 33u: goto L_002AC8C8;
    case 34u: goto L_002AC8E0;
    case 35u: goto L_002AC8F8;
    case 36u: goto L_002AC920;
    case 37u: goto L_002AC944;
    case 38u: goto L_002AC980;
    case 39u: goto L_002AC9B0;
    case 40u: goto L_002AC9DC;
    case 41u: goto L_002AC9F4;
    case 42u: goto L_002ACA08;
    case 43u: goto L_002ACA38;
    case 44u: goto L_002ACA80;
    case 45u: goto L_002ACA90;
    case 46u: goto L_002ACAA0;
    case 47u: goto L_002ACAE8;
    case 48u: goto L_002ACB40;
    case 49u: goto L_002ACB44;
    case 50u: goto L_002ACB94;
    case 51u: goto L_002ACBB0;
    case 52u: goto L_002ACBC0;
    case 53u: goto L_002ACBE4;
    case 54u: goto L_002ACC08;
    case 55u: goto L_002ACC1C;
    case 56u: goto L_002ACC90;
    case 57u: goto L_002ACCFC;
    case 58u: goto L_002ACD24;
    case 59u: goto L_002ACD74;
    case 60u: goto L_002ACDA4;
    case 61u: goto L_002ACDEC;
    case 62u: goto L_002ACDFC;
    case 63u: goto L_002ACE0C;
    case 64u: goto L_002ACE70;
    case 65u: goto L_002ACEA4;
    case 66u: goto L_002ACEBC;
    case 67u: goto L_002ACED4;
    case 68u: goto L_002ACEEC;
    case 69u: goto L_002ACF04;
    case 70u: goto L_002ACF1C;
    case 71u: goto L_002ACF38;
    case 72u: goto L_002ACF8C;
    case 73u: goto L_002AD018;
    case 74u: goto L_002AD02C;
    case 75u: goto L_002AD130;
    case 76u: goto L_002AD140;
    case 77u: goto L_002AD170;
    case 78u: goto L_002AD180;
    case 79u: goto L_002AD1B0;
    case 80u: goto L_002AD238;
    case 81u: goto L_002AD270;
    case 82u: goto L_002AD29C;
    case 83u: goto L_002AD2D0;
    case 84u: goto L_002AD2EC;
    case 85u: goto L_002AD300;
    case 86u: goto L_002AD31C;
    case 87u: goto L_002AD328;
    case 88u: goto L_002AD340;
    case 89u: goto L_002AD374;
    case 90u: goto L_002AD388;
    case 91u: goto L_002AD390;
    case 92u: goto L_002AD3B4;
    case 93u: goto L_002AD3C4;
    case 94u: goto L_002AD3F4;
    case 95u: goto L_002AD474;
    case 96u: goto L_002AD47C;
    case 97u: goto L_002AD48C;
    case 98u: goto L_002AD494;
    case 99u: goto L_002AD4AC;
    case 100u: goto L_002AD4C8;
    case 101u: goto L_002AD518;
    case 102u: goto L_002AD528;
    case 103u: goto L_002AD5A0;
    case 104u: goto L_002AD5BC;
    case 105u: goto L_002AD638;
    case 106u: goto L_002AD648;
    case 107u: goto L_002AD6C0;
    case 108u: goto L_002AD72C;
    case 109u: goto L_002AD73C;
    case 110u: goto L_002AD7B4;
    case 111u: goto L_002AD820;
    case 112u: goto L_002AD830;
    case 113u: goto L_002AD8A8;
    case 114u: goto L_002AD8EC;
    case 115u: goto L_002AD8FC;
    case 116u: goto L_002AD90C;
    case 117u: goto L_002AD92C;
    case 118u: goto L_002AD944;
    case 119u: goto L_002AD960;
    case 120u: goto L_002AD9CC;
    case 121u: goto L_002AD9DC;
    case 122u: goto L_002AD9EC;
    case 123u: goto L_002AD9F4;
    case 124u: goto L_002ADA0C;
    case 125u: goto L_002ADA38;
    case 126u: goto L_002ADA48;
    case 127u: goto L_002ADA70;
    case 128u: goto L_002ADA90;
    case 129u: goto L_002ADAA4;
    case 130u: goto L_002ADB24;
    case 131u: goto L_002ADB40;
    case 132u: goto L_002ADB54;
    case 133u: goto L_002ADB68;
    case 134u: goto L_002ADB98;
    case 135u: goto L_002ADBC0;
    case 136u: goto L_002ADBC4;
    case 137u: goto L_002ADBF4;
    case 138u: goto L_002ADC1C;
    case 139u: goto L_002ADC68;
    case 140u: goto L_002ADCBC;
    case 141u: goto L_002ADCDC;
    case 142u: goto L_002ADD08;
    case 143u: goto L_002ADD24;
    case 144u: goto L_002ADD2C;
    case 145u: goto L_002ADD60;
    case 146u: goto L_002ADDC0;
    case 147u: goto L_002ADE14;
    case 148u: goto L_002ADE98;
    case 149u: goto L_002ADEF0;
    case 150u: goto L_002ADF00;
    case 151u: goto L_002ADF10;
    case 152u: goto L_002ADF20;
    case 153u: goto L_002ADF30;
    case 154u: goto L_002ADF40;
    case 155u: goto L_002ADF50;
    case 156u: goto L_002ADF60;
    case 157u: goto L_002ADF70;
    case 158u: goto L_002ADFC0;
    case 159u: goto L_002ADFF4;
    case 160u: goto L_002AE084;
    case 161u: goto L_002AE0A8;
    case 162u: goto L_002AE0CC;
    case 163u: goto L_002AE15C;
    case 164u: goto L_002AE1D0;
    case 165u: goto L_002AE244;
    case 166u: goto L_002AE3F0;
    case 167u: goto L_002AE480;
    case 168u: goto L_002AE494;
    case 169u: goto L_002AE4E0;
    case 170u: goto L_002AE518;
    case 171u: goto L_002AE530;
    case 172u: goto L_002AE548;
    case 173u: goto L_002AE560;
    case 174u: goto L_002AE578;
    case 175u: goto L_002AE590;
    case 176u: goto L_002AE5A8;
    case 177u: goto L_002AE5D0;
    case 178u: goto L_002AE6BC;
    case 179u: goto L_002AE6DC;
    case 180u: goto L_002AE6E8;
    case 181u: goto L_002AE6F4;
    case 182u: goto L_002AE700;
    case 183u: goto L_002AE74C;
    case 184u: goto L_002AE78C;
    case 185u: goto L_002AE7CC;
    case 186u: goto L_002AE7D8;
    case 187u: goto L_002AE890;
    case 188u: goto L_002AE8DC;
    case 189u: goto L_002AE900;
    case 190u: goto L_002AE950;
    case 191u: goto L_002AE9B8;
    case 192u: goto L_002AEA18;
    case 193u: goto L_002AEA68;
    case 194u: goto L_002AEAA4;
    case 195u: goto L_002AEB48;
    case 196u: goto L_002AECB8;
    case 197u: goto L_002AEDC0;
    case 198u: goto L_002AF000;
    case 199u: goto L_002AF008;
    case 200u: goto L_002AF010;
    case 201u: goto L_002AF018;
    case 202u: goto L_002AF030;
    case 203u: goto L_002AF038;
    case 204u: goto L_002AF040;
    case 205u: goto L_002AF048;
    case 206u: goto L_002AF090;
    case 207u: goto L_002AF190;
    case 208u: goto L_002AF240;
    case 209u: goto L_002AF300;
    case 210u: goto L_002AF3E0;
    case 211u: goto L_002AF480;
    case 212u: goto L_002AF5FC;
    case 213u: goto L_002AF650;
    case 214u: goto L_002AF660;
    case 215u: goto L_002AF670;
    case 216u: goto L_002AF6A0;
    case 217u: goto L_002AF6A8;
    case 218u: goto L_002AF700;
    case 219u: goto L_002AF70C;
    case 220u: goto L_002AF714;
    case 221u: goto L_002AF750;
    case 222u: goto L_002AF7B0;
    case 223u: goto L_002AF7D8;
    case 224u: goto L_002AF800;
    case 225u: goto L_002AF828;
    case 226u: goto L_002AF850;
    case 227u: goto L_002AF878;
    case 228u: goto L_002AF8A0;
    case 229u: goto L_002AF8A8;
    case 230u: goto L_002AF8D4;
    case 231u: goto L_002AF8F0;
    case 232u: goto L_002AF8FC;
    case 233u: goto L_002AF914;
    case 234u: goto L_002AF940;
    case 235u: goto L_002AF958;
    case 236u: goto L_002AF960;
    case 237u: goto L_002AF974;
    case 238u: goto L_002AF984;
    case 239u: goto L_002AF990;
    case 240u: goto L_002AF994;
    case 241u: goto L_002AF9E0;
    case 242u: goto L_002AFA10;
    case 243u: goto L_002AFA2C;
    case 244u: goto L_002AFA40;
    case 245u: goto L_002AFA5C;
    case 246u: goto L_002AFA70;
    case 247u: goto L_002AFA80;
    case 248u: goto L_002AFA90;
    case 249u: goto L_002AFAA0;
    case 250u: goto L_002AFAB4;
    case 251u: goto L_002AFAC8;
    case 252u: goto L_002AFADC;
    case 253u: goto L_002AFAEC;
    case 254u: goto L_002AFAFC;
    case 255u: goto L_002AFB0C;
    case 256u: goto L_002AFB20;
    case 257u: goto L_002AFB28;
    case 258u: goto L_002AFB4C;
    case 259u: goto L_002AFB58;
    case 260u: goto L_002AFB80;
    case 261u: goto L_002AFB94;
    case 262u: goto L_002AFBB0;
    case 263u: goto L_002AFBCC;
    case 264u: goto L_002AFBE0;
    case 265u: goto L_002AFC24;
    case 266u: goto L_002AFC5C;
    case 267u: goto L_002AFC80;
    case 268u: goto L_002AFC98;
    case 269u: goto L_002AFCBC;
    case 270u: goto L_002AFCD0;
    case 271u: goto L_002AFCE8;
    case 272u: goto L_002AFD10;
    case 273u: goto L_002AFD20;
    case 274u: goto L_002AFD44;
    case 275u: goto L_002AFD80;
    case 276u: goto L_002AFD9C;
    case 277u: goto L_002AFDAC;
    case 278u: goto L_002AFDD4;
    case 279u: goto L_002AFE04;
    case 280u: goto L_002AFE70;
    case 281u: goto L_002AFE80;
    case 282u: goto L_002AFE94;
    case 283u: goto L_002AFEA4;
    case 284u: goto L_002AFEBC;
    case 285u: goto L_002AFED0;
    case 286u: goto L_002AFF38;
    case 287u: goto L_002AFF80;
    case 288u: goto L_002AFFF4;
    default: bad_entry(c, 0x002AC000u); return;
    }
L_002AC000:
    st32((c.r[2].w[0] + 1732u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    st32((c.r[2].w[0] + 1736u), c.f[0]);
    c.budget -= 5;
L_002AC014:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    set32(c.r[2], c.r[2].w[0] + 1720u);
    c.budget -= 3;
L_002AC020:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AC030:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[2].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002AC060; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AC054; } }
    breakpoint(c, 0x002AC050u);
    c.budget -= 1;
L_002AC054:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC064; } }
L_002AC060:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002AC064:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002AC074; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 86u);  if (t) { goto L_002AC088; } }
L_002AC074:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AC084; } }
    breakpoint(c, 0x002AC080u);
    c.budget -= 1;
L_002AC084:
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AC088:
    set32(c.r[2], 0u + 1403u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002AC0B8; } }
    set32(c.r[2], 0u + 1413u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002AC0B8; } }
    set32(c.r[2], 0u + 1423u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002AC0B8; } }
    set32(c.r[2], 0u + 1433u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4203u);  if (t) { goto L_002AC0C8; } }
L_002AC0B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24360u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1044u);  if (t) { goto L_002AC220; } }
L_002AC0C8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002AC0F4; } }
    set32(c.r[2], 0u + 4213u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002AC0F4; } }
    set32(c.r[2], 0u + 4223u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002AC0F4; } }
    set32(c.r[2], 0u + 4233u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2703u);  if (t) { goto L_002AC104; } }
L_002AC0F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24360u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1056u);  if (t) { goto L_002AC220; } }
L_002AC104:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002AC130; } }
    set32(c.r[2], 0u + 2713u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002AC130; } }
    set32(c.r[2], 0u + 2723u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002AC130; } }
    set32(c.r[2], 0u + 2733u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 30u);  if (t) { goto L_002AC140; } }
L_002AC130:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24360u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1068u);  if (t) { goto L_002AC220; } }
L_002AC140:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AC154; } }
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5330u);  if (t) { goto L_002AC160; } }
L_002AC154:
    set32(c.r[2], ld32((c.r[1].w[0] - 24360u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1080u);  if (t) { goto L_002AC220; } }
L_002AC160:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AC174; } }
    set32(c.r[2], 0u + 5331u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 230u);  if (t) { goto L_002AC180; } }
L_002AC174:
    set32(c.r[2], ld32((c.r[1].w[0] - 24360u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1092u);  if (t) { goto L_002AC220; } }
L_002AC180:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AC194; } }
    set32(c.r[2], 0u + 231u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002AC1A0; } }
L_002AC194:
    set32(c.r[2], ld32((c.r[1].w[0] - 24360u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1104u);  if (t) { goto L_002AC220; } }
L_002AC1A0:
    c.r[1].d[0] = c.r[6].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_002AC1C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], ld32((c.r[1].w[0] - 24360u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002AC220; } }
L_002AC1C8:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 17552u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; st128((c.r[4].w[0]) & ~15u, c.r[2]);  if (t) { goto L_002AC214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC1E4u);  if (depth < kMaxDepth) unit_0084(c, 127u, depth + 1u); else { c.pc = 0x00311630u; return; } if (c.pc != 0x002AC1E4u) [[unlikely]] return; }
L_002AC1E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24360u)));
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    st32((c.r[2].w[0] + 1032u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24360u)));
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    st32((c.r[2].w[0] + 1036u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[1].w[0] - 24360u)));
    st32((c.r[2].w[0] + 1040u), c.f[0]);
    c.budget -= 12;
L_002AC214:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24360u)));
    set32(c.r[2], c.r[2].w[0] + 1032u);
    c.budget -= 3;
L_002AC220:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AC230:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[2].w[0] - 10000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AC264; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AC258; } }
    breakpoint(c, 0x002AC254u);
    c.budget -= 1;
L_002AC258:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC268; } }
L_002AC264:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002AC268:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002AC278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 86u);  if (t) { goto L_002AC28C; } }
L_002AC278:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AC288; } }
    breakpoint(c, 0x002AC284u);
    c.budget -= 1;
L_002AC288:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AC28C:
    set32(c.r[3], 0u + 201u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 401u);  if (t) { goto L_002AC2A8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1740u);  if (t) { goto L_002AC52C; } }
L_002AC2A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AC2C8; } }
    set32(c.r[3], 0u + 411u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AC2C8; } }
    set32(c.r[3], 0u + 421u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 501u);  if (t) { goto L_002AC2D8; } }
L_002AC2C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1760u);  if (t) { goto L_002AC52C; } }
L_002AC2D8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AC2EC; } }
    set32(c.r[3], 0u + 511u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 610u);  if (t) { goto L_002AC2F8; } }
L_002AC2EC:
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1780u);  if (t) { goto L_002AC52C; } }
L_002AC2F8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AC30C; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1800u);  if (t) { goto L_002AC52C; } }
L_002AC30C:
    set32(c.r[3], 0u + 4203u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AC33C; } }
    set32(c.r[3], 0u + 4213u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AC33C; } }
    set32(c.r[3], 0u + 4223u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AC33C; } }
    set32(c.r[3], 0u + 4233u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 8403u);  if (t) { goto L_002AC34C; } }
L_002AC33C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1820u);  if (t) { goto L_002AC52C; } }
L_002AC34C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AC378; } }
    set32(c.r[3], 0u + 8413u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AC378; } }
    set32(c.r[3], 0u + 8423u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AC378; } }
    set32(c.r[3], 0u + 8433u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 30u);  if (t) { goto L_002AC388; } }
L_002AC378:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1840u);  if (t) { goto L_002AC52C; } }
L_002AC388:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AC39C; } }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 140u);  if (t) { goto L_002AC3A8; } }
L_002AC39C:
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1860u);  if (t) { goto L_002AC52C; } }
L_002AC3A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AC3BC; } }
    set32(c.r[3], 0u + 141u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 630u);  if (t) { goto L_002AC3C8; } }
L_002AC3BC:
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1880u);  if (t) { goto L_002AC52C; } }
L_002AC3C8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AC3DC; } }
    set32(c.r[3], 0u + 631u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2130u);  if (t) { goto L_002AC3E8; } }
L_002AC3DC:
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1900u);  if (t) { goto L_002AC52C; } }
L_002AC3E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AC3FC; } }
    set32(c.r[3], 0u + 2131u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 5330u);  if (t) { goto L_002AC408; } }
L_002AC3FC:
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1920u);  if (t) { goto L_002AC52C; } }
L_002AC408:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AC41C; } }
    set32(c.r[3], 0u + 5331u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 230u);  if (t) { goto L_002AC428; } }
L_002AC41C:
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1940u);  if (t) { goto L_002AC52C; } }
L_002AC428:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AC43C; } }
    set32(c.r[3], 0u + 231u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2230u);  if (t) { goto L_002AC448; } }
L_002AC43C:
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1960u);  if (t) { goto L_002AC52C; } }
L_002AC448:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AC45C; } }
    set32(c.r[3], 0u + 2231u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 211u);  if (t) { goto L_002AC468; } }
L_002AC45C:
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1980u);  if (t) { goto L_002AC52C; } }
L_002AC468:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AC47C; } }
    set32(c.r[3], 0u + 221u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AC488; } }
L_002AC47C:
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 2000u);  if (t) { goto L_002AC52C; } }
L_002AC488:
    c.r[1].d[0] = c.r[2].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AC4AC; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[1].w[0] - 24352u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002AC52C; } }
L_002AC4AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 17536u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] - 17520u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == 0ull; st128((c.r[4].w[0]) & ~15u, c.r[2]);  if (t) { goto L_002AC520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC4E0u);  if (depth < kMaxDepth) unit_0084(c, 129u, depth + 1u); else { c.pc = 0x003116A0u; return; } if (c.pc != 0x002AC4E0u) [[unlikely]] return; }
L_002AC4E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[2].w[0] + 1728u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[2].w[0] + 1732u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[2].w[0] + 1736u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    st32((c.r[2].w[0] + 1720u), c.f[0]);
    c.budget -= 16;
L_002AC520:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24352u)));
    set32(c.r[2], c.r[2].w[0] + 1720u);
    c.budget -= 3;
L_002AC52C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AC540:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC564u); c.r[19].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x002AC564u) [[unlikely]] return; }
L_002AC564:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AC59C; } }
L_002AC570:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[3].d[0] = c.r[4].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 123ll ? 1ull : 0ull;  if (t) { goto L_002AC594; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AC594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC590u);  if (depth < kMaxDepth) unit_000A(c, 165u, depth + 1u); else { c.pc = 0x001299C0u; return; } if (c.pc != 0x002AC590u) [[unlikely]] return; }
L_002AC590:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002AC594:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_002AC59C:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC570u | kUnwind; return; } goto L_002AC570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AC644; } }
L_002AC5B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC5B8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002AC5B8u) [[unlikely]] return; }
L_002AC5B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] - 28816u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC5CCu); st8((c.r[29].w[0] + 87u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00127AA0u; return; } if (c.pc != 0x002AC5CCu) [[unlikely]] return; }
L_002AC5CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AC640; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[5], c.r[18].w[0] + c.r[16].w[0]);  if (t) { goto L_002AC5FC; } }
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 1u)));
    c.r[3].d[0] = c.r[4].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 91ll ? 1ull : 0ull;  if (t) { goto L_002AC5F8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002AC640; } }
L_002AC5F8:
    set32(c.r[5], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_002AC5FC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 7u)));
    c.r[3].d[0] = c.r[4].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 99u);  if (t) { goto L_002AC63C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 83u);  if (t) { goto L_002AC638; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AC640; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 91ll ? 1ull : 0ull;  if (t) { goto L_002AC638; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002AC640; } }
L_002AC638:
    set32(c.r[3], 0u + 99u);
    c.budget -= 1;
L_002AC63C:
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002AC640:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002AC644:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[18].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC5B0u | kUnwind; return; } goto L_002AC5B0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002AC670:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC68Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x002AC68Cu) [[unlikely]] return; }
L_002AC68C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AC6C4; } }
L_002AC698:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[3].d[0] = c.r[4].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 91ll ? 1ull : 0ull;  if (t) { goto L_002AC6BC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AC6BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC6B8u);  if (depth < kMaxDepth) unit_000A(c, 164u, depth + 1u); else { c.pc = 0x001299A0u; return; } if (c.pc != 0x002AC6B8u) [[unlikely]] return; }
L_002AC6B8:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002AC6BC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_002AC6C4:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC698u | kUnwind; return; } goto L_002AC698; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AC6F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 84u), c.r[18].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 88u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 15;
L_002AC72C:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 100u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 1832u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC72Cu | kUnwind; return; } goto L_002AC72C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AC74C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[6], 0u + 32u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 256u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC770u); set32(c.r[4], c.r[3].w[0] + 2156u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002AC770u) [[unlikely]] return; }
L_002AC770:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC74Cu | kUnwind; return; } goto L_002AC74C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC788u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002AC788u) [[unlikely]] return; }
L_002AC788:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 84u);  if (t) { goto L_002AC7CC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002AC7C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC7B0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002AC7B0u) [[unlikely]] return; }
L_002AC7B0:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002AC7C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC7C8u);  if (depth < kMaxDepth) unit_006B(c, 38u, depth + 1u); else { c.pc = 0x002AC980u; return; } if (c.pc != 0x002AC7C8u) [[unlikely]] return; }
L_002AC7C8:
    set32(c.r[4], 0u + 84u);
    c.budget -= 1;
L_002AC7CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC7D4u); st32((c.r[19].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002AC7D4u) [[unlikely]] return; }
L_002AC7D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002AC7FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC7E8u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002AC7E8u) [[unlikely]] return; }
L_002AC7E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC7F8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 189u, depth + 1u); else { c.pc = 0x00166350u; return; } if (c.pc != 0x002AC7F8u) [[unlikely]] return; }
L_002AC7F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002AC7FC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[19].w[0] + 96u), c.r[16].w[0]);  if (t) { goto L_002AC814; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 1864u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC814u); set32(c.r[6], 0u + 292u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x002AC814u) [[unlikely]] return; }
L_002AC814:
    st8((c.r[19].w[0] + 2412u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AC840:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AC8F8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AC8A4; } }
L_002AC870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[16].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[6], 0u + 32u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 256u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC894u); set32(c.r[5], c.r[2].w[0] + 2156u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002AC894u) [[unlikely]] return; }
L_002AC894:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC870u | kUnwind; return; } goto L_002AC870; } }
L_002AC8A4:
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AC8C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AC8C8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC8C8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC8C8u) [[unlikely]] return; }
L_002AC8C8:
    st32((c.r[18].w[0] + 92u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] << 48;  if (t) { goto L_002AC8E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC8E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 196u, depth + 1u); else { c.pc = 0x00166400u; return; } if (c.pc != 0x002AC8E0u) [[unlikely]] return; }
L_002AC8E0:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_002AC8E4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[18].w[0] + 96u), 0u);  if (t) { goto L_002AC8F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC8F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002AC8F8u) [[unlikely]] return; }
L_002AC8F8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AC920:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] + 132u), c.r[3].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 86u));
    st32((c.r[4].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[6], 0u + 212u);
    set32(c.r[5], 0u + 25500u);
    c.budget -= 9;
L_002AC944:
    mmi::mult(c, 0, c.r[8].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st16((c.r[7].w[0] + 136u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].d[0] = c.r[8].sd[0] < 8ll ? 1ull : 0ull;
    st16((c.r[7].w[0] + 146u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 200u), static_cast<std::uint8_t>(0u));
    st8((c.r[7].w[0] + 232u), static_cast<std::uint8_t>(0u));
    st32((c.r[7].w[0] + 332u), 0u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[7].w[0] + 340u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC944u | kUnwind; return; } goto L_002AC944; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AC980:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[21], c.r[21].w[0] + 8640u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
L_002AC9B0:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC9B0u | kUnwind; return; } goto L_002AC9B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC9DCu); set32(c.r[5], 0u + 894u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x002AC9DCu) [[unlikely]] return; }
L_002AC9DC:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[2], c.r[2].w[0] + 500u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC9F4u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x002AC9F4u) [[unlikely]] return; }
L_002AC9F4:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[8], 0u - 1u);  if (t) { goto L_002ACAD8; } }
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[20].w[0] << 5);
    c.budget -= 2;
L_002ACA08:
    set32(c.r[3], 0u + 25500u);
    set32(c.r[17], c.r[21].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ACAC0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] << 2);  if (t) { goto L_002ACAC0; } }
    set32(c.r[19], c.r[20].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] + 192u);  if (t) { goto L_002ACAB4; } }
L_002ACA38:
    set32(c.r[3], 0u + 25500u);
    set32(c.r[16], c.r[21].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ACAB0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] << 2);  if (t) { goto L_002ACAB0; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[22], c.r[3].w[0] + 192u);
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 224u);  if (t) { goto L_002ACAB0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACA80u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002ACA80u) [[unlikely]] return; }
L_002ACA80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACA90u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002ACA90u) [[unlikely]] return; }
L_002ACA90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACAA0u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002ACAA0u) [[unlikely]] return; }
L_002ACAA0:
    set32(c.r[4], ld32((c.r[22].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[22].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[4].w[0]);
    c.budget -= 4;
L_002ACAB0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002ACAB4:
    c.r[3].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACA38u | kUnwind; return; } goto L_002ACA38; } }
L_002ACAC0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[20].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACA08u | kUnwind; return; } goto L_002ACA08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_002ACE40; } }
L_002ACAD8:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 255u);
    set32(c.r[5], 0u + 25500u);
    set32(c.r[3], c.r[7].w[0] << 5);
    c.budget -= 4;
L_002ACAE8:
    set32(c.r[6], c.r[21].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[6].w[0] + 10u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002ACB14; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ACB14; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002ACB14; } }
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_002ACB14:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACAE8u | kUnwind; return; } goto L_002ACAE8; } }
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] < 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002ACBE4; } }
    set32(c.r[3], c.r[8].w[0] << 5);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9u)));
    set32(c.r[17], 0u + 5u);
    c.budget -= 5;
L_002ACB40:
    set32(c.r[3], c.r[17].w[0] << 5);
    c.budget -= 1;
L_002ACB44:
    set32(c.r[4], 0u + 25500u);
    set32(c.r[16], c.r[21].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002ACBC0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ACBC0; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002ACBC0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ACBC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 224u);  if (t) { goto L_002ACBC0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACB94u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002ACB94u) [[unlikely]] return; }
L_002ACB94:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[6], 0u + 32u);
    set32(c.r[16], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACBB0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002ACBB0u) [[unlikely]] return; }
L_002ACBB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACBC0u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002ACBC0u) [[unlikely]] return; }
L_002ACBC0:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[3], c.r[17].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACB44u | kUnwind; return; } goto L_002ACB44; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], 0u + 5u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACB40u | kUnwind; return; } goto L_002ACB40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACE3C; } }
L_002ACBE4:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 160u), 0u);
    c.r[3].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 128u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACBE4u | kUnwind; return; } goto L_002ACBE4; } }
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[19].w[0] << 2);
    c.budget -= 2;
L_002ACC08:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[3].w[0] + 160u);
    set32(c.r[16], c.r[3].w[0] + 128u);
    set32(c.r[4], c.r[18].w[0] << 5);
    c.budget -= 5;
L_002ACC1C:
    set32(c.r[3], 0u + 25500u);
    set32(c.r[5], c.r[21].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 10u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ACCAC; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ACCAC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 10000u);  if (t) { goto L_002ACCAC; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_002ACC64; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002ACC60; } }
    breakpoint(c, 0x002ACC5Cu);
    c.budget -= 1;
L_002ACC60:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002ACC64:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002ACC74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 86u);  if (t) { goto L_002ACC88; } }
L_002ACC74:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);  if (t) { goto L_002ACC84; } }
    breakpoint(c, 0x002ACC80u);
    c.budget -= 1;
L_002ACC84:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002ACC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACC90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002ACC90u) [[unlikely]] return; }
L_002ACC90:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 356u));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 7;
L_002ACCAC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACC1Cu | kUnwind; return; } goto L_002ACC1C; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002ACCE4; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);  if (t) { goto L_002ACCDC; } }
    breakpoint(c, 0x002ACCD8u);
    c.budget -= 1;
L_002ACCDC:
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_002ACCE4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACC08u | kUnwind; return; } goto L_002ACC08; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_002ACCFC:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 192u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACCFCu | kUnwind; return; } goto L_002ACCFC; } }
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 25500u);
    set32(c.r[3], c.r[6].w[0] << 5);
    c.budget -= 3;
L_002ACD24:
    set32(c.r[4], c.r[21].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 10u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002ACD5C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ACD5C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 160u)));
    st32((c.r[3].w[0] + 192u), c.r[4].w[0]);
    c.budget -= 7;
L_002ACD5C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACD24u | kUnwind; return; } goto L_002ACD24; } }
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[20].w[0] << 5);
    c.budget -= 2;
L_002ACD74:
    set32(c.r[3], 0u + 25500u);
    set32(c.r[17], c.r[21].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ACE2C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] << 2);  if (t) { goto L_002ACE2C; } }
    set32(c.r[19], c.r[20].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] + 192u);  if (t) { goto L_002ACE20; } }
L_002ACDA4:
    set32(c.r[3], 0u + 25500u);
    set32(c.r[16], c.r[21].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ACE1C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] << 2);  if (t) { goto L_002ACE1C; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[22], c.r[3].w[0] + 192u);
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 224u);  if (t) { goto L_002ACE1C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACDECu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002ACDECu) [[unlikely]] return; }
L_002ACDEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACDFCu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002ACDFCu) [[unlikely]] return; }
L_002ACDFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACE0Cu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002ACE0Cu) [[unlikely]] return; }
L_002ACE0C:
    set32(c.r[4], ld32((c.r[22].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[22].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[4].w[0]);
    c.budget -= 4;
L_002ACE1C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002ACE20:
    c.r[3].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACDA4u | kUnwind; return; } goto L_002ACDA4; } }
L_002ACE2C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[20].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACD74u | kUnwind; return; } goto L_002ACD74; } }
L_002ACE3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_002ACE40:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_002ACE70:
    st32((c.r[4].w[0] + 132u), 0u);
    { const std::uint32_t t = c.r[31].w[0]; c.pc = t; return; }

L_002ACEA4:
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ACF2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACEBCu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002ACEBCu) [[unlikely]] return; }
L_002ACEBC:
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], 0u + 42u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ACF2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACED4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002ACED4u) [[unlikely]] return; }
L_002ACED4:
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], 0u + 43u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ACF2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACEECu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002ACEECu) [[unlikely]] return; }
L_002ACEEC:
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], 0u + 44u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ACF2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACF04u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002ACF04u) [[unlikely]] return; }
L_002ACF04:
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ACF2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACF1Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002ACF1Cu) [[unlikely]] return; }
L_002ACF1C:
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[20].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_002ACF34; } }
L_002ACF2C:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[20].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 2;
L_002ACF34:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ACF38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[22].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 8384u);
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[19].w[0] + 266u));
    set32(c.r[3], 0u + 25500u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AD0F8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[19].w[0] + 260u);  if (t) { goto L_002ACF84; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AD0F8; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_002AD0F8; } }
L_002ACF84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_002AD0EC; } }
L_002ACF8C:
    set32(c.r[4], c.r[21].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 8384u);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = ld16((c.r[6].w[0] + 266u));
    set32(c.r[3], 0u + 25500u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002AD0E8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 265u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 265u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AD0E8; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[6].w[0] + 260u);  if (t) { goto L_002ACFE4; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AD0E8; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_002AD0E8; } }
L_002ACFE4:
    set32(c.r[3], 0u + 212u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 340u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[17].w[0] + 340u);  if (t) { goto L_002AD0E8; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);  if (t) { goto L_002AD00C; } }
    breakpoint(c, 0x002AD008u);
    c.budget -= 1;
L_002AD00C:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD018u);  if (depth < kMaxDepth) unit_0069(c, 398u, depth + 1u); else { c.pc = 0x002A7DD0u; return; } if (c.pc != 0x002AD018u) [[unlikely]] return; }
L_002AD018:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AD0E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD02Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 79u, depth + 1u); else { c.pc = 0x002AD1B0u; return; } if (c.pc != 0x002AD02Cu) [[unlikely]] return; }
L_002AD02C:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 1832u), c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 332u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AD0E8; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002AD0A8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 336u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 212u);  if (t) { goto L_002AD098; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002AD0A8; } }
    set32(c.r[3], 0u + 212u);
    c.budget -= 1;
L_002AD098:
    set32(c.r[4], 0u + 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 340u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002AD0A8:
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002AD0E8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 336u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 212u);  if (t) { goto L_002AD0D8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AD0E8; } }
    set32(c.r[3], 0u + 212u);
    c.budget -= 1;
L_002AD0D8:
    set32(c.r[4], 0u + 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 340u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002AD0E8:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002AD0EC:
    c.r[3].d[0] = c.r[21].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACF8Cu | kUnwind; return; } goto L_002ACF8C; } }
L_002AD0F8:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[3].d[0] = c.r[22].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACF38u | kUnwind; return; } goto L_002ACF38; } }
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
L_002AD130:
    set32(c.r[3], ld32((c.r[4].w[0] + 1864u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 132u), c.r[3].w[0]);  if (t) { goto L_002AD150; } }
L_002AD140:
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 1868u)));
    st32((c.r[5].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 4;
L_002AD150:
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD140u | kUnwind; return; } goto L_002AD140; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AD170:
    set32(c.r[3], ld32((c.r[4].w[0] + 1864u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 132u), c.r[3].w[0]);  if (t) { goto L_002AD190; } }
L_002AD180:
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 1868u)));
    st32((c.r[5].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 4;
L_002AD190:
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD180u | kUnwind; return; } goto L_002AD180; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AD1B0:
    set32(c.r[2], 0u + 212u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 332u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002AD294; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 8650u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_002AD20C; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AD208; } }
    breakpoint(c, 0x002AD204u);
    c.budget -= 1;
L_002AD208:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AD20C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002AD21C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 86u);  if (t) { goto L_002AD230; } }
L_002AD21C:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AD22C; } }
    breakpoint(c, 0x002AD228u);
    c.budget -= 1;
L_002AD22C:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AD230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD238u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002AD238u) [[unlikely]] return; }
L_002AD238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 3000u);  if (t) { goto L_002AD264; } }
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 236u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AD268; } }
    set32(c.r[2], 0u + 3012u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002AD264; } }
    set32(c.r[17], 0u + 3086u);
    c.budget -= 1;
L_002AD264:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002AD268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD270u);  if (depth < kMaxDepth) unit_006B(c, 208u, depth + 1u); else { c.pc = 0x002AF240u; return; } if (c.pc != 0x002AD270u) [[unlikely]] return; }
L_002AD270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].d[0] = c.r[17].sd[0] < 3400ll ? 1ull : 0ull;  if (t) { goto L_002AD28C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AD288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 200u);  if (t) { goto L_002AD28C; } }
L_002AD288:
    set32(c.r[17], c.r[17].w[0] + 100u);
    c.budget -= 1;
L_002AD28C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002AD2BC; } }
L_002AD294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD29Cu); c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_006B(c, 208u, depth + 1u); else { c.pc = 0x002AF240u; return; } if (c.pc != 0x002AD29Cu) [[unlikely]] return; }
L_002AD29C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].d[0] = c.r[16].sd[0] < 3400ll ? 1ull : 0ull;  if (t) { goto L_002AD2B8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AD2B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 200u);  if (t) { goto L_002AD2B8; } }
L_002AD2B4:
    set32(c.r[16], c.r[16].w[0] + 100u);
    c.budget -= 1;
L_002AD2B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002AD2BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AD2D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AD304; } }
L_002AD2EC:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD300u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 203u, depth + 1u); else { c.pc = 0x00166520u; return; } if (c.pc != 0x002AD300u) [[unlikely]] return; }
L_002AD300:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002AD304:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD2ECu | kUnwind; return; } goto L_002AD2EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD31Cu);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002AD31Cu) [[unlikely]] return; }
L_002AD31C:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD328u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 210u, depth + 1u); else { c.pc = 0x00166610u; return; } if (c.pc != 0x002AD328u) [[unlikely]] return; }
L_002AD328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AD340:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD374u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002AD374u) [[unlikely]] return; }
L_002AD374:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD388u); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002AD388u) [[unlikely]] return; }
L_002AD388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD390u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002AD390u) [[unlikely]] return; }
L_002AD390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD3B4; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002AD3AC; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 1;
L_002AD3AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD3B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 261u, depth + 1u); else { c.pc = 0x00166A60u; return; } if (c.pc != 0x002AD3B4u) [[unlikely]] return; }
L_002AD3B4:
    st32((c.r[21].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD3C4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 210u, depth + 1u); else { c.pc = 0x002AF3E0u; return; } if (c.pc != 0x002AD3C4u) [[unlikely]] return; }
L_002AD3C4:
    set32(c.r[3], ld32((c.r[21].w[0] + 84u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002AD3E4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002AD420; } }
L_002AD3E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002AD3F4:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 201u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_002AD40C; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002AD40C:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD3F4u | kUnwind; return; } goto L_002AD3F4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002AD420:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AD434; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 92u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002AD434:
    set32(c.r[2], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD44C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 12u)));  if (t) { goto L_002AD450; } }
L_002AD44C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AD450:
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AD474; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 100u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD474u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 294u, depth + 1u); else { c.pc = 0x00166FE0u; return; } if (c.pc != 0x002AD474u) [[unlikely]] return; }
L_002AD474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD47Cu);  if (depth < kMaxDepth) unit_0049(c, 26u, depth + 1u); else { c.pc = 0x002245F0u; return; } if (c.pc != 0x002AD47Cu) [[unlikely]] return; }
L_002AD47C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD48C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD48Cu);  if (depth < kMaxDepth) unit_0049(c, 21u, depth + 1u); else { c.pc = 0x00224560u; return; } if (c.pc != 0x002AD48Cu) [[unlikely]] return; }
L_002AD48C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD494u); set32(c.r[4], ld32((c.r[21].w[0] + 92u)));  if (depth < kMaxDepth) unit_0019(c, 319u, depth + 1u); else { c.pc = 0x001673B0u; return; } if (c.pc != 0x002AD494u) [[unlikely]] return; }
L_002AD494:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD4ACu); set32(c.r[22], c.r[2].w[0] - c.r[19].w[0]);  if (depth < kMaxDepth) unit_0019(c, 311u, depth + 1u); else { c.pc = 0x00167320u; return; } if (c.pc != 0x002AD4ACu) [[unlikely]] return; }
L_002AD4AC:
    set32(c.r[2], ld32((c.r[21].w[0] + 92u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD4C8u); set32(c.r[4], ld32((c.r[21].w[0] + 92u)));  if (depth < kMaxDepth) unit_0019(c, 313u, depth + 1u); else { c.pc = 0x00167340u; return; } if (c.pc != 0x002AD4C8u) [[unlikely]] return; }
L_002AD4C8:
    st16((c.r[21].w[0] + 82u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[21].w[0] + 2412u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AD4E8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_002AD8D4; } }
L_002AD4E8:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], 0u + 212u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 1832u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[23], c.r[21].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[23].w[0] + 332u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[23].w[0] + 136u);  if (t) { goto L_002AD5A8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD518u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 211u, depth + 1u); else { c.pc = 0x002AF480u; return; } if (c.pc != 0x002AD518u) [[unlikely]] return; }
L_002AD518:
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD528u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 309u, depth + 1u); else { c.pc = 0x00167280u; return; } if (c.pc != 0x002AD528u) [[unlikely]] return; }
L_002AD528:
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[3], c.r[2].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_002AD54C; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AD548; } }
    breakpoint(c, 0x002AD544u);
    c.budget -= 1;
L_002AD548:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AD54C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002AD55C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[21].w[0] + 2412u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002AD55C:
    set32(c.r[2], c.r[16].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 341u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD920; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    c.r[6].d[0] = c.r[22].d[0] & 65535ull;
    c.r[5].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD5A0u); c.r[7].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0019(c, 310u, depth + 1u); else { c.pc = 0x001672C0u; return; } if (c.pc != 0x002AD5A0u) [[unlikely]] return; }
L_002AD5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_002AD920; } }
L_002AD5A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AD920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 196u)));  if (t) { goto L_002AD8B8; } }
L_002AD5BC:
    set32(c.r[2], 0u + 25500u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 26u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[16].w[0] + 1u);  if (t) { goto L_002AD8B0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], c.r[6].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_002AD5FC; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AD5F8; } }
    breakpoint(c, 0x002AD5F4u);
    c.budget -= 1;
L_002AD5F8:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AD5FC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[6].d[0] & 65535ull;  if (t) { goto L_002AD60C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 86u);  if (t) { goto L_002AD620; } }
L_002AD60C:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AD61C; } }
    breakpoint(c, 0x002AD618u);
    c.budget -= 1;
L_002AD61C:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AD620:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002AD6C8; } }
    c.r[5].d[0] = c.r[4].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD638u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 211u, depth + 1u); else { c.pc = 0x002AF480u; return; } if (c.pc != 0x002AD638u) [[unlikely]] return; }
L_002AD638:
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD648u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 309u, depth + 1u); else { c.pc = 0x00167280u; return; } if (c.pc != 0x002AD648u) [[unlikely]] return; }
L_002AD648:
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[3], c.r[2].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_002AD66C; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AD668; } }
    breakpoint(c, 0x002AD664u);
    c.budget -= 1;
L_002AD668:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AD66C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002AD67C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[21].w[0] + 2412u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002AD67C:
    c.r[2].d[0] = ld8((c.r[23].w[0] + 341u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD8AC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[2], c.r[22].w[0] + c.r[18].w[0]);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    set32(c.r[2], 0u + 10u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD6C0u); c.r[7].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0019(c, 310u, depth + 1u); else { c.pc = 0x001672C0u; return; } if (c.pc != 0x002AD6C0u) [[unlikely]] return; }
L_002AD6C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_002AD8AC; } }
L_002AD6C8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], c.r[6].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_002AD6F0; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AD6EC; } }
    breakpoint(c, 0x002AD6E8u);
    c.budget -= 1;
L_002AD6EC:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AD6F0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[6].d[0] & 65535ull;  if (t) { goto L_002AD700; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 86u);  if (t) { goto L_002AD714; } }
L_002AD700:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AD710; } }
    breakpoint(c, 0x002AD70Cu);
    c.budget -= 1;
L_002AD710:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AD714:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002AD7BC; } }
    c.r[5].d[0] = c.r[4].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD72Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 211u, depth + 1u); else { c.pc = 0x002AF480u; return; } if (c.pc != 0x002AD72Cu) [[unlikely]] return; }
L_002AD72C:
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD73Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 309u, depth + 1u); else { c.pc = 0x00167280u; return; } if (c.pc != 0x002AD73Cu) [[unlikely]] return; }
L_002AD73C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    set32(c.r[3], c.r[2].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_002AD760; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AD75C; } }
    breakpoint(c, 0x002AD758u);
    c.budget -= 1;
L_002AD75C:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AD760:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002AD770; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[21].w[0] + 2412u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002AD770:
    c.r[2].d[0] = ld8((c.r[23].w[0] + 342u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD8AC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[22].w[0] + c.r[18].w[0]);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    set32(c.r[2], 0u + 10u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD7B4u); c.r[7].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0019(c, 310u, depth + 1u); else { c.pc = 0x001672C0u; return; } if (c.pc != 0x002AD7B4u) [[unlikely]] return; }
L_002AD7B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_002AD8AC; } }
L_002AD7BC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], c.r[6].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_002AD7E4; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AD7E0; } }
    breakpoint(c, 0x002AD7DCu);
    c.budget -= 1;
L_002AD7E0:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AD7E4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[6].d[0] & 65535ull;  if (t) { goto L_002AD7F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 86u);  if (t) { goto L_002AD808; } }
L_002AD7F4:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AD804; } }
    breakpoint(c, 0x002AD800u);
    c.budget -= 1;
L_002AD804:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AD808:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002AD8AC; } }
    c.r[5].d[0] = c.r[4].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD820u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 211u, depth + 1u); else { c.pc = 0x002AF480u; return; } if (c.pc != 0x002AD820u) [[unlikely]] return; }
L_002AD820:
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD830u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 309u, depth + 1u); else { c.pc = 0x00167280u; return; } if (c.pc != 0x002AD830u) [[unlikely]] return; }
L_002AD830:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 14u));
    set32(c.r[3], c.r[2].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_002AD854; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AD850; } }
    breakpoint(c, 0x002AD84Cu);
    c.budget -= 1;
L_002AD850:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AD854:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002AD864; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[21].w[0] + 2412u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002AD864:
    c.r[2].d[0] = ld8((c.r[23].w[0] + 343u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD8AC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    set32(c.r[2], c.r[22].w[0] + c.r[18].w[0]);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    set32(c.r[2], 0u + 10u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD8A8u); c.r[7].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0019(c, 310u, depth + 1u); else { c.pc = 0x001672C0u; return; } if (c.pc != 0x002AD8A8u) [[unlikely]] return; }
L_002AD8A8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002AD8AC:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002AD8B0:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.budget -= 2;
L_002AD8B8:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD5BCu | kUnwind; return; } goto L_002AD5BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[21].w[0] + 92u)));  if (t) { goto L_002AD924; } }
L_002AD8D4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AD920; } }
    set32(c.r[2], c.r[20].w[0] << 5);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[21].w[0] + c.r[2].w[0]);  if (t) { goto L_002AD910; } }
L_002AD8EC:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 1900u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD8FCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 211u, depth + 1u); else { c.pc = 0x002AF480u; return; } if (c.pc != 0x002AD8FCu) [[unlikely]] return; }
L_002AD8FC:
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD90Cu); c.r[5].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0019(c, 309u, depth + 1u); else { c.pc = 0x00167280u; return; } if (c.pc != 0x002AD90Cu) [[unlikely]] return; }
L_002AD90C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002AD910:
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD8ECu | kUnwind; return; } goto L_002AD8EC; } }
L_002AD920:
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    c.budget -= 1;
L_002AD924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD92Cu);  if (depth < kMaxDepth) unit_0019(c, 312u, depth + 1u); else { c.pc = 0x00167330u; return; } if (c.pc != 0x002AD92Cu) [[unlikely]] return; }
L_002AD92C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 3046u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AD954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD944u); set32(c.r[4], ld32((c.r[21].w[0] + 92u)));  if (depth < kMaxDepth) unit_0019(c, 312u, depth + 1u); else { c.pc = 0x00167330u; return; } if (c.pc != 0x002AD944u) [[unlikely]] return; }
L_002AD944:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 3246u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AD9EC; } }
L_002AD954:
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD960u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 320u, depth + 1u); else { c.pc = 0x001673D0u; return; } if (c.pc != 0x002AD960u) [[unlikely]] return; }
L_002AD960:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002AD98C; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AD980; } }
    breakpoint(c, 0x002AD97Cu);
    c.budget -= 1;
L_002AD980:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AD990; } }
L_002AD98C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002AD990:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002AD9A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 86u);  if (t) { goto L_002AD9B4; } }
L_002AD9A0:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AD9B0; } }
    breakpoint(c, 0x002AD9ACu);
    c.budget -= 1;
L_002AD9B0:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AD9B4:
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AD9EC; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD9CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 320u, depth + 1u); else { c.pc = 0x001673D0u; return; } if (c.pc != 0x002AD9CCu) [[unlikely]] return; }
L_002AD9CC:
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD9DCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0019(c, 309u, depth + 1u); else { c.pc = 0x00167280u; return; } if (c.pc != 0x002AD9DCu) [[unlikely]] return; }
L_002AD9DC:
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD9ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 309u, depth + 1u); else { c.pc = 0x00167280u; return; } if (c.pc != 0x002AD9ECu) [[unlikely]] return; }
L_002AD9EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD9F4u);  if (depth < kMaxDepth) unit_0049(c, 26u, depth + 1u); else { c.pc = 0x002245F0u; return; } if (c.pc != 0x002AD9F4u) [[unlikely]] return; }
L_002AD9F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA0Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 27u, depth + 1u); else { c.pc = 0x00224600u; return; } if (c.pc != 0x002ADA0Cu) [[unlikely]] return; }
L_002ADA0C:
    set32(c.r[3], ld32((c.r[21].w[0] + 84u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ADA50; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002ADA30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ADA40; } }
L_002ADA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA38u);  if (depth < kMaxDepth) unit_006B(c, 158u, depth + 1u); else { c.pc = 0x002ADFC0u; return; } if (c.pc != 0x002ADA38u) [[unlikely]] return; }
L_002ADA38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 84u)));  if (t) { goto L_002ADB9C; } }
L_002ADA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA48u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 167u, depth + 1u); else { c.pc = 0x002AE480u; return; } if (c.pc != 0x002ADA48u) [[unlikely]] return; }
L_002ADA48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADB98; } }
L_002ADA50:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002ADA68; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002ADA78; } }
L_002ADA68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADA70u);  if (depth < kMaxDepth) unit_006B(c, 167u, depth + 1u); else { c.pc = 0x002AE480u; return; } if (c.pc != 0x002ADA70u) [[unlikely]] return; }
L_002ADA70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ADB98; } }
L_002ADA78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ADB98; } }
    set32(c.r[2], c.r[20].w[0] << 5);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 4;
L_002ADA90:
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0] + 1900u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADAA4u); c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0019(c, 309u, depth + 1u); else { c.pc = 0x00167280u; return; } if (c.pc != 0x002ADAA4u) [[unlikely]] return; }
L_002ADAA4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADA90u | kUnwind; return; } goto L_002ADA90; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002ADB90; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_002ADB8C; } }
    set32(c.r[2], 0u + 58u);
    set32(c.r[4], ld32((c.r[1].w[0] - 12996u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002ADAE8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ADAE8:
    set32(c.r[2], 0u + 59u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 60u);  if (t) { goto L_002ADAF8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ADAF8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002ADB04; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ADB04:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002ADB14; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ADB14:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ADB8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADB24u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002ADB24u) [[unlikely]] return; }
L_002ADB24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2000u);  if (t) { goto L_002ADB4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADB40u);  if (depth < kMaxDepth) unit_00A7(c, 74u, depth + 1u); else { c.pc = 0x0039D710u; return; } if (c.pc != 0x002ADB40u) [[unlikely]] return; }
L_002ADB40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ADB8C; } }
    set32(c.r[4], 0u + 2000u);
    c.budget -= 1;
L_002ADB4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADB54u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002ADB54u) [[unlikely]] return; }
L_002ADB54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ADB68; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADB68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 125u, depth + 1u); else { c.pc = 0x0039E2F0u; return; } if (c.pc != 0x002ADB68u) [[unlikely]] return; }
L_002ADB68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 24400u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[4].w[0] + 128u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24400u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    st32((c.r[2].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 9;
L_002ADB8C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002ADB90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADB98u);  if (depth < kMaxDepth) unit_006B(c, 145u, depth + 1u); else { c.pc = 0x002ADD60u; return; } if (c.pc != 0x002ADB98u) [[unlikely]] return; }
L_002ADB98:
    set32(c.r[3], ld32((c.r[21].w[0] + 84u)));
    c.budget -= 1;
L_002ADB9C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ADBB4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ADD24; } }
L_002ADBB4:
    set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADBC0u); set32(c.r[5], ld32((c.r[21].w[0] + 92u)));  if (depth < kMaxDepth) unit_0054(c, 475u, depth + 1u); else { c.pc = 0x00252F40u; return; } if (c.pc != 0x002ADBC0u) [[unlikely]] return; }
L_002ADBC0:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ADBC4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[17].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[16], c.r[17].w[0] << 1);
    set32(c.r[2], 0u + 25500u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[6].d[0] = ld16((c.r[3].w[0] + 64u));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[19].w[0] + 1u);  if (t) { goto L_002ADC98; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADBF4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 309u, depth + 1u); else { c.pc = 0x00167280u; return; } if (c.pc != 0x002ADBF4u) [[unlikely]] return; }
L_002ADBF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 201u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ADC6C; } }
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADC1Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 209u, depth + 1u); else { c.pc = 0x002AF300u; return; } if (c.pc != 0x002ADC1Cu) [[unlikely]] return; }
L_002ADC1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ADC6C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[22].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 64u));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADC68u); c.r[7].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0019(c, 310u, depth + 1u); else { c.pc = 0x001672C0u; return; } if (c.pc != 0x002ADC68u) [[unlikely]] return; }
L_002ADC68:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002ADC6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 212u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 64u));
    st16((c.r[4].w[0] + 136u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 340u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.budget -= 11;
L_002ADC98:
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADBC4u | kUnwind; return; } goto L_002ADBC4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADCBCu); set32(c.r[5], c.r[2].w[0] + 180u);  if (depth < kMaxDepth) unit_0019(c, 354u, depth + 1u); else { c.pc = 0x00167B50u; return; } if (c.pc != 0x002ADCBCu) [[unlikely]] return; }
L_002ADCBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002ADCF4; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADCDCu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0019(c, 311u, depth + 1u); else { c.pc = 0x00167320u; return; } if (c.pc != 0x002ADCDCu) [[unlikely]] return; }
L_002ADCDC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[21].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 80u)));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002ADCF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 88u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD08u); set32(c.r[4], ld32((c.r[21].w[0] + 92u)));  if (depth < kMaxDepth) unit_0019(c, 307u, depth + 1u); else { c.pc = 0x00167250u; return; } if (c.pc != 0x002ADD08u) [[unlikely]] return; }
L_002ADD08:
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ADD24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD24u); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 604u, depth + 1u); else { c.pc = 0x00253E00u; return; } if (c.pc != 0x002ADD24u) [[unlikely]] return; }
L_002ADD24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD2Cu); set32(c.r[4], ld32((c.r[29].w[0] + 156u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002ADD2Cu) [[unlikely]] return; }
L_002ADD2C:
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
L_002ADD60:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 13038u);
    c.r[9].d[0] = ld8((c.r[1].w[0] - 13040u));
    set32(c.r[8], c.r[29].w[0] + 50u);
    set32(c.r[10], ld32((c.r[4].w[0] + 92u)));
    c.r[14].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 13036u);
    set32(c.r[6], c.r[29].w[0] + 52u);
    set32(c.r[5], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[12], ld32((c.r[10].w[0] + 36u)));
    c.r[4].d[0] = ld8((c.r[1].w[0] - 13039u));
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 24;
L_002ADDC0:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADDC0u | kUnwind; return; } goto L_002ADDC0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 13004u)));
    set32(c.r[7], c.r[7].w[0] - 12992u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 84u), c.r[8].w[0]);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 13000u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[29].w[0] + 88u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] - 12996u)));
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 13;
L_002ADE14:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADE14u | kUnwind; return; } goto L_002ADE14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - 12984u);
    set32(c.r[8], c.r[29].w[0] + 104u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.r[13].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 2019u);
    set32(c.r[7], c.r[7].w[0] - 28800u);
    set32(c.r[24], 0u + 2023u);
    set32(c.r[16], 0u + 2022u);
    set32(c.r[17], 0u + 2025u);
    set32(c.r[18], 0u + 2021u);
    set32(c.r[4], 0u + 2027u);
    set32(c.r[5], 0u + 2024u);
    set32(c.r[6], 0u + 2026u);
    set32(c.r[15], 0u + 2u);
    st32((c.r[8].w[0]), c.f[1]);
    set32(c.r[3], 0u + 2020u);
    st32((c.r[8].w[0] + 4u), c.f[0]);
    set32(c.r[9], 0u + 2001u);
    c.r[8].d[0] = ld8((c.r[1].w[0] - 12976u));
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 112u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_002ADF94; } }
L_002ADE98:
    set32(c.r[8], ld32((c.r[12].w[0] + 8u)));
    set32(c.r[11], c.r[13].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] - c.r[13].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[8].w[0] + 2u);
    c.r[8].d[0] = ld16((c.r[8].w[0] + 2u));
    c.budget -= 9;
    { const bool t = c.r[8].d[0] == c.r[10].d[0]; set32(c.r[25], c.r[14].w[0] << 2);  if (t) { goto L_002ADEC4; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[9].d[0];  if (t) { goto L_002ADF90; } }
L_002ADEC4:
    c.r[8].d[0] = c.r[8].d[0] ^ 2001ull;
    set32(c.r[25], c.r[25].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.r[1].d[0] = c.r[25].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_002ADF80; } }
    set32(c.r[25], c.r[25].w[0] << 2);
    set32(c.r[25], c.r[25].w[0] + c.r[7].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002AC000u < 16384u) { entry = entries_006B[(t - 0x002AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002ADEF0:
    set32(c.r[25], 0u + 2001u);
    if (c.r[8].d[0] == 0) c.r[25].d[0] = c.r[10].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));  if (t) { goto L_002ADF84; } }
L_002ADF00:
    set32(c.r[25], 0u + 2008u);
    if (c.r[8].d[0] == 0) c.r[25].d[0] = c.r[6].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));  if (t) { goto L_002ADF84; } }
L_002ADF10:
    set32(c.r[25], 0u + 2006u);
    if (c.r[8].d[0] == 0) c.r[25].d[0] = c.r[5].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));  if (t) { goto L_002ADF84; } }
L_002ADF20:
    set32(c.r[25], 0u + 2009u);
    if (c.r[8].d[0] == 0) c.r[25].d[0] = c.r[4].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));  if (t) { goto L_002ADF84; } }
L_002ADF30:
    set32(c.r[25], 0u + 2002u);
    if (c.r[8].d[0] == 0) c.r[25].d[0] = c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));  if (t) { goto L_002ADF84; } }
L_002ADF40:
    set32(c.r[25], 0u + 2003u);
    if (c.r[8].d[0] == 0) c.r[25].d[0] = c.r[18].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));  if (t) { goto L_002ADF84; } }
L_002ADF50:
    set32(c.r[25], 0u + 2007u);
    if (c.r[8].d[0] == 0) c.r[25].d[0] = c.r[17].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));  if (t) { goto L_002ADF84; } }
L_002ADF60:
    set32(c.r[25], 0u + 2004u);
    if (c.r[8].d[0] == 0) c.r[25].d[0] = c.r[16].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));  if (t) { goto L_002ADF84; } }
L_002ADF70:
    set32(c.r[25], 0u + 2005u);
    if (c.r[8].d[0] == 0) c.r[25].d[0] = c.r[24].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));  if (t) { goto L_002ADF84; } }
L_002ADF80:
    st16((c.r[11].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002ADF84:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[14].d[0] == c.r[15].d[0];  if (t) { goto L_002ADFA4; } }
L_002ADF90:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.budget -= 1;
L_002ADF94:
    c.r[8].d[0] = ld16((c.r[12].w[0] + 2u));
    c.r[8].d[0] = c.r[13].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADE98u | kUnwind; return; } goto L_002ADE98; } }
L_002ADFA4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002ADFC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[21], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002AE3B0; } }
L_002ADFF4:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[16], c.r[5].w[0] << 2);
    set32(c.r[3], 0u + 2019u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 2u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AE3AC; } }
    set32(c.r[4], 0u + 212u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24400u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 24392u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 332u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[18], c.r[3].w[0] + 136u);  if (t) { goto L_002AE0DC; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AE04C; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 1;
L_002AE04C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_002AE058; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 1;
L_002AE058:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 14u);  if (t) { goto L_002AE068; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 1;
L_002AE068:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_002AE250; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AE094; } }
    c.r[5].d[0] = ld8((c.r[18].w[0] + 205u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE084u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));  if (depth < kMaxDepth) unit_006B(c, 166u, depth + 1u); else { c.pc = 0x002AE3F0u; return; } if (c.pc != 0x002AE084u) [[unlikely]] return; }
L_002AE084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE090; } }
    set32(c.r[17], 0u + 14u);
    c.budget -= 1;
L_002AE090:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002AE094:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002AE0B8; } }
    c.r[5].d[0] = ld8((c.r[18].w[0] + 206u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE0A8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_006B(c, 166u, depth + 1u); else { c.pc = 0x002AE3F0u; return; } if (c.pc != 0x002AE0A8u) [[unlikely]] return; }
L_002AE0A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE0B4; } }
    set32(c.r[17], 0u + 14u);
    c.budget -= 1;
L_002AE0B4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002AE0B8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 14u);  if (t) { goto L_002AE254; } }
    c.r[5].d[0] = ld8((c.r[18].w[0] + 207u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE0CCu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));  if (depth < kMaxDepth) unit_006B(c, 166u, depth + 1u); else { c.pc = 0x002AE3F0u; return; } if (c.pc != 0x002AE0CCu) [[unlikely]] return; }
L_002AE0CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 14u);  if (t) { goto L_002AE250; } }
L_002AE0DC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] << 1);  if (t) { goto L_002AE250; } }
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0] + 26u));
    set32(c.r[3], 0u + 25500u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[17], 0u + 14u);  if (t) { goto L_002AE250; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[7].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[4], c.r[7].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[3], 0u - 1u);  if (t) { goto L_002AE120; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_002AE11C; } }
    breakpoint(c, 0x002AE118u);
    c.budget -= 1;
L_002AE11C:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AE120:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; c.r[4].d[0] = c.r[7].d[0] & 65535ull;  if (t) { goto L_002AE130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 86u);  if (t) { goto L_002AE144; } }
L_002AE130:
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_002AE140; } }
    breakpoint(c, 0x002AE13Cu);
    c.budget -= 1;
L_002AE140:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AE144:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_002AE16C; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 52u)));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 205u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE15Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_006B(c, 166u, depth + 1u); else { c.pc = 0x002AE3F0u; return; } if (c.pc != 0x002AE15Cu) [[unlikely]] return; }
L_002AE15C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 14u);  if (t) { goto L_002AE250; } }
L_002AE16C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.r[7].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[4], c.r[7].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[3], 0u - 1u);  if (t) { goto L_002AE194; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_002AE190; } }
    breakpoint(c, 0x002AE18Cu);
    c.budget -= 1;
L_002AE190:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AE194:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; c.r[4].d[0] = c.r[7].d[0] & 65535ull;  if (t) { goto L_002AE1A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 86u);  if (t) { goto L_002AE1B8; } }
L_002AE1A4:
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_002AE1B4; } }
    breakpoint(c, 0x002AE1B0u);
    c.budget -= 1;
L_002AE1B4:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AE1B8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_002AE1E0; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 56u)));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 206u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE1D0u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_006B(c, 166u, depth + 1u); else { c.pc = 0x002AE3F0u; return; } if (c.pc != 0x002AE1D0u) [[unlikely]] return; }
L_002AE1D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 14u);  if (t) { goto L_002AE250; } }
L_002AE1E0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));
    c.r[7].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[4], c.r[7].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[3], 0u - 1u);  if (t) { goto L_002AE208; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_002AE204; } }
    breakpoint(c, 0x002AE200u);
    c.budget -= 1;
L_002AE204:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AE208:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; c.r[4].d[0] = c.r[7].d[0] & 65535ull;  if (t) { goto L_002AE218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 86u);  if (t) { goto L_002AE22C; } }
L_002AE218:
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_002AE228; } }
    breakpoint(c, 0x002AE224u);
    c.budget -= 1;
L_002AE228:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AE22C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_002AE250; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 60u)));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 207u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE244u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_006B(c, 166u, depth + 1u); else { c.pc = 0x002AE3F0u; return; } if (c.pc != 0x002AE244u) [[unlikely]] return; }
L_002AE244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE250; } }
    set32(c.r[17], 0u + 14u);
    c.budget -= 1;
L_002AE250:
    set32(c.r[3], 0u + 14u);
    c.budget -= 1;
L_002AE254:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[17].w[0] - 10u);  if (t) { goto L_002AE274; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002AE274; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_002AE284; } }
L_002AE274:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002AE3A8; } }
L_002AE284:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AE2A0; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], 0u + 2019u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002AE3A8; } }
L_002AE2A0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_002AE2BC; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], 0u + 2026u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002AE3A8; } }
L_002AE2BC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_002AE2DC; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], 0u + 2024u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002AE3A8; } }
L_002AE2DC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_002AE2F8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], 0u + 2027u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002AE3A8; } }
L_002AE2F8:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_002AE318; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], 0u + 2020u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002AE3A8; } }
L_002AE318:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_002AE334; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], 0u + 2021u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002AE3A8; } }
L_002AE334:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_002AE354; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], 0u + 2025u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002AE3A8; } }
L_002AE354:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_002AE370; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], 0u + 2022u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002AE3A8; } }
L_002AE370:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_002AE390; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], 0u + 2023u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002AE3A8; } }
L_002AE390:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_002AE3A8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], 0u + 2019u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002AE3A8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002AE3AC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002AE3B0:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 2u));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADFF4u | kUnwind; return; } goto L_002ADFF4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002AE3F0:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);  if (t) { goto L_002AE400; } }
    breakpoint(c, 0x002AE3FCu);
    c.budget -= 1;
L_002AE400:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 69u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_002AE418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AE478; } }
L_002AE418:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002AE42C; } }
    set32(c.r[2], 0u + 301u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002AE434; } }
L_002AE42C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AE478; } }
L_002AE434:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AE478; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 30u);  if (t) { goto L_002AE450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AE478; } }
L_002AE450:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AE460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AE478; } }
L_002AE460:
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AE474; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE478; } }
L_002AE474:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AE478:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AE480:
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2019u);  if (t) { goto L_002AE4C0; } }
L_002AE494:
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] + 2u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 2u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002AE4BC; } }
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002AE4BC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002AE4C0:
    c.r[3].d[0] = ld16((c.r[7].w[0] + 2u));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE494u | kUnwind; return; } goto L_002AE494; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AE4E0:
    set32(c.r[29], c.r[29].w[0] - 432u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE518u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002AE518u) [[unlikely]] return; }
L_002AE518:
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AE5A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE530u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002AE530u) [[unlikely]] return; }
L_002AE530:
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], 0u + 42u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AE5A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE548u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002AE548u) [[unlikely]] return; }
L_002AE548:
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], 0u + 43u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AE5A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE560u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002AE560u) [[unlikely]] return; }
L_002AE560:
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], 0u + 44u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AE5A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE578u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002AE578u) [[unlikely]] return; }
L_002AE578:
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AE5A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE590u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002AE590u) [[unlikely]] return; }
L_002AE590:
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002AE5A8; } }
L_002AE5A0:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002AE5A8:
    set32(c.r[3], c.r[4].w[0] + c.r[29].w[0]);
    st8((c.r[3].w[0] + 424u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE5A8u | kUnwind; return; } goto L_002AE5A8; } }
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[20].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 400u), c.r[3].w[0]);
    c.budget -= 3;
L_002AE5D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[18], c.r[20].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 8384u);
    set32(c.r[7], 0u + 25500u);
    set32(c.r[17], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], 0u + 212u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[17].w[0] + 266u);
    set32(c.r[16], c.r[21].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[6], c.r[16].w[0] + 264u);
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 266u)));
    set32(c.r[3], c.r[16].w[0] + 168u);
    set32(c.r[22], c.r[16].w[0] + 164u);
    set32(c.r[23], c.r[16].w[0] + 341u);
    set32(c.r[4], c.r[16].w[0] + 342u);
    set32(c.r[5], c.r[16].w[0] + 200u);
    set32(c.r[30], c.r[16].w[0] + 232u);
    st32((c.r[29].w[0] + 320u), c.r[3].w[0]);
    set32(c.r[3], c.r[16].w[0] + 180u);
    st32((c.r[29].w[0] + 352u), c.r[3].w[0]);
    set32(c.r[3], c.r[16].w[0] + 182u);
    st32((c.r[29].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 164u), 0u);
    set32(c.r[3], c.r[16].w[0] + 343u);
    st32((c.r[16].w[0] + 168u), 0u);
    st32((c.r[16].w[0] + 172u), 0u);
    st32((c.r[16].w[0] + 176u), 0u);
    st16((c.r[16].w[0] + 180u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 182u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 224u), c.r[6].w[0]);
    st16((c.r[16].w[0] + 184u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[16].w[0] + 296u);
    st32((c.r[29].w[0] + 208u), c.r[6].w[0]);
    st16((c.r[16].w[0] + 186u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 341u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 342u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 200u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 232u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 264u), static_cast<std::uint8_t>(0u));
    c.budget -= 44;
    { const bool t = c.r[19].d[0] == c.r[7].d[0]; st8((c.r[16].w[0] + 296u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002AED10; } }
    set32(c.r[6], c.r[17].w[0] + 260u);
    st32((c.r[29].w[0] + 368u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 260u)));
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002AE6AC; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 400u)));
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[7].d[0]; set32(c.r[6], 0u + 25500u);  if (t) { goto L_002AED14; } }
L_002AE6AC:
    st16((c.r[16].w[0] + 136u), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[2], c.r[16].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE6BCu); st32((c.r[29].w[0] + 256u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002AE6BCu) [[unlikely]] return; }
L_002AE6BC:
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    st16((c.r[29].w[0] + 384u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 274u));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 384u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE6DCu); st32((c.r[16].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 105u, depth + 1u); else { c.pc = 0x0012CF30u; return; } if (c.pc != 0x002AE6DCu) [[unlikely]] return; }
L_002AE6DC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE6E8u); set32(c.r[4], c.r[16].w[0] + 200u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002AE6E8u) [[unlikely]] return; }
L_002AE6E8:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE6F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 106u, depth + 1u); else { c.pc = 0x0012CF80u; return; } if (c.pc != 0x002AE6F4u) [[unlikely]] return; }
L_002AE6F4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE700u); set32(c.r[4], c.r[16].w[0] + 264u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002AE700u) [[unlikely]] return; }
L_002AE700:
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[16].w[0] + 328u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 264u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002AE73C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 256u));
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002AE740; } }
L_002AE73C:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002AE740:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE74Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 209u, depth + 1u); else { c.pc = 0x002AF300u; return; } if (c.pc != 0x002AE74Cu) [[unlikely]] return; }
L_002AE74C:
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[16].w[0] + 146u);
    st32((c.r[29].w[0] + 336u), c.r[3].w[0]);
    set32(c.r[7], 0u + 25500u);
    st8((c.r[30].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 1u);
    st16((c.r[16].w[0] + 146u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[23], c.r[16].w[0] + 152u);
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[16].w[0] + 152u), c.r[3].w[0]);  if (t) { goto L_002AE82C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[19], c.r[20].w[0] + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 8384u);  if (t) { goto L_002AE820; } }
L_002AE78C:
    set32(c.r[18], c.r[6].w[0] + c.r[3].w[0]);
    c.r[22].d[0] = ld16((c.r[18].w[0] + 266u));
    c.budget -= 4;
    { const bool t = c.r[22].d[0] == c.r[7].d[0]; set32(c.r[3], c.r[19].w[0] + c.r[29].w[0]);  if (t) { goto L_002AE81C; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 424u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AE81C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002AE81C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 265u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 265u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[22].d[0] & 65535ull;  if (t) { goto L_002AE81C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE7CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 105u, depth + 1u); else { c.pc = 0x0012CF30u; return; } if (c.pc != 0x002AE7CCu) [[unlikely]] return; }
L_002AE7CC:
    set32(c.r[4], c.r[16].w[0] + 232u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE7D8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002AE7D8u) [[unlikely]] return; }
L_002AE7D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[22].w[0]));
    st32((c.r[23].w[0]), c.r[19].w[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 264u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AE80C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 256u));
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002AE82C; } }
L_002AE80C:
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_002AE82C; } }
L_002AE81C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002AE820:
    c.r[3].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE78Cu | kUnwind; return; } goto L_002AE78C; } }
L_002AE82C:
    set32(c.r[3], c.r[16].w[0] + 148u);
    set32(c.r[19], 0u - 1u);
    st32((c.r[29].w[0] + 288u), c.r[3].w[0]);
    set32(c.r[4], 0u + 25500u);
    st16((c.r[16].w[0] + 148u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[16].w[0] + 150u);
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    c.r[1].d[0] = c.r[20].sd[0] < 5ll ? 1ull : 0ull;
    st16((c.r[16].w[0] + 150u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[16].w[0] + 192u);
    st32((c.r[16].w[0] + 156u), c.r[19].w[0]);
    set32(c.r[4], 0u + 14u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    c.r[30].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0] + 160u), c.r[19].w[0]);
    set32(c.r[3], c.r[16].w[0] + 196u);
    st32((c.r[16].w[0] + 192u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 196u), c.r[4].w[0]);
    set32(c.r[3], c.r[16].w[0] + 336u);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[16].w[0] + 336u), 0u);  if (t) { goto L_002AE98C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[20].w[0] + 1u);  if (t) { goto L_002AE980; } }
L_002AE890:
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 8384u);
    set32(c.r[22], c.r[3].w[0] + c.r[4].w[0]);
    c.r[23].d[0] = ld16((c.r[22].w[0] + 266u));
    set32(c.r[3], 0u + 25500u);
    c.budget -= 7;
    { const bool t = c.r[23].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[18].w[0] + c.r[29].w[0]);  if (t) { goto L_002AE97C; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 424u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AE97C; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AE97C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 265u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 265u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[23].d[0] & 65535ull;  if (t) { goto L_002AE97C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE8DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 105u, depth + 1u); else { c.pc = 0x0012CF30u; return; } if (c.pc != 0x002AE8DCu) [[unlikely]] return; }
L_002AE8DC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 148u)));
    set32(c.r[4], 0u + 25500u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[5].d[0] = c.r[23].d[0] << 48;  if (t) { goto L_002AE930; } }
    st16((c.r[16].w[0] + 148u), static_cast<std::uint16_t>(c.r[23].w[0]));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE900u); st32((c.r[16].w[0] + 156u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_006B(c, 209u, depth + 1u); else { c.pc = 0x002AF300u; return; } if (c.pc != 0x002AE900u) [[unlikely]] return; }
L_002AE900:
    st8((c.r[16].w[0] + 342u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[22].w[0] + 264u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002AE924; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 172u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[22].w[0] + 256u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 184u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002AE928; } }
L_002AE924:
    st32((c.r[16].w[0] + 172u), c.r[3].w[0]);
    c.budget -= 1;
L_002AE928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002AE97C; } }
L_002AE930:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 150u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[5].d[0] = c.r[23].d[0] << 48;  if (t) { goto L_002AE97C; } }
    st16((c.r[16].w[0] + 150u), static_cast<std::uint16_t>(c.r[23].w[0]));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE950u); st32((c.r[16].w[0] + 160u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_006B(c, 209u, depth + 1u); else { c.pc = 0x002AF300u; return; } if (c.pc != 0x002AE950u) [[unlikely]] return; }
L_002AE950:
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[22].w[0] + 264u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002AE974; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[22].w[0] + 256u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 186u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002AE978; } }
L_002AE974:
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 1;
L_002AE978:
    c.r[30].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002AE97C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002AE980:
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE890u | kUnwind; return; } goto L_002AE890; } }
L_002AE98C:
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[3], 0u + 25500u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002AEACC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE9B8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_001C(c, 327u, depth + 1u); else { c.pc = 0x001737A0u; return; } if (c.pc != 0x002AE9B8u) [[unlikely]] return; }
L_002AE9B8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002AE9F4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == c.r[4].d[0]; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_002AE9E0; } }
    set32(c.r[3], c.r[19].w[0] + c.r[29].w[0]);
    st8((c.r[3].w[0] + 424u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_002AE9E0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[30].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_002AE9F4; } }
    set32(c.r[3], c.r[30].w[0] + c.r[29].w[0]);
    st8((c.r[3].w[0] + 424u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_002AE9F4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002AEA44; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[6], 0u + 25500u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEA18u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_001C(c, 327u, depth + 1u); else { c.pc = 0x001737A0u; return; } if (c.pc != 0x002AEA18u) [[unlikely]] return; }
L_002AEA18:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002AEA44; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == c.r[4].d[0]; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_002AEA44; } }
    set32(c.r[3], c.r[19].w[0] + c.r[29].w[0]);
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 424u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_002AEA44:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002AEA94; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[6], 0u + 25500u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEA68u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_001C(c, 327u, depth + 1u); else { c.pc = 0x001737A0u; return; } if (c.pc != 0x002AEA68u) [[unlikely]] return; }
L_002AEA68:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002AEA94; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[30].d[0] == c.r[4].d[0]; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_002AEA94; } }
    set32(c.r[3], c.r[30].w[0] + c.r[29].w[0]);
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 424u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_002AEA94:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 296u);  if (t) { goto L_002AEAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEAA4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002AEAA4u) [[unlikely]] return; }
L_002AEAA4:
    st32((c.r[16].w[0] + 332u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[18], c.r[16].w[0] + 332u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_002AEADC; } }
L_002AEAB8:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[18], c.r[16].w[0] + 332u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 332u), 0u);  if (t) { goto L_002AEADC; } }
L_002AEACC:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[18], c.r[16].w[0] + 332u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 332u), 0u);
    c.budget -= 4;
L_002AEADC:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AEB94; } }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 384u));
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_002AEB10; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AEB0C; } }
    breakpoint(c, 0x002AEB08u);
    c.budget -= 1;
L_002AEB0C:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AEB10:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[6], c.r[2].w[0] + 86u);  if (t) { goto L_002AEB20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002AEB40; } }
L_002AEB20:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 384u));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 100u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AEB38; } }
    breakpoint(c, 0x002AEB34u);
    c.budget -= 1;
L_002AEB38:
    c.r[6].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_002AEB40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEB48u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 206u, depth + 1u); else { c.pc = 0x002AF090u; return; } if (c.pc != 0x002AEB48u) [[unlikely]] return; }
L_002AEB48:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_002AEB8C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002AEB8C; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002AEB8C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AEB8C; } }
    set32(c.r[5], 0u + 13u);
    c.budget -= 1;
L_002AEB8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 188u), c.r[5].w[0]);  if (t) { goto L_002AED04; } }
L_002AEB94:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 22u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 14u);  if (t) { goto L_002AECF0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_002AEBCC; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AEBC8; } }
    breakpoint(c, 0x002AEBC4u);
    c.budget -= 1;
L_002AEBC8:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AEBCC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002AEBDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 86u);  if (t) { goto L_002AEBF0; } }
L_002AEBDC:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AEBEC; } }
    breakpoint(c, 0x002AEBE8u);
    c.budget -= 1;
L_002AEBEC:
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AEBF0:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AEC0C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AEC60; } }
L_002AEC0C:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_002AEC34; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AEC30; } }
    breakpoint(c, 0x002AEC2Cu);
    c.budget -= 1;
L_002AEC30:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AEC34:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002AEC44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 86u);  if (t) { goto L_002AEC58; } }
L_002AEC44:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AEC54; } }
    breakpoint(c, 0x002AEC50u);
    c.budget -= 1;
L_002AEC54:
    c.r[7].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AEC58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002AECB0; } }
L_002AEC60:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_002AEC88; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AEC84; } }
    breakpoint(c, 0x002AEC80u);
    c.budget -= 1;
L_002AEC84:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AEC88:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002AEC98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 86u);  if (t) { goto L_002AECAC; } }
L_002AEC98:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AECA8; } }
    breakpoint(c, 0x002AECA4u);
    c.budget -= 1;
L_002AECA8:
    c.r[7].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AECAC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002AECB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AECB8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 207u, depth + 1u); else { c.pc = 0x002AF190u; return; } if (c.pc != 0x002AECB8u) [[unlikely]] return; }
L_002AECB8:
    st32((c.r[16].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AECD8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002AECE4; } }
L_002AECD8:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_002AED04; } }
L_002AECE4:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_002AED04; } }
L_002AECF0:
    st32((c.r[16].w[0] + 188u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 5;
L_002AED04:
    st8((c.r[16].w[0] + 340u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[16].w[0] + 340u);  if (t) { goto L_002AED40; } }
L_002AED10:
    set32(c.r[6], 0u + 25500u);
    c.budget -= 1;
L_002AED14:
    set32(c.r[18], c.r[16].w[0] + 332u);
    st16((c.r[16].w[0] + 136u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[7], c.r[16].w[0] + 340u);
    st16((c.r[16].w[0] + 146u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[30].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 332u), 0u);
    st8((c.r[16].w[0] + 340u), static_cast<std::uint8_t>(0u));
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
L_002AED40:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[3], 0u + 25500u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002AEDE4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AEDE4; } }
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AEDE4; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - 10000u);  if (t) { goto L_002AEDE4; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_002AED94; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AED90; } }
    breakpoint(c, 0x002AED8Cu);
    c.budget -= 1;
L_002AED90:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AED94:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002AEDA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 86u);  if (t) { goto L_002AEDB8; } }
L_002AEDA4:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);  if (t) { goto L_002AEDB4; } }
    breakpoint(c, 0x002AEDB0u);
    c.budget -= 1;
L_002AEDB4:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AEDB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEDC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002AEDC0u) [[unlikely]] return; }
L_002AEDC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] & 255ull;  if (t) { goto L_002AEDE8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 236u)));
    set32(c.r[3], 0u + 3012u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3212u);  if (t) { goto L_002AEDE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AEDE4; } }
L_002AEDE0:
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AEDE4:
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 1;
L_002AEDE8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_002AEE14; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[11], 0u + 13u);  if (t) { goto L_002AEE18; } }
    set32(c.r[3], 0u + 7u);
    set32(c.r[4], c.r[16].w[0] + 344u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 344u), c.r[3].w[0]);  if (t) { goto L_002AEFD4; } }
L_002AEE14:
    set32(c.r[11], 0u + 13u);
    c.budget -= 1;
L_002AEE18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[11].d[0]; set32(c.r[10], 0u + 14u);  if (t) { goto L_002AEE30; } }
    st32((c.r[16].w[0] + 344u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 344u);  if (t) { goto L_002AEFD4; } }
L_002AEE30:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[10].d[0]; set32(c.r[9], 0u + 17u);  if (t) { goto L_002AEE48; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 344u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 344u), c.r[3].w[0]);  if (t) { goto L_002AEFD4; } }
L_002AEE48:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[9].d[0]; set32(c.r[4], 0u + 21u);  if (t) { goto L_002AEE60; } }
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + 344u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 344u), c.r[3].w[0]);  if (t) { goto L_002AEFD4; } }
L_002AEE60:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[8], 0u + 11u);  if (t) { goto L_002AEE78; } }
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[16].w[0] + 344u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 344u), c.r[3].w[0]);  if (t) { goto L_002AEFD4; } }
L_002AEE78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[8].d[0]; set32(c.r[7], 0u + 10u);  if (t) { goto L_002AEE90; } }
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], c.r[16].w[0] + 344u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 344u), c.r[3].w[0]);  if (t) { goto L_002AEFD4; } }
L_002AEE90:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[7].d[0]; set32(c.r[6], 0u + 16u);  if (t) { goto L_002AEEA8; } }
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], c.r[16].w[0] + 344u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 344u), c.r[3].w[0]);  if (t) { goto L_002AEFD4; } }
L_002AEEA8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[4], c.r[3].w[0] - 4u);  if (t) { goto L_002AEEC0; } }
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], c.r[16].w[0] + 344u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 344u), c.r[3].w[0]);  if (t) { goto L_002AEFD4; } }
L_002AEEC0:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002AEED8; } }
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_002AEEE8; } }
L_002AEED8:
    set32(c.r[3], 0u + 8u);
    set32(c.r[4], c.r[16].w[0] + 344u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 344u), c.r[3].w[0]);  if (t) { goto L_002AEFD4; } }
L_002AEEE8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_002AEEF8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[5], 0u + 12u);  if (t) { goto L_002AEF08; } }
L_002AEEF8:
    set32(c.r[3], 0u + 9u);
    set32(c.r[4], c.r[16].w[0] + 344u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 344u), c.r[3].w[0]);  if (t) { goto L_002AEFD4; } }
L_002AEF08:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[4], 0u + 22u);  if (t) { goto L_002AEF1C; } }
    st32((c.r[16].w[0] + 344u), c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 344u);  if (t) { goto L_002AEFD4; } }
L_002AEF1C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002AEF30; } }
    st32((c.r[16].w[0] + 344u), c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 344u);  if (t) { goto L_002AEFD4; } }
L_002AEF30:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[4], 0u + 8u);  if (t) { goto L_002AEF48; } }
    st32((c.r[16].w[0] + 344u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 344u);  if (t) { goto L_002AEFD4; } }
L_002AEF48:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002AEF5C; } }
    st32((c.r[16].w[0] + 344u), c.r[11].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 344u);  if (t) { goto L_002AEFD4; } }
L_002AEF5C:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[5], 0u + 18u);  if (t) { goto L_002AEF74; } }
    st32((c.r[16].w[0] + 344u), c.r[10].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 344u);  if (t) { goto L_002AEFD4; } }
L_002AEF74:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002AEF88; } }
    st32((c.r[16].w[0] + 344u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 344u);  if (t) { goto L_002AEFD4; } }
L_002AEF88:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[4], 0u + 19u);  if (t) { goto L_002AEFA0; } }
    st32((c.r[16].w[0] + 344u), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 344u);  if (t) { goto L_002AEFD4; } }
L_002AEFA0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002AEFB4; } }
    st32((c.r[16].w[0] + 344u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 344u);  if (t) { goto L_002AEFD4; } }
L_002AEFB4:
    set32(c.r[4], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002AEFCC; } }
    st32((c.r[16].w[0] + 344u), c.r[9].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 344u);  if (t) { goto L_002AEFD4; } }
L_002AEFCC:
    st32((c.r[16].w[0] + 344u), c.r[6].w[0]);
    set32(c.r[4], c.r[16].w[0] + 344u);
    c.budget -= 2;
L_002AEFD4:
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 18480u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002AF020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF000u); set32(c.r[4], c.r[16].w[0] + 200u);  if (depth < kMaxDepth) unit_006B(c, 8u, depth + 1u); else { c.pc = 0x002AC540u; return; } if (c.pc != 0x002AF000u) [[unlikely]] return; }
L_002AF000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF008u); set32(c.r[4], c.r[16].w[0] + 232u);  if (depth < kMaxDepth) unit_006B(c, 8u, depth + 1u); else { c.pc = 0x002AC540u; return; } if (c.pc != 0x002AF008u) [[unlikely]] return; }
L_002AF008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF010u); set32(c.r[4], c.r[16].w[0] + 264u);  if (depth < kMaxDepth) unit_006B(c, 8u, depth + 1u); else { c.pc = 0x002AC540u; return; } if (c.pc != 0x002AF010u) [[unlikely]] return; }
L_002AF010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF018u); set32(c.r[4], c.r[16].w[0] + 296u);  if (depth < kMaxDepth) unit_006B(c, 8u, depth + 1u); else { c.pc = 0x002AC540u; return; } if (c.pc != 0x002AF018u) [[unlikely]] return; }
L_002AF018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_002AF04C; } }
L_002AF020:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AF048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF030u); set32(c.r[4], c.r[16].w[0] + 200u);  if (depth < kMaxDepth) unit_006B(c, 15u, depth + 1u); else { c.pc = 0x002AC670u; return; } if (c.pc != 0x002AF030u) [[unlikely]] return; }
L_002AF030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF038u); set32(c.r[4], c.r[16].w[0] + 232u);  if (depth < kMaxDepth) unit_006B(c, 15u, depth + 1u); else { c.pc = 0x002AC670u; return; } if (c.pc != 0x002AF038u) [[unlikely]] return; }
L_002AF038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF040u); set32(c.r[4], c.r[16].w[0] + 264u);  if (depth < kMaxDepth) unit_006B(c, 15u, depth + 1u); else { c.pc = 0x002AC670u; return; } if (c.pc != 0x002AF040u) [[unlikely]] return; }
L_002AF040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF048u); set32(c.r[4], c.r[16].w[0] + 296u);  if (depth < kMaxDepth) unit_006B(c, 15u, depth + 1u); else { c.pc = 0x002AC670u; return; } if (c.pc != 0x002AF048u) [[unlikely]] return; }
L_002AF048:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002AF04C:
    c.r[3].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE5D0u | kUnwind; return; } goto L_002AE5D0; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 432u);  c.pc = t; return; }
L_002AF090:
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_002AF0A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_002AF180; } }
L_002AF0A4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002AF0B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_002AF180; } }
L_002AF0B4:
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 212u);  if (t) { goto L_002AF0C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_002AF180; } }
L_002AF0C8:
    set32(c.r[3], 0u + 255u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 140u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { goto L_002AF0E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF180; } }
L_002AF0E8:
    c.r[2].d[0] = ld16((c.r[1].w[0] + 844u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AF0FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF180; } }
L_002AF0FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 846u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { goto L_002AF114; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AF180; } }
L_002AF114:
    c.r[2].d[0] = ld16((c.r[1].w[0] + 856u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002AF128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF180; } }
L_002AF128:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 862u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { goto L_002AF140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_002AF180; } }
L_002AF140:
    c.r[2].d[0] = ld16((c.r[1].w[0] + 858u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_002AF154; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF180; } }
L_002AF154:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 860u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { goto L_002AF16C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_002AF180; } }
L_002AF16C:
    c.r[2].d[0] = ld16((c.r[1].w[0] + 864u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[2], 0u + 14u);  if (t) { goto L_002AF180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_002AF180; } }
L_002AF180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF190:
    set32(c.r[2], 0u + 212u);
    set32(c.r[3], 0u + 255u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 140u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { goto L_002AF1B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF238; } }
L_002AF1B4:
    c.r[3].d[0] = ld16((c.r[1].w[0] + 848u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002AF1D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 850u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_002AF1D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002AF238; } }
L_002AF1D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 850u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { goto L_002AF1F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[7].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002AF1F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF238; } }
L_002AF1F8:
    c.r[3].d[0] = ld16((c.r[1].w[0] + 852u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002AF21C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 854u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_002AF21C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002AF238; } }
L_002AF21C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 854u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[2], 0u + 14u);  if (t) { goto L_002AF238; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002AF238; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002AF238:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF240:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 10u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_002AF25C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AF2F0; } }
L_002AF25C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AF26C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AF2F0; } }
L_002AF26C:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 15u);  if (t) { goto L_002AF280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AF2F0; } }
L_002AF280:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AF290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AF2F0; } }
L_002AF290:
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_002AF2A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AF2F0; } }
L_002AF2A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AF2B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AF2F0; } }
L_002AF2B4:
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 49u);  if (t) { goto L_002AF2C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AF2F0; } }
L_002AF2C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AF2D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AF2F0; } }
L_002AF2D8:
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] ^ 53ull;  if (t) { goto L_002AF2EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AF2F0; } }
L_002AF2EC:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_002AF2F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF300:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[4], c.r[3].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_002AF324; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);  if (t) { goto L_002AF320; } }
    breakpoint(c, 0x002AF31Cu);
    c.budget -= 1;
L_002AF320:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AF324:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[6], c.r[2].w[0] + 86u);  if (t) { goto L_002AF334; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].sd[0] < 86ll ? 1ull : 0ull;  if (t) { goto L_002AF350; } }
L_002AF334:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], 0u + 100u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AF348; } }
    breakpoint(c, 0x002AF344u);
    c.budget -= 1;
L_002AF348:
    c.r[6].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[6].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 2;
L_002AF350:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AF360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF3D8; } }
L_002AF360:
    c.r[5].d[0] = c.r[5].d[0] << 48;
    set32(c.r[2], 0u + 100u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], 0u + 10u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AF38C; } }
    breakpoint(c, 0x002AF388u);
    c.budget -= 1;
L_002AF38C:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 9u);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2703u);  if (t) { goto L_002AF3AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AF3D8; } }
L_002AF3AC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[6].w[0] << 1);  if (t) { goto L_002AF3BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AF3D8; } }
L_002AF3BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] - 19008u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
L_002AF3D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF3E0:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1832u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AF400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF474; } }
L_002AF400:
    set32(c.r[3], 0u + 212u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[8].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 341u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[8].w[0] + c.r[4].w[0]);  if (t) { goto L_002AF41C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002AF41C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 296u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AF474; } }
    set32(c.r[3], 0u + 25500u);
    set32(c.r[7], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[5], c.r[8].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 148u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[8].w[0] + c.r[7].w[0]);  if (t) { goto L_002AF454; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 342u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AF450; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002AF450:
    set32(c.r[5], c.r[8].w[0] + c.r[7].w[0]);
    c.budget -= 1;
L_002AF454:
    set32(c.r[3], 0u + 25500u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 150u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[8].w[0] + c.r[4].w[0]);  if (t) { goto L_002AF474; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 343u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AF474; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002AF474:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AF480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] - 10000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] < 0; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AF4C0; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AF4B4; } }
    breakpoint(c, 0x002AF4B0u);
    c.budget -= 1;
L_002AF4B4:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF4C4; } }
L_002AF4C0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002AF4C4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_002AF4D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 86u);  if (t) { goto L_002AF4E8; } }
L_002AF4D4:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AF4E4; } }
    breakpoint(c, 0x002AF4E0u);
    c.budget -= 1;
L_002AF4E4:
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AF4E8:
    c.r[2].d[0] = c.r[16].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 58u);  if (t) { goto L_002AF52C; } }
    set32(c.r[3], 0u + 100u);
    set32(c.r[2], 0u + 90u);
    mmi::div(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[17].w[0] - c.r[3].w[0]);  if (t) { goto L_002AF51C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002AF524; } }
L_002AF51C:
    set32(c.r[17], c.r[4].w[0] + 30u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_002AF524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002AF634; } }
L_002AF52C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002AF53C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5804u);  if (t) { goto L_002AF630; } }
L_002AF53C:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 72u);  if (t) { goto L_002AF550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6904u);  if (t) { goto L_002AF630; } }
L_002AF550:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002AF560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7204u);  if (t) { goto L_002AF630; } }
L_002AF560:
    set32(c.r[2], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 76u);  if (t) { goto L_002AF574; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7504u);  if (t) { goto L_002AF630; } }
L_002AF574:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002AF584; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7604u);  if (t) { goto L_002AF630; } }
L_002AF584:
    set32(c.r[2], 0u + 80u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 39u);  if (t) { goto L_002AF598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8004u);  if (t) { goto L_002AF630; } }
L_002AF598:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_002AF5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3904u);  if (t) { goto L_002AF630; } }
L_002AF5A8:
    mmi::div(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002AF630; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[17].w[0], c.r[3].w[0]);  if (t) { goto L_002AF5CC; } }
    breakpoint(c, 0x002AF5C8u);
    c.budget -= 1;
L_002AF5CC:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 10u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.hi.d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF5FCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 120u, depth + 1u); else { c.pc = 0x0012D3C0u; return; } if (c.pc != 0x002AF5FCu) [[unlikely]] return; }
L_002AF5FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_002AF62C; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_002AF630; } }
L_002AF62C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AF630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002AF634:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AF650:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8BA0u | kUnwind; return; } [[clang::musttail]] return unit_006A(c, 88u, depth); }
L_002AF660:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A85D0u | kUnwind; return; } [[clang::musttail]] return unit_006A(c, 63u, depth); }
L_002AF670:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF6A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x002AF6A0u) [[unlikely]] return; }
L_002AF6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF6A8u); set32(c.r[4], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_000B(c, 335u, depth + 1u); else { c.pc = 0x0012E720u; return; } if (c.pc != 0x002AF6A8u) [[unlikely]] return; }
L_002AF6A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 7872u);
    set32(c.r[2], c.r[2].w[0] + 7960u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 28u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 160u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 168u), 0u);
    st32((c.r[16].w[0] + 172u), 0u);
    st32((c.r[16].w[0] + 176u), 0u);
    st32((c.r[16].w[0] + 180u), 0u);
    st32((c.r[16].w[0] + 904u), 0u);
    st32((c.r[16].w[0] + 908u), 0u);
    st32((c.r[16].w[0] + 912u), 0u);
    st8((c.r[16].w[0] + 980u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 984u), 0u);
    st8((c.r[16].w[0] + 988u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF700u); st8((c.r[16].w[0] + 996u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002AF700u) [[unlikely]] return; }
L_002AF700:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF70Cu); set32(c.r[4], c.r[16].w[0] + 50u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002AF70Cu) [[unlikely]] return; }
L_002AF70C:
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002AF714:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 72u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF714u | kUnwind; return; } goto L_002AF714; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AF750:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AF914; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 7872u);
    set32(c.r[2], c.r[2].w[0] + 7960u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AF7B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AF7B0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF7B0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF7B0u) [[unlikely]] return; }
L_002AF7B0:
    st32((c.r[17].w[0] + 160u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AF7D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AF7D8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF7D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF7D8u) [[unlikely]] return; }
L_002AF7D8:
    st32((c.r[17].w[0] + 164u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AF800; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AF800; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF800u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF800u) [[unlikely]] return; }
L_002AF800:
    st32((c.r[17].w[0] + 176u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AF828; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AF828; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF828u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF828u) [[unlikely]] return; }
L_002AF828:
    st32((c.r[17].w[0] + 180u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 904u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AF850; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AF850; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF850u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF850u) [[unlikely]] return; }
L_002AF850:
    st32((c.r[17].w[0] + 904u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AF878; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AF878; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF878u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF878u) [[unlikely]] return; }
L_002AF878:
    st32((c.r[17].w[0] + 168u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AF8A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AF8A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF8A0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF8A0u) [[unlikely]] return; }
L_002AF8A0:
    st32((c.r[17].w[0] + 172u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002AF8A8:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 72u);  if (t) { goto L_002AF8D4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AF8D4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF8D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF8D4u) [[unlikely]] return; }
L_002AF8D4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF8A8u | kUnwind; return; } goto L_002AF8A8; } }
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF8F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 336u, depth + 1u); else { c.pc = 0x0012E740u; return; } if (c.pc != 0x002AF8F0u) [[unlikely]] return; }
L_002AF8F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF8FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x002AF8FCu) [[unlikely]] return; }
L_002AF8FC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002AF918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF914u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002AF914u) [[unlikely]] return; }
L_002AF914:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AF918:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AF940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF958u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x002AF958u) [[unlikely]] return; }
L_002AF958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF960u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 270u, depth + 1u); else { c.pc = 0x002AFCD0u; return; } if (c.pc != 0x002AF960u) [[unlikely]] return; }
L_002AF960:
    st32((c.r[16].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF974u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF974u) [[unlikely]] return; }
L_002AF974:
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF984u); set32(c.r[5], 0u + 720u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002AF984u) [[unlikely]] return; }
L_002AF984:
    set32(c.r[4], c.r[16].w[0] + 916u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF990u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002AF990u) [[unlikely]] return; }
L_002AF990:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AF994:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 72u), 0u);
    c.r[3].d[0] = c.r[4].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF994u | kUnwind; return; } goto L_002AF994; } }
    st8((c.r[16].w[0] + 980u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    st32((c.r[3].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AF9E0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 980u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AF9FC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_002AFA08; } }
L_002AF9FC:
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 3;
L_002AFA08:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_002AFA10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA2Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x002AFA2Cu) [[unlikely]] return; }
L_002AFA2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA40u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 139u, depth + 1u); else { c.pc = 0x001A95F0u; return; } if (c.pc != 0x002AFA40u) [[unlikely]] return; }
L_002AFA40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_002AFAA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA5Cu); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002AFA5Cu) [[unlikely]] return; }
L_002AFA5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002AFA70; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA70u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x002AFA70u) [[unlikely]] return; }
L_002AFA70:
    st32((c.r[18].w[0] + 160u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA80u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x002AFA80u) [[unlikely]] return; }
L_002AFA80:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002AFA90u) [[unlikely]] return; }
L_002AFA90:
    set32(c.r[4], ld32((c.r[18].w[0] + 160u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFAA0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x002AFAA0u) [[unlikely]] return; }
L_002AFAA0:
    set32(c.r[4], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFAB4u); set32(c.r[5], 0u + 47u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFAB4u) [[unlikely]] return; }
L_002AFAB4:
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_002AFB0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFAC8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002AFAC8u) [[unlikely]] return; }
L_002AFAC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002AFADC; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFADCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x002AFADCu) [[unlikely]] return; }
L_002AFADC:
    st32((c.r[18].w[0] + 164u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFAECu); set32(c.r[5], 0u + 10014u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x002AFAECu) [[unlikely]] return; }
L_002AFAEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFAFCu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002AFAFCu) [[unlikely]] return; }
L_002AFAFC:
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB0Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x002AFB0Cu) [[unlikely]] return; }
L_002AFB0C:
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB20u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFB20u) [[unlikely]] return; }
L_002AFB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB28u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002AFB28u) [[unlikely]] return; }
L_002AFB28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AFB4C; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 908u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[18].w[0] + 912u)));
    set32(c.r[5], 0u + 12u);
    c.r[8].d[0] = ld8((c.r[18].w[0] + 980u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB4Cu); set32(c.r[9], c.r[18].w[0] + 28u);  if (depth < kMaxDepth) unit_006C(c, 110u, depth + 1u); else { c.pc = 0x002B1040u; return; } if (c.pc != 0x002AFB4Cu) [[unlikely]] return; }
L_002AFB4C:
    st32((c.r[18].w[0] + 904u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB58u); set32(c.r[4], ld32((c.r[18].w[0] + 904u)));  if (depth < kMaxDepth) unit_006C(c, 180u, depth + 1u); else { c.pc = 0x002B2080u; return; } if (c.pc != 0x002AFB58u) [[unlikely]] return; }
L_002AFB58:
    set32(c.r[3], ld32((c.r[18].w[0] + 904u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 128u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AFB80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x002AFB94u) [[unlikely]] return; }
L_002AFB94:
    set32(c.r[4], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AFBB0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFBB0u); set32(c.r[5], 0u + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFBB0u) [[unlikely]] return; }
L_002AFBB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AFBCC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFBCCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFBCCu) [[unlikely]] return; }
L_002AFBCC:
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFBE0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFBE0u) [[unlikely]] return; }
L_002AFBE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 168u)));
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43870000u);
    c.f[0] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43020000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 100u), c.r[4].w[0]);
    st32((c.r[7].w[0] + 104u), c.f[0]);
    st32((c.r[7].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFC24u); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFC24u) [[unlikely]] return; }
L_002AFC24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 172u)));
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43870000u);
    c.f[0] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A50000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 100u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 104u), c.f[0]);
    st32((c.r[6].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFC5Cu); set32(c.r[4], ld32((c.r[16].w[0] + 904u)));  if (depth < kMaxDepth) unit_006C(c, 182u, depth + 1u); else { c.pc = 0x002B20C0u; return; } if (c.pc != 0x002AFC5Cu) [[unlikely]] return; }
L_002AFC5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 904u)));
    set32(c.r[4], 0u + 2u);
    st32((c.r[3].w[0] + 128u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AFC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFC98u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002AFC98u) [[unlikely]] return; }
L_002AFC98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AFCBC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[6], c.r[16].w[0] + 184u);  if (t) { goto L_002AFCAC; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_002AFCAC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFCBCu); set32(c.r[8], 0u + 60u);  if (depth < kMaxDepth) unit_006C(c, 84u, depth + 1u); else { c.pc = 0x002B0C90u; return; } if (c.pc != 0x002AFCBCu) [[unlikely]] return; }
L_002AFCBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AFCD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFCE8u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002AFCE8u) [[unlikely]] return; }
L_002AFCE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AFD10; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[8], c.r[16].w[0] + 916u);  if (t) { goto L_002AFCFC; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_002AFCFC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD10u); set32(c.r[9], 0u + 8u);  if (depth < kMaxDepth) unit_006C(c, 196u, depth + 1u); else { c.pc = 0x002B2440u; return; } if (c.pc != 0x002AFD10u) [[unlikely]] return; }
L_002AFD10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AFD20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[6], 0u + 21u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_002AFD8C; } }
L_002AFD44:
    set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AFD88; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 74u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[5].w[0] + 72u);  if (t) { goto L_002AFD88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AFD80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AFD80; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD80u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFD80u) [[unlikely]] return; }
L_002AFD80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_002AFE50; } }
L_002AFD88:
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_002AFD8C:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFD44u | kUnwind; return; } goto L_002AFD44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 75u, depth + 1u); else { c.pc = 0x002B0B50u; return; } if (c.pc != 0x002AFD9Cu) [[unlikely]] return; }
L_002AFD9C:
    set32(c.r[2], ld32((c.r[18].w[0] + 904u)));
    set32(c.r[5], c.r[18].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFDACu); set32(c.r[4], c.r[2].w[0] + 148u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002AFDACu) [[unlikely]] return; }
L_002AFDAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.f[20] = 0u;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[4].w[0] + 440u)));
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 10;
L_002AFDD4:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AFE40; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 74u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AFE18; } }
    set32(c.r[2], c.r[5].w[0] + 20u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFE04u); st32((c.r[17].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002AFE04u) [[unlikely]] return; }
L_002AFE04:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_002AFE40; } }
L_002AFE18:
    set32(c.r[4], ld32((c.r[18].w[0] + 904u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    st32((c.r[5].w[0] + 64u), c.f[0]);
    c.budget -= 10;
L_002AFE40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFDD4u | kUnwind; return; } goto L_002AFDD4; } }
L_002AFE50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AFE70:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E640u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 322u, depth); }
L_002AFE80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFE94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x002AFE94u) [[unlikely]] return; }
L_002AFE94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AFEBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFEA4u);  if (depth < kMaxDepth) unit_004F(c, 127u, depth + 1u); else { c.pc = 0x0023DDB0u; return; } if (c.pc != 0x002AFEA4u) [[unlikely]] return; }
L_002AFEA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AFEBC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFEBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFEBCu) [[unlikely]] return; }
L_002AFEBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AFED0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 904u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_006C(c, 3u, depth); } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 980u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_002AFFB4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[5].d[0] & 128ull;  if (t) { goto L_002AFFB4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AFFA4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[18].d[0] = c.r[5].d[0] ^ 128ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF38u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFF38u) [[unlikely]] return; }
L_002AFF38:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[18].w[0], c.r[2].w[0]);  if (t) { goto L_002AFF48; } }
    breakpoint(c, 0x002AFF44u);
    c.budget -= 1;
L_002AFF48:
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[2].w[0] << 1);
    c.r[1].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AFF60; } }
    set32(c.r[18], 0u + 7u);
    c.budget -= 1;
L_002AFF60:
    st8((c.r[17].w[0] + 980u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 904u)));
    st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFF80u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFF80u) [[unlikely]] return; }
L_002AFF80:
    st32((c.r[17].w[0] + 912u), c.r[18].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 904u)));
    st32((c.r[3].w[0] + 132u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 180u)));
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 996u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { [[clang::musttail]] return unit_006C(c, 3u, depth); } }
L_002AFFA4:
    st32((c.r[17].w[0] + 912u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 904u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 132u), c.r[5].w[0]);  if (t) { [[clang::musttail]] return unit_006C(c, 3u, depth); } }
L_002AFFB4:
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[5].d[0] & 128ull;  if (t) { [[clang::musttail]] return unit_006C(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_006C(c, 2u, depth); } }
    st8((c.r[17].w[0] + 980u), static_cast<std::uint8_t>(0u));
    c.r[18].d[0] = c.r[5].d[0] ^ 128ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 904u)));
    st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFFF4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFFF4u) [[unlikely]] return; }
L_002AFFF4:
    st32((c.r[17].w[0] + 912u), c.r[18].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 904u)));
    c.budget -= 3;
    [[clang::musttail]] return unit_006C(c, 1u, depth);
}

}
