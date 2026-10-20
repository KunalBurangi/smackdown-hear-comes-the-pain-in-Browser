#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003C[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 10, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0,
    0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 50,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120,
    0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0,
    0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0,
    0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0,
    0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0,
    262, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0,
    0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001F0000;
    case 2u: goto L_001F001C;
    case 3u: goto L_001F0024;
    case 4u: goto L_001F002C;
    case 5u: goto L_001F0050;
    case 6u: goto L_001F005C;
    case 7u: goto L_001F0074;
    case 8u: goto L_001F009C;
    case 9u: goto L_001F00A4;
    case 10u: goto L_001F00A8;
    case 11u: goto L_001F00B0;
    case 12u: goto L_001F00C8;
    case 13u: goto L_001F0100;
    case 14u: goto L_001F0134;
    case 15u: goto L_001F016C;
    case 16u: goto L_001F01A8;
    case 17u: goto L_001F01B8;
    case 18u: goto L_001F01CC;
    case 19u: goto L_001F01F8;
    case 20u: goto L_001F0234;
    case 21u: goto L_001F0248;
    case 22u: goto L_001F0268;
    case 23u: goto L_001F0278;
    case 24u: goto L_001F02E0;
    case 25u: goto L_001F02F4;
    case 26u: goto L_001F0314;
    case 27u: goto L_001F0344;
    case 28u: goto L_001F0348;
    case 29u: goto L_001F0370;
    case 30u: goto L_001F03A4;
    case 31u: goto L_001F03B4;
    case 32u: goto L_001F0460;
    case 33u: goto L_001F0480;
    case 34u: goto L_001F04CC;
    case 35u: goto L_001F04D8;
    case 36u: goto L_001F0558;
    case 37u: goto L_001F05F4;
    case 38u: goto L_001F06AC;
    case 39u: goto L_001F06E0;
    case 40u: goto L_001F071C;
    case 41u: goto L_001F07C0;
    case 42u: goto L_001F0810;
    case 43u: goto L_001F0824;
    case 44u: goto L_001F0840;
    case 45u: goto L_001F0854;
    case 46u: goto L_001F0868;
    case 47u: goto L_001F08A8;
    case 48u: goto L_001F08D8;
    case 49u: goto L_001F08E8;
    case 50u: goto L_001F08FC;
    case 51u: goto L_001F091C;
    case 52u: goto L_001F0930;
    case 53u: goto L_001F0944;
    case 54u: goto L_001F0984;
    case 55u: goto L_001F09B4;
    case 56u: goto L_001F09E0;
    case 57u: goto L_001F0A1C;
    case 58u: goto L_001F0A4C;
    case 59u: goto L_001F0AC0;
    case 60u: goto L_001F0B00;
    case 61u: goto L_001F0B70;
    case 62u: goto L_001F0B8C;
    case 63u: goto L_001F0BB8;
    case 64u: goto L_001F0BD4;
    case 65u: goto L_001F0BF4;
    case 66u: goto L_001F0C38;
    case 67u: goto L_001F0CC8;
    case 68u: goto L_001F0D50;
    case 69u: goto L_001F0DC4;
    case 70u: goto L_001F0DDC;
    case 71u: goto L_001F0E48;
    case 72u: goto L_001F0EE0;
    case 73u: goto L_001F0EFC;
    case 74u: goto L_001F0F28;
    case 75u: goto L_001F0F58;
    case 76u: goto L_001F0F84;
    case 77u: goto L_001F0F94;
    case 78u: goto L_001F0FAC;
    case 79u: goto L_001F1034;
    case 80u: goto L_001F10C8;
    case 81u: goto L_001F10D4;
    case 82u: goto L_001F10E8;
    case 83u: goto L_001F1118;
    case 84u: goto L_001F1148;
    case 85u: goto L_001F11F4;
    case 86u: goto L_001F1208;
    case 87u: goto L_001F121C;
    case 88u: goto L_001F1250;
    case 89u: goto L_001F1274;
    case 90u: goto L_001F1280;
    case 91u: goto L_001F12AC;
    case 92u: goto L_001F12C8;
    case 93u: goto L_001F1314;
    case 94u: goto L_001F1368;
    case 95u: goto L_001F1388;
    case 96u: goto L_001F13A0;
    case 97u: goto L_001F13B4;
    case 98u: goto L_001F13E0;
    case 99u: goto L_001F1420;
    case 100u: goto L_001F1430;
    case 101u: goto L_001F1440;
    case 102u: goto L_001F1450;
    case 103u: goto L_001F1468;
    case 104u: goto L_001F1494;
    case 105u: goto L_001F1538;
    case 106u: goto L_001F1560;
    case 107u: goto L_001F158C;
    case 108u: goto L_001F15A0;
    case 109u: goto L_001F15BC;
    case 110u: goto L_001F15C8;
    case 111u: goto L_001F15DC;
    case 112u: goto L_001F162C;
    case 113u: goto L_001F1640;
    case 114u: goto L_001F1650;
    case 115u: goto L_001F167C;
    case 116u: goto L_001F16A0;
    case 117u: goto L_001F16C0;
    case 118u: goto L_001F16E0;
    case 119u: goto L_001F16F0;
    case 120u: goto L_001F16FC;
    case 121u: goto L_001F1710;
    case 122u: goto L_001F171C;
    case 123u: goto L_001F1724;
    case 124u: goto L_001F173C;
    case 125u: goto L_001F1744;
    case 126u: goto L_001F1758;
    case 127u: goto L_001F17C8;
    case 128u: goto L_001F1804;
    case 129u: goto L_001F184C;
    case 130u: goto L_001F1860;
    case 131u: goto L_001F1894;
    case 132u: goto L_001F18AC;
    case 133u: goto L_001F18FC;
    case 134u: goto L_001F1A60;
    case 135u: goto L_001F1A6C;
    case 136u: goto L_001F1A78;
    case 137u: goto L_001F1A84;
    case 138u: goto L_001F1B44;
    case 139u: goto L_001F1BC8;
    case 140u: goto L_001F1BE4;
    case 141u: goto L_001F1BF0;
    case 142u: goto L_001F1C10;
    case 143u: goto L_001F1C6C;
    case 144u: goto L_001F1C78;
    case 145u: goto L_001F1C84;
    case 146u: goto L_001F1DD4;
    case 147u: goto L_001F1E08;
    case 148u: goto L_001F1F18;
    case 149u: goto L_001F1F38;
    case 150u: goto L_001F1F74;
    case 151u: goto L_001F1FD8;
    case 152u: goto L_001F200C;
    case 153u: goto L_001F2020;
    case 154u: goto L_001F202C;
    case 155u: goto L_001F2050;
    case 156u: goto L_001F2060;
    case 157u: goto L_001F2084;
    case 158u: goto L_001F20A0;
    case 159u: goto L_001F20E4;
    case 160u: goto L_001F20EC;
    case 161u: goto L_001F21B8;
    case 162u: goto L_001F21C4;
    case 163u: goto L_001F224C;
    case 164u: goto L_001F2260;
    case 165u: goto L_001F2294;
    case 166u: goto L_001F22D8;
    case 167u: goto L_001F22EC;
    case 168u: goto L_001F2304;
    case 169u: goto L_001F231C;
    case 170u: goto L_001F234C;
    case 171u: goto L_001F246C;
    case 172u: goto L_001F2480;
    case 173u: goto L_001F2490;
    case 174u: goto L_001F24AC;
    case 175u: goto L_001F24C8;
    case 176u: goto L_001F24F0;
    case 177u: goto L_001F2504;
    case 178u: goto L_001F251C;
    case 179u: goto L_001F25B0;
    case 180u: goto L_001F25B8;
    case 181u: goto L_001F25D8;
    case 182u: goto L_001F2624;
    case 183u: goto L_001F2650;
    case 184u: goto L_001F2660;
    case 185u: goto L_001F2674;
    case 186u: goto L_001F2688;
    case 187u: goto L_001F2698;
    case 188u: goto L_001F26A8;
    case 189u: goto L_001F26C0;
    case 190u: goto L_001F26E4;
    case 191u: goto L_001F2704;
    case 192u: goto L_001F2760;
    case 193u: goto L_001F2780;
    case 194u: goto L_001F278C;
    case 195u: goto L_001F2798;
    case 196u: goto L_001F27AC;
    case 197u: goto L_001F27E4;
    case 198u: goto L_001F2844;
    case 199u: goto L_001F2854;
    case 200u: goto L_001F2868;
    case 201u: goto L_001F2884;
    case 202u: goto L_001F294C;
    case 203u: goto L_001F2954;
    case 204u: goto L_001F2964;
    case 205u: goto L_001F2974;
    case 206u: goto L_001F29A4;
    case 207u: goto L_001F29C4;
    case 208u: goto L_001F29D4;
    case 209u: goto L_001F29E8;
    case 210u: goto L_001F2A08;
    case 211u: goto L_001F2A28;
    case 212u: goto L_001F2A90;
    case 213u: goto L_001F2A9C;
    case 214u: goto L_001F2AB8;
    case 215u: goto L_001F2AC0;
    case 216u: goto L_001F2BD0;
    case 217u: goto L_001F2BF0;
    case 218u: goto L_001F2C0C;
    case 219u: goto L_001F2C8C;
    case 220u: goto L_001F2D80;
    case 221u: goto L_001F2DB4;
    case 222u: goto L_001F2DE0;
    case 223u: goto L_001F2DF4;
    case 224u: goto L_001F2E00;
    case 225u: goto L_001F2EB0;
    case 226u: goto L_001F2EB8;
    case 227u: goto L_001F2EC4;
    case 228u: goto L_001F2EE0;
    case 229u: goto L_001F2EEC;
    case 230u: goto L_001F2F10;
    case 231u: goto L_001F3000;
    case 232u: goto L_001F3014;
    case 233u: goto L_001F302C;
    case 234u: goto L_001F303C;
    case 235u: goto L_001F3054;
    case 236u: goto L_001F3070;
    case 237u: goto L_001F3084;
    case 238u: goto L_001F3090;
    case 239u: goto L_001F30C8;
    case 240u: goto L_001F30F8;
    case 241u: goto L_001F3118;
    case 242u: goto L_001F3124;
    case 243u: goto L_001F3158;
    case 244u: goto L_001F317C;
    case 245u: goto L_001F3190;
    case 246u: goto L_001F31BC;
    case 247u: goto L_001F31C8;
    case 248u: goto L_001F31F4;
    case 249u: goto L_001F3240;
    case 250u: goto L_001F3270;
    case 251u: goto L_001F3280;
    case 252u: goto L_001F32B0;
    case 253u: goto L_001F336C;
    case 254u: goto L_001F33C0;
    case 255u: goto L_001F33D0;
    case 256u: goto L_001F33F8;
    case 257u: goto L_001F341C;
    case 258u: goto L_001F3424;
    case 259u: goto L_001F3440;
    case 260u: goto L_001F344C;
    case 261u: goto L_001F3470;
    case 262u: goto L_001F3480;
    case 263u: goto L_001F3490;
    case 264u: goto L_001F34A4;
    case 265u: goto L_001F34EC;
    case 266u: goto L_001F3500;
    case 267u: goto L_001F3520;
    case 268u: goto L_001F3534;
    case 269u: goto L_001F3548;
    case 270u: goto L_001F3560;
    case 271u: goto L_001F359C;
    case 272u: goto L_001F35A8;
    case 273u: goto L_001F35CC;
    case 274u: goto L_001F35E4;
    case 275u: goto L_001F3620;
    case 276u: goto L_001F362C;
    case 277u: goto L_001F363C;
    case 278u: goto L_001F3670;
    case 279u: goto L_001F368C;
    case 280u: goto L_001F3694;
    case 281u: goto L_001F36B0;
    case 282u: goto L_001F36BC;
    case 283u: goto L_001F36D4;
    case 284u: goto L_001F377C;
    case 285u: goto L_001F37AC;
    case 286u: goto L_001F37D8;
    case 287u: goto L_001F380C;
    case 288u: goto L_001F3820;
    case 289u: goto L_001F38E4;
    case 290u: goto L_001F3900;
    case 291u: goto L_001F3920;
    case 292u: goto L_001F3934;
    case 293u: goto L_001F393C;
    case 294u: goto L_001F3950;
    case 295u: goto L_001F3968;
    case 296u: goto L_001F3978;
    case 297u: goto L_001F3990;
    case 298u: goto L_001F39C0;
    case 299u: goto L_001F39EC;
    case 300u: goto L_001F39F4;
    case 301u: goto L_001F3A14;
    case 302u: goto L_001F3A8C;
    case 303u: goto L_001F3B10;
    case 304u: goto L_001F3B24;
    case 305u: goto L_001F3B90;
    case 306u: goto L_001F3BB0;
    case 307u: goto L_001F3C20;
    case 308u: goto L_001F3C50;
    case 309u: goto L_001F3C68;
    case 310u: goto L_001F3C80;
    case 311u: goto L_001F3D10;
    case 312u: goto L_001F3D90;
    case 313u: goto L_001F3DE0;
    case 314u: goto L_001F3EA0;
    case 315u: goto L_001F3F70;
    case 316u: goto L_001F3F9C;
    default: bad_entry(c, 0x001F0000u); return;
    }
