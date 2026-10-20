#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0013[4096] = {
    1, 0, 2, 0, 0, 3, 4, 0, 0, 5, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0,
    53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87,
    0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119,
    0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0,
    0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0,
    0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0,
    0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0,
};

void unit_0013(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0014C000;
    case 2u: goto L_0014C008;
    case 3u: goto L_0014C014;
    case 4u: goto L_0014C018;
    case 5u: goto L_0014C024;
    case 6u: goto L_0014C028;
    case 7u: goto L_0014C040;
    case 8u: goto L_0014C060;
    case 9u: goto L_0014C160;
    case 10u: goto L_0014C280;
    case 11u: goto L_0014C29C;
    case 12u: goto L_0014C2C0;
    case 13u: goto L_0014C2D0;
    case 14u: goto L_0014C2D8;
    case 15u: goto L_0014C300;
    case 16u: goto L_0014C330;
    case 17u: goto L_0014C358;
    case 18u: goto L_0014C370;
    case 19u: goto L_0014C394;
    case 20u: goto L_0014C3AC;
    case 21u: goto L_0014C3D0;
    case 22u: goto L_0014C40C;
    case 23u: goto L_0014C41C;
    case 24u: goto L_0014C43C;
    case 25u: goto L_0014C460;
    case 26u: goto L_0014C4A0;
    case 27u: goto L_0014C4D4;
    case 28u: goto L_0014C4E0;
    case 29u: goto L_0014C504;
    case 30u: goto L_0014C540;
    case 31u: goto L_0014C57C;
    case 32u: goto L_0014C590;
    case 33u: goto L_0014C5E0;
    case 34u: goto L_0014C5F8;
    case 35u: goto L_0014C630;
    case 36u: goto L_0014C650;
    case 37u: goto L_0014C67C;
    case 38u: goto L_0014C690;
    case 39u: goto L_0014C6F4;
    case 40u: goto L_0014C72C;
    case 41u: goto L_0014C7A0;
    case 42u: goto L_0014C7B4;
    case 43u: goto L_0014C7C8;
    case 44u: goto L_0014C7E0;
    case 45u: goto L_0014C800;
    case 46u: goto L_0014C820;
    case 47u: goto L_0014C838;
    case 48u: goto L_0014C840;
    case 49u: goto L_0014C850;
    case 50u: goto L_0014C858;
    case 51u: goto L_0014C860;
    case 52u: goto L_0014C870;
    case 53u: goto L_0014C880;
    case 54u: goto L_0014C890;
    case 55u: goto L_0014C8A0;
    case 56u: goto L_0014CA54;
    case 57u: goto L_0014CAB0;
    case 58u: goto L_0014CAEC;
    case 59u: goto L_0014CB08;
    case 60u: goto L_0014CB24;
    case 61u: goto L_0014CB2C;
    case 62u: goto L_0014CB44;
    case 63u: goto L_0014CB60;
    case 64u: goto L_0014CC10;
    case 65u: goto L_0014CC30;
    case 66u: goto L_0014CCB8;
    case 67u: goto L_0014CEA0;
    case 68u: goto L_0014CED0;
    case 69u: goto L_0014CEEC;
    case 70u: goto L_0014CF00;
    case 71u: goto L_0014CF20;
    case 72u: goto L_0014CF58;
    case 73u: goto L_0014CF94;
    case 74u: goto L_0014CFDC;
    case 75u: goto L_0014D150;
    case 76u: goto L_0014D184;
    case 77u: goto L_0014D18C;
    case 78u: goto L_0014D1EC;
    case 79u: goto L_0014D1FC;
    case 80u: goto L_0014D3E8;
    case 81u: goto L_0014D4F0;
    case 82u: goto L_0014D540;
    case 83u: goto L_0014D54C;
    case 84u: goto L_0014D558;
    case 85u: goto L_0014D564;
    case 86u: goto L_0014D570;
    case 87u: goto L_0014D57C;
    case 88u: goto L_0014D588;
    case 89u: goto L_0014D594;
    case 90u: goto L_0014D5A0;
    case 91u: goto L_0014D5AC;
    case 92u: goto L_0014D5B8;
    case 93u: goto L_0014D658;
    case 94u: goto L_0014D670;
    case 95u: goto L_0014D6C0;
    case 96u: goto L_0014D700;
    case 97u: goto L_0014D740;
    case 98u: goto L_0014D7C0;
    case 99u: goto L_0014D7F0;
    case 100u: goto L_0014D91C;
    case 101u: goto L_0014DA60;
    case 102u: goto L_0014DA8C;
    case 103u: goto L_0014DAA0;
    case 104u: goto L_0014DB00;
    case 105u: goto L_0014DB9C;
    case 106u: goto L_0014DBA8;
    case 107u: goto L_0014DBBC;
    case 108u: goto L_0014DBEC;
    case 109u: goto L_0014DC00;
    case 110u: goto L_0014DC14;
    case 111u: goto L_0014DC1C;
    case 112u: goto L_0014DC48;
    case 113u: goto L_0014DC60;
    case 114u: goto L_0014DC90;
    case 115u: goto L_0014DCAC;
    case 116u: goto L_0014DCC0;
    case 117u: goto L_0014DCE8;
    case 118u: goto L_0014DD3C;
    case 119u: goto L_0014DDFC;
    case 120u: goto L_0014DE14;
    case 121u: goto L_0014DE28;
    case 122u: goto L_0014DE3C;
    case 123u: goto L_0014DE48;
    case 124u: goto L_0014DE64;
    case 125u: goto L_0014DEB0;
    case 126u: goto L_0014DF50;
    case 127u: goto L_0014DF60;
    case 128u: goto L_0014DF9C;
    case 129u: goto L_0014E05C;
    case 130u: goto L_0014E074;
    case 131u: goto L_0014E088;
    case 132u: goto L_0014E09C;
    case 133u: goto L_0014E0A8;
    case 134u: goto L_0014E0BC;
    case 135u: goto L_0014E11C;
    case 136u: goto L_0014E15C;
    case 137u: goto L_0014E180;
    case 138u: goto L_0014E19C;
    case 139u: goto L_0014E1BC;
    case 140u: goto L_0014E1D0;
    case 141u: goto L_0014E1E4;
    case 142u: goto L_0014E1F8;
    case 143u: goto L_0014E20C;
    case 144u: goto L_0014E220;
    case 145u: goto L_0014E234;
    case 146u: goto L_0014E248;
    case 147u: goto L_0014E25C;
    case 148u: goto L_0014E270;
    case 149u: goto L_0014E284;
    case 150u: goto L_0014E2A8;
    case 151u: goto L_0014E2C8;
    case 152u: goto L_0014E2DC;
    case 153u: goto L_0014E2F0;
    case 154u: goto L_0014E304;
    case 155u: goto L_0014E318;
    case 156u: goto L_0014E32C;
    case 157u: goto L_0014E340;
    case 158u: goto L_0014E354;
    case 159u: goto L_0014E368;
    case 160u: goto L_0014E37C;
    case 161u: goto L_0014E390;
    case 162u: goto L_0014E3B8;
    case 163u: goto L_0014E3D8;
    case 164u: goto L_0014E3EC;
    case 165u: goto L_0014E400;
    case 166u: goto L_0014E414;
    case 167u: goto L_0014E428;
    case 168u: goto L_0014E43C;
    case 169u: goto L_0014E450;
    case 170u: goto L_0014E464;
    case 171u: goto L_0014E478;
    case 172u: goto L_0014E48C;
    case 173u: goto L_0014E4A0;
    case 174u: goto L_0014E4C8;
    case 175u: goto L_0014E4E8;
    case 176u: goto L_0014E4FC;
    case 177u: goto L_0014E510;
    case 178u: goto L_0014E524;
    case 179u: goto L_0014E538;
    case 180u: goto L_0014E54C;
    case 181u: goto L_0014E560;
    case 182u: goto L_0014E574;
    case 183u: goto L_0014E588;
    case 184u: goto L_0014E59C;
    case 185u: goto L_0014E5B0;
    case 186u: goto L_0014E5D0;
    case 187u: goto L_0014E5F0;
    case 188u: goto L_0014E604;
    case 189u: goto L_0014E618;
    case 190u: goto L_0014E62C;
    case 191u: goto L_0014E640;
    case 192u: goto L_0014E654;
    case 193u: goto L_0014E668;
    case 194u: goto L_0014E67C;
    case 195u: goto L_0014E690;
    case 196u: goto L_0014E6A4;
    case 197u: goto L_0014E6B8;
    case 198u: goto L_0014E760;
    case 199u: goto L_0014E7F8;
    case 200u: goto L_0014E828;
    case 201u: goto L_0014E860;
    case 202u: goto L_0014E86C;
    case 203u: goto L_0014E8CC;
    case 204u: goto L_0014E8F0;
    case 205u: goto L_0014E8FC;
    case 206u: goto L_0014E938;
    case 207u: goto L_0014E960;
    case 208u: goto L_0014EAC4;
    case 209u: goto L_0014EB00;
    case 210u: goto L_0014EB44;
    case 211u: goto L_0014ECA4;
    case 212u: goto L_0014ECE0;
    case 213u: goto L_0014ED88;
    case 214u: goto L_0014ED9C;
    case 215u: goto L_0014EDC0;
    case 216u: goto L_0014EE80;
    case 217u: goto L_0014F040;
    case 218u: goto L_0014F060;
    case 219u: goto L_0014F090;
    case 220u: goto L_0014F130;
    case 221u: goto L_0014F21C;
    case 222u: goto L_0014F230;
    case 223u: goto L_0014F294;
    case 224u: goto L_0014F2B0;
    case 225u: goto L_0014F364;
    case 226u: goto L_0014F40C;
    case 227u: goto L_0014F454;
    case 228u: goto L_0014F4A0;
    case 229u: goto L_0014F548;
    case 230u: goto L_0014F588;
    case 231u: goto L_0014F5B4;
    case 232u: goto L_0014F65C;
    case 233u: goto L_0014F6A4;
    case 234u: goto L_0014F6D8;
    case 235u: goto L_0014F780;
    case 236u: goto L_0014F7C0;
    case 237u: goto L_0014F82C;
    case 238u: goto L_0014F870;
    case 239u: goto L_0014F894;
    case 240u: goto L_0014F8D0;
    case 241u: goto L_0014F8EC;
    case 242u: goto L_0014F904;
    case 243u: goto L_0014F930;
    case 244u: goto L_0014F954;
    case 245u: goto L_0014F9E0;
    case 246u: goto L_0014FA00;
    case 247u: goto L_0014FA1C;
    case 248u: goto L_0014FAAC;
    case 249u: goto L_0014FAB8;
    case 250u: goto L_0014FAD0;
    case 251u: goto L_0014FB08;
    case 252u: goto L_0014FB14;
    case 253u: goto L_0014FB2C;
    case 254u: goto L_0014FB50;
    case 255u: goto L_0014FBAC;
    case 256u: goto L_0014FBE0;
    case 257u: goto L_0014FD40;
    case 258u: goto L_0014FD88;
    case 259u: goto L_0014FD90;
    case 260u: goto L_0014FDAC;
    case 261u: goto L_0014FDDC;
    case 262u: goto L_0014FE08;
    case 263u: goto L_0014FE14;
    case 264u: goto L_0014FE80;
    case 265u: goto L_0014FEAC;
    case 266u: goto L_0014FEF8;
    case 267u: goto L_0014FF10;
    case 268u: goto L_0014FF28;
    case 269u: goto L_0014FF40;
    case 270u: goto L_0014FF58;
    case 271u: goto L_0014FF70;
    case 272u: goto L_0014FF88;
    case 273u: goto L_0014FFA0;
    case 274u: goto L_0014FFB0;
    case 275u: goto L_0014FFD4;
    case 276u: goto L_0014FFE0;
    case 277u: goto L_0014FFF8;
    default: bad_entry(c, 0x0014C000u); return;
    }