L_001F0000:
    c.budget -= 2;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F002C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21520u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F002C; } }
L_001F001C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0024u); set32(c.r[5], 0u + 1678u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F0024u) [[unlikely]] return; }
L_001F0024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F00A4; } }
L_001F002C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 590u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 590u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 590u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F0054; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0050u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001F0050u) [[unlikely]] return; }
L_001F0050:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F0054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F005Cu);  if (depth < kMaxDepth) unit_003B(c, 36u, depth + 1u); else { c.pc = 0x001EC6C0u; return; } if (c.pc != 0x001F005Cu) [[unlikely]] return; }
L_001F005C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F00A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0074u); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F0074u) [[unlikely]] return; }
L_001F0074:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[5], 0u + 52u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[7], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F009Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001F009Cu) [[unlikely]] return; }
L_001F009C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0344; } }
L_001F00A4:
    st8((c.r[16].w[0] + 589u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001F00A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0344; } }
L_001F00B0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 589u));
    set32(c.r[3], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F00D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F00C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001F00C8u) [[unlikely]] return; }
L_001F00C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0344; } }
L_001F00D0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;  if (t) { goto L_001F0110; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F0110; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001F0110; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] > 0; c.r[3].d[0] = c.r[4].d[0] | 64ull;  if (t) { goto L_001F0108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0100u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x001F0100u) [[unlikely]] return; }
L_001F0100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0344; } }
L_001F0108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 589u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F0344; } }
L_001F0110:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F013C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[18], 0u + 57u);  if (t) { goto L_001F013C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0134u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F0134u) [[unlikely]] return; }
L_001F0134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0344; } }
L_001F013C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F0200; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F0200; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F0200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F016Cu);  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001F016Cu) [[unlikely]] return; }
L_001F016C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0344; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 612u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 464u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[18], 0u + 51u);  if (t) { goto L_001F01DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31080u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F01DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F01A8u);  if (depth < kMaxDepth) unit_0034(c, 164u, depth + 1u); else { c.pc = 0x001D1FE0u; return; } if (c.pc != 0x001F01A8u) [[unlikely]] return; }
L_001F01A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 190u);  if (t) { goto L_001F01DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F01B8u);  if (depth < kMaxDepth) unit_0034(c, 166u, depth + 1u); else { c.pc = 0x001D2040u; return; } if (c.pc != 0x001F01B8u) [[unlikely]] return; }
L_001F01B8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 202u);  if (t) { goto L_001F01DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F01CCu);  if (depth < kMaxDepth) unit_0034(c, 166u, depth + 1u); else { c.pc = 0x001D2040u; return; } if (c.pc != 0x001F01CCu) [[unlikely]] return; }
L_001F01CC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F01DC; } }
    set32(c.r[18], 0u + 202u);
    c.budget -= 1;
L_001F01DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F01F0; } }
    set32(c.r[18], 0u + 55u);
    c.budget -= 1;
L_001F01F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F01F8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F01F8u) [[unlikely]] return; }
L_001F01F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0344; } }
L_001F0200:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 585u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F02AC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001F02AC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001F02AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0234u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001F0234u) [[unlikely]] return; }
L_001F0234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F02AC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 585u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0248u); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0038(c, 62u, depth + 1u); else { c.pc = 0x001E0C50u; return; } if (c.pc != 0x001F0248u) [[unlikely]] return; }
L_001F0248:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41280000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F02AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0268u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 585u)));  if (depth < kMaxDepth) unit_0035(c, 47u, depth + 1u); else { c.pc = 0x001D5120u; return; } if (c.pc != 0x001F0268u) [[unlikely]] return; }
L_001F0268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F02AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0278u); set32(c.r[5], 0u + 231u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F0278u) [[unlikely]] return; }
L_001F0278:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 394u));
    set32(c.r[4], 0u - 65u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[3], 0u - 2u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F0344; } }
L_001F02AC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 585u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F0344; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001F0344; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001F0344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F02E0u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001F02E0u) [[unlikely]] return; }
L_001F02E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0344; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 585u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F02F4u); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0038(c, 56u, depth + 1u); else { c.pc = 0x001E0A70u; return; } if (c.pc != 0x001F02F4u) [[unlikely]] return; }
L_001F02F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41280000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F0344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0314u); set32(c.r[5], 0u + 241u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F0314u) [[unlikely]] return; }
L_001F0314:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 394u));
    set32(c.r[4], 0u - 65u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[3], 0u - 2u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
L_001F0344:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_001F0348:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 560u);  c.pc = t; return; }
L_001F0370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] << 29);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21304u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F03A4u); c.f[20] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0041(c, 158u, depth + 1u); else { c.pc = 0x00207020u; return; } if (c.pc != 0x001F03A4u) [[unlikely]] return; }
L_001F03A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = c.f[20];  if (t) { goto L_001F044C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F03B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001F03B4u) [[unlikely]] return; }
L_001F03B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F0448; } }
    c.f[1] = ld32((c.r[1].w[0] + 32032u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    c.f[20] = fp::add(c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F03E8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[20], c.f[0]);  if (t) { goto L_001F0408; } }
L_001F03E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F0408; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 3;
L_001F0408:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001F042C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[20], c.f[0]);  if (t) { goto L_001F0448; } }
L_001F042C:
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F0448; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 3;
L_001F0448:
    c.f[0] = c.f[20];
    c.budget -= 1;
L_001F044C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F0460:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0480u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0041(c, 158u, depth + 1u); else { c.pc = 0x00207020u; return; } if (c.pc != 0x001F0480u) [[unlikely]] return; }
L_001F0480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0514; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F04A4; } }
    c.f[21] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[21];  if (t) { goto L_001F053C; } }
L_001F04A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] + 21296u));
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 944u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F04CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 29u, depth + 1u); else { c.pc = 0x001F0370u; return; } if (c.pc != 0x001F04CCu) [[unlikely]] return; }
L_001F04CC:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F04D8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001F04D8u) [[unlikely]] return; }
L_001F04D8:
    set32(c.r[3], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[29].w[0] + 64u);
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
    c.f[20] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.f[21] = ld32((c.r[29].w[0] + 128u));  if (t) { goto L_001F053C; } }
L_001F0514:
    set32(c.r[4], ld32((c.r[16].w[0] + 944u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 28236u);
    set32(c.r[2], c.r[2].w[0] - 28188u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[21] = ld32((c.r[3].w[0]));
    c.f[20] = ld32((c.r[2].w[0]));
    c.budget -= 10;
L_001F053C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);  if (t) { goto L_001F0550; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    c.budget -= 2;
L_001F0550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0558u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F0558u) [[unlikely]] return; }
L_001F0558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001F056C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001F056C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F056C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 40u);  if (t) { goto L_001F0584; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + 32u);  if (t) { goto L_001F0584; } }
    set32(c.r[2], c.r[3].w[0] + 40u);
    c.budget -= 1;
L_001F0584:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[2].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F05BC; } }
    set32(c.r[2], c.r[3].w[0] - 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[1].w[0] + 21400u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[0], c.f[1]);  if (t) { goto L_001F05E4; } }
L_001F05BC:
    set32(c.r[2], c.r[3].w[0] - 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[1].w[0] + 21392u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
L_001F05E4:
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F05F4u); c.f[20] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001F05F4u) [[unlikely]] return; }
L_001F05F4:
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F067C; } }
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_001F0680; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1AC0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xC2000000u);  if (t) { goto L_001F064C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC19C0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F067C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2000000u);
    c.budget -= 1;
L_001F064C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F0678; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F067C; } }
L_001F0678:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001F067C:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 1;
L_001F0680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.f[12] = c.f[20] ^ fp::kSign;  if (t) { goto L_001F06A4; } }
    c.f[0] = ld32((c.r[16].w[0] + 224u));
    c.f[0] = fp::add(c.f[0], c.f[21]);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 232u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 232u), c.f[0]);
    c.f[12] = c.f[20] ^ fp::kSign;
    c.budget -= 7;
L_001F06A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F06ACu); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_0011(c, 97u, depth + 1u); else { c.pc = 0x00145DD0u; return; } if (c.pc != 0x001F06ACu) [[unlikely]] return; }
L_001F06AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[1].w[0] + 21680u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001F06E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF400000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[5].w[0]), 0u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_001F0710; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001F0710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F071Cu); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F071Cu) [[unlikely]] return; }
L_001F071C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001F0728; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001F0728:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 40u);  if (t) { goto L_001F0738; } }
    set32(c.r[3], c.r[4].w[0] + 32u);
    c.budget -= 1;
L_001F0738:
    c.r[4].d[0] = ld8((c.r[3].w[0] + 2u));
    c.r[3].d[0] = c.r[4].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F0770; } }
    set32(c.r[3], c.r[4].w[0] - 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[1].w[0] + 21400u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = c.r[3].w[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[1] = fp::add(c.f[0], c.f[1]);  if (t) { goto L_001F0798; } }
L_001F0770:
    set32(c.r[3], c.r[4].w[0] - 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[1].w[0] + 21392u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
L_001F0798:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F07C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F07F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F09CC; } }
L_001F07F0:
    c.f[0] = ld32((c.r[17].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F0808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001F09D0; } }
L_001F0808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0810u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F0810u) [[unlikely]] return; }
L_001F0810:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F08E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0824u);  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x001F0824u) [[unlikely]] return; }
L_001F0824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F08E0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 944u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F08E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0840u);  if (depth < kMaxDepth) unit_0034(c, 180u, depth + 1u); else { c.pc = 0x001D23D0u; return; } if (c.pc != 0x001F0840u) [[unlikely]] return; }
L_001F0840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F08E0; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 369u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0854u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 171u, depth + 1u); else { c.pc = 0x001D2220u; return; } if (c.pc != 0x001F0854u) [[unlikely]] return; }
L_001F0854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F08E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 170u);
    set32(c.r[4], c.r[4].w[0] + 28352u);
    c.budget -= 3;
L_001F0868:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F0890; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F0898; } }
L_001F0890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F0868u | kUnwind; return; } goto L_001F0868; } }
L_001F0898:
    st32((c.r[17].w[0] + 644u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F08A8u); set32(c.r[5], 0u + 1683u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F08A8u) [[unlikely]] return; }
L_001F08A8:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 392u));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], 0u + 1683u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F08D8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001F08D8u) [[unlikely]] return; }
L_001F08D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F09CC; } }
L_001F08E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F08E8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F08E8u) [[unlikely]] return; }
L_001F08E8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F09BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F08FCu);  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x001F08FCu) [[unlikely]] return; }
L_001F08FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F09BC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 944u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F09C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F091Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 182u, depth + 1u); else { c.pc = 0x001D24B0u; return; } if (c.pc != 0x001F091Cu) [[unlikely]] return; }
L_001F091C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F09BC; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 369u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0930u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 171u, depth + 1u); else { c.pc = 0x001D2220u; return; } if (c.pc != 0x001F0930u) [[unlikely]] return; }
L_001F0930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F09BC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 170u);
    set32(c.r[4], c.r[4].w[0] + 28352u);
    c.budget -= 3;
L_001F0944:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F096C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F0974; } }
L_001F096C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F0944u | kUnwind; return; } goto L_001F0944; } }
L_001F0974:
    st32((c.r[17].w[0] + 644u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0984u); set32(c.r[5], 0u + 1684u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F0984u) [[unlikely]] return; }
L_001F0984:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 392u));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], 0u + 1684u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F09B4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001F09B4u) [[unlikely]] return; }
L_001F09B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F09C8; } }
L_001F09BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F09C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F09CC; } }
L_001F09C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F09CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001F09D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F09E0:
    set32(c.r[29], c.r[29].w[0] - 624u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 27984u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[29].w[0] + 592u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0A1Cu); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F0A1Cu) [[unlikely]] return; }
L_001F0A1C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0B4C; } }
    c.f[1] = ld32((c.r[18].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F0B4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0A4Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x001F0A4Cu) [[unlikely]] return; }
L_001F0A4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0B4C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.f[0] = ld32((c.r[29].w[0] + 592u));
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F0AA8; } }
    c.f[0] = ld32((c.r[29].w[0] + 600u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F0AA8; } }
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 596u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F0AA8; } }
    c.f[0] = ld32((c.r[29].w[0] + 604u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F0AAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001F0AAC; } }
L_001F0AA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F0AAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0B4C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0AC0u); set32(c.r[5], 0u + 660u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F0AC0u) [[unlikely]] return; }
L_001F0AC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[1].w[0] + 21608u));
    c.f[1] = ld32((c.r[18].w[0] + 224u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 224u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 232u));
    c.f[0] = ld32((c.r[1].w[0] + 21608u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[18].w[0] + 232u), c.f[0]);  if (t) { goto L_001F0AF4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001F0AF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B00u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F0B00u) [[unlikely]] return; }
L_001F0B00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001F0B14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001F0B14; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F0B14:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F2EEC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21640u));
    c.f[0] = ld32((c.r[18].w[0] + 224u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 232u));
    c.f[1] = ld32((c.r[1].w[0] + 21640u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 72u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_001F2EF0; } }
L_001F0B4C:
    set32(c.r[3], ld32((c.r[18].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F0BEC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 31616u);  if (t) { goto L_001F0B98; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    c.budget -= 1;
L_001F0B70:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0B94; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B8Cu); set32(c.r[5], 0u + 198u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F0B8Cu) [[unlikely]] return; }
L_001F0B8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2EEC; } }
L_001F0B94:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_001F0B98:
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F0B70u | kUnwind; return; } goto L_001F0B70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 31616u);  if (t) { goto L_001F0BE0; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    c.budget -= 1;
L_001F0BB8:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0BDC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0BD4u); set32(c.r[5], 0u + 203u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F0BD4u) [[unlikely]] return; }
L_001F0BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2EEC; } }
L_001F0BDC:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_001F0BE0:
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F0BB8u | kUnwind; return; } goto L_001F0BB8; } }
L_001F0BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0BF4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F0BF4u) [[unlikely]] return; }
L_001F0BF4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0C30; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 464u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F0C30; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 371u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F0C30; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 474u));
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[18].w[0] + 474u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001F0C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0C38u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F0C38u) [[unlikely]] return; }
L_001F0C38:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F0DA0; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 371u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F0DA0; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F0DA0; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F2EEC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 368u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001F0C94; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001F0CAC; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001F0C94:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001F0CAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[18].w[0] + 212u);
    c.f[0] = ld32((c.r[1].w[0] + 21680u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[13] = ld32((c.r[1].w[0] + 21288u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0CC8u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x001F0CC8u) [[unlikely]] return; }
L_001F0CC8:
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 70u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F0CE8; } }
    st32((c.r[18].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 168u), 0u);
    st32((c.r[18].w[0] + 172u), 0u);
    st32((c.r[18].w[0] + 176u), 0u);
    c.budget -= 4;
L_001F0CE8:
    c.r[7].d[0] = ld8((c.r[18].w[0] + 368u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[6].w[0] - 28236u);
    c.f[0] = ld32((c.r[18].w[0] + 224u));
    set32(c.r[5], c.r[5].w[0] - 28188u);
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[4], c.r[18].w[0] + 224u);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 224u), c.f[0]);
    c.r[6].d[0] = ld8((c.r[18].w[0] + 368u));
    c.f[0] = ld32((c.r[18].w[0] + 232u));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 232u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 392u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0D50u); st8((c.r[18].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x001F0D50u) [[unlikely]] return; }
L_001F0D50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x427C0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2EEC; } }
    c.r[7].d[0] = ld8((c.r[18].w[0] + 392u));
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 17u);
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[18].w[0] + 392u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 392u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[18].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2EEC; } }
L_001F0DA0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 371u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F0F40; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0F40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0DC4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 90u, depth + 1u); else { c.pc = 0x001D0BC0u; return; } if (c.pc != 0x001F0DC4u) [[unlikely]] return; }
L_001F0DC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0DF8; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 164u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0DDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001F0DDCu) [[unlikely]] return; }
L_001F0DDC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001F0DF8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 1705u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F0F40; } }
L_001F0DF8:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 368u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001F0E14; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001F0E2C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001F0E14:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001F0E2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[18].w[0] + 212u);
    c.f[0] = ld32((c.r[1].w[0] + 21680u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[13] = ld32((c.r[1].w[0] + 21288u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0E48u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x001F0E48u) [[unlikely]] return; }
L_001F0E48:
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[3], 0u + 70u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F0E68; } }
    st32((c.r[18].w[0] + 164u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 168u), 0u);
    st32((c.r[18].w[0] + 172u), 0u);
    st32((c.r[18].w[0] + 176u), 0u);
    c.budget -= 4;
L_001F0E68:
    c.r[7].d[0] = ld8((c.r[18].w[0] + 368u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[6].w[0] - 28236u);
    c.f[0] = ld32((c.r[18].w[0] + 224u));
    set32(c.r[5], c.r[5].w[0] - 28188u);
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 224u), c.f[0]);
    c.r[6].d[0] = ld8((c.r[18].w[0] + 368u));
    c.f[0] = ld32((c.r[18].w[0] + 232u));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 232u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 392u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 378u));
    c.budget -= 27;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F2EEC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0EE0u); set32(c.r[5], 0u + 717u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F0EE0u) [[unlikely]] return; }
L_001F0EE0:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 392u));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0EFCu); st8((c.r[18].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F0EFCu) [[unlikely]] return; }
L_001F0EFC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0F20; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 400u));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001F0F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0F28u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F0F28u) [[unlikely]] return; }
L_001F0F28:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F2EEC; } }
    st8((c.r[18].w[0] + 372u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2EEC; } }
L_001F0F40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31472u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F10F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0F58u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F0F58u) [[unlikely]] return; }
L_001F0F58:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F10F4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 768u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F10F4; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F10F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0F84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001F0F84u) [[unlikely]] return; }
L_001F0F84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0FC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0F94u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 90u, depth + 1u); else { c.pc = 0x001D0BC0u; return; } if (c.pc != 0x001F0F94u) [[unlikely]] return; }
L_001F0F94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0FC8; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 164u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0FACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001F0FACu) [[unlikely]] return; }
L_001F0FAC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001F0FC8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 1705u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F10F4; } }
L_001F0FC8:
    set32(c.r[2], ld32((c.r[18].w[0] + 768u)));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F0FE0; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 368u));
    st32((c.r[18].w[0] + 772u), c.r[2].w[0]);
    c.budget -= 2;
L_001F0FE0:
    set32(c.r[3], ld32((c.r[18].w[0] + 768u)));
    set32(c.r[2], 0u + 180u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 768u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 768u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001F1000; } }
    breakpoint(c, 0x001F0FFCu);
    c.budget -= 1;
L_001F1000:
    set32(c.r[2], ld32((c.r[18].w[0] + 772u)));
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[18].w[0] + 212u);
    c.f[0] = ld32((c.r[1].w[0] + 21680u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = c.r[2].d[0] & 3ull;
    c.f[1] = c.r[16].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[13] = ld32((c.r[1].w[0] + 21288u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1034u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x001F1034u) [[unlikely]] return; }
L_001F1034:
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[3], 0u + 70u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F1054; } }
    st32((c.r[18].w[0] + 164u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 168u), 0u);
    st32((c.r[18].w[0] + 172u), 0u);
    st32((c.r[18].w[0] + 176u), 0u);
    c.budget -= 4;
L_001F1054:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - 28236u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 224u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[3], c.r[3].w[0] - 28188u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 224u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 232u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 232u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 378u));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F2EEC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 464u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F10E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31472u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F2EEC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F10C8u); set32(c.r[5], 0u + 112u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001F10C8u) [[unlikely]] return; }
L_001F10C8:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F10D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F10D4u) [[unlikely]] return; }
L_001F10D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 768u), 0u);  if (t) { goto L_001F10EC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F10E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F10E8u); set32(c.r[5], 0u + 717u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F10E8u) [[unlikely]] return; }
L_001F10E8:
    st32((c.r[18].w[0] + 768u), 0u);
    c.budget -= 1;
L_001F10EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2EEC; } }
L_001F10F4:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 395u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 5);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u - 33u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1118u); st8((c.r[18].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0034(c, 90u, depth + 1u); else { c.pc = 0x001D0BC0u; return; } if (c.pc != 0x001F1118u) [[unlikely]] return; }
L_001F1118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F1138; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 395u));
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001F1138:
    set32(c.r[17], ld32((c.r[18].w[0] + 944u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1148u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 32u, depth + 1u); else { c.pc = 0x001F0460u; return; } if (c.pc != 0x001F1148u) [[unlikely]] return; }
L_001F1148:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 620u), c.f[0]);  if (t) { goto L_001F11E0; } }
    c.f[4] = ld32((c.r[18].w[0] + 1020u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[29].w[0] + 620u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[29].w[0] + 620u), c.f[2]);
    c.f[2] = c.f[2];
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F11A4; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001F11C0; } }
L_001F11A4:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001F11C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    set32(c.r[2], c.r[2].w[0] - 28152u);
    set32(c.r[3], c.r[3].w[0] + 4352u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 9));
    c.r[17].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
L_001F11E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F1214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F11F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 97u, depth + 1u); else { c.pc = 0x001D0D70u; return; } if (c.pc != 0x001F11F4u) [[unlikely]] return; }
L_001F11F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F12B0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1208u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001F1208u) [[unlikely]] return; }
L_001F1208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[18].w[0] + 474u));  if (t) { goto L_001F12B4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F1214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F121Cu);  if (depth < kMaxDepth) unit_0034(c, 97u, depth + 1u); else { c.pc = 0x001D0D70u; return; } if (c.pc != 0x001F121Cu) [[unlikely]] return; }
L_001F121C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F1288; } }
    st32((c.r[18].w[0] + 880u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001F12B0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001F1248; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 2;
L_001F1248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1250u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F1250u) [[unlikely]] return; }
L_001F1250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001F1264; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001F1264; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F1264:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1274u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001F1274u) [[unlikely]] return; }
L_001F1274:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1280u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F1280u) [[unlikely]] return; }
L_001F1280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F12B0; } }
L_001F1288:
    set32(c.r[2], ld32((c.r[18].w[0] + 880u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_001F12B0; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[18].w[0] + 172u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F12ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001F12ACu) [[unlikely]] return; }
L_001F12AC:
    st32((c.r[18].w[0] + 880u), c.r[17].w[0]);
    c.budget -= 1;
L_001F12B0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 474u));
    c.budget -= 1;
L_001F12B4:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F15D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F12C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 72u, depth + 1u); else { c.pc = 0x002F8F50u; return; } if (c.pc != 0x001F12C8u) [[unlikely]] return; }
L_001F12C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2EEC; } }
    set32(c.r[3], 0u - 1u);
    st8((c.r[18].w[0] + 585u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 944u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F1398; } }
    c.f[0] = ld32((c.r[18].w[0] + 1020u));
    st32((c.r[29].w[0] + 616u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 984u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F1478; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F1330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1314u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001F1314u) [[unlikely]] return; }
L_001F1314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F1478; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 984u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 585u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F1478; } }
L_001F1330:
    set32(c.r[3], ld32((c.r[18].w[0] + 984u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F1478; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F1478; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F1374; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1368u); set32(c.r[4], c.r[3].w[0] + 224u);  if (depth < kMaxDepth) unit_0038(c, 64u, depth + 1u); else { c.pc = 0x001E0CD0u; return; } if (c.pc != 0x001F1368u) [[unlikely]] return; }
L_001F1368:
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (t) { goto L_001F1378; } }
L_001F1374:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 585u)));
    c.budget -= 1;