L_0014C000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C008u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0000(c, 192u, depth + 1u); else { c.pc = 0x00101DB0u; return; } if (c.pc != 0x0014C008u) [[unlikely]] return; }
L_0014C008:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C014u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x0014C014u) [[unlikely]] return; }
L_0014C014:
    set32(c.r[18], c.r[18].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_0014C018:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014BF9Cu | kUnwind; return; } [[clang::musttail]] return unit_0012(c, 325u, depth); } }
L_0014C024:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0014C028:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.budget -= 6;
L_0014C040:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0014C060:
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[5].w[0] + 63u);  if (t) { goto L_0014C120; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014C11C; } }
    set32(c.r[2], 0u + 58u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[5].w[0] + 63u);  if (t) { goto L_0014C104; } }
    set32(c.r[2], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014C100; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014C100; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014C100; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014C100; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014C100; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014C100; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0014C100; } }
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014C100; } }
    set32(c.r[2], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014C100; } }
    set32(c.r[2], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014C100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0014C150; } }
L_0014C100:
    set32(c.r[3], c.r[5].w[0] + 63u);
    c.budget -= 1;
L_0014C104:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));  if (t) { goto L_0014C150; } }
    set32(c.r[2], c.r[3].w[0] + 63u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C150; } }
L_0014C11C:
    set32(c.r[2], c.r[5].w[0] + 63u);
    c.budget -= 1;
L_0014C120:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));  if (t) { goto L_0014C130; } }
    set32(c.r[2], c.r[2].w[0] + 63u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 2;
L_0014C130:
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014C144; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0014C144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C150; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014C150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014C160:
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]); c.r[3].d[0] = c.lo.d[0];  if (t) { goto L_0014C258; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]); c.r[3].d[0] = c.lo.d[0];  if (t) { goto L_0014C23C; } }
    set32(c.r[2], 0u + 58u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]); c.r[3].d[0] = c.lo.d[0];  if (t) { goto L_0014C220; } }
    set32(c.r[2], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014C21C; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014C21C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014C21C; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]); c.r[3].d[0] = c.lo.d[0];  if (t) { goto L_0014C204; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014C200; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014C200; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0014C200; } }
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014C200; } }
    set32(c.r[2], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014C200; } }
    set32(c.r[2], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014C200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0014C274; } }
L_0014C200:
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0014C204:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));  if (t) { goto L_0014C274; } }
    set32(c.r[2], c.r[3].w[0] + 63u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C274; } }
L_0014C21C:
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0014C220:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 7));  if (t) { goto L_0014C274; } }
    set32(c.r[2], c.r[3].w[0] + 127u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C274; } }
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0014C23C:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));  if (t) { goto L_0014C274; } }
    set32(c.r[2], c.r[3].w[0] + 255u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C274; } }
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0014C258:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 9));  if (t) { goto L_0014C274; } }
    set32(c.r[2], c.r[3].w[0] + 511u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 9));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C274; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014C274:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014C280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C29Cu); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0014C29Cu) [[unlikely]] return; }
L_0014C29C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014C2C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0014C2DC; } }
L_0014C2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C2D8u); set32(c.r[16], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0014C2D8u) [[unlikely]] return; }
L_0014C2D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0014C2DC:
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014C2D0u | kUnwind; return; } goto L_0014C2D0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014C300:
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[6].w[0]);  c.pc = t; return; }
L_0014C330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C358u); set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  if (depth < kMaxDepth) unit_0013(c, 12u, depth + 1u); else { c.pc = 0x0014C2C0u; return; } if (c.pc != 0x0014C358u) [[unlikely]] return; }
L_0014C358:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014C370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014C3AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C394u);  if (depth < kMaxDepth) unit_0013(c, 16u, depth + 1u); else { c.pc = 0x0014C330u; return; } if (c.pc != 0x0014C394u) [[unlikely]] return; }
L_0014C394:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0014C3B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C3ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0014C3ACu) [[unlikely]] return; }
L_0014C3AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0014C3B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014C3D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0014C460; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C40Cu); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0014C40Cu) [[unlikely]] return; }
L_0014C40C:
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C41Cu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0013(c, 10u, depth + 1u); else { c.pc = 0x0014C280u; return; } if (c.pc != 0x0014C41Cu) [[unlikely]] return; }
L_0014C41C:
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0014C450; } }
L_0014C43C:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] - 12u);
    c.budget -= 5;
L_0014C450:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014C43Cu | kUnwind; return; } goto L_0014C43C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C460u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0014C460u) [[unlikely]] return; }
L_0014C460:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0014C4A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014C4D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C4D4u);  if (depth < kMaxDepth) unit_0013(c, 16u, depth + 1u); else { c.pc = 0x0014C330u; return; } if (c.pc != 0x0014C4D4u) [[unlikely]] return; }
L_0014C4D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0014C4E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C504u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 21u, depth + 1u); else { c.pc = 0x0014C3D0u; return; } if (c.pc != 0x0014C504u) [[unlikely]] return; }
L_0014C504:
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014C51C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0014C520; } }
L_0014C51C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0014C520:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014C540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[16], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014C570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), 0u);  if (t) { goto L_0014C574; } }
L_0014C570:
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 1;
L_0014C574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C57Cu);  if (depth < kMaxDepth) unit_0013(c, 26u, depth + 1u); else { c.pc = 0x0014C4A0u; return; } if (c.pc != 0x0014C57Cu) [[unlikely]] return; }
L_0014C57C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014C590:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0014C5A8; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_0014C5B4; } }
L_0014C5A8:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0014C5B4:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0014C5CC; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0014C5D8; } }
L_0014C5CC:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_0014C5D8:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014C4A0u | kUnwind; return; } goto L_0014C4A0; }
L_0014C5E0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0014C5F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0])));  if (t) { goto L_0014C610; } }
L_0014C5F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[6].w[0])));  if (t) { goto L_0014C610; } }
L_0014C5F8:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0014C60C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C61C; } }
L_0014C60C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0014C610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014C5F8u | kUnwind; return; } goto L_0014C5F8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014C61C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014C630:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u + 63u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 5;
    { set32(c.r[4], c.r[4].w[0] + 20032u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001281F0u | kUnwind; return; } [[clang::musttail]] return unit_000A(c, 12u, depth); }
L_0014C650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld64((c.r[1].w[0] + 4096u));
    c.r[2].d[0] = c.r[2].d[0] >> 13;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C67Cu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);  if (depth < kMaxDepth) unit_0016(c, 293u, depth + 1u); else { c.pc = 0x0015A8F0u; return; } if (c.pc != 0x0014C67Cu) [[unlikely]] return; }
L_0014C67C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014C690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1428u)));
    c.r[16].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 1428u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0014C6F4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 20120u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C6F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 311u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0014C6F4u) [[unlikely]] return; }
L_0014C6F4:
    set32(c.r[2], 0u + 256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 8176u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20120u)));
    st32((c.r[2].w[0] + 128u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 1380u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C72Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 297u, depth + 1u); else { c.pc = 0x00103188u; return; } if (c.pc != 0x0014C72Cu) [[unlikely]] return; }
L_0014C72C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1428u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1428u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014C7A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C7B4u); c.r[4].d[0] = c.r[2].d[0] | 1632ull;  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0014C7B4u) [[unlikely]] return; }
L_0014C7B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0014C7CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C7C8u);  if (depth < kMaxDepth) unit_0013(c, 46u, depth + 1u); else { c.pc = 0x0014C820u; return; } if (c.pc != 0x0014C7C8u) [[unlikely]] return; }
L_0014C7C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0014C7CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 20144u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0014C7E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0014C808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C800u);  if (depth < kMaxDepth) unit_0013(c, 57u, depth + 1u); else { c.pc = 0x0014CAB0u; return; } if (c.pc != 0x0014C800u) [[unlikely]] return; }
L_0014C800:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 20144u), 0u);
    c.budget -= 2;
L_0014C808:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0014C820:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C838u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 281u, depth + 1u); else { c.pc = 0x00102E18u; return; } if (c.pc != 0x0014C838u) [[unlikely]] return; }
L_0014C838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C840u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 290u, depth + 1u); else { c.pc = 0x001030D0u; return; } if (c.pc != 0x0014C840u) [[unlikely]] return; }
L_0014C840:
    set32(c.r[2], 0u + 256u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C850u); st16((c.r[29].w[0] + 38u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 285u, depth + 1u); else { c.pc = 0x00102EF8u; return; } if (c.pc != 0x0014C850u) [[unlikely]] return; }
L_0014C850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C858u);  if (depth < kMaxDepth) unit_0000(c, 114u, depth + 1u); else { c.pc = 0x00100CE8u; return; } if (c.pc != 0x0014C858u) [[unlikely]] return; }
L_0014C858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C860u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 280u, depth + 1u); else { c.pc = 0x00102DF0u; return; } if (c.pc != 0x0014C860u) [[unlikely]] return; }
L_0014C860:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C870u); st32((c.r[1].w[0] + 20096u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 280u, depth + 1u); else { c.pc = 0x00102DF0u; return; } if (c.pc != 0x0014C870u) [[unlikely]] return; }
L_0014C870:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C880u); st32((c.r[1].w[0] + 20104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 280u, depth + 1u); else { c.pc = 0x00102DF0u; return; } if (c.pc != 0x0014C880u) [[unlikely]] return; }
L_0014C880:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C890u); st32((c.r[1].w[0] + 20112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 280u, depth + 1u); else { c.pc = 0x00102DF0u; return; } if (c.pc != 0x0014C890u) [[unlikely]] return; }
L_0014C890:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C8A0u); st32((c.r[1].w[0] + 20120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 280u, depth + 1u); else { c.pc = 0x00102DF0u; return; } if (c.pc != 0x0014C8A0u) [[unlikely]] return; }
L_0014C8A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[12], 0u + 640u);
    st32((c.r[1].w[0] + 20128u), c.r[2].w[0]);
    set32(c.r[11], 0u + 224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[10], 0u + 49u);
    st32((c.r[1].w[0] + 1360u), 0u);
    set32(c.r[9], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[8], 0u + 2u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[7], 0u + 500u);
    st32((c.r[1].w[0] + 1364u), 0u);
    set32(c.r[6], 0u + 340u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], 0u + 180u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], 0u + 20u);
    st32((c.r[1].w[0] + 1372u), 0u);
    set32(c.r[4], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1376u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1368u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1432u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], 0u + 1344u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1532u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1536u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1540u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1544u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1420u), c.r[12].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1424u), c.r[11].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1400u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1404u), c.r[10].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1408u), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1412u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1416u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[1].w[0] + 1584u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 1585u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1592u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1596u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1600u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1604u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1608u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1612u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1616u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1620u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1624u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 109;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CA54u); st32((c.r[1].w[0] + 1628u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0014CA54u) [[unlikely]] return; }
L_0014CA54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014CA60; } }
    st32((c.r[2].w[0]), 0u);
    c.budget -= 1;