L_001F1378:
    c.r[4].d[0] = c.r[16].d[0] << 56;
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1388u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0038(c, 51u, depth + 1u); else { c.pc = 0x001E08F0u; return; } if (c.pc != 0x001F1388u) [[unlikely]] return; }
L_001F1388:
    st32((c.r[29].w[0] + 616u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 585u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_001F1478; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F1398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F13A0u);  if (depth < kMaxDepth) unit_003C(c, 41u, depth + 1u); else { c.pc = 0x001F07C0u; return; } if (c.pc != 0x001F13A0u) [[unlikely]] return; }
L_001F13A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2EEC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 944u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F13B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 29u, depth + 1u); else { c.pc = 0x001F0370u; return; } if (c.pc != 0x001F13B4u) [[unlikely]] return; }
L_001F13B4:
    st32((c.r[29].w[0] + 616u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 944u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F1478; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F1478; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 369u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F13E0u); set32(c.r[5], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_0038(c, 62u, depth + 1u); else { c.pc = 0x001E0C50u; return; } if (c.pc != 0x001F13E0u) [[unlikely]] return; }
L_001F13E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F1458; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 944u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F1458; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 369u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F1458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1420u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 209u, depth + 1u); else { c.pc = 0x001D2D80u; return; } if (c.pc != 0x001F1420u) [[unlikely]] return; }
L_001F1420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F1458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1430u); c.r[4].d[0] = ld8((c.r[18].w[0] + 369u));  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001D5040u; return; } if (c.pc != 0x001F1430u) [[unlikely]] return; }
L_001F1430:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F1458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1440u); c.r[4].d[0] = ld8((c.r[18].w[0] + 369u));  if (depth < kMaxDepth) unit_0035(c, 45u, depth + 1u); else { c.pc = 0x001D50B0u; return; } if (c.pc != 0x001F1440u) [[unlikely]] return; }
L_001F1440:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F1458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1450u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 54u, depth + 1u); else { c.pc = 0x001F5060u; return; } if (c.pc != 0x001F1450u) [[unlikely]] return; }
L_001F1450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2EEC; } }
L_001F1458:
    set32(c.r[2], ld32((c.r[18].w[0] + 944u)));
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1468u); set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (depth < kMaxDepth) unit_0038(c, 51u, depth + 1u); else { c.pc = 0x001E08F0u; return; } if (c.pc != 0x001F1468u) [[unlikely]] return; }
L_001F1468:
    st32((c.r[29].w[0] + 616u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 944u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st8((c.r[18].w[0] + 585u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001F1478:
    st16((c.r[18].w[0] + 560u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 15u);
    st8((c.r[18].w[0] + 589u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 50u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1494u); st8((c.r[18].w[0] + 587u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F1494u) [[unlikely]] return; }
L_001F1494:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    c.f[2] = ld32((c.r[29].w[0] + 616u));
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F14D4; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001F14F0; } }
L_001F14D4:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001F14F0:
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[3], c.r[29].w[0] + 544u);
    set32(c.r[2], c.r[2].w[0] + 4608u);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 560u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 48u);  if (t) { goto L_001F1598; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 585u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F1594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1538u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 209u, depth + 1u); else { c.pc = 0x001D2D80u; return; } if (c.pc != 0x001F1538u) [[unlikely]] return; }
L_001F1538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F1594; } }
    st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[5], 0u - c.r[16].w[0]);
    ld128((c.r[18].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 544u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[2]);
    ld128((c.r[18].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1560u); st128((c.r[29].w[0] + 560u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001F1560u) [[unlikely]] return; }
L_001F1560:
    c.f[1] = ld32((c.r[29].w[0] + 568u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1C00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F1594; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 61u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F158Cu); st8((c.r[18].w[0] + 589u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F158Cu) [[unlikely]] return; }
L_001F158C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2EEC; } }
L_001F1594:
    set32(c.r[4], 0u + 48u);
    c.budget -= 1;
L_001F1598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F15A0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001F15A0u) [[unlikely]] return; }
L_001F15A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001F15C0; } }
    c.f[12] = ld32((c.r[29].w[0] + 616u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F15BCu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x001E1A30u; return; } if (c.pc != 0x001F15BCu) [[unlikely]] return; }
L_001F15BC:
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 1;
L_001F15C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F15C8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001F15C8u) [[unlikely]] return; }
L_001F15C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2EEC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F15D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F15DCu);  if (depth < kMaxDepth) unit_0038(c, 34u, depth + 1u); else { c.pc = 0x001E0580u; return; } if (c.pc != 0x001F15DCu) [[unlikely]] return; }
L_001F15DC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001F16A8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 464u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F1638; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1700u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F162Cu); c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F162Cu) [[unlikely]] return; }
L_001F162C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F16A0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F1638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1640u);  if (depth < kMaxDepth) unit_0038(c, 34u, depth + 1u); else { c.pc = 0x001E0580u; return; } if (c.pc != 0x001F1640u) [[unlikely]] return; }
L_001F1640:
    set32(c.r[17], c.r[2].w[0] + 2u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1650u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001F1650u) [[unlikely]] return; }
L_001F1650:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[17].sd[0] < 7000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001F1670; } }
    c.r[1].d[0] = c.r[17].sd[0] < 7010ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F1674; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F1670:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F1674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F167Cu);  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001F167Cu) [[unlikely]] return; }
L_001F167C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F168C; } }
    set32(c.r[17], 0u + 9587u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001F168C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F16A0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001F16A0u) [[unlikely]] return; }
L_001F16A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2EEC; } }
L_001F16A8:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 474u));
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 32ull;  if (t) { goto L_001F16CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F16C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 72u, depth + 1u); else { c.pc = 0x001E4D10u; return; } if (c.pc != 0x001F16C0u) [[unlikely]] return; }
L_001F16C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[18].w[0] + 379u));  if (t) { goto L_001F2DBC; } }
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 1;
L_001F16CC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_001F17E4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F16E0u); st16((c.r[18].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0034(c, 150u, depth + 1u); else { c.pc = 0x001D1870u; return; } if (c.pc != 0x001F16E0u) [[unlikely]] return; }
L_001F16E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F1708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F16F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 95u, depth + 1u); else { c.pc = 0x001E1750u; return; } if (c.pc != 0x001F16F0u) [[unlikely]] return; }
L_001F16F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F16FCu); set32(c.r[5], 0u + 234u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F16FCu) [[unlikely]] return; }
L_001F16FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F17D8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F1708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1710u); st32((c.r[18].w[0] + 636u), 0u);  if (depth < kMaxDepth) unit_0038(c, 95u, depth + 1u); else { c.pc = 0x001E1750u; return; } if (c.pc != 0x001F1710u) [[unlikely]] return; }
L_001F1710:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F171Cu); set32(c.r[5], 0u + 220u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F171Cu) [[unlikely]] return; }
L_001F171C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1724u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 14u, depth + 1u); else { c.pc = 0x001E4190u; return; } if (c.pc != 0x001F1724u) [[unlikely]] return; }
L_001F1724:
    ld128((c.r[18].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 528u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 368u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F173Cu); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001F173Cu) [[unlikely]] return; }
L_001F173C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1744u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F1744u) [[unlikely]] return; }
L_001F1744:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F2EEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1758u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F1758u) [[unlikely]] return; }
L_001F1758:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F2EEC; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F2EEC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F2EEC; } }
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1D80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2EEC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41D80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F2EEC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F2EEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F17C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 168u, depth + 1u); else { c.pc = 0x001D2090u; return; } if (c.pc != 0x001F17C8u) [[unlikely]] return; }
L_001F17C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2EEC; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 2;
L_001F17D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2EEC; } }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 1;
L_001F17E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F2DB8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F18BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1804u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F1804u) [[unlikely]] return; }
L_001F1804:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F1820; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F18BC; } }
L_001F1820:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31080u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001F1844; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001F1870; } }
L_001F1844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F184Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 164u, depth + 1u); else { c.pc = 0x001D1FE0u; return; } if (c.pc != 0x001F184Cu) [[unlikely]] return; }
L_001F184C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2EEC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1860u); set32(c.r[5], 0u + 191u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F1860u) [[unlikely]] return; }
L_001F1860:
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 756u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2EEC; } }
L_001F1870:
    set32(c.r[3], ld32((c.r[18].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F188C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001F18BC; } }
L_001F188C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1894u); set32(c.r[4], 0u + 190u);  if (depth < kMaxDepth) unit_0034(c, 166u, depth + 1u); else { c.pc = 0x001D2040u; return; } if (c.pc != 0x001F1894u) [[unlikely]] return; }
L_001F1894:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F2EEC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F18ACu); set32(c.r[5], 0u + 190u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F18ACu) [[unlikely]] return; }
L_001F18AC:
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 756u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2EEC; } }
L_001F18BC:
    set32(c.r[3], ld32((c.r[18].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F2478; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.f[20] = c.r[2].w[0];
    set32(c.r[2], 0u + 35u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F18F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[20] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_001F18F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F18FCu);  if (depth < kMaxDepth) unit_0039(c, 24u, depth + 1u); else { c.pc = 0x001E4490u; return; } if (c.pc != 0x001F18FCu) [[unlikely]] return; }
L_001F18FC:
    st32((c.r[18].w[0] + 644u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 644u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001F20CC; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 371u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F20CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[18].w[0] + 228u));
    c.f[1] = ld32((c.r[2].w[0] + 228u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_001F1950; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F1950:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[3], c.r[4].w[0] >> 1);  if (t) { goto L_001F1968; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001F1980; } }
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.budget -= 1;
L_001F1968:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001F1980:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F199C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F19A0; } }
L_001F199C:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001F19A0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F20CC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 644u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[2], 0u + 35u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[19], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 11;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001F1B04; } }
    ld128((c.r[18].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[16].w[0] + 224u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[7], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 512u);
    set32(c.r[2], c.r[2].w[0] - 27968u);
    set32(c.r[3], c.r[29].w[0] + 496u);
    set32(c.r[8], c.r[29].w[0] + 432u);
    ld128((c.r[6].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    ld128((c.r[4].w[0]) & ~15u, c.r[4]);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    st128((c.r[8].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[8].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[8].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A60u); set32(c.r[5], c.r[16].w[0] + 208u);  if (depth < kMaxDepth) unit_0011(c, 53u, depth + 1u); else { c.pc = 0x00145110u; return; } if (c.pc != 0x001F1A60u) [[unlikely]] return; }
L_001F1A60:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A6Cu); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0011(c, 19u, depth + 1u); else { c.pc = 0x00144490u; return; } if (c.pc != 0x001F1A6Cu) [[unlikely]] return; }
L_001F1A6C:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A78u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x001F1A78u) [[unlikely]] return; }
L_001F1A78:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A84u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x001F1A84u) [[unlikely]] return; }
L_001F1A84:
    c.f[6] = ld32((c.r[29].w[0] + 512u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = ld32((c.r[29].w[0] + 500u));
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.f[4] = ld32((c.r[29].w[0] + 516u));
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.f[3] = ld32((c.r[29].w[0] + 496u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[2] = ld32((c.r[29].w[0] + 520u));
    set32(c.r[3], c.r[29].w[0] + 416u);
    c.f[1] = ld32((c.r[29].w[0] + 504u));
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[6], c.f[5]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    c.facc = fp::mul(c.f[2], c.f[3]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[6], c.f[1]));
    c.facc = fp::mul(c.f[4], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[5]));
    st32((c.r[29].w[0] + 120u), c.f[7]);
    st32((c.r[29].w[0] + 116u), c.f[3]);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    mmi::paddub(c.r[2], c.r[2], c.r[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 420u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 29;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], 0u + 1906u);  if (t) { goto L_001F1B04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1903u);  if (t) { goto L_001F1B04; } }
    set32(c.r[5], 0u + 1906u);
    c.budget -= 1;
L_001F1B04:
    set32(c.r[2], 0u + 101u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001F1B1C; } }
    set32(c.r[2], 0u + 103u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001F1B20; } }
L_001F1B1C:
    set32(c.r[5], 0u + 1913u);
    c.budget -= 1;