L_0014CA60:
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1548u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1560u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 1586u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 1587u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 1588u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0014CAB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014CB44; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 1372u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014CAF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CAECu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0014CAECu) [[unlikely]] return; }
L_0014CAEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0014CAF0:
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 1376u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014CB0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CB08u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0014CB08u) [[unlikely]] return; }
L_0014CB08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0014CB0C:
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[16], ld32((c.r[1].w[0] + 1548u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] << 48;  if (t) { goto L_0014CB30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CB24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 240u, depth + 1u); else { c.pc = 0x0014F8D0u; return; } if (c.pc != 0x0014CB24u) [[unlikely]] return; }
L_0014CB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CB2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0014CB2Cu) [[unlikely]] return; }
L_0014CB2C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_0014CB30:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0014CB48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CB44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0014CB44u) [[unlikely]] return; }
L_0014CB44:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0014CB48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0014CB60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[12], 0u + 2048u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    st32((c.r[1].w[0] + 1420u), c.r[5].w[0]);
    set32(c.r[3], c.r[12].w[0] - c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1424u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1400u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[7], c.r[3].w[0] << 4);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    st32((c.r[1].w[0] + 1404u), c.r[8].w[0]);
    set32(c.r[3], c.r[12].w[0] - c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1408u), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1412u), c.r[10].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1416u), c.r[11].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1572u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[7], c.r[3].w[0] << 4);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[6].w[0] << 4);
    st32((c.r[1].w[0] + 1568u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1576u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.budget -= 43;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 1580u), c.r[3].w[0]);  c.pc = t; return; }
L_0014CC10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 1360u), c.r[3].w[0]);  c.pc = t; return; }
L_0014CC30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[10], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[10].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 20u), 0u);
    set32(c.r[8], 0u + 2u);
    st32((c.r[4].w[0] + 12u), c.r[17].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[1].w[0] + 1584u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 1585u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 1400u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 1420u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 1424u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 1404u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 32ull;
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CCB8u); set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0000(c, 251u, depth + 1u); else { c.pc = 0x00102950u; return; } if (c.pc != 0x0014CCB8u) [[unlikely]] return; }
L_0014CCB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], 0u - 3u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 40u));
    set32(c.r[4], 0u - 512u);
    c.r[5].d[0] = c.r[17].d[0] & 511ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st16((c.r[1].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 88u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st16((c.r[1].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1536u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 416u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1540u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 417u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1544u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 418u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1536u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 784u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1540u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 785u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1544u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 786u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 78;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014CE84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 1380u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[8].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = 0ull | 32769ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 2ull;
    set32(c.r[4], 0u + 14u);
    set32(c.r[3], 0u + 34u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0]), c.r[8].d[0]);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st64((c.r[9].w[0] + 8u), 0ull);
    st64((c.r[9].w[0] + 16u), 0ull);
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 48u), 0ull);
    st64((c.r[9].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 37;
L_0014CE84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014CEA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 1372u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014CED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CED0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0014CED0u) [[unlikely]] return; }
L_0014CED0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 1376u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014CEF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CEECu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0014CEECu) [[unlikely]] return; }
L_0014CEEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0014CEF0:
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1360u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CF00u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0014CF00u) [[unlikely]] return; }
L_0014CF00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1372u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1360u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CF20u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0014CF20u) [[unlikely]] return; }
L_0014CF20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1376u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1372u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CF58u); st32((c.r[1].w[0] + 1388u), 0u);  if (depth < kMaxDepth) unit_0013(c, 36u, depth + 1u); else { c.pc = 0x0014C650u; return; } if (c.pc != 0x0014CF58u) [[unlikely]] return; }
L_0014CF58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[17].d[0] << 48;
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1556u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 1408u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 1412u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 1416u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CF94u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00100B48u; return; } if (c.pc != 0x0014CF94u) [[unlikely]] return; }
L_0014CF94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[8], 0u + 2u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 1400u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 32ull;
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 1420u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 1424u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 1404u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CFDCu); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 251u, depth + 1u); else { c.pc = 0x00102950u; return; } if (c.pc != 0x0014CFDCu) [[unlikely]] return; }
L_0014CFDC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014D0B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], 0u - 2u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[4], 0u - 3u);
    set32(c.r[3], ld32((c.r[1].w[0] + 1408u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 40u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1408u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1416u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 40u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1416u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 53;
L_0014D0B8:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 1536u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 416u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1540u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 417u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1544u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 418u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1536u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 784u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1540u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 785u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1544u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D150u); st8((c.r[1].w[0] + 786u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x0014D150u) [[unlikely]] return; }
L_0014D150:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 20104u)));
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[1].w[0] + 20104u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D184u); set32(c.r[5], c.r[5].w[0] - 14848u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x00103120u; return; } if (c.pc != 0x0014D184u) [[unlikely]] return; }
L_0014D184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D18Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 36u, depth + 1u); else { c.pc = 0x0014C650u; return; } if (c.pc != 0x0014D18Cu) [[unlikely]] return; }
L_0014D18C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1556u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1528u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1368u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1360u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1428u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20104u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D1ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 311u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0014D1ECu) [[unlikely]] return; }
L_0014D1EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 34u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D1FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 212u, depth + 1u); else { c.pc = 0x0014ECE0u; return; } if (c.pc != 0x0014D1FCu) [[unlikely]] return; }
L_0014D1FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 912ull;
    set32(c.r[2], c.r[16].w[0] + c.r[1].w[0]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    c.f[1] = 0u;
    c.f[3] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 976ull;
    set32(c.r[3], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    st32((c.r[29].w[0] + 64u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[3] = 0u;
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.f[1] = 0u;
    st32((c.r[29].w[0] + 96u), c.f[3]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.f[3] = 0u;
    c.f[2] = 0u;
    c.f[1] = 0u;
    st32((c.r[29].w[0] + 84u), c.f[3]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 56u), c.f[1]);
    c.f[3] = 0u;
    c.f[2] = 0u;
    c.f[1] = 0u;
    st32((c.r[29].w[0] + 72u), c.f[3]);
    st32((c.r[29].w[0] + 88u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    c.f[3] = 0u;
    c.f[2] = 0u;
    c.f[1] = 0u;
    st32((c.r[29].w[0] + 60u), c.f[3]);
    st32((c.r[29].w[0] + 76u), c.f[2]);
    st32((c.r[29].w[0] + 92u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.f[2] = 0u;
    c.r[1].d[0] = c.r[1].d[0] | 1040ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[16].w[0] + c.r[1].w[0]);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.f[1] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 72u), c.f[1]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = 0u;
    c.f[1] = 0u;
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 80u), c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = 0u;
    c.f[1] = 0u;
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 88u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = 0u;
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1440ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 123;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D3E8u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0014D3E8u) [[unlikely]] return; }
L_0014D3E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[9], 0u - 9u);
    c.r[11].d[0] = ld8((c.r[1].w[0] + 1440u));
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[7], 0u - 65u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[5], 0u - 129u);
    set32(c.r[6], c.r[3].w[0] << 7);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[12], 0u + 1u);
    set32(c.r[3], 0u - 17u);
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 1440u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[9].d[0] = ld8((c.r[1].w[0] + 1440u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 1440u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld8((c.r[1].w[0] + 1440u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 1440u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 1440u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 1440u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1520u), c.r[12].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1552u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st8((c.r[1].w[0] + 1584u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 1585u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 63;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0014D4F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1528u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0014D65C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1528u), c.r[5].w[0]);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0014D5BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 12736u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0014C000u < 16384u) { entry = entries_0013[(t - 0x0014C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0014D540:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] - 5248u);  if (t) { goto L_0014D5C4; } }
L_0014D54C:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] - 224u);  if (t) { goto L_0014D5C4; } }
L_0014D558:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 1296u);  if (t) { goto L_0014D5C4; } }
L_0014D564:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 1808u);  if (t) { goto L_0014D5C4; } }
L_0014D570:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 2480u);  if (t) { goto L_0014D5C4; } }
L_0014D57C:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 6368u);  if (t) { goto L_0014D5C4; } }
L_0014D588:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 9136u);  if (t) { goto L_0014D5C4; } }
L_0014D594:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 8208u);  if (t) { goto L_0014D5C4; } }
L_0014D5A0:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 9872u);  if (t) { goto L_0014D5C4; } }
L_0014D5AC:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 11552u);  if (t) { goto L_0014D5C4; } }
L_0014D5B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014D5BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0014D660; } }
L_0014D5C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 1428u)));
    c.r[7].d[0] = c.r[2].d[0] | 1ull;
    c.r[5].d[0] = c.r[8].d[0] | 8192ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    set32(c.r[2], c.r[10].w[0] + 16u);
    c.r[9].d[0] = c.r[9].d[0] & 1ull;
    if (c.r[9].d[0] == 0) c.r[5].d[0] = c.r[8].d[0];
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    st32((c.r[7].w[0]), 0u);
    st32((c.r[7].w[0] + 4u), 0u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    st32((c.r[7].w[0]), 0u);
    st32((c.r[7].w[0] + 4u), 0u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    st32((c.r[7].w[0]), 0u);
    st32((c.r[7].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[10].w[0])));
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.r[6].d[0] = c.r[6].d[0] << 36;
    c.r[6].d[0] = c.r[6].d[0] >> 36;
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    st32((c.r[7].w[0]), c.r[3].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    st32((c.r[7].w[0]), 0u);
    st32((c.r[7].w[0] + 4u), 0u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D658u); set32(c.r[6], c.r[7].w[0] - c.r[5].w[0]);  if (depth < kMaxDepth) unit_0013(c, 198u, depth + 1u); else { c.pc = 0x0014E760u; return; } if (c.pc != 0x0014D658u) [[unlikely]] return; }
L_0014D658:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0014D65C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0014D660:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0014D670:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.r[1].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_0014D6B8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0014D6B8; } }
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 976u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 980u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 984u), c.f[0]);
    c.budget -= 14;
L_0014D6B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D6C0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.r[1].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_0014D6F8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] << 4);  if (t) { goto L_0014D6F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1040u), c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1044u), c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1048u), c.f[14]);
    c.budget -= 10;
L_0014D6F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D700:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.f[0] = fp::mul(c.f[2], c.f[12]);
    st32((c.r[1].w[0] + 1088u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.f[1] = fp::mul(c.f[2], c.f[13]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1092u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.f[0] = fp::mul(c.f[2], c.f[14]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 1096u), c.f[0]);  c.pc = t; return; }
L_0014D740:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].d[0] = c.r[1].d[0] | 1040ull;
    set32(c.r[3], c.r[5].w[0] + c.r[1].w[0]);
    set32(c.r[5], c.r[29].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.r[9]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[6] = c.r[3].w[0];
    set32(c.r[6], c.r[29].w[0]);
    c.f[5] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[5], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[4] = c.r[3].w[0];
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = 0u;
    fpu_div(c, 5u, c.f[5], c.f[6]);
    fpu_div(c, 3u, c.f[3], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[2] = c.r[3].w[0];
    st32((c.r[29].w[0] + 60u), c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[5]);
    st32((c.r[29].w[0] + 52u), c.f[3]);
    fpu_div(c, 0u, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 32;
L_0014D7C0:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014D7C0u | kUnwind; return; } goto L_0014D7C0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0014D7F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[5].w[0] + 224u);
    st32((c.r[1].w[0] + 1396u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 912ull;
    set32(c.r[2], c.r[16].w[0] + c.r[1].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 848ull;
    set32(c.r[3], c.r[5].w[0] + 160u);
    set32(c.r[2], c.r[16].w[0] + c.r[1].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1104ull;
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 976ull;
    set32(c.r[3], c.r[16].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 912ull;
    set32(c.r[2], c.r[16].w[0] + c.r[1].w[0]);
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1104ull;
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1104ull;
    c.budget -= 75;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D91Cu); set32(c.r[5], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0000(c, 350u, depth + 1u); else { c.pc = 0x00103970u; return; } if (c.pc != 0x0014D91Cu) [[unlikely]] return; }
L_0014D91C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1168ull;
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 912ull;
    set32(c.r[3], c.r[16].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 848ull;
    set32(c.r[2], c.r[16].w[0] + c.r[1].w[0]);
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1296ull;
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1232ull;
    set32(c.r[3], c.r[16].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 912ull;
    set32(c.r[2], c.r[16].w[0] + c.r[1].w[0]);
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1296ull;
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1296ull;
    c.budget -= 81;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DA60u); set32(c.r[5], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0000(c, 350u, depth + 1u); else { c.pc = 0x00103970u; return; } if (c.pc != 0x0014DA60u) [[unlikely]] return; }
L_0014DA60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1520u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 1396u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0014DA8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DA8Cu);  if (depth < kMaxDepth) unit_0015(c, 135u, depth + 1u); else { c.pc = 0x001577E0u; return; } if (c.pc != 0x0014DA8Cu) [[unlikely]] return; }
L_0014DA8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014DAA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; st8((c.r[1].w[0] + 1585u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0014DAD0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st64((c.r[1].w[0] + 384u), c.r[3].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st64((c.r[1].w[0] + 752u), c.r[3].d[0]);  if (t) { goto L_0014DAEC; } }
L_0014DAD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 8193u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st64((c.r[1].w[0] + 384u), c.r[3].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st64((c.r[1].w[0] + 752u), c.r[3].d[0]);
    c.budget -= 7;
L_0014DAEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014DB00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20136u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0014DB30; } }
    set32(c.r[2], 0u + 16546u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[1].w[0]), c.r[2].d[0]);
    c.budget -= 3;
L_0014DB30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 1584u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0014DBA0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1368u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1372u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1360u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DB9Cu); st32((c.r[1].w[0] + 1428u), 0u);  if (depth < kMaxDepth) unit_0069(c, 56u, depth + 1u); else { c.pc = 0x002A47A0u; return; } if (c.pc != 0x0014DB9Cu) [[unlikely]] return; }
L_0014DB9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0014DBA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DBA8u);  if (depth < kMaxDepth) unit_0013(c, 38u, depth + 1u); else { c.pc = 0x0014C690u; return; } if (c.pc != 0x0014DBA8u) [[unlikely]] return; }
L_0014DBA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 20120u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DBBCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 311u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0014DBBCu) [[unlikely]] return; }
L_0014DBBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 1588u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20152u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20176u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DBECu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0013(c, 137u, depth + 1u); else { c.pc = 0x0014E180u; return; } if (c.pc != 0x0014DBECu) [[unlikely]] return; }
L_0014DBEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0014DC50; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DC00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 137u, depth + 1u); else { c.pc = 0x0014E180u; return; } if (c.pc != 0x0014DC00u) [[unlikely]] return; }
L_0014DC00:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0014DC64; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DC14u); set32(c.r[4], ld32((c.r[1].w[0] + 20104u)));  if (depth < kMaxDepth) unit_0000(c, 315u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014DC14u) [[unlikely]] return; }
L_0014DC14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DC1Cu);  if (depth < kMaxDepth) unit_0000(c, 114u, depth + 1u); else { c.pc = 0x00100CE8u; return; } if (c.pc != 0x0014DC1Cu) [[unlikely]] return; }
L_0014DC1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 1408u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 1412u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 1416u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DC48u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00100B48u; return; } if (c.pc != 0x0014DC48u) [[unlikely]] return; }
L_0014DC48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014DC64; } }
L_0014DC50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0014DC60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DC60u); set32(c.r[4], c.r[4].w[0] - 12688u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x0014DC60u) [[unlikely]] return; }
L_0014DC60:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_0014DC64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20136u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014DC84; } }
    c.r[2].d[0] = 0ull | 65314ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[1].w[0]), c.r[2].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
L_0014DC84:
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DC90u); set32(c.r[4], ld32((c.r[1].w[0] + 1548u)));  if (depth < kMaxDepth) unit_0013(c, 240u, depth + 1u); else { c.pc = 0x0014F8D0u; return; } if (c.pc != 0x0014DC90u) [[unlikely]] return; }
L_0014DC90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[16], ld32((c.r[1].w[0] + 1552u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0014DCE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014DCCC; } }
L_0014DCAC:
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DCC0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014DCC0u) [[unlikely]] return; }
L_0014DCC0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[16].w[0]), 0u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_0014DCCC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014DCACu | kUnwind; return; } goto L_0014DCAC; } }
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1552u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0014DCE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DCE8u);  if (depth < kMaxDepth) unit_0013(c, 36u, depth + 1u); else { c.pc = 0x0014C650u; return; } if (c.pc != 0x0014DCE8u) [[unlikely]] return; }
L_0014DCE8:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], 0u + 1u);
    st32((c.r[1].w[0] + 1556u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 20168u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20160u)));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014DD40; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0014DD3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DD3Cu);  if (depth < kMaxDepth) unit_003F(c, 282u, depth + 1u); else { c.pc = 0x001FEE60u; return; } if (c.pc != 0x0014DD3Cu) [[unlikely]] return; }
L_0014DD3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0014DD40:
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 1586u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014DD60; } }
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 1587u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014DEB0; } }
L_0014DD60:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0014DE40; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1368u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014DD94; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 496ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + c.r[1].w[0]);  if (t) { goto L_0014DD9C; } }
L_0014DD94:
    c.r[1].d[0] = c.r[1].d[0] | 128ull;
    set32(c.r[4], c.r[17].w[0] + c.r[1].w[0]);
    c.budget -= 2;
L_0014DD9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014DDB4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 624ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + c.r[1].w[0]);  if (t) { goto L_0014DDBC; } }
L_0014DDB4:
    c.r[1].d[0] = c.r[1].d[0] | 256ull;
    set32(c.r[18], c.r[17].w[0] + c.r[1].w[0]);
    c.budget -= 2;
L_0014DDBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1408u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[5], 0u + 2048u);  if (t) { goto L_0014DE1C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1416u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0014DE20; } }
    c.r[7].d[0] = c.r[16].d[0] << 48;
    set32(c.r[5], 0u + 2048u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DDFCu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 240u, depth + 1u); else { c.pc = 0x00102660u; return; } if (c.pc != 0x0014DDFCu) [[unlikely]] return; }
L_0014DDFC:
    c.r[7].d[0] = c.r[16].d[0] << 48;
    set32(c.r[5], 0u + 2048u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DE14u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 248u, depth + 1u); else { c.pc = 0x001028C8u; return; } if (c.pc != 0x0014DE14u) [[unlikely]] return; }
L_0014DE14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014DE3C; } }
L_0014DE1C:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014DE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DE28u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 240u, depth + 1u); else { c.pc = 0x00102660u; return; } if (c.pc != 0x0014DE28u) [[unlikely]] return; }
L_0014DE28:
    set32(c.r[5], 0u + 2048u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DE3Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 248u, depth + 1u); else { c.pc = 0x001028C8u; return; } if (c.pc != 0x0014DE3Cu) [[unlikely]] return; }
L_0014DE3C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014DE40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DE48u);  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0014DE48u) [[unlikely]] return; }
L_0014DE48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 32ull;
    set32(c.r[4], c.r[17].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DE64u); set32(c.r[5], ld32((c.r[1].w[0] + 1368u)));  if (depth < kMaxDepth) unit_0000(c, 264u, depth + 1u); else { c.pc = 0x00102C38u; return; } if (c.pc != 0x0014DE64u) [[unlikely]] return; }
L_0014DE64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24576u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014DE64u | kUnwind; return; } goto L_0014DE64; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1368u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 20104u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DEB0u); set32(c.r[5], ld32((c.r[1].w[0] + 1372u)));  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x00103120u; return; } if (c.pc != 0x0014DEB0u) [[unlikely]] return; }
L_0014DEB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1368u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1368u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1368u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1372u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1360u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1428u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 1588u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0014DF50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014DF60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 1586u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014E15C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DF9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x0014DF9Cu) [[unlikely]] return; }
L_0014DF9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014DFB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 1587u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0014E15C; } }
L_0014DFB8:
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 1587u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0014E0A0; } }
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014DFE8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 496ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[18].w[0] + c.r[1].w[0]);  if (t) { goto L_0014DFF0; } }
L_0014DFE8:
    c.r[1].d[0] = c.r[1].d[0] | 128ull;
    set32(c.r[4], c.r[18].w[0] + c.r[1].w[0]);
    c.budget -= 2;
L_0014DFF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014E008; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 624ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[18].w[0] + c.r[1].w[0]);  if (t) { goto L_0014E010; } }
L_0014E008:
    c.r[1].d[0] = c.r[1].d[0] | 256ull;
    set32(c.r[16], c.r[18].w[0] + c.r[1].w[0]);
    c.budget -= 2;
L_0014E010:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1408u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[5], 0u + 2048u);  if (t) { goto L_0014E07C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1416u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0014E080; } }
    c.r[2].d[0] = c.r[17].d[0] << 48;
    set32(c.r[5], 0u + 2048u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[7].d[0] = c.r[19].d[0] << 48;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E05Cu); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);  if (depth < kMaxDepth) unit_0000(c, 240u, depth + 1u); else { c.pc = 0x00102660u; return; } if (c.pc != 0x0014E05Cu) [[unlikely]] return; }
L_0014E05C:
    c.r[7].d[0] = c.r[19].d[0] << 48;
    set32(c.r[5], 0u + 2048u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E074u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 248u, depth + 1u); else { c.pc = 0x001028C8u; return; } if (c.pc != 0x0014E074u) [[unlikely]] return; }
L_0014E074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014E09C; } }
L_0014E07C:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014E080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E088u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 240u, depth + 1u); else { c.pc = 0x00102660u; return; } if (c.pc != 0x0014E088u) [[unlikely]] return; }
L_0014E088:
    set32(c.r[5], 0u + 2048u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E09Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 248u, depth + 1u); else { c.pc = 0x001028C8u; return; } if (c.pc != 0x0014E09Cu) [[unlikely]] return; }