L_001F1B20:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_001F1B94; } }
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[18].w[0] + 208u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B44u); st128((c.r[18].w[0] + 224u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_003A(c, 284u, depth + 1u); else { c.pc = 0x001EBF70u; return; } if (c.pc != 0x001F1B44u) [[unlikely]] return; }
L_001F1B44:
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[8]);
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    set32(c.r[7], c.r[3].w[0] << 6);
    set32(c.r[6], 0u - 65u);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    st128((c.r[18].w[0] + 224u) & ~15u, c.r[8]);
    c.r[8].d[0] = ld8((c.r[18].w[0] + 394u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[18].w[0] + 394u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F2EEC; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 1;
L_001F1B94:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[18].w[0] + 224u);  if (t) { goto L_001F1FD0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 15010u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F1FCC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_001F1BC0; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 2;
L_001F1BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1BC8u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F1BC8u) [[unlikely]] return; }
L_001F1BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001F1BDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001F1BDC; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F1BDC:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001F1BE4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1BF0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 105u, depth + 1u); else { c.pc = 0x001CD570u; return; } if (c.pc != 0x001F1BF0u) [[unlikely]] return; }
L_001F1BF0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F1C54; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[20].d[0];  if (t) { goto L_001F1C4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C10u); c.r[5].d[0] = c.r[2].d[0] | 16722ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F1C10u) [[unlikely]] return; }
L_001F1C10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001F1C24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001F1C24; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F1C24:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], 0u + 1601u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    st32((c.r[3].w[0] + 608u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 608u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F1C48; } }
    set32(c.r[19], 0u - 1000u);
    c.budget -= 1;
L_001F1C48:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001F1C4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F1BE4u | kUnwind; return; } goto L_001F1BE4; } }
L_001F1C54:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001F1CEC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1646u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C6Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 284u, depth + 1u); else { c.pc = 0x001EBF70u; return; } if (c.pc != 0x001F1C6Cu) [[unlikely]] return; }
L_001F1C6C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C78u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 30u, depth + 1u); else { c.pc = 0x001D8350u; return; } if (c.pc != 0x001F1C78u) [[unlikely]] return; }
L_001F1C78:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C84u); set32(c.r[5], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_0011(c, 48u, depth + 1u); else { c.pc = 0x00144FA0u; return; } if (c.pc != 0x001F1C84u) [[unlikely]] return; }
L_001F1C84:
    ld128((c.r[18].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[18].w[0] + 224u);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], c.r[18].w[0] + 224u);
    set32(c.r[3], c.r[18].w[0] + 224u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    st32((c.r[18].w[0] + 232u), c.f[0]);
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
    set32(c.r[3], 0u + 254u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 212u));
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 212u), c.f[0]);  if (t) { goto L_001F1FC4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001F1CEC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001F1E44; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    c.f[1] = ld32((c.r[2].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 212u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    c.f[1] = ld32((c.r[2].w[0] + 212u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F1D3C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 212u), c.f[0]);  if (t) { goto L_001F1D60; } }
L_001F1D3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F1D60; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_001F1D60:
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    c.f[1] = ld32((c.r[2].w[0] + 212u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F1D90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 212u), c.f[0]);  if (t) { goto L_001F1DB4; } }
L_001F1D90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F1DB4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_001F1DB4:
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1648u);
    c.f[0] = ld32((c.r[2].w[0] + 212u));
    st32((c.r[16].w[0] + 212u), c.f[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 608u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DD4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 280u, depth + 1u); else { c.pc = 0x001EBEE0u; return; } if (c.pc != 0x001F1DD4u) [[unlikely]] return; }
L_001F1DD4:
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[7]);
    set32(c.r[2], 0u - 2u);
    set32(c.r[6], ld32((c.r[29].w[0] + 608u)));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[6].w[0] + 224u) & ~15u, c.r[7]);
    set32(c.r[7], ld32((c.r[29].w[0] + 608u)));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 393u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E08u); st8((c.r[7].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 30u, depth + 1u); else { c.pc = 0x001D8350u; return; } if (c.pc != 0x001F1E08u) [[unlikely]] return; }
L_001F1E08:
    c.f[1] = ld32((c.r[18].w[0] + 212u));
    c.f[0] = ld32((c.r[16].w[0] + 212u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2EEC; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 188u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 608u)));
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 608u)));
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0] + 64u) & ~15u, c.r[3]);  if (t) { goto L_001F1FC4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001F1E44:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_001F2EEC; } }
    set32(c.r[2], c.r[29].w[0] + 304u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 320u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[3]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[29].w[0] + 308u));
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[2].w[0] + 212u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F1E8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_001F1E90; } }
L_001F1E8C:
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 1;
L_001F1E90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F1EC8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = 0u;
    c.f[2] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F1EC8; } }
    c.f[2] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_001F1EC8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F1EE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001F1EEC; } }
L_001F1EE4:
    c.f[2] = c.f[2] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_001F1EEC:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F1F20; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 608u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 612u)));
    set32(c.r[7], 0u + 1647u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1F18u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC060u; return; } if (c.pc != 0x001F1F18u) [[unlikely]] return; }
L_001F1F18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_001F1F3C; } }
L_001F1F20:
    set32(c.r[5], ld32((c.r[29].w[0] + 612u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[7], 0u + 1647u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1F38u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC060u; return; } if (c.pc != 0x001F1F38u) [[unlikely]] return; }
L_001F1F38:
    set32(c.r[3], ld32((c.r[29].w[0] + 608u)));
    c.budget -= 1;
L_001F1F3C:
    set32(c.r[6], 0u - 2u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[3].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 612u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1F74u); st8((c.r[3].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 30u, depth + 1u); else { c.pc = 0x001D8350u; return; } if (c.pc != 0x001F1F74u) [[unlikely]] return; }
L_001F1F74:
    c.f[1] = ld32((c.r[18].w[0] + 212u));
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F1F98; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 188u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 608u)));
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 4;
L_001F1F98:
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[29].w[0] + 608u)));
    st128((c.r[3].w[0] + 208u) & ~15u, c.r[4]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[29].w[0] + 608u)));
    st128((c.r[3].w[0] + 224u) & ~15u, c.r[4]);
    set32(c.r[4], ld32((c.r[29].w[0] + 612u)));
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 208u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 224u) & ~15u, c.r[3]);
    c.budget -= 11;
L_001F1FC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2EEC; } }
L_001F1FCC:
    set32(c.r[4], c.r[18].w[0] + 224u);
    c.budget -= 1;
L_001F1FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1FD8u); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001F1FD8u) [[unlikely]] return; }
L_001F1FD8:
    st32((c.r[18].w[0] + 652u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[2] = ld32((c.r[18].w[0] + 228u));
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F2018; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F200Cu); set32(c.r[5], 0u + 15020u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F200Cu) [[unlikely]] return; }
L_001F200C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 240u)));  if (t) { goto L_001F2024; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F2018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2020u); set32(c.r[5], 0u + 15080u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F2020u) [[unlikely]] return; }
L_001F2020:
    set32(c.r[4], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 1;
L_001F2024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F202Cu); set32(c.r[5], ld32((c.r[16].w[0] + 240u)));  if (depth < kMaxDepth) unit_0011(c, 26u, depth + 1u); else { c.pc = 0x00144590u; return; } if (c.pc != 0x001F202Cu) [[unlikely]] return; }
L_001F202C:
    st32((c.r[18].w[0] + 212u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[7], 0u + 1u);
    st32((c.r[18].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2050u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001F2050u) [[unlikely]] return; }
L_001F2050:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2060u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F2060u) [[unlikely]] return; }
L_001F2060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001F2074; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001F2074; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F2074:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2084u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F2084u) [[unlikely]] return; }
L_001F2084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001F2098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001F2098; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F2098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F20A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001F20A0u) [[unlikely]] return; }
L_001F20A0:
    set32(c.r[5], ld32((c.r[18].w[0] + 912u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 8996u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001F2DB8; } }
L_001F20CC:
    ld128((c.r[18].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 288u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 368u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F20E4u); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001F20E4u) [[unlikely]] return; }
L_001F20E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F20ECu);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001F20ECu) [[unlikely]] return; }
L_001F20EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2DB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21264u));
    c.f[1] = ld32((c.r[29].w[0] + 288u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001F2158; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21272u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F2154; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21268u));
    c.f[1] = ld32((c.r[29].w[0] + 296u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F2154; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21276u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F2154; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001F2158; } }
L_001F2154:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F2158:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F2DB8; } }
    c.f[1] = ld32((c.r[18].w[0] + 228u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2DB8; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 371u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F2DB8; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 368u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 31232u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F21CC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F21B8u); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F21B8u) [[unlikely]] return; }
L_001F21B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F21C4u); set32(c.r[5], 0u + 264u);  if (depth < kMaxDepth) unit_0038(c, 132u, depth + 1u); else { c.pc = 0x001E1F10u; return; } if (c.pc != 0x001F21C4u) [[unlikely]] return; }
L_001F21C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2DB8; } }
L_001F21CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], 0u + 11u);
    set32(c.r[3], c.r[3].w[0] - 27952u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[17].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_001F22C8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[2], 0u + 10u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001F2200; } }
    breakpoint(c, 0x001F21FCu);
    c.budget -= 1;
L_001F2200:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F2240; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F2240; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F2240; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F2240; } }
    set32(c.r[2], 0u + 65u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F2244; } }
L_001F2240:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001F2244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F224Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F224Cu) [[unlikely]] return; }
L_001F224C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2260u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F2260u) [[unlikely]] return; }
L_001F2260:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2274; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001F227C; } }
L_001F2274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 4u);  if (t) { goto L_001F22C4; } }
L_001F227C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 6u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28320u);  if (t) { goto L_001F22B8; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    c.budget -= 1;
L_001F2294:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F22B4; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F22B4; } }
    set32(c.r[17], 0u + 4u);
    c.budget -= 1;
L_001F22B4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001F22B8:
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F2294u | kUnwind; return; } goto L_001F2294; } }
L_001F22C4:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_001F22C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001F22FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F22D8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F22D8u) [[unlikely]] return; }
L_001F22D8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F22F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F22ECu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F22ECu) [[unlikely]] return; }
L_001F22EC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F22FC; } }
L_001F22F8:
    set32(c.r[17], 0u + 8u);
    c.budget -= 1;
L_001F22FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2304u);  if (depth < kMaxDepth) unit_0044(c, 27u, depth + 1u); else { c.pc = 0x00210C50u; return; } if (c.pc != 0x001F2304u) [[unlikely]] return; }
L_001F2304:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F231Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 116u, depth + 1u); else { c.pc = 0x002099F0u; return; } if (c.pc != 0x001F231Cu) [[unlikely]] return; }
L_001F231C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 15471u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[2].w[0] + 464u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 644u), c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 480u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F234Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 284u, depth + 1u); else { c.pc = 0x001EBF70u; return; } if (c.pc != 0x001F234Cu) [[unlikely]] return; }
L_001F234C:
    set32(c.r[2], c.r[16].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], 0u + 1u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[11], 0u - 2u);
    set32(c.r[20], c.r[4].w[0] << 3);
    set32(c.r[9], 0u - 129u);
    c.f[1] = ld32((c.r[18].w[0] + 212u));
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    c.r[12].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[17], c.r[4].w[0] << 4);
    set32(c.r[10], c.r[3].w[0] << 7);
    set32(c.r[2], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[7], 0u - 9u);
    set32(c.r[8], c.r[2].w[0] << 3);
    set32(c.r[3], 0u - 2u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[2], 0u + 1u);
    c.r[6].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[24], 0u - 129u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[19], 0u - 9u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[15], 0u - 17u);
    st32((c.r[16].w[0] + 212u), c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    c.r[25].d[0] = ld8((c.r[18].w[0] + 393u));
    set32(c.r[13], c.r[13].w[0] + 31232u);
    set32(c.r[14], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 15471u);
    c.r[11].d[0] = c.r[25].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[18].w[0] + 393u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[18].w[0] + 392u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[18].w[0] + 392u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[18].w[0] + 397u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[18].w[0] + 397u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[24].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[20].d[0];
    st8((c.r[16].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[15].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[17].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 368u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[13].w[0] + c.r[2].w[0]);
    c.budget -= 72;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F246Cu); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));  if (depth < kMaxDepth) unit_0038(c, 132u, depth + 1u); else { c.pc = 0x001E1F10u; return; } if (c.pc != 0x001F246Cu) [[unlikely]] return; }