L_0014E09C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014E0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E0A8u);  if (depth < kMaxDepth) unit_0002(c, 586u, depth + 1u); else { c.pc = 0x0010BED0u; return; } if (c.pc != 0x0014E0A8u) [[unlikely]] return; }
L_0014E0A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 32ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E0BCu); set32(c.r[4], c.r[18].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0000(c, 264u, depth + 1u); else { c.pc = 0x00102C38u; return; } if (c.pc != 0x0014E0BCu) [[unlikely]] return; }
L_0014E0BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24576u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014E0BCu | kUnwind; return; } goto L_0014E0BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 1588u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014E124; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1368u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 20104u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E11Cu); set32(c.r[5], ld32((c.r[1].w[0] + 1372u)));  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x00103120u; return; } if (c.pc != 0x0014E11Cu) [[unlikely]] return; }
L_0014E11C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0014E160; } }
L_0014E124:
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1368u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 20104u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E15Cu); set32(c.r[5], ld32((c.r[1].w[0] + 1372u)));  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x00103120u; return; } if (c.pc != 0x0014E15Cu) [[unlikely]] return; }
L_0014E15C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0014E160:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0014E180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0014E6DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);  if (t) { goto L_0014E290; } }
L_0014E19C:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0014E28C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E1BCu); set32(c.r[4], c.r[4].w[0] - 12640u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E1BCu) [[unlikely]] return; }
L_0014E1BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28672u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E1D0u); set32(c.r[4], c.r[4].w[0] - 12592u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E1D0u) [[unlikely]] return; }
L_0014E1D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28624u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E1E4u); set32(c.r[4], c.r[4].w[0] - 12576u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E1E4u) [[unlikely]] return; }
L_0014E1E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28656u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E1F8u); set32(c.r[4], c.r[4].w[0] - 12560u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E1F8u) [[unlikely]] return; }
L_0014E1F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28640u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E20Cu); set32(c.r[4], c.r[4].w[0] - 12544u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E20Cu) [[unlikely]] return; }
L_0014E20C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24576u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E220u); set32(c.r[4], c.r[4].w[0] - 12528u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E220u) [[unlikely]] return; }
L_0014E220:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E234u); set32(c.r[4], c.r[4].w[0] - 12512u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E234u) [[unlikely]] return; }
L_0014E234:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24560u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E248u); set32(c.r[4], c.r[4].w[0] - 12496u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E248u) [[unlikely]] return; }
L_0014E248:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24544u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E25Cu); set32(c.r[4], c.r[4].w[0] - 12480u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E25Cu) [[unlikely]] return; }
L_0014E25C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 15360u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E270u); set32(c.r[4], c.r[4].w[0] - 12464u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E270u) [[unlikely]] return; }
L_0014E270:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 12320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E284u); set32(c.r[4], c.r[4].w[0] - 12432u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E284u) [[unlikely]] return; }
L_0014E284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0014E750; } }
L_0014E28C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.budget -= 1;
L_0014E290:
    set32(c.r[2], ld32((c.r[1].w[0] - 28672u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014E19Cu | kUnwind; return; } goto L_0014E19C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);  if (t) { goto L_0014E39C; } }
L_0014E2A8:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0014E398; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E2C8u); set32(c.r[4], c.r[4].w[0] - 12400u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E2C8u) [[unlikely]] return; }
L_0014E2C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28672u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E2DCu); set32(c.r[4], c.r[4].w[0] - 12592u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E2DCu) [[unlikely]] return; }
L_0014E2DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28624u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E2F0u); set32(c.r[4], c.r[4].w[0] - 12576u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E2F0u) [[unlikely]] return; }
L_0014E2F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28656u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E304u); set32(c.r[4], c.r[4].w[0] - 12560u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E304u) [[unlikely]] return; }
L_0014E304:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28640u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E318u); set32(c.r[4], c.r[4].w[0] - 12544u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E318u) [[unlikely]] return; }
L_0014E318:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24576u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E32Cu); set32(c.r[4], c.r[4].w[0] - 12528u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E32Cu) [[unlikely]] return; }
L_0014E32C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E340u); set32(c.r[4], c.r[4].w[0] - 12512u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E340u) [[unlikely]] return; }
L_0014E340:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24560u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E354u); set32(c.r[4], c.r[4].w[0] - 12496u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E354u) [[unlikely]] return; }
L_0014E354:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24544u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E368u); set32(c.r[4], c.r[4].w[0] - 12480u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E368u) [[unlikely]] return; }
L_0014E368:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 15360u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E37Cu); set32(c.r[4], c.r[4].w[0] - 12464u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E37Cu) [[unlikely]] return; }
L_0014E37C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 12320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E390u); set32(c.r[4], c.r[4].w[0] - 12432u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E390u) [[unlikely]] return; }
L_0014E390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0014E750; } }
L_0014E398:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.budget -= 1;
L_0014E39C:
    set32(c.r[2], ld32((c.r[1].w[0] - 24576u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014E2A8u | kUnwind; return; } goto L_0014E2A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] | 3ull;  if (t) { goto L_0014E4A8; } }
L_0014E3B8:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0014E4A8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E3D8u); set32(c.r[4], c.r[4].w[0] - 12352u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E3D8u) [[unlikely]] return; }
L_0014E3D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28672u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E3ECu); set32(c.r[4], c.r[4].w[0] - 12592u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E3ECu) [[unlikely]] return; }
L_0014E3EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28624u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E400u); set32(c.r[4], c.r[4].w[0] - 12576u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E400u) [[unlikely]] return; }
L_0014E400:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28656u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E414u); set32(c.r[4], c.r[4].w[0] - 12560u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E414u) [[unlikely]] return; }
L_0014E414:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28640u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E428u); set32(c.r[4], c.r[4].w[0] - 12544u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E428u) [[unlikely]] return; }
L_0014E428:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24576u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E43Cu); set32(c.r[4], c.r[4].w[0] - 12528u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E43Cu) [[unlikely]] return; }
L_0014E43C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E450u); set32(c.r[4], c.r[4].w[0] - 12512u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E450u) [[unlikely]] return; }
L_0014E450:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24560u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E464u); set32(c.r[4], c.r[4].w[0] - 12496u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E464u) [[unlikely]] return; }
L_0014E464:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24544u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E478u); set32(c.r[4], c.r[4].w[0] - 12480u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E478u) [[unlikely]] return; }
L_0014E478:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 15360u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E48Cu); set32(c.r[4], c.r[4].w[0] - 12464u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E48Cu) [[unlikely]] return; }
L_0014E48C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 12320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E4A0u); set32(c.r[4], c.r[4].w[0] - 12432u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E4A0u) [[unlikely]] return; }
L_0014E4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_0014E750; } }
L_0014E4A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 15360u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014E3B8u | kUnwind; return; } goto L_0014E3B8; } }
    set32(c.r[3], cfc2(c, 29u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 256ull;  if (t) { goto L_0014E5C0; } }
L_0014E4C8:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0014E5B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E4E8u); set32(c.r[4], c.r[4].w[0] - 12304u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E4E8u) [[unlikely]] return; }
L_0014E4E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28672u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E4FCu); set32(c.r[4], c.r[4].w[0] - 12592u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E4FCu) [[unlikely]] return; }
L_0014E4FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28624u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E510u); set32(c.r[4], c.r[4].w[0] - 12576u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E510u) [[unlikely]] return; }
L_0014E510:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28656u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E524u); set32(c.r[4], c.r[4].w[0] - 12560u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E524u) [[unlikely]] return; }
L_0014E524:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28640u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E538u); set32(c.r[4], c.r[4].w[0] - 12544u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E538u) [[unlikely]] return; }
L_0014E538:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24576u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E54Cu); set32(c.r[4], c.r[4].w[0] - 12528u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E54Cu) [[unlikely]] return; }
L_0014E54C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E560u); set32(c.r[4], c.r[4].w[0] - 12512u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E560u) [[unlikely]] return; }
L_0014E560:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24560u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E574u); set32(c.r[4], c.r[4].w[0] - 12496u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E574u) [[unlikely]] return; }
L_0014E574:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24544u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E588u); set32(c.r[4], c.r[4].w[0] - 12480u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E588u) [[unlikely]] return; }
L_0014E588:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 15360u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E59Cu); set32(c.r[4], c.r[4].w[0] - 12464u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E59Cu) [[unlikely]] return; }
L_0014E59C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 12320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E5B0u); set32(c.r[4], c.r[4].w[0] - 12432u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E5B0u) [[unlikely]] return; }
L_0014E5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 4u);  if (t) { goto L_0014E750; } }
L_0014E5B8:
    set32(c.r[3], cfc2(c, 29u));
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 2;
L_0014E5C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014E4C8u | kUnwind; return; } goto L_0014E4C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0014E6C4; } }
L_0014E5D0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0014E6C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E5F0u); set32(c.r[4], c.r[4].w[0] - 12256u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E5F0u) [[unlikely]] return; }
L_0014E5F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28672u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E604u); set32(c.r[4], c.r[4].w[0] - 12592u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E604u) [[unlikely]] return; }
L_0014E604:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28624u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E618u); set32(c.r[4], c.r[4].w[0] - 12576u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E618u) [[unlikely]] return; }
L_0014E618:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28656u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E62Cu); set32(c.r[4], c.r[4].w[0] - 12560u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E62Cu) [[unlikely]] return; }
L_0014E62C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 28640u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E640u); set32(c.r[4], c.r[4].w[0] - 12544u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E640u) [[unlikely]] return; }
L_0014E640:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24576u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E654u); set32(c.r[4], c.r[4].w[0] - 12528u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E654u) [[unlikely]] return; }
L_0014E654:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E668u); set32(c.r[4], c.r[4].w[0] - 12512u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E668u) [[unlikely]] return; }
L_0014E668:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24560u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E67Cu); set32(c.r[4], c.r[4].w[0] - 12496u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E67Cu) [[unlikely]] return; }
L_0014E67C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24544u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E690u); set32(c.r[4], c.r[4].w[0] - 12480u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E690u) [[unlikely]] return; }
L_0014E690:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 15360u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E6A4u); set32(c.r[4], c.r[4].w[0] - 12464u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E6A4u) [[unlikely]] return; }
L_0014E6A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 12320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E6B8u); set32(c.r[4], c.r[4].w[0] - 12432u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0014E6B8u) [[unlikely]] return; }
L_0014E6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 5u);  if (t) { goto L_0014E750; } }
L_0014E6C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_0014E6C4:
    set32(c.r[2], ld32((c.r[1].w[0] + 12320u)));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014E5D0u | kUnwind; return; } goto L_0014E5D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0014E750; } }
L_0014E6DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 28672u)));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);  if (t) { goto L_0014E6F4; } }
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 1;
L_0014E6F4:
    set32(c.r[3], ld32((c.r[1].w[0] - 24576u)));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014E708; } }
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 1;
L_0014E708:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 15360u)));
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014E728; } }
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 1;
L_0014E728:
    set32(c.r[3], cfc2(c, 29u));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0014E73C; } }
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 1;
L_0014E73C:
    set32(c.r[3], ld32((c.r[1].w[0] + 12320u)));
    c.r[3].d[0] = c.r[3].d[0] & 3072ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014E750; } }
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 1;
L_0014E750:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0014E760:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    set32(c.r[16], c.r[6].w[0] >> 4);
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1384u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[19], ld32((c.r[1].w[0] + 1384u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20120u)));
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E7F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 311u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0014E7F8u) [[unlikely]] return; }
L_0014E7F8:
    set32(c.r[2], 0u + 256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 8176u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 20120u)));
    st32((c.r[2].w[0] + 128u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20120u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E828u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 297u, depth + 1u); else { c.pc = 0x00103188u; return; } if (c.pc != 0x0014E828u) [[unlikely]] return; }
L_0014E828:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1428u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1428u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0014E860:
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 3));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0014E8E0; } }
L_0014E86C:
    ld128((c.r[5].w[0]) & ~15u, c.r[8]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[9]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[10]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[11]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[12]);
    ld128((c.r[5].w[0] + 80u) & ~15u, c.r[13]);
    ld128((c.r[5].w[0] + 96u) & ~15u, c.r[14]);
    ld128((c.r[5].w[0] + 112u) & ~15u, c.r[15]);
    st128((c.r[4].w[0]) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[9]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[10]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[11]);
    st128((c.r[4].w[0] + 64u) & ~15u, c.r[12]);
    st128((c.r[4].w[0] + 80u) & ~15u, c.r[13]);
    st128((c.r[4].w[0] + 96u) & ~15u, c.r[14]);
    st128((c.r[4].w[0] + 112u) & ~15u, c.r[15]);
    set32(c.r[5], c.r[5].w[0] + 128u);
    set32(c.r[4], c.r[4].w[0] + 128u);
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 21;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014E86Cu | kUnwind; return; } goto L_0014E86C; } }
    c.r[6].d[0] = c.r[6].d[0] & 7ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0014E8E8; } }
L_0014E8CC:
    ld128((c.r[5].w[0]) & ~15u, c.r[8]);
    st128((c.r[4].w[0]) & ~15u, c.r[8]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 5;
L_0014E8E0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014E8CCu | kUnwind; return; } goto L_0014E8CC; } }
L_0014E8E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014E8F0:
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 3));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0014E944; } }
L_0014E8FC:
    st128((c.r[4].w[0]) & ~15u, c.r[5]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[5]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[5]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[5]);
    st128((c.r[4].w[0] + 64u) & ~15u, c.r[5]);
    st128((c.r[4].w[0] + 80u) & ~15u, c.r[5]);
    st128((c.r[4].w[0] + 96u) & ~15u, c.r[5]);
    st128((c.r[4].w[0] + 112u) & ~15u, c.r[5]);
    set32(c.r[4], c.r[4].w[0] + 128u);
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 12;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014E8FCu | kUnwind; return; } goto L_0014E8FC; } }
    c.r[6].d[0] = c.r[6].d[0] & 7ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0014E94C; } }
L_0014E938:
    st128((c.r[4].w[0]) & ~15u, c.r[5]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 3;
L_0014E944:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014E938u | kUnwind; return; } goto L_0014E938; } }
L_0014E94C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014E960:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1396u)));
    c.f[21] = ld32((c.r[2].w[0] + 380u));
    c.f[20] = ld32((c.r[2].w[0] + 384u));
    c.budget -= 20;
    { const bool t = c.r[8].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0014E9E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.r[1].d[0] = c.r[1].d[0] | 912ull;
    set32(c.r[2], c.r[16].w[0] + c.r[1].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);  if (t) { goto L_0014EA64; } }
L_0014E9E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.r[1].d[0] = c.r[1].d[0] | 912ull;
    set32(c.r[2], c.r[16].w[0] + c.r[1].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[8].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[8].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 32;
L_0014EA64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1428u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x70000000u);  if (t) { goto L_0014EA8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] | 8192ull;  if (t) { goto L_0014EA8C; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 1;
L_0014EA8C:
    st128((c.r[18].w[0]) & ~15u, c.r[0]);
    set32(c.r[19], c.r[18].w[0] + 16u);
    st64((c.r[18].w[0] + 16u), 0ull);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x11000000u);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[2], c.r[21].w[0] << 16);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EAC4u); st32((c.r[18].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0013(c, 201u, depth + 1u); else { c.pc = 0x0014E860u; return; } if (c.pc != 0x0014EAC4u) [[unlikely]] return; }
L_0014EAC4:
    set32(c.r[2], c.r[21].w[0] << 4);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_0014EB0C; } }
    set32(c.r[3], c.r[20].w[0] + 160u);
    set32(c.r[2], c.r[21].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st128((c.r[19].w[0]) & ~15u, c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EB00u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 201u, depth + 1u); else { c.pc = 0x0014E860u; return; } if (c.pc != 0x0014EB00u) [[unlikely]] return; }
L_0014EB00:
    set32(c.r[2], c.r[21].w[0] << 4);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_0014EB4C; } }
L_0014EB0C:
    set32(c.r[4], c.r[20].w[0] + 160u);
    set32(c.r[2], c.r[21].w[0] << 16);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x60000000u);
    st128((c.r[19].w[0]) & ~15u, c.r[0]);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[2], c.r[21].w[0] + 3u);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[19], c.r[19].w[0] + 16u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EB44u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 204u, depth + 1u); else { c.pc = 0x0014E8F0u; return; } if (c.pc != 0x0014EB44u) [[unlikely]] return; }
L_0014EB44:
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0014EB4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C0C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1104ull;
    st128((c.r[19].w[0]) & ~15u, c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 1012ull;
    set32(c.r[3], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 16u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[19].w[0]) & ~15u, c.r[6]);
    st128((c.r[19].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[19].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1040ull;
    set32(c.r[19], c.r[19].w[0] + 64u);
    set32(c.r[2], c.r[16].w[0] + c.r[1].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[19].w[0]) & ~15u, c.r[6]);
    st128((c.r[19].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[19].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 848ull;
    set32(c.r[19], c.r[19].w[0] + 64u);
    set32(c.r[2], c.r[16].w[0] + c.r[1].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[19].w[0]) & ~15u, c.r[6]);
    st128((c.r[19].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[19].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[19], c.r[19].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C050000u);
    st128((c.r[19].w[0]) & ~15u, c.r[0]);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 1592u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x14000000u);
    c.r[2].d[0] = c.r[2].d[0] | 800ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 16u);
    st32((c.r[19].w[0]), c.r[21].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[19].w[0] + 8u), c.f[20]);
    st32((c.r[19].w[0] + 12u), c.f[21]);
    set32(c.r[19], c.r[19].w[0] + 16u);
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[19].w[0]) & ~15u, c.r[6]);
    st128((c.r[19].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[19].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[19], c.r[19].w[0] + 64u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st128((c.r[19].w[0]) & ~15u, c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x14000000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 1596u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[6], c.r[19].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[6].w[0] >> 4);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.budget -= 86;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ECA4u); st64((c.r[18].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0013(c, 198u, depth + 1u); else { c.pc = 0x0014E760u; return; } if (c.pc != 0x0014ECA4u) [[unlikely]] return; }
L_0014ECA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0014ECE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 1428u)));
    c.r[16].d[0] = c.r[10].d[0] | 8192ull;
    c.r[9].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[7].d[0] = c.r[2].d[0] | 2ull;
    c.r[2].d[0] = 0ull | 32769ull;
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[11].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[2], 0u + 14u);
    if (c.r[11].d[0] == 0) c.r[16].d[0] = c.r[10].d[0];
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[9].w[0]);
    set32(c.r[18], c.r[16].w[0] + 8u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[18], c.r[18].w[0] + 8u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[18].w[0]), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[18], c.r[18].w[0] + 8u);
    st32((c.r[18].w[0]), c.r[8].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[7].w[0]);
    set32(c.r[18], c.r[18].w[0] + 8u);
    st64((c.r[18].w[0]), c.r[3].d[0]);
    st64((c.r[18].w[0] + 8u), c.r[2].d[0]);
    st64((c.r[18].w[0] + 16u), c.r[6].d[0]);
    st32((c.r[18].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[18], c.r[18].w[0] + 28u);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ED88u); st32((c.r[18].w[0]), 0u);  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0014ED88u) [[unlikely]] return; }
L_0014ED88:
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ED9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 198u, depth + 1u); else { c.pc = 0x0014E760u; return; } if (c.pc != 0x0014ED9Cu) [[unlikely]] return; }
L_0014ED9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0014EDC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[12], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[8].d[0] = c.r[2].d[0] | 2ull;
    c.r[2].d[0] = 0ull | 32769ull;
    c.r[7].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 14u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[1].w[0] + 1384u), c.r[12].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[12], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[12], c.r[12].w[0] + 64u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[12].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[12], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[12], c.r[12].w[0] - 4u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[12].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 1384u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[11].d[0];
    st128((c.r[4].w[0]) & ~15u, c.r[0]);
    st32((c.r[4].w[0]), c.r[10].w[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    st64((c.r[4].w[0]), c.r[7].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[6].d[0]);
    c.budget -= 47;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 24u), c.r[5].d[0]);  c.pc = t; return; }
L_0014EE80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st64((c.r[29].w[0]), c.r[5].d[0]);
    set32(c.r[3], 0u - 17u);
    st64((c.r[1].w[0] + 1456u), c.r[5].d[0]);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st64((c.r[1].w[0] + 1464u), c.r[5].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 1440u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 1440u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1532u)));
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014F054; } }
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[12].d[0] = ld64((c.r[1].w[0] + 1456u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0014EF9C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[9].d[0] = c.r[3].d[0] | 3ull;
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = 0ull | 32769ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[7].d[0] = c.r[7].d[0] | 2ull;
    set32(c.r[5], 0u + 14u);
    set32(c.r[3], 0u + 6u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[10].w[0]), c.r[9].d[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st64((c.r[10].w[0] + 8u), 0ull);
    st64((c.r[10].w[0] + 16u), 0ull);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[12].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 38;
L_0014EF9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[12].d[0] = ld64((c.r[1].w[0] + 1464u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014F054; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[9].d[0] = c.r[3].d[0] | 3ull;
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = 0ull | 32769ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[7].d[0] = c.r[7].d[0] | 2ull;
    set32(c.r[5], 0u + 14u);
    set32(c.r[3], 0u + 52u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[10].w[0]), c.r[9].d[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st64((c.r[10].w[0] + 8u), 0ull);
    st64((c.r[10].w[0] + 16u), 0ull);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[12].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.budget -= 32;
L_0014F040:
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 5;
L_0014F054:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0014F060:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1524u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 1520u), c.r[3].w[0]);  c.pc = t; return; }
L_0014F090:
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[1].w[0] + 1488u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1492u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1496u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1500u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1504u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1508u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1512u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1516u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 1520u), c.r[2].w[0]);  c.pc = t; return; }
L_0014F130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[8], ld32((c.r[1].w[0] + 1428u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].d[0] = c.r[7].d[0] | 8192ull;
    c.r[6].d[0] = c.r[2].d[0] | 5ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C040000u);
    c.r[2].d[0] = c.r[2].d[0] | 1006ull;
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    if (c.r[8].d[0] == 0) c.r[5].d[0] = c.r[7].d[0];
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[6].w[0]), 0u);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[6].w[0]), 0u);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    ld128((c.r[1].w[0] + 1488u) & ~15u, c.r[2]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    ld128((c.r[1].w[0] + 1504u) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st128((c.r[6].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1396u)));
    c.f[0] = ld32((c.r[2].w[0] + 352u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[6].w[0] + 32u), c.f[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1472u)));
    set32(c.r[6], c.r[6].w[0] + 36u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1524u)));
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[6].w[0]), 0u);
    set32(c.r[2], c.r[6].w[0] + 20u);
    st128((c.r[6].w[0] + 4u) & ~15u, c.r[0]);
    set32(c.r[6], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 59;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F21Cu); st32((c.r[1].w[0] + 1520u), 0u);  if (depth < kMaxDepth) unit_0013(c, 198u, depth + 1u); else { c.pc = 0x0014E760u; return; } if (c.pc != 0x0014F21Cu) [[unlikely]] return; }