L_001F246C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2DB8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F2478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2480u);  if (depth < kMaxDepth) unit_0039(c, 24u, depth + 1u); else { c.pc = 0x001E4490u; return; } if (c.pc != 0x001F2480u) [[unlikely]] return; }
L_001F2480:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2490u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007E(c, 51u, depth + 1u); else { c.pc = 0x002F8BA0u; return; } if (c.pc != 0x001F2490u) [[unlikely]] return; }
L_001F2490:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F24A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001F2C8C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F24A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F24ACu);  if (depth < kMaxDepth) unit_003C(c, 41u, depth + 1u); else { c.pc = 0x001F07C0u; return; } if (c.pc != 0x001F24ACu) [[unlikely]] return; }
L_001F24AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F24C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001F2C8C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F24C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F24C8u);  if (depth < kMaxDepth) unit_0058(c, 56u, depth + 1u); else { c.pc = 0x00260540u; return; } if (c.pc != 0x001F24C8u) [[unlikely]] return; }
L_001F24C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F24D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001F2C8C; } }
L_001F24D8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F2514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F24F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 76u, depth + 1u); else { c.pc = 0x001D5810u; return; } if (c.pc != 0x001F24F0u) [[unlikely]] return; }
L_001F24F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001F2508; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2504u); set32(c.r[5], 0u + 1672u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F2504u) [[unlikely]] return; }
L_001F2504:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001F2508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_001F2C90; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F2514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F251Cu);  if (depth < kMaxDepth) unit_0035(c, 88u, depth + 1u); else { c.pc = 0x001D5D30u; return; } if (c.pc != 0x001F251Cu) [[unlikely]] return; }
L_001F251C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F25C0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 944u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 21672u));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2580; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_001F25A0; } }
L_001F2580:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F25A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 3;
L_001F25A0:
    st32((c.r[18].w[0] + 212u), c.f[1]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F25B0u); set32(c.r[5], 0u + 12572u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F25B0u) [[unlikely]] return; }
L_001F25B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F25B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 90u, depth + 1u); else { c.pc = 0x001D5D70u; return; } if (c.pc != 0x001F25B8u) [[unlikely]] return; }
L_001F25B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001F2C8C; } }
L_001F25C0:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001F2874; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 369u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F25D8u); set32(c.r[5], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_0038(c, 62u, depth + 1u); else { c.pc = 0x001E0C50u; return; } if (c.pc != 0x001F25D8u) [[unlikely]] return; }
L_001F25D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F2680; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F267C; } }
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F267C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 369u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F267C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2624u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 209u, depth + 1u); else { c.pc = 0x001D2D80u; return; } if (c.pc != 0x001F2624u) [[unlikely]] return; }
L_001F2624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F267C; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 369u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 31224u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F2C8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2650u);  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001D5040u; return; } if (c.pc != 0x001F2650u) [[unlikely]] return; }
L_001F2650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2C8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2660u); c.r[4].d[0] = ld8((c.r[18].w[0] + 369u));  if (depth < kMaxDepth) unit_0035(c, 45u, depth + 1u); else { c.pc = 0x001D50B0u; return; } if (c.pc != 0x001F2660u) [[unlikely]] return; }
L_001F2660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2C8C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2674u); set32(c.r[5], 0u + 175u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F2674u) [[unlikely]] return; }
L_001F2674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001F2C8C; } }
L_001F267C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F2680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2688u);  if (depth < kMaxDepth) unit_0035(c, 76u, depth + 1u); else { c.pc = 0x001D5810u; return; } if (c.pc != 0x001F2688u) [[unlikely]] return; }
L_001F2688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2C8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2698u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 209u, depth + 1u); else { c.pc = 0x001D2D80u; return; } if (c.pc != 0x001F2698u) [[unlikely]] return; }
L_001F2698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2C8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F26A8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F26A8u) [[unlikely]] return; }
L_001F26A8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F26C8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F26C0u); set32(c.r[5], 0u + 1553u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F26C0u) [[unlikely]] return; }
L_001F26C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001F2C8C; } }
L_001F26C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 944u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F26E4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 124u, depth + 1u); else { c.pc = 0x001D11B0u; return; } if (c.pc != 0x001F26E4u) [[unlikely]] return; }
L_001F26E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2758; } }
    ld128((c.r[18].w[0] + 224u) & ~15u, c.r[3]);
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    set32(c.r[5], 0u - c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2704u); st128((c.r[29].w[0] + 272u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001F2704u) [[unlikely]] return; }
L_001F2704:
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2738; } }
    c.f[1] = ld32((c.r[29].w[0] + 272u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F2758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_001F2758; } }
L_001F2738:
    c.f[1] = ld32((c.r[29].w[0] + 272u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2758; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_001F2758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2760u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F2760u) [[unlikely]] return; }
L_001F2760:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2790; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001F2790; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2780u); set32(c.r[5], 0u + 112u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001F2780u) [[unlikely]] return; }
L_001F2780:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F278Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F278Cu) [[unlikely]] return; }
L_001F278C:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001F2790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2798u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F2798u) [[unlikely]] return; }
L_001F2798:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F2C8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F27ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 67u, depth + 1u); else { c.pc = 0x001D5500u; return; } if (c.pc != 0x001F27ACu) [[unlikely]] return; }
L_001F27AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2C8C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 371u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001F284C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F284C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[3].d[0] = c.r[20].d[0] & 255ull;  if (t) { goto L_001F27F0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F27E4u); set32(c.r[5], 0u + 723u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F27E4u) [[unlikely]] return; }
L_001F27E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001F2C8C; } }
    c.r[3].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 1;
L_001F27F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001F2804; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(3ll);  if (t) { goto L_001F2834; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001F2804:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F2814; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001F2834; } }
L_001F2814:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001F2828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { goto L_001F2834; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001F2828:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F2834; } }
    c.r[20].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_001F2834:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 723u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2844u); st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[20].w[0]));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F2844u) [[unlikely]] return; }
L_001F2844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001F2C8C; } }
L_001F284C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2854u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 68u, depth + 1u); else { c.pc = 0x001D55E0u; return; } if (c.pc != 0x001F2854u) [[unlikely]] return; }
L_001F2854:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001F2C8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2868u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 8u, depth + 1u); else { c.pc = 0x001E4080u; return; } if (c.pc != 0x001F2868u) [[unlikely]] return; }
L_001F2868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001F2C8C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001F2874:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F2C8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2884u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001F2884u) [[unlikely]] return; }
L_001F2884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2C8C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 240u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], 0u + 1u);  if (t) { goto L_001F28B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F28CC; } }
L_001F28B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F28CC; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_001F28CC:
    set32(c.r[4], ld32((c.r[18].w[0] + 240u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], 0u + 1u);  if (t) { goto L_001F28F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001F290C; } }
L_001F28F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[5].w[0] << 1);  if (t) { goto L_001F2910; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_001F290C:
    set32(c.r[3], c.r[5].w[0] << 1);
    c.budget -= 1;
L_001F2910:
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F2C8C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F2C8C; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F2C8C; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F2C8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F294Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 14u, depth + 1u); else { c.pc = 0x001E4190u; return; } if (c.pc != 0x001F294Cu) [[unlikely]] return; }
L_001F294C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2954u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 55u, depth + 1u); else { c.pc = 0x002F8CB0u; return; } if (c.pc != 0x001F2954u) [[unlikely]] return; }
L_001F2954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2C8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2964u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 168u, depth + 1u); else { c.pc = 0x001D2090u; return; } if (c.pc != 0x001F2964u) [[unlikely]] return; }
L_001F2964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2C8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2974u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 77u, depth + 1u); else { c.pc = 0x001D58D0u; return; } if (c.pc != 0x001F2974u) [[unlikely]] return; }
L_001F2974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2C8C; } }
    c.f[1] = ld32((c.r[18].w[0] + 228u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2C8C; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 369u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29A4u); set32(c.r[5], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_0038(c, 62u, depth + 1u); else { c.pc = 0x001E0C50u; return; } if (c.pc != 0x001F29A4u) [[unlikely]] return; }
L_001F29A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F29F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29C4u); c.r[4].d[0] = ld8((c.r[18].w[0] + 369u));  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001D5040u; return; } if (c.pc != 0x001F29C4u) [[unlikely]] return; }
L_001F29C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F29F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29D4u); c.r[4].d[0] = ld8((c.r[18].w[0] + 369u));  if (depth < kMaxDepth) unit_0035(c, 45u, depth + 1u); else { c.pc = 0x001D50B0u; return; } if (c.pc != 0x001F29D4u) [[unlikely]] return; }
L_001F29D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F29F0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29E8u); set32(c.r[5], 0u + 164u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F29E8u) [[unlikely]] return; }
L_001F29E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001F2C8C; } }
L_001F29F0:
    set32(c.r[2], ld32((c.r[18].w[0] + 744u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A08u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 124u, depth + 1u); else { c.pc = 0x001D11B0u; return; } if (c.pc != 0x001F2A08u) [[unlikely]] return; }
L_001F2A08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2A7C; } }
    ld128((c.r[18].w[0] + 224u) & ~15u, c.r[3]);
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    set32(c.r[5], 0u - c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A28u); st128((c.r[29].w[0] + 256u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001F2A28u) [[unlikely]] return; }
L_001F2A28:
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2A5C; } }
    c.f[1] = ld32((c.r[29].w[0] + 256u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F2A7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_001F2A7C; } }
L_001F2A5C:
    c.f[1] = ld32((c.r[29].w[0] + 256u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2A7C; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_001F2A7C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001F2AB8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A90u); set32(c.r[5], 0u + 111u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001F2A90u) [[unlikely]] return; }
L_001F2A90:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F2A9Cu) [[unlikely]] return; }
L_001F2A9C:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001F2AAC; } }
    set32(c.r[6], c.r[6].w[0] + 436u);
    c.budget -= 1;
L_001F2AAC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2AB8u); set32(c.r[5], 0u + 300u);  if (depth < kMaxDepth) unit_002F(c, 16u, depth + 1u); else { c.pc = 0x001BD040u; return; } if (c.pc != 0x001F2AB8u) [[unlikely]] return; }
L_001F2AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2AC0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F2AC0u) [[unlikely]] return; }
L_001F2AC0:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F2C8C; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 371u));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F2C8C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F2C8C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] & 255ull;  if (t) { goto L_001F2B58; } }
    c.r[3].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[3].d[0] = c.r[20].d[0] & 255ull;  if (t) { goto L_001F2B24; } }
    c.f[1] = ld32((c.r[18].w[0] + 232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2B20; } }
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_001F2B20:
    c.r[3].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 1;
L_001F2B24:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001F2BB0; } }
    c.f[1] = ld32((c.r[18].w[0] + 224u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F2BB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F2BB0; } }
    c.r[4].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 1;
L_001F2B58:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[20].d[0] & 255ull;  if (t) { goto L_001F2B88; } }
    c.f[1] = ld32((c.r[18].w[0] + 232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F2B84; } }
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_001F2B84:
    c.r[3].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 1;
L_001F2B88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F2BB0; } }
    c.f[1] = ld32((c.r[18].w[0] + 224u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2BB0; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_001F2BB0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001F2BF8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001F2BDC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2BD0u); set32(c.r[5], 0u + 725u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F2BD0u) [[unlikely]] return; }
L_001F2BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2C8C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001F2BDC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001F2C8C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2BF0u); set32(c.r[5], 0u + 725u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F2BF0u) [[unlikely]] return; }
L_001F2BF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2C8C; } }
L_001F2BF8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001F2C8C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2C0Cu); set32(c.r[5], 0u + 725u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F2C0Cu) [[unlikely]] return; }
L_001F2C0C:
    c.r[4].d[0] = c.r[20].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001F2C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { goto L_001F2C58; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001F2C28:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001F2C3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001F2C58; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001F2C3C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001F2C4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001F2C58; } }
L_001F2C4C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001F2C58; } }
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_001F2C58:
    st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 232u));
    c.f[0] = ld32((c.r[18].w[0] + 224u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 224u), c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[18].w[0] + 232u), c.f[0]);  if (t) { goto L_001F2C80; } }
    set32(c.r[6], c.r[6].w[0] + 436u);
    c.budget -= 1;