L_0014F21C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0014F230:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[23].d[0] = ld64((c.r[1].w[0] + 1440u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1520u)));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0014F2A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F294u);  if (depth < kMaxDepth) unit_0013(c, 220u, depth + 1u); else { c.pc = 0x0014F130u; return; } if (c.pc != 0x0014F294u) [[unlikely]] return; }
L_0014F294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0014F2A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0014F83C; } }
L_0014F2A4:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_0014F2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F2B0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 81u, depth + 1u); else { c.pc = 0x0014D4F0u; return; } if (c.pc != 0x0014F2B0u) [[unlikely]] return; }
L_0014F2B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014F2C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0014F83C; } }
L_0014F2C0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[1], c.r[22].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x03000000u);
    set32(c.r[8], ld32((c.r[1].w[0] + 1428u)));
    c.r[4].d[0] = c.r[2].d[0] | 640ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[18].d[0] = c.r[7].d[0] | 8192ull;
    c.r[3].d[0] = c.r[2].d[0] | 82ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x14000000u);
    set32(c.r[2], 0u + 4u);
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    if (c.r[8].d[0] == 0) c.r[18].d[0] = c.r[7].d[0];
    set32(c.r[1], c.r[22].w[0] + c.r[1].w[0]);
    st64((c.r[18].w[0]), 0ull);
    set32(c.r[19], c.r[18].w[0] + 20u);
    st64((c.r[18].w[0] + 8u), 0ull);
    set32(c.r[19], c.r[19].w[0] + 8u);
    st32((c.r[18].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[1].w[0] + 1624u)));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[18].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 27;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_0014F7EC; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[2].d[0] = c.r[23].d[0] | 1ull;  if (t) { goto L_0014F6D0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[23].d[0] | 2ull;  if (t) { goto L_0014F834; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0014F480; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[23].d[0] | 4ull;  if (t) { goto L_0014F360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x17000000u);  if (t) { goto L_0014F7F0; } }
L_0014F360:
    c.r[30].d[0] = c.r[2].d[0] << 47;
    c.budget -= 1;
L_0014F364:
    c.r[1].d[0] = c.r[20].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[21], 0u + 16u);  if (t) { goto L_0014F374; } }
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0014F374:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[23], c.r[21].w[0] << 1);  if (t) { goto L_0014F388; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_0014F394; } }
L_0014F388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x17000000u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 3;
L_0014F394:
    set32(c.r[2], c.r[23].w[0] + 1u);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st32((c.r[19].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    c.r[5].d[0] = c.r[21].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[2], 0u + 16384u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[30].d[0];
    set32(c.r[2], 0u + 1042u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    sdr(c.r[3], (c.r[19].w[0] + 4u));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    sdl(c.r[3], (c.r[19].w[0] + 11u));
    sdr(c.r[2], (c.r[19].w[0] + 12u));
    sdl(c.r[2], (c.r[19].w[0] + 19u));
    set32(c.r[19], c.r[19].w[0] + 20u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F40Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 201u, depth + 1u); else { c.pc = 0x0014E860u; return; } if (c.pc != 0x0014F40Cu) [[unlikely]] return; }
L_0014F40C:
    set32(c.r[2], c.r[21].w[0] - 2u);
    set32(c.r[3], c.r[23].w[0] << 4);
    set32(c.r[20], c.r[20].w[0] - c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.r[1].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_0014F7EC; } }
    set32(c.r[6], c.r[19].w[0] - c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], c.r[6].w[0] >> 4);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F454u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0013(c, 198u, depth + 1u); else { c.pc = 0x0014E760u; return; } if (c.pc != 0x0014F454u) [[unlikely]] return; }
L_0014F454:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[1], c.r[22].w[0] + c.r[1].w[0]);
    c.r[18].d[0] = c.r[2].d[0] | 8192ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 1428u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    if (c.r[3].d[0] == 0) c.r[18].d[0] = c.r[2].d[0];
    st64((c.r[18].w[0]), 0ull);
    set32(c.r[19], c.r[18].w[0] + 16u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 8u), 0ull);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014F364u | kUnwind; return; } goto L_0014F364; } }
L_0014F480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[20].w[0], c.r[2].w[0]);  if (t) { goto L_0014F48C; } }
    breakpoint(c, 0x0014F488u);
    c.budget -= 1;
L_0014F48C:
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[23].d[0] | 3ull;
    c.r[30].d[0] = c.r[2].d[0] << 47;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0014F4A0:
    c.r[1].d[0] = c.r[20].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0014F4B0; } }
    set32(c.r[21], 0u + 15u);
    c.budget -= 1;
L_0014F4B0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[23], c.r[21].w[0] << 1);  if (t) { goto L_0014F4C4; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_0014F4D0; } }
L_0014F4C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x17000000u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 3;
L_0014F4D0:
    set32(c.r[2], c.r[23].w[0] + 1u);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st32((c.r[19].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    c.r[5].d[0] = c.r[21].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[2], 0u + 16384u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[30].d[0];
    set32(c.r[2], 0u + 1042u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    sdr(c.r[3], (c.r[19].w[0] + 4u));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    sdl(c.r[3], (c.r[19].w[0] + 11u));
    sdr(c.r[2], (c.r[19].w[0] + 12u));
    sdl(c.r[2], (c.r[19].w[0] + 19u));
    set32(c.r[19], c.r[19].w[0] + 20u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F548u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 201u, depth + 1u); else { c.pc = 0x0014E860u; return; } if (c.pc != 0x0014F548u) [[unlikely]] return; }
L_0014F548:
    set32(c.r[2], c.r[23].w[0] << 4);
    set32(c.r[20], c.r[20].w[0] - c.r[21].w[0]);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[21].w[0] << 5);
    c.budget -= 7;
    { const bool t = c.r[20].sd[0] <= 0; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_0014F7EC; } }
    set32(c.r[6], c.r[19].w[0] - c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], c.r[6].w[0] >> 4);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F588u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0013(c, 198u, depth + 1u); else { c.pc = 0x0014E760u; return; } if (c.pc != 0x0014F588u) [[unlikely]] return; }
L_0014F588:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[1], c.r[22].w[0] + c.r[1].w[0]);
    c.r[18].d[0] = c.r[2].d[0] | 8192ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 1428u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    if (c.r[3].d[0] == 0) c.r[18].d[0] = c.r[2].d[0];
    st64((c.r[18].w[0]), 0ull);
    set32(c.r[19], c.r[18].w[0] + 16u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 8u), 0ull);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014F4A0u | kUnwind; return; } goto L_0014F4A0; } }
L_0014F5B4:
    c.r[1].d[0] = c.r[20].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[21], 0u + 16u);  if (t) { goto L_0014F5C4; } }
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0014F5C4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[23], c.r[21].w[0] << 1);  if (t) { goto L_0014F5D8; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_0014F5E4; } }
L_0014F5D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x17000000u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 3;
L_0014F5E4:
    set32(c.r[2], c.r[23].w[0] + 1u);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st32((c.r[19].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    c.r[5].d[0] = c.r[21].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[2], 0u + 16384u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[30].d[0];
    set32(c.r[2], 0u + 1042u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    sdr(c.r[3], (c.r[19].w[0] + 4u));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    sdl(c.r[3], (c.r[19].w[0] + 11u));
    sdr(c.r[2], (c.r[19].w[0] + 12u));
    sdl(c.r[2], (c.r[19].w[0] + 19u));
    set32(c.r[19], c.r[19].w[0] + 20u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F65Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 201u, depth + 1u); else { c.pc = 0x0014E860u; return; } if (c.pc != 0x0014F65Cu) [[unlikely]] return; }
L_0014F65C:
    set32(c.r[2], c.r[21].w[0] - 1u);
    set32(c.r[3], c.r[23].w[0] << 4);
    set32(c.r[20], c.r[20].w[0] - c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.r[1].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_0014F7EC; } }
    set32(c.r[6], c.r[19].w[0] - c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], c.r[6].w[0] >> 4);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F6A4u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0013(c, 198u, depth + 1u); else { c.pc = 0x0014E760u; return; } if (c.pc != 0x0014F6A4u) [[unlikely]] return; }
L_0014F6A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[1], c.r[22].w[0] + c.r[1].w[0]);
    c.r[18].d[0] = c.r[2].d[0] | 8192ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 1428u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    if (c.r[3].d[0] == 0) c.r[18].d[0] = c.r[2].d[0];
    st64((c.r[18].w[0]), 0ull);
    set32(c.r[19], c.r[18].w[0] + 16u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 8u), 0ull);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014F5B4u | kUnwind; return; } goto L_0014F5B4; } }
L_0014F6D0:
    c.r[20].d[0] = c.r[20].d[0] & 65534ull;
    c.r[30].d[0] = c.r[2].d[0] << 47;
    c.budget -= 2;
L_0014F6D8:
    c.r[1].d[0] = c.r[20].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0014F6E8; } }
    set32(c.r[21], 0u + 16u);
    c.budget -= 1;
L_0014F6E8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[23], c.r[21].w[0] << 1);  if (t) { goto L_0014F6FC; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_0014F708; } }
L_0014F6FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x17000000u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 3;
L_0014F708:
    set32(c.r[2], c.r[23].w[0] + 1u);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st32((c.r[19].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    c.r[5].d[0] = c.r[21].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[2], 0u + 16384u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[30].d[0];
    set32(c.r[2], 0u + 1042u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    sdr(c.r[3], (c.r[19].w[0] + 4u));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    sdl(c.r[3], (c.r[19].w[0] + 11u));
    sdr(c.r[2], (c.r[19].w[0] + 12u));
    sdl(c.r[2], (c.r[19].w[0] + 19u));
    set32(c.r[19], c.r[19].w[0] + 20u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F780u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 201u, depth + 1u); else { c.pc = 0x0014E860u; return; } if (c.pc != 0x0014F780u) [[unlikely]] return; }
L_0014F780:
    set32(c.r[2], c.r[23].w[0] << 4);
    set32(c.r[20], c.r[20].w[0] - c.r[21].w[0]);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[21].w[0] << 5);
    c.budget -= 7;
    { const bool t = c.r[20].sd[0] <= 0; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_0014F7EC; } }
    set32(c.r[6], c.r[19].w[0] - c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], c.r[6].w[0] >> 4);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F7C0u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0013(c, 198u, depth + 1u); else { c.pc = 0x0014E760u; return; } if (c.pc != 0x0014F7C0u) [[unlikely]] return; }
L_0014F7C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[1], c.r[22].w[0] + c.r[1].w[0]);
    c.r[18].d[0] = c.r[2].d[0] | 8192ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 1428u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    if (c.r[3].d[0] == 0) c.r[18].d[0] = c.r[2].d[0];
    st64((c.r[18].w[0]), 0ull);
    set32(c.r[19], c.r[18].w[0] + 16u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 8u), 0ull);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014F6D8u | kUnwind; return; } goto L_0014F6D8; } }
L_0014F7EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x17000000u);
    c.budget -= 1;
L_0014F7F0:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[19].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[19], c.r[19].w[0] + 8u);
    st32((c.r[19].w[0]), 0u);
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[6], c.r[19].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[6].w[0] >> 4);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F82Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0013(c, 198u, depth + 1u); else { c.pc = 0x0014E760u; return; } if (c.pc != 0x0014F82Cu) [[unlikely]] return; }
L_0014F82C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0014F83C; } }
L_0014F834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[2].d[0] << 47;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014F5B4u | kUnwind; return; } goto L_0014F5B4; } }
L_0014F83C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0014F870:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0014F8C4; } }
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[6], ld32((c.r[1].w[0] + 1552u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0014F8B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[6].w[0])));  if (t) { goto L_0014F89C; } }
L_0014F894:
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_0014F89C:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014F894u | kUnwind; return; } goto L_0014F894; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[5].w[0]);  if (t) { goto L_0014F8C4; } }
L_0014F8B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1552u), c.r[5].w[0]);
    c.budget -= 3;
L_0014F8C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014F8D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0])));  if (t) { goto L_0014F908; } }
L_0014F8EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0])));  if (t) { goto L_0014F904; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F904u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014F904u) [[unlikely]] return; }
L_0014F904:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0014F908:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014F8ECu | kUnwind; return; } goto L_0014F8EC; } }
    st32((c.r[17].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014F930:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F954u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0015(c, 106u, depth + 1u); else { c.pc = 0x00157220u; return; } if (c.pc != 0x0014F954u) [[unlikely]] return; }
L_0014F954:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    set32(c.r[3], c.r[3].w[0] - 18400u);
    c.r[2].d[0] = c.r[2].d[0] | 4621ull;
    st32((c.r[17].w[0] + 152u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 200u), 0u);
    st32((c.r[17].w[0] + 208u), 0u);
    st32((c.r[17].w[0] + 204u), 0u);
    st32((c.r[17].w[0] + 212u), 0u);
    st32((c.r[17].w[0] + 216u), 0u);
    st32((c.r[17].w[0] + 220u), 0u);
    st32((c.r[17].w[0] + 224u), 0u);
    st32((c.r[17].w[0] + 228u), 0u);
    st32((c.r[17].w[0] + 232u), 0u);
    st32((c.r[17].w[0] + 240u), 0u);
    st32((c.r[17].w[0] + 244u), 0u);
    st32((c.r[17].w[0] + 252u), 0u);
    st32((c.r[17].w[0] + 176u), 0u);
    st32((c.r[17].w[0] + 180u), 0u);
    st32((c.r[17].w[0] + 184u), 0u);
    st32((c.r[17].w[0] + 188u), 0u);
    st32((c.r[17].w[0] + 160u), 0u);
    st32((c.r[17].w[0] + 164u), 0u);
    st32((c.r[17].w[0] + 168u), 0u);
    st32((c.r[17].w[0] + 172u), 0u);
    st32((c.r[17].w[0] + 256u), 0u);
    st32((c.r[17].w[0] + 260u), 0u);
    c.budget -= 29;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[17].w[0] + 192u), c.r[2].d[0]);  if (t) { goto L_0014F9E0; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 152u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F9E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014F9E0u) [[unlikely]] return; }
L_0014F9E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0014FA00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FA1Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0015(c, 106u, depth + 1u); else { c.pc = 0x00157220u; return; } if (c.pc != 0x0014FA1Cu) [[unlikely]] return; }
L_0014FA1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    set32(c.r[3], c.r[3].w[0] - 18400u);
    c.r[2].d[0] = c.r[2].d[0] | 4621ull;
    st32((c.r[17].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 200u)));
    st32((c.r[17].w[0] + 200u), 0u);
    st32((c.r[17].w[0] + 208u), 0u);
    st32((c.r[17].w[0] + 204u), 0u);
    st32((c.r[17].w[0] + 212u), 0u);
    st32((c.r[17].w[0] + 216u), 0u);
    st32((c.r[17].w[0] + 220u), 0u);
    st32((c.r[17].w[0] + 224u), 0u);
    st32((c.r[17].w[0] + 228u), 0u);
    st32((c.r[17].w[0] + 232u), 0u);
    st32((c.r[17].w[0] + 240u), 0u);
    st32((c.r[17].w[0] + 244u), 0u);
    st32((c.r[17].w[0] + 252u), 0u);
    st32((c.r[17].w[0] + 176u), 0u);
    st32((c.r[17].w[0] + 180u), 0u);
    st32((c.r[17].w[0] + 184u), 0u);
    st32((c.r[17].w[0] + 188u), 0u);
    st32((c.r[17].w[0] + 160u), 0u);
    st32((c.r[17].w[0] + 164u), 0u);
    st32((c.r[17].w[0] + 168u), 0u);
    st32((c.r[17].w[0] + 172u), 0u);
    st32((c.r[17].w[0] + 256u), 0u);
    st32((c.r[17].w[0] + 260u), 0u);
    c.budget -= 30;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[17].w[0] + 192u), c.r[2].d[0]);  if (t) { goto L_0014FAAC; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 152u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FAACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014FAACu) [[unlikely]] return; }
L_0014FAAC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FAB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 39u, depth + 1u); else { c.pc = 0x001506D0u; return; } if (c.pc != 0x0014FAB8u) [[unlikely]] return; }
L_0014FAB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014FAD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014FB2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18400u);
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FB08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014FB08u) [[unlikely]] return; }
L_0014FB08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FB14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0015(c, 107u, depth + 1u); else { c.pc = 0x00157290u; return; } if (c.pc != 0x0014FB14u) [[unlikely]] return; }
L_0014FB14:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0014FB30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FB2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0014FB2Cu) [[unlikely]] return; }
L_0014FB2C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0014FB30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014FB50:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 200u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_0014FD10; } }
    set32(c.r[17], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[20], ld32((c.r[21].w[0] + 204u)));
    set32(c.r[19], ld32((c.r[21].w[0] + 208u)));
    set32(c.r[18], ld32((c.r[21].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_0014FD08; } }
L_0014FBAC:
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], c.r[17].w[0] + 32u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FBE0u); st32((c.r[17].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x0014FBE0u) [[unlikely]] return; }
L_0014FBE0:
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[20].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0014FC24; } }
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[19].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[19].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::move(c.vu0, 15u, 8u, 4u);
    vu::move(c.vu0, 15u, 9u, 5u);
    vu::move(c.vu0, 15u, 10u, 6u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; vu::move(c.vu0, 15u, 11u, 7u);  if (t) { goto L_0014FC94; } }
L_0014FC24:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 208u)));
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[13]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[14]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[15]);
    vu::mulabc(c.vu0, 15u, 12u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 13u, c.vu0.vf[4].w[1]);
    vu::maddabc(c.vu0, 15u, 14u, c.vu0.vf[4].w[2]);
    vu::maddbc(c.vu0, 15u, 8u, 15u, c.vu0.vf[4].w[3]);
    vu::mulabc(c.vu0, 15u, 12u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 13u, c.vu0.vf[5].w[1]);
    vu::maddabc(c.vu0, 15u, 14u, c.vu0.vf[5].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 15u, c.vu0.vf[5].w[3]);
    vu::mulabc(c.vu0, 15u, 12u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 13u, c.vu0.vf[6].w[1]);
    vu::maddabc(c.vu0, 15u, 14u, c.vu0.vf[6].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 15u, c.vu0.vf[6].w[3]);
    vu::mulabc(c.vu0, 15u, 12u, c.vu0.vf[7].w[0]);
    vu::maddabc(c.vu0, 15u, 13u, c.vu0.vf[7].w[1]);
    vu::maddabc(c.vu0, 15u, 14u, c.vu0.vf[7].w[2]);
    vu::maddbc(c.vu0, 15u, 11u, 15u, c.vu0.vf[7].w[3]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[8]);
    st128((c.r[19].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    st128((c.r[19].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    c.budget -= 28;
L_0014FC94:
    c.r[8] = c.vu0.vf[8];
    c.r[9] = c.vu0.vf[9];
    c.r[10] = c.vu0.vf[10];
    vu::move(c.vu0, 15u, 12u, 11u);
    vu::sub(c.vu0, 14u, 11u, 11u, 11u);
    vu::move(c.vu0, 15u, 16u, 11u);
    c.r[11] = c.vu0.vf[11];
    mmi::pextlw(c.r[12], c.r[9], c.r[8]);
    mmi::pextuw(c.r[13], c.r[9], c.r[8]);
    mmi::pextlw(c.r[14], c.r[11], c.r[10]);
    mmi::pextuw(c.r[15], c.r[11], c.r[10]);
    mmi::pcpyld(c.r[8], c.r[14], c.r[12]);
    mmi::pcpyud(c.r[9], c.r[12], c.r[14]);
    mmi::pcpyld(c.r[10], c.r[15], c.r[13]);
    c.vu0.vf[13] = c.r[8];
    c.vu0.vf[14] = c.r[9];
    c.vu0.vf[15] = c.r[10];
    vu::mulabc(c.vu0, 14u, 13u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 14u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 11u, 15u, c.vu0.vf[12].w[2]);
    vu::sub(c.vu0, 14u, 11u, 16u, 11u);
    st128((c.r[18].w[0]) & ~15u, c.r[8]);
    st128((c.r[18].w[0] + 16u) & ~15u, c.r[9]);
    st128((c.r[18].w[0] + 32u) & ~15u, c.r[10]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    set32(c.r[17], c.r[17].w[0] + 80u);
    set32(c.r[20], c.r[20].w[0] + 64u);
    set32(c.r[19], c.r[19].w[0] + 64u);
    set32(c.r[18], c.r[18].w[0] + 64u);
    c.budget -= 29;
L_0014FD08:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014FBACu | kUnwind; return; } goto L_0014FBAC; } }
L_0014FD10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0014FD40:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 200u)));
    set32(c.r[23], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[30], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[12];  if (t) { goto L_0014FE18; } }
L_0014FD88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0014FE2C; } }
L_0014FD90:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], c.r[21].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[20], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0014FDE8; } }
L_0014FDAC:
    c.f[0] = ld32((c.r[20].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FDDCu); st32((c.r[20].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x0014FDDCu) [[unlikely]] return; }
L_0014FDDC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.budget -= 3;
L_0014FDE8:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014FDACu | kUnwind; return; } goto L_0014FDAC; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_0014FE08:
    c.r[3].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014FD90u | kUnwind; return; } goto L_0014FD90; } }
L_0014FE14:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_0014FE18:
    c.r[3].d[0] = c.r[22].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014FD88u | kUnwind; return; } goto L_0014FD88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_0014FE4C; } }
L_0014FE2C:
    set32(c.r[3], c.r[22].w[0] << 6);
    set32(c.r[17], c.r[30].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014FE14u | kUnwind; return; } goto L_0014FE14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014FE08u | kUnwind; return; } goto L_0014FE08; } }
L_0014FE4C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0014FE80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FEACu); c.f[20] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014FEACu) [[unlikely]] return; }
L_0014FEAC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0014(c, 13u, depth); } }
    st32((c.r[17].w[0] + 200u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[17].w[0] + 236u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 236u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0014FEDC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[17].w[0] + 240u), c.r[3].w[0]);
    c.budget -= 3;
L_0014FEDC:
    set32(c.r[3], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_0014(c, 5u, depth); } }
    set32(c.r[2], c.r[16].w[0] << 6);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FEF8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0014FEF8u) [[unlikely]] return; }
L_0014FEF8:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FF10u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0014FF10u) [[unlikely]] return; }
L_0014FF10:
    st32((c.r[17].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FF28u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0014FF28u) [[unlikely]] return; }
L_0014FF28:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FF40u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0014FF40u) [[unlikely]] return; }
L_0014FF40:
    st32((c.r[17].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FF58u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0014FF58u) [[unlikely]] return; }
L_0014FF58:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FF70u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0014FF70u) [[unlikely]] return; }
L_0014FF70:
    st32((c.r[17].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FF88u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0014FF88u) [[unlikely]] return; }
L_0014FF88:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FFA0u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0014FFA0u) [[unlikely]] return; }
L_0014FFA0:
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FFB0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0013(c, 254u, depth + 1u); else { c.pc = 0x0014FB50u; return; } if (c.pc != 0x0014FFB0u) [[unlikely]] return; }
L_0014FFB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0014FFD8; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FFD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 257u, depth + 1u); else { c.pc = 0x0014FD40u; return; } if (c.pc != 0x0014FFD4u) [[unlikely]] return; }
L_0014FFD4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014FFD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 200u)));  if (t) { [[clang::musttail]] return unit_0014(c, 4u, depth); } }
L_0014FFE0:
    set32(c.r[5], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[6], c.r[3].w[0] << 6);
    set32(c.r[4], ld32((c.r[17].w[0] + 208u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    c.budget -= 6;
L_0014FFF8:
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[8]);
    c.budget -= 2;
    [[clang::musttail]] return unit_0014(c, 1u, depth);
}

}