L_001F2C80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2C8Cu); set32(c.r[5], 0u + 300u);  if (depth < kMaxDepth) unit_002F(c, 16u, depth + 1u); else { c.pc = 0x001BD040u; return; } if (c.pc != 0x001F2C8Cu) [[unlikely]] return; }
L_001F2C8C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001F2C90:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001F2CB4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[3].w[0])));  if (t) { goto L_001F2CB4; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F2CB4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001F2DB8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001F2DB8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 480u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F2DB8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[3], 0u + 15010u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F2DB8; } }
    c.f[2] = ld32((c.r[18].w[0] + 228u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = ld32((c.r[19].w[0] + 228u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_001F2D0C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F2D0C:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], c.r[3].w[0] >> 1);  if (t) { goto L_001F2D24; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001F2D3C; } }
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.budget -= 1;
L_001F2D24:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001F2D3C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2D58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2D5C; } }
L_001F2D58:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001F2D5C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2DB8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1601u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D80u); st32((c.r[18].w[0] + 644u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F2D80u) [[unlikely]] return; }
L_001F2D80:
    set32(c.r[6], ld32((c.r[18].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8996u);
    set32(c.r[5], c.r[19].w[0] + 224u);
    set32(c.r[4], c.r[18].w[0] + 224u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2DB4u); st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001F2DB4u) [[unlikely]] return; }
L_001F2DB4:
    st32((c.r[18].w[0] + 652u), c.f[0]);
    c.budget -= 1;
L_001F2DB8:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 379u));
    c.budget -= 1;
L_001F2DBC:
    set32(c.r[3], 0u + 219u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F2EEC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 944u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F2EEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2DE0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001F2DE0u) [[unlikely]] return; }
L_001F2DE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2EEC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 944u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2DF4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 29u, depth + 1u); else { c.pc = 0x001F0370u; return; } if (c.pc != 0x001F2DF4u) [[unlikely]] return; }
L_001F2DF4:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2E00u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001F2E00u) [[unlikely]] return; }
L_001F2E00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 184u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = 0u;
    st32((c.r[29].w[0] + 188u), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 180u), c.f[1]);
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
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = c.r[3].w[0];
    c.f[6] = ld32((c.r[18].w[0] + 336u));
    c.f[5] = ld32((c.r[29].w[0] + 176u));
    c.f[4] = ld32((c.r[18].w[0] + 340u));
    c.f[3] = ld32((c.r[29].w[0] + 180u));
    c.f[2] = ld32((c.r[18].w[0] + 344u));
    c.f[1] = ld32((c.r[29].w[0] + 184u));
    c.f[5] = fp::mul(c.f[6], c.f[5]);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[3] = fp::add(c.f[5], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 41;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F2EEC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2EB0u); set32(c.r[5], 0u + 12092u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F2EB0u) [[unlikely]] return; }
L_001F2EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2EB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 78u, depth + 1u); else { c.pc = 0x001E1270u; return; } if (c.pc != 0x001F2EB8u) [[unlikely]] return; }
L_001F2EB8:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2EC4u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001F2EC4u) [[unlikely]] return; }
L_001F2EC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001F2EE4; } }
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2EE0u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x001E1A30u; return; } if (c.pc != 0x001F2EE0u) [[unlikely]] return; }
L_001F2EE0:
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 1;
L_001F2EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2EECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001F2EECu) [[unlikely]] return; }
L_001F2EEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001F2EF0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 624u);  c.pc = t; return; }
L_001F2F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 9u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 395u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F317C; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 398u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.f[0] = 0u;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 398u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.f[2] = ld32((c.r[5].w[0] + 228u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F2F88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);  if (t) { goto L_001F2F90; } }
L_001F2F88:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.budget -= 2;
L_001F2F90:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2FA8; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_001F2FA8:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 32ull;  if (t) { goto L_001F309C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F3098; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F2FE4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 900u));
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_001F301C; } }
L_001F2FE4:
    st8((c.r[16].w[0] + 900u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3000u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001F3000u) [[unlikely]] return; }
L_001F3000:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], 0u + 30u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3014u); st32((c.r[2].w[0] + 640u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0039(c, 72u, depth + 1u); else { c.pc = 0x001E4D10u; return; } if (c.pc != 0x001F3014u) [[unlikely]] return; }
L_001F3014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001F3180; } }
L_001F301C:
    set32(c.r[5], c.r[3].w[0] + 118u);
    st8((c.r[16].w[0] + 900u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F302Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001F302Cu) [[unlikely]] return; }
L_001F302C:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F303Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001F303Cu) [[unlikely]] return; }
L_001F303C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F3048; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001F3048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x67470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3054u); c.r[5].d[0] = c.r[2].d[0] | 28740ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F3054u) [[unlikely]] return; }
L_001F3054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001F3060; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001F3060:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_001F317C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3070u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001F3070u) [[unlikely]] return; }
L_001F3070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 436u);  if (t) { goto L_001F3088; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3084u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 39u, depth + 1u); else { c.pc = 0x001E0720u; return; } if (c.pc != 0x001F3084u) [[unlikely]] return; }
L_001F3084:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 1;
L_001F3088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3090u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001F3090u) [[unlikely]] return; }
L_001F3090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F317C; } }
L_001F3098:
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 1;
L_001F309C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_001F3130; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F312C; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F30C8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001F30C8u) [[unlikely]] return; }
L_001F30C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 15730u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15731u);  if (t) { goto L_001F30E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F30F8; } }
L_001F30E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F30F8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001F30F8u) [[unlikely]] return; }
L_001F30F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], 0u + 30u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 640u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 632u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3118u); st32((c.r[16].w[0] + 636u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 95u, depth + 1u); else { c.pc = 0x001E1750u; return; } if (c.pc != 0x001F3118u) [[unlikely]] return; }
L_001F3118:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3124u); set32(c.r[5], 0u + 220u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F3124u) [[unlikely]] return; }
L_001F3124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F317C; } }
L_001F312C:
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 1;
L_001F3130:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F3144; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F314C; } }
L_001F3144:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 16ull;  if (t) { goto L_001F3160; } }
L_001F314C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3158u); set32(c.r[6], 0u + 883u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001F3158u) [[unlikely]] return; }
L_001F3158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F317C; } }
L_001F3160:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F317C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F317C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F317Cu); set32(c.r[6], 0u + 802u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001F317Cu) [[unlikely]] return; }
L_001F317C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F3180:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F3190:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F31BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 62u, depth + 1u); else { c.pc = 0x001E0C50u; return; } if (c.pc != 0x001F31BCu) [[unlikely]] return; }
L_001F31BC:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001F320C; } }
L_001F31C8:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3208; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_001F3208; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F31F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 62u, depth + 1u); else { c.pc = 0x001E0C50u; return; } if (c.pc != 0x001F31F4u) [[unlikely]] return; }
L_001F31F4:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F3208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001F3220; } }
L_001F3208:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001F320C:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F31C8u | kUnwind; return; } goto L_001F31C8; } }
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_001F3220:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F3240:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F3278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3270u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001F3270u) [[unlikely]] return; }
L_001F3270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001F3904; } }
L_001F3278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3280u);  if (depth < kMaxDepth) unit_0049(c, 319u, depth + 1u); else { c.pc = 0x00227C20u; return; } if (c.pc != 0x001F3280u) [[unlikely]] return; }
L_001F3280:
    set32(c.r[3], ld32((c.r[18].w[0] + 644u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F3298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001F32A8; } }
L_001F3298:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001F32A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F32B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 132u, depth + 1u); else { c.pc = 0x001D14B0u; return; } if (c.pc != 0x001F32B0u) [[unlikely]] return; }
L_001F32B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F32D0; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 395u));
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001F32D0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 474u));
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 128ull;  if (t) { goto L_001F3454; } }
    set32(c.r[2], 0u - 1u);
    st8((c.r[18].w[0] + 585u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 944u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F33C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[1].w[0] + 21688u));
    c.f[3] = ld32((c.r[18].w[0] + 212u));
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = ld32((c.r[18].w[0] + 1020u));  if (t) { goto L_001F3334; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001F3350; } }
L_001F3334:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001F3350:
    set32(c.r[5], ld32((c.r[18].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[2], c.r[2].w[0] + 4608u);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F336Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 51u, depth + 1u); else { c.pc = 0x001E08F0u; return; } if (c.pc != 0x001F336Cu) [[unlikely]] return; }
L_001F336C:
    c.f[2] = ld32((c.r[18].w[0] + 212u));
    c.f[1] = 0u;
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F3390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3394; } }
L_001F3390:
    c.f[2] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_001F3394:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21280u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F33FC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F33FC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F33C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 51u, depth + 1u); else { c.pc = 0x001E08F0u; return; } if (c.pc != 0x001F33C0u) [[unlikely]] return; }
L_001F33C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_001F33FC; } }
L_001F33C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F33D0u);  if (depth < kMaxDepth) unit_003C(c, 29u, depth + 1u); else { c.pc = 0x001F0370u; return; } if (c.pc != 0x001F33D0u) [[unlikely]] return; }
L_001F33D0:
    set32(c.r[3], ld32((c.r[18].w[0] + 944u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[0];  if (t) { goto L_001F33FC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F33FC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F33F8u); set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (depth < kMaxDepth) unit_0038(c, 51u, depth + 1u); else { c.pc = 0x001E08F0u; return; } if (c.pc != 0x001F33F8u) [[unlikely]] return; }
L_001F33F8:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_001F33FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 944u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 15070u);
    c.r[7].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 586u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F341Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001F341Cu) [[unlikely]] return; }
L_001F341C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3424u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001F3424u) [[unlikely]] return; }
L_001F3424:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001F3444; } }
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3440u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x001E1A30u; return; } if (c.pc != 0x001F3440u) [[unlikely]] return; }
L_001F3440:
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 1;
L_001F3444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F344Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001F344Cu) [[unlikely]] return; }
L_001F344C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3900; } }
L_001F3454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3644; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F3528; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3470u); c.r[4].d[0] = ld8((c.r[18].w[0] + 369u));  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001D5040u; return; } if (c.pc != 0x001F3470u) [[unlikely]] return; }
L_001F3470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F3528; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3480u); c.r[4].d[0] = ld8((c.r[18].w[0] + 369u));  if (depth < kMaxDepth) unit_0035(c, 45u, depth + 1u); else { c.pc = 0x001D50B0u; return; } if (c.pc != 0x001F3480u) [[unlikely]] return; }
L_001F3480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F3528; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3490u);  if (depth < kMaxDepth) unit_0034(c, 209u, depth + 1u); else { c.pc = 0x001D2D80u; return; } if (c.pc != 0x001F3490u) [[unlikely]] return; }
L_001F3490:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3528; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F34A4u); c.r[4].d[0] = ld8((c.r[18].w[0] + 369u));  if (depth < kMaxDepth) unit_0038(c, 62u, depth + 1u); else { c.pc = 0x001E0C50u; return; } if (c.pc != 0x001F34A4u) [[unlikely]] return; }
L_001F34A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F3528; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 369u));
    set32(c.r[3], ld32((c.r[18].w[0] + 944u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F3528; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[5], 0u + 15520u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F34ECu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 42u, depth + 1u); else { c.pc = 0x00168960u; return; } if (c.pc != 0x001F34ECu) [[unlikely]] return; }
L_001F34EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3528; } }
    c.r[5].d[0] = ld8((c.r[18].w[0] + 369u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3500u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 245u, depth + 1u); else { c.pc = 0x001F3190u; return; } if (c.pc != 0x001F3500u) [[unlikely]] return; }
L_001F3500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3528; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 15520u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3520u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001F3520u) [[unlikely]] return; }
L_001F3520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3900; } }
L_001F3528:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3534u); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_0042(c, 114u, depth + 1u); else { c.pc = 0x002099C0u; return; } if (c.pc != 0x001F3534u) [[unlikely]] return; }
L_001F3534:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F35B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3548u); set32(c.r[5], 0u + 1608u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F3548u) [[unlikely]] return; }
L_001F3548:
    set32(c.r[4], ld32((c.r[18].w[0] + 944u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 48u);  if (t) { goto L_001F3900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3560u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001F3560u) [[unlikely]] return; }
L_001F3560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001F35A0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 944u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[1].w[0] + 21304u));
    set32(c.r[6], 0u + 20u);
    set32(c.r[2], c.r[3].w[0] << 29);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F359Cu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x001E1A30u; return; } if (c.pc != 0x001F359Cu) [[unlikely]] return; }
L_001F359C:
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 1;
L_001F35A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F35A8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001F35A8u) [[unlikely]] return; }
L_001F35A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3900; } }
L_001F35B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F3634; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F35CCu); set32(c.r[5], 0u + 1608u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001F35CCu) [[unlikely]] return; }
L_001F35CC:
    set32(c.r[4], ld32((c.r[18].w[0] + 944u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 48u);  if (t) { goto L_001F3900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F35E4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001F35E4u) [[unlikely]] return; }
L_001F35E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001F3624; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 944u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[1].w[0] + 21304u));
    set32(c.r[6], 0u + 20u);
    set32(c.r[2], c.r[3].w[0] << 29);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3620u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x001E1A30u; return; } if (c.pc != 0x001F3620u) [[unlikely]] return; }
L_001F3620:
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 1;
L_001F3624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F362Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001F362Cu) [[unlikely]] return; }
L_001F362C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3900; } }
L_001F3634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F363Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001F363Cu) [[unlikely]] return; }
L_001F363C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3900; } }
L_001F3644:
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 64ull;  if (t) { goto L_001F36C4; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F3668; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[18].w[0] + 1020u));  if (t) { goto L_001F3674; } }
L_001F3668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3670u);  if (depth < kMaxDepth) unit_003C(c, 29u, depth + 1u); else { c.pc = 0x001F0370u; return; } if (c.pc != 0x001F3670u) [[unlikely]] return; }
L_001F3670:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_001F3674:
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 15090u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F368Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001F368Cu) [[unlikely]] return; }
L_001F368C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3694u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001F3694u) [[unlikely]] return; }
L_001F3694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001F36B4; } }
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F36B0u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0038(c, 107u, depth + 1u); else { c.pc = 0x001E1A30u; return; } if (c.pc != 0x001F36B0u) [[unlikely]] return; }
L_001F36B0:
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 1;
L_001F36B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F36BCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001F36BCu) [[unlikely]] return; }
L_001F36BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3900; } }
L_001F36C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F3814; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F36D4u);  if (depth < kMaxDepth) unit_0038(c, 95u, depth + 1u); else { c.pc = 0x001E1750u; return; } if (c.pc != 0x001F36D4u) [[unlikely]] return; }
L_001F36D4:
    set32(c.r[3], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[2], c.r[3].w[0] - 2u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[17], 0u + 15120u);  if (t) { goto L_001F36F4; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F3718; } }
L_001F36F4:
    set32(c.r[3], ld32((c.r[18].w[0] + 632u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[17], c.r[2].w[0] + 15120u);
    c.budget -= 9;
L_001F3718:
    set32(c.r[3], ld32((c.r[18].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F373C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F373C; } }
    set32(c.r[17], 0u + 15130u);
    c.budget -= 1;
L_001F373C:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], 0u + 55u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F3774; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 632u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001F3764; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F3770; } }
L_001F3764:
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 632u), c.r[2].w[0]);
    c.budget -= 3;
L_001F3770:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F3774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F377Cu);  if (depth < kMaxDepth) unit_0034(c, 146u, depth + 1u); else { c.pc = 0x001D1790u; return; } if (c.pc != 0x001F377Cu) [[unlikely]] return; }
L_001F377C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F378C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 15150u);  if (t) { goto L_001F37E4; } }
L_001F378C:
    set32(c.r[4], ld32((c.r[18].w[0] + 632u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001F37A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F37E4; } }
L_001F37A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F37ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 95u, depth + 1u); else { c.pc = 0x001E1750u; return; } if (c.pc != 0x001F37ACu) [[unlikely]] return; }
L_001F37AC:
    set32(c.r[3], ld32((c.r[18].w[0] + 632u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F37C0; } }
    st32((c.r[18].w[0] + 632u), 0u);
    c.budget -= 1;
L_001F37C0:
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 15250u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F37D8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001F37D8u) [[unlikely]] return; }
L_001F37D8:
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 920u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001F3900; } }
L_001F37E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F3900; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F380Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001F380Cu) [[unlikely]] return; }
L_001F380C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3900; } }
L_001F3814:
    set32(c.r[16], ld32((c.r[18].w[0] + 944u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3820u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 32u, depth + 1u); else { c.pc = 0x001F0460u; return; } if (c.pc != 0x001F3820u) [[unlikely]] return; }
L_001F3820:
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], 0u + 15020u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; st32((c.r[29].w[0] + 92u), c.f[0]);  if (t) { goto L_001F38C0; } }
    c.f[4] = ld32((c.r[18].w[0] + 1020u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[29].w[0] + 92u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[29].w[0] + 92u), c.f[2]);
    c.f[2] = c.f[2];
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F3880; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_001F389C; } }
L_001F3880:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 7;
L_001F389C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[4].d[0] & 4095ull;
    set32(c.r[3], c.r[3].w[0] - 28144u);
    set32(c.r[4], c.r[4].w[0] + 4608u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 10));
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 9;
L_001F38C0:
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[8], 0u + 1u);  if (t) { goto L_001F3900; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[8].d[0];  if (t) { goto L_001F38EC; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F38E4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001F38E4u) [[unlikely]] return; }
L_001F38E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3900; } }
L_001F38EC:
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3900u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001F3900u) [[unlikely]] return; }
L_001F3900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001F3904:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F3920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3934u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 115u, depth + 1u); else { c.pc = 0x001E5710u; return; } if (c.pc != 0x001F3934u) [[unlikely]] return; }
L_001F3934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F393Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 235u, depth + 1u); else { c.pc = 0x001E70C0u; return; } if (c.pc != 0x001F393Cu) [[unlikely]] return; }
L_001F393C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F3950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3968u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001F3968u) [[unlikely]] return; }
L_001F3968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F3978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3978u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 297u, depth + 1u); else { c.pc = 0x001F3990u; return; } if (c.pc != 0x001F3978u) [[unlikely]] return; }
L_001F3978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F3990:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[2].d[0] | 18512ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F39C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001F39C0u) [[unlikely]] return; }
L_001F39C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], 0u + 120u);
    set32(c.r[3], c.r[3].w[0] - 8592u);
    set32(c.r[17], c.r[19].w[0] + 40u);
    st32((c.r[19].w[0] + 24u), c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 28u), c.r[18].w[0]);
    st16((c.r[19].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 46u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
L_001F39EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F39F4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F39F4u) [[unlikely]] return; }
L_001F39F4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3A84; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3A84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3A14u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F3A14u) [[unlikely]] return; }
L_001F3A14:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { goto L_001F3A60; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 912u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { goto L_001F3A5C; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001F3A50; } }
    breakpoint(c, 0x001F3A4Cu);
    c.budget -= 1;
L_001F3A50:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F3A84; } }
L_001F3A5C:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.budget -= 1;
L_001F3A60:
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001F3A7C; } }
    breakpoint(c, 0x001F3A78u);
    c.budget -= 1;
L_001F3A7C:
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001F3A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3A8Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F3A8Cu) [[unlikely]] return; }
L_001F3A8C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F3B08; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31704u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { goto L_001F3ADC; } }
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], 0u + 100u);
    set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001F3AD0; } }
    breakpoint(c, 0x001F3ACCu);
    c.budget -= 1;
L_001F3AD0:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F3B08; } }
L_001F3ADC:
    set32(c.r[2], 0u + 100u);
    set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001F3B00; } }
    breakpoint(c, 0x001F3AFCu);
    c.budget -= 1;
L_001F3B00:
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001F3B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B10u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F3B10u) [[unlikely]] return; }
L_001F3B10:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3B5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B24u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F3B24u) [[unlikely]] return; }
L_001F3B24:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 17u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { goto L_001F3B5C; } }
    set32(c.r[2], 0u + 100u);
    set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001F3B54; } }
    breakpoint(c, 0x001F3B50u);
    c.budget -= 1;
L_001F3B54:
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001F3B5C:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F3B74; } }
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001F3B74:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F39ECu | kUnwind; return; } goto L_001F39EC; } }
    set32(c.r[5], c.r[19].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B90u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001F3B90u) [[unlikely]] return; }
L_001F3B90:
    set32(c.r[3], ld32((c.r[18].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[7], c.r[19].w[0] + 32u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[2].w[0] + 270u);
    c.budget -= 8;
L_001F3BB0:
    set32(c.r[3], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[6].w[0] << 1);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[4], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3BB0u | kUnwind; return; } goto L_001F3BB0; } }
    st32((c.r[19].w[0] + 48u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[18].w[0] + 720u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[18].w[0] + 724u), 0u);
    st32((c.r[19].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 68u), 0u);
    st32((c.r[19].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 76u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F3C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F3C68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3C50u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001F3C50u) [[unlikely]] return; }
L_001F3C50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F3C6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3C68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001F3C68u) [[unlikely]] return; }
L_001F3C68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F3C6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F3C80:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F3C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3D04; } }
L_001F3C90:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 42u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 44u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 46u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 34u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 36u)));
    set32(c.r[9], c.r[9].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 38u)));
    set32(c.r[4], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], c.r[3].w[0] << 1);  if (t) { goto L_001F3CD8; } }
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 2;
L_001F3CD8:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[7].w[0]);  if (t) { goto L_001F3CEC; } }
    breakpoint(c, 0x001F3CE8u);
    c.budget -= 1;
L_001F3CEC:
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_001F3D00; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_001F3D00:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_001F3D04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F3D10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F3D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3D88; } }
L_001F3D20:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 42u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 44u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 46u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 34u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 36u)));
    set32(c.r[9], c.r[9].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 38u)));
    set32(c.r[4], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_001F3D68; } }
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 2;
L_001F3D68:
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[7].w[0]);  if (t) { goto L_001F3D84; } }
    breakpoint(c, 0x001F3D80u);
    c.budget -= 1;
L_001F3D84:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001F3D88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F3D90:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 1);  if (t) { goto L_001F3DA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F3DD8; } }
L_001F3DA0:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 40u)));  if (t) { goto L_001F3DB4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F3DB4:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);  if (t) { goto L_001F3DD4; } }
    breakpoint(c, 0x001F3DD0u);
    c.budget -= 1;
L_001F3DD4:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001F3DD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F3DE0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F3DF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3E94; } }
L_001F3DF0:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 42u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 44u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 46u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 34u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 36u)));
    set32(c.r[9], c.r[9].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 38u)));
    set32(c.r[4], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_001F3E38; } }
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 2;
L_001F3E38:
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[7].w[0]);  if (t) { goto L_001F3E54; } }
    breakpoint(c, 0x001F3E50u);
    c.budget -= 1;
L_001F3E54:
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[2].sd[0] < 66ll ? 1ull : 0ull;  if (t) { goto L_001F3E6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F3E94; } }
L_001F3E6C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F3E7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F3E94; } }
L_001F3E7C:
    c.r[1].d[0] = c.r[2].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F3E90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001F3E94; } }
L_001F3E90:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001F3E94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F3EA0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F3EB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3F60; } }
L_001F3EB0:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 42u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 44u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 46u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 34u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 36u)));
    set32(c.r[9], c.r[9].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 38u)));
    set32(c.r[4], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_001F3EF8; } }
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 2;
L_001F3EF8:
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[7].w[0]);  if (t) { goto L_001F3F14; } }
    breakpoint(c, 0x001F3F10u);
    c.budget -= 1;
L_001F3F14:
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[2].sd[0] < 76ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[2].sd[0] < 63ll ? 1ull : 0ull;  if (t) { goto L_001F3F2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F3F60; } }
L_001F3F2C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F3F3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F3F60; } }
L_001F3F3C:
    c.r[1].d[0] = c.r[2].sd[0] < 51ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[2].sd[0] < 38ll ? 1ull : 0ull;  if (t) { goto L_001F3F50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001F3F60; } }
L_001F3F50:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_001F3F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001F3F60; } }
L_001F3F60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F3F70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F3F94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 4u, depth); } }
L_001F3F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3F9Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F3F9Cu) [[unlikely]] return; }
L_001F3F9C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3FB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F3FB4; } }
L_001F3FB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F3FB4:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 34u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]); c.r[16].d[0] = c.lo.d[0];  if (t) { goto L_001F3FD4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001F3FD4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F3FE8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001F3FE8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 38u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F3FFC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001F3FFC:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[1].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 3u, depth); } }
    [[clang::musttail]] return unit_003D(c, 2u, depth);
}

}
