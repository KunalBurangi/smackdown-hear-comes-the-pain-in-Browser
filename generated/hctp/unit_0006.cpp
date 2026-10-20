#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0006[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 5, 6, 0, 0, 7, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    10, 11, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18,
    19, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 23, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0,
    0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0,
    76, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    83, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 100,
    0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0,
    106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 115,
    0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0,
    0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243,
};

void unit_0006(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00118000;
    case 2u: goto L_00118018;
    case 3u: goto L_00118028;
    case 4u: goto L_00118034;
    case 5u: goto L_0011803C;
    case 6u: goto L_00118040;
    case 7u: goto L_0011804C;
    case 8u: goto L_00118050;
    case 9u: goto L_00118070;
    case 10u: goto L_00118080;
    case 11u: goto L_00118084;
    case 12u: goto L_00118090;
    case 13u: goto L_00118098;
    case 14u: goto L_001180B0;
    case 15u: goto L_001180C0;
    case 16u: goto L_001180CC;
    case 17u: goto L_001180E4;
    case 18u: goto L_001180FC;
    case 19u: goto L_00118100;
    case 20u: goto L_00118114;
    case 21u: goto L_00118120;
    case 22u: goto L_00118134;
    case 23u: goto L_00118140;
    case 24u: goto L_00118144;
    case 25u: goto L_00118154;
    case 26u: goto L_00118160;
    case 27u: goto L_00118170;
    case 28u: goto L_00118180;
    case 29u: goto L_001181F4;
    case 30u: goto L_00118228;
    case 31u: goto L_001182D8;
    case 32u: goto L_001182F0;
    case 33u: goto L_00118300;
    case 34u: goto L_00118314;
    case 35u: goto L_00118338;
    case 36u: goto L_00118380;
    case 37u: goto L_001183E8;
    case 38u: goto L_001183FC;
    case 39u: goto L_00118420;
    case 40u: goto L_00118438;
    case 41u: goto L_0011843C;
    case 42u: goto L_00118448;
    case 43u: goto L_00118488;
    case 44u: goto L_001184B8;
    case 45u: goto L_001184F4;
    case 46u: goto L_00118508;
    case 47u: goto L_00118528;
    case 48u: goto L_00118534;
    case 49u: goto L_0011853C;
    case 50u: goto L_00118554;
    case 51u: goto L_00118564;
    case 52u: goto L_00118570;
    case 53u: goto L_0011859C;
    case 54u: goto L_001185B4;
    case 55u: goto L_001185D8;
    case 56u: goto L_001185E4;
    case 57u: goto L_001185F4;
    case 58u: goto L_0011860C;
    case 59u: goto L_00118630;
    case 60u: goto L_00118660;
    case 61u: goto L_0011867C;
    case 62u: goto L_0011868C;
    case 63u: goto L_00118730;
    case 64u: goto L_00118744;
    case 65u: goto L_00118770;
    case 66u: goto L_00118798;
    case 67u: goto L_001187AC;
    case 68u: goto L_001187D8;
    case 69u: goto L_001187F0;
    case 70u: goto L_00118808;
    case 71u: goto L_0011881C;
    case 72u: goto L_0011883C;
    case 73u: goto L_00118844;
    case 74u: goto L_00118870;
    case 75u: goto L_00118878;
    case 76u: goto L_00118880;
    case 77u: goto L_00118888;
    case 78u: goto L_0011889C;
    case 79u: goto L_001188AC;
    case 80u: goto L_001188C0;
    case 81u: goto L_001188D8;
    case 82u: goto L_001188F0;
    case 83u: goto L_00118900;
    case 84u: goto L_00118904;
    case 85u: goto L_00118914;
    case 86u: goto L_00118940;
    case 87u: goto L_00118948;
    case 88u: goto L_0011895C;
    case 89u: goto L_001189A4;
    case 90u: goto L_001189BC;
    case 91u: goto L_001189D4;
    case 92u: goto L_00118A18;
    case 93u: goto L_00118A70;
    case 94u: goto L_00118A98;
    case 95u: goto L_00118AAC;
    case 96u: goto L_00118AC0;
    case 97u: goto L_00118AC4;
    case 98u: goto L_00118AD8;
    case 99u: goto L_00118AE8;
    case 100u: goto L_00118AFC;
    case 101u: goto L_00118B0C;
    case 102u: goto L_00118B20;
    case 103u: goto L_00118B30;
    case 104u: goto L_00118B44;
    case 105u: goto L_00118B6C;
    case 106u: goto L_00118B80;
    case 107u: goto L_00118B90;
    case 108u: goto L_00118BA0;
    case 109u: goto L_00118BB0;
    case 110u: goto L_00118BBC;
    case 111u: goto L_00118BC4;
    case 112u: goto L_00118BD4;
    case 113u: goto L_00118BE4;
    case 114u: goto L_00118BF4;
    case 115u: goto L_00118BFC;
    case 116u: goto L_00118C0C;
    case 117u: goto L_00118C1C;
    case 118u: goto L_00118C2C;
    case 119u: goto L_00118C3C;
    case 120u: goto L_00118C50;
    case 121u: goto L_00118DC0;
    case 122u: goto L_00118E58;
    case 123u: goto L_00118E98;
    case 124u: goto L_00118EB8;
    case 125u: goto L_00118EF4;
    case 126u: goto L_00118F28;
    case 127u: goto L_00118F78;
    case 128u: goto L_00118F90;
    case 129u: goto L_00119058;
    case 130u: goto L_001190FC;
    case 131u: goto L_00119130;
    case 132u: goto L_00119178;
    case 133u: goto L_00119180;
    case 134u: goto L_001191E0;
    case 135u: goto L_00119208;
    case 136u: goto L_00119288;
    case 137u: goto L_001192B8;
    case 138u: goto L_00119348;
    case 139u: goto L_00119368;
    case 140u: goto L_001193B0;
    case 141u: goto L_001193D8;
    case 142u: goto L_00119480;
    case 143u: goto L_001194C8;
    case 144u: goto L_00119508;
    case 145u: goto L_00119550;
    case 146u: goto L_00119598;
    case 147u: goto L_001195E0;
    case 148u: goto L_00119668;
    case 149u: goto L_00119790;
    case 150u: goto L_001197D8;
    case 151u: goto L_00119814;
    case 152u: goto L_0011983C;
    case 153u: goto L_00119840;
    case 154u: goto L_00119850;
    case 155u: goto L_00119880;
    case 156u: goto L_00119898;
    case 157u: goto L_001198B0;
    case 158u: goto L_001198C0;
    case 159u: goto L_001198C8;
    case 160u: goto L_001198D8;
    case 161u: goto L_001198F0;
    case 162u: goto L_00119900;
    case 163u: goto L_00119938;
    case 164u: goto L_00119980;
    case 165u: goto L_00119994;
    case 166u: goto L_001199A4;
    case 167u: goto L_00119A00;
    case 168u: goto L_00119A0C;
    case 169u: goto L_00119A1C;
    case 170u: goto L_00119A6C;
    case 171u: goto L_00119AA0;
    case 172u: goto L_00119AB0;
    case 173u: goto L_00119B50;
    case 174u: goto L_00119B98;
    case 175u: goto L_00119BD8;
    case 176u: goto L_00119C3C;
    case 177u: goto L_00119C74;
    case 178u: goto L_00119C9C;
    case 179u: goto L_00119D4C;
    case 180u: goto L_00119D5C;
    case 181u: goto L_00119DA8;
    case 182u: goto L_00119DC0;
    case 183u: goto L_00119DFC;
    case 184u: goto L_00119E24;
    case 185u: goto L_00119E38;
    case 186u: goto L_00119E3C;
    case 187u: goto L_00119E80;
    case 188u: goto L_00119E98;
    case 189u: goto L_00119EB0;
    case 190u: goto L_00119EC0;
    case 191u: goto L_00119ED8;
    case 192u: goto L_00119EE8;
    case 193u: goto L_00119EF8;
    case 194u: goto L_00119FC0;
    case 195u: goto L_0011A040;
    case 196u: goto L_0011A198;
    case 197u: goto L_0011A1D8;
    case 198u: goto L_0011A218;
    case 199u: goto L_0011A228;
    case 200u: goto L_0011A268;
    case 201u: goto L_0011A280;
    case 202u: goto L_0011A290;
    case 203u: goto L_0011A2A0;
    case 204u: goto L_0011A2B0;
    case 205u: goto L_0011A2D8;
    case 206u: goto L_0011A3C8;
    case 207u: goto L_0011A47C;
    case 208u: goto L_0011A490;
    case 209u: goto L_0011A4D0;
    case 210u: goto L_0011A4E0;
    case 211u: goto L_0011A524;
    case 212u: goto L_0011A53C;
    case 213u: goto L_0011A554;
    case 214u: goto L_0011A568;
    case 215u: goto L_0011A578;
    case 216u: goto L_0011A590;
    case 217u: goto L_0011A5A8;
    case 218u: goto L_0011A5C0;
    case 219u: goto L_0011A5D8;
    case 220u: goto L_0011A5F0;
    case 221u: goto L_0011A608;
    case 222u: goto L_0011A680;
    case 223u: goto L_0011A8C0;
    case 224u: goto L_0011AD18;
    case 225u: goto L_0011B040;
    case 226u: goto L_0011B0C0;
    case 227u: goto L_0011B3A8;
    case 228u: goto L_0011B928;
    case 229u: goto L_0011BB78;
    case 230u: goto L_0011BE90;
    case 231u: goto L_0011BEB8;
    case 232u: goto L_0011BEC8;
    case 233u: goto L_0011BED8;
    case 234u: goto L_0011BEF8;
    case 235u: goto L_0011BF14;
    case 236u: goto L_0011BF24;
    case 237u: goto L_0011BF38;
    case 238u: goto L_0011BF94;
    case 239u: goto L_0011BFA4;
    case 240u: goto L_0011BFBC;
    case 241u: goto L_0011BFD0;
    case 242u: goto L_0011BFEC;
    case 243u: goto L_0011BFFC;
    default: bad_entry(c, 0x00118000u); return;
    }
L_00118000:
    c.r[4].d[0] = ld64((c.r[19].w[0]));
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.r[5].d[0] = ld64((c.r[17].w[0]));
    set32(c.r[17], c.r[17].w[0] - 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118018u); set32(c.r[16], c.r[16].w[0] - 1u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118018u) [[unlikely]] return; }
L_00118018:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118028u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00118028u) [[unlikely]] return; }
L_00118028:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118000u | kUnwind; return; } goto L_00118000; } }
L_00118034:
    st64((c.r[21].w[0]), c.r[20].d[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0011803C:
    set32(c.r[4], ld32((c.r[29].w[0] + 584u)));
    c.budget -= 1;
L_00118040:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], c.r[21].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00117FD8u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 475u, depth); } }
L_0011804C:
    set32(c.r[22], ld32((c.r[29].w[0] + 584u)));
    c.budget -= 1;
L_00118050:
    set32(c.r[2], c.r[22].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 400u);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    c.r[19].d[0] = ld64((c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = c.r[22].sd[0] <= 0; c.r[16].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001180F0; } }
    set32(c.r[17], c.r[4].w[0] - 8u);
    c.r[18].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 2;
L_00118070:
    c.r[5].d[0] = 0ull | 63936ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118084u); set32(c.r[16], c.r[16].w[0] - 1u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118084u) [[unlikely]] return; }
    goto L_00118084;
L_00118080:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_00118084:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118090u);  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x00118090u) [[unlikely]] return; }
L_00118090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118098u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x00118098u) [[unlikely]] return; }
L_00118098:
    c.r[5].d[0] = 0ull | 33504ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001180B0u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x001180B0u) [[unlikely]] return; }
L_001180B0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001180C0u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001180C0u) [[unlikely]] return; }
L_001180C0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001180CCu);  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x001180CCu) [[unlikely]] return; }
L_001180CC:
    c.r[4].d[0] = ld64((c.r[17].w[0]));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001180E4u); set32(c.r[17], c.r[17].w[0] - 8u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x001180E4u) [[unlikely]] return; }
L_001180E4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118070u | kUnwind; return; } goto L_00118070; } }
L_001180F0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001180FCu); set32(c.r[5], ld32((c.r[29].w[0] + 592u)));  if (depth < kMaxDepth) unit_0006(c, 175u, depth + 1u); else { c.pc = 0x00119BD8u; return; } if (c.pc != 0x001180FCu) [[unlikely]] return; }
L_001180FC:
    c.r[5].d[0] = 0ull | 65280ull;
    c.budget -= 1;
L_00118100:
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118114u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118114u) [[unlikely]] return; }
L_00118114:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118120u);  if (depth < kMaxDepth) unit_0006(c, 163u, depth + 1u); else { c.pc = 0x00119938u; return; } if (c.pc != 0x00118120u) [[unlikely]] return; }
L_00118120:
    c.r[5].d[0] = 0ull | 32832ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118134u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118134u) [[unlikely]] return; }
L_00118134:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118144u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00118144u) [[unlikely]] return; }
    goto L_00118144;
L_00118140:
    c.budget -= 1;
L_00118144:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118154u);  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x00118154u) [[unlikely]] return; }
L_00118154:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118160u); st32((c.r[29].w[0] + 588u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x00118160u) [[unlikely]] return; }
L_00118160:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118170u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00118170u) [[unlikely]] return; }
L_00118170:
    set32(c.r[6], ld32((c.r[29].w[0] + 592u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] <= 0; set32(c.r[2], ld32((c.r[29].w[0] + 592u)));  if (t) { goto L_001181C8; } }
L_00118180:
    set32(c.r[2], c.r[22].w[0] << 2);
    set32(c.r[3], 0u + 24u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 588u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[4], 0u + 23u);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[3], c.r[18].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[8], c.r[8].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 588u), c.r[8].w[0]);
    set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[4].w[0] & 31u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_001181FC; } }
    c.budget -= 1;
L_001181C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[22].w[0] << 2);  if (t) { goto L_001181E0; } }
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 23));  if (t) { goto L_001181FC; } }
L_001181E0:
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001181F4u); set32(c.r[30], 0u + 2u);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x001181F4u) [[unlikely]] return; }
L_001181F4:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[30].d[0] = 0ull;
    c.budget -= 2;
L_001181FC:
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] <= 0; set32(c.r[3], ld32((c.r[29].w[0] + 588u)));  if (t) { goto L_00118304; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[22].sd[0] <= 0; st32((c.r[29].w[0] + 588u), c.r[3].w[0]);  if (t) { goto L_0011825C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.r[18].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
L_00118228:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], ld32((c.r[3].w[0])));  if (t) { goto L_00118240; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - c.r[16].w[0]);  if (t) { goto L_00118248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00118244; } }
L_00118240:
    set32(c.r[2], c.r[4].w[0] - c.r[16].w[0]);
    c.budget -= 1;
L_00118244:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00118248:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118228u | kUnwind; return; } goto L_00118228; } }
L_0011825C:
    set32(c.r[4], ld32((c.r[29].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_001182B8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00118288; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[22].w[0] << 2);  if (t) { goto L_00118298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001182B8; } }
    c.budget -= 1;
L_00118288:
    set32(c.r[3], c.r[22].w[0] << 2);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_0011829C; } }
    c.budget -= 1;
L_00118298:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.budget -= 1;
L_0011829C:
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    set32(c.r[5], c.r[29].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 7;
L_001182B8:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != c.r[2].d[0];  if (t) { goto L_00118304; } }
    c.r[16].d[0] = 0ull | 65472ull;
    c.r[16].d[0] = c.r[16].d[0] << 46;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001182D8u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001182D8u) [[unlikely]] return; }
L_001182D8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00118304; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001182F0u); set32(c.r[5], ld32((c.r[29].w[0] + 592u)));  if (depth < kMaxDepth) unit_0006(c, 175u, depth + 1u); else { c.pc = 0x00119BD8u; return; } if (c.pc != 0x001182F0u) [[unlikely]] return; }
L_001182F0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118300u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00118300u) [[unlikely]] return; }
L_00118300:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00118304:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118314u);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x00118314u) [[unlikely]] return; }
L_00118314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 584u)));  if (t) { goto L_00118478; } }
    set32(c.r[18], c.r[22].w[0] - 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00118354; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 584u)));
    c.budget -= 3;
L_00118338:
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118338u | kUnwind; return; } goto L_00118338; } }
L_00118354:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[8], ld32((c.r[29].w[0] + 584u)));  if (t) { goto L_00118478; } }
    set32(c.r[2], c.r[8].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[21], 0u + 1u);  if (t) { goto L_0011839C; } }
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[2].w[0] - 4u);
    c.budget -= 3;
L_00118380:
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118380u | kUnwind; return; } goto L_00118380; } }
L_0011839C:
    set32(c.r[30], c.r[22].w[0] + c.r[21].w[0]);
    set32(c.r[18], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[30].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[22].d[0] = c.r[30].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118050u | kUnwind; return; } goto L_00118050; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 576u)));
    set32(c.r[8], c.r[29].w[0] + 80u);
    set32(c.r[5], ld32((c.r[29].w[0] + 580u)));
    set32(c.r[6], c.r[29].w[0] + 400u);
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    set32(c.r[22], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 572u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[23], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[21], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 14;
L_001183E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 576u)));
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001183FCu); set32(c.r[16], c.r[3].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x001183FCu) [[unlikely]] return; }
L_001183FC:
    st64((c.r[22].w[0]), c.r[2].d[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 576u)));
    c.budget -= 4;
    if (c.r[4].sd[0] < 0) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00118458; }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[16], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[19], ld32((c.r[29].w[0] + 560u)));
    set32(c.r[17], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 5;
L_00118420:
    c.r[4].d[0] = ld64((c.r[19].w[0]));
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.r[5].d[0] = ld64((c.r[17].w[0]));
    set32(c.r[17], c.r[17].w[0] - 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118438u); set32(c.r[16], c.r[16].w[0] - 1u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118438u) [[unlikely]] return; }
L_00118438:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0011843C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118448u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00118448u) [[unlikely]] return; }
L_00118448:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118420u | kUnwind; return; } goto L_00118420; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00118458:
    st64((c.r[23].w[0]), c.r[20].d[0]);
    c.r[2].d[0] = c.r[30].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[23], c.r[23].w[0] + 8u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001183E8u | kUnwind; return; } goto L_001183E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[30].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118050u | kUnwind; return; } goto L_00118050; } }
L_00118478:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118488u);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x00118488u) [[unlikely]] return; }
L_00118488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 592u)));  if (t) { goto L_001184E0; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 592u)));
    set32(c.r[22], c.r[22].w[0] - 1u);
    set32(c.r[2], c.r[22].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 24u);
    set32(c.r[2], c.r[29].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 592u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001185A0; } }
    c.budget -= 1;
L_001184B8:
    set32(c.r[8], ld32((c.r[29].w[0] + 592u)));
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[22], c.r[22].w[0] - 1u);
    set32(c.r[8], c.r[8].w[0] - 24u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 592u), c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001184B8u | kUnwind; return; } goto L_001184B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001185A0; } }
    c.budget -= 1;
L_001184E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = 0ull | 33504ull;
    c.r[16].d[0] = c.r[16].d[0] << 47;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001184F4u); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 175u, depth + 1u); else { c.pc = 0x00119BD8u; return; } if (c.pc != 0x001184F4u) [[unlikely]] return; }
L_001184F4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118508u);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x00118508u) [[unlikely]] return; }
L_00118508:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], ld32((c.r[29].w[0] + 592u)));  if (t) { goto L_00118588; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 63936ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    set32(c.r[3], c.r[3].w[0] + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118528u); st32((c.r[29].w[0] + 592u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118528u) [[unlikely]] return; }
L_00118528:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118534u);  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x00118534u) [[unlikely]] return; }
L_00118534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011853Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x0011853Cu) [[unlikely]] return; }
L_0011853C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[22].w[0] << 2);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118554u); set32(c.r[17], c.r[29].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118554u) [[unlikely]] return; }
L_00118554:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118564u); set32(c.r[22], c.r[22].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00118564u) [[unlikely]] return; }
L_00118564:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118570u);  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x00118570u) [[unlikely]] return; }
L_00118570:
    set32(c.r[3], c.r[22].w[0] << 2);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[29].w[0] + c.r[3].w[0]);  if (t) { goto L_00118594; } }
    c.budget -= 1;
L_00118588:
    set32(c.r[2], c.r[22].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_00118594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011859Cu);  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x0011859Cu) [[unlikely]] return; }
L_0011859C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001185A0:
    c.r[4].d[0] = 0ull | 65472ull;
    c.r[4].d[0] = c.r[4].d[0] << 46;
    c.r[18].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001185B4u); set32(c.r[5], ld32((c.r[29].w[0] + 592u)));  if (depth < kMaxDepth) unit_0006(c, 175u, depth + 1u); else { c.pc = 0x00119BD8u; return; } if (c.pc != 0x001185B4u) [[unlikely]] return; }
L_001185B4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] < 0; set32(c.r[2], c.r[18].w[0] << 3);  if (t) { goto L_00118618; } }
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[16], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
L_001185D8:
    set32(c.r[16], c.r[16].w[0] - 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001185E4u); set32(c.r[18], c.r[18].w[0] - 1u);  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x001185E4u) [[unlikely]] return; }
L_001185E4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001185F4u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x001185F4u) [[unlikely]] return; }
L_001185F4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st64((c.r[17].w[0]), c.r[2].d[0]);
    c.r[5].d[0] = 0ull | 63936ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011860Cu); set32(c.r[17], c.r[17].w[0] - 8u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0011860Cu) [[unlikely]] return; }
L_0011860C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].sd[0] >= 0) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001185D8u | kUnwind; return; } goto L_001185D8; }
L_00118618:
    c.r[18].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] < 0; set32(c.r[5], ld32((c.r[29].w[0] + 568u)));  if (t) { goto L_001186D8; } }
    set32(c.r[6], c.r[29].w[0] + 240u);
    set32(c.r[5], ld32((c.r[29].w[0] + 584u)));
    c.budget -= 3;
L_00118630:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_001186B8; } }
    set32(c.r[19], c.r[22].w[0] - c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] < 0; c.r[23].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001186BC; } }
    set32(c.r[2], c.r[18].w[0] << 3);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[29].w[0] + 400u);
    set32(c.r[17], c.r[8].w[0] + 18544u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_00118660:
    c.r[4].d[0] = ld64((c.r[17].w[0]));
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.r[5].d[0] = ld64((c.r[16].w[0]));
    set32(c.r[16], c.r[16].w[0] + 8u);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[6]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011867Cu); set32(c.r[21], c.r[21].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0011867Cu) [[unlikely]] return; }
L_0011867C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011868Cu);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x0011868Cu) [[unlikely]] return; }
L_0011868C:
    c.r[3].d[0] = c.r[23].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 584u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 608u) & ~15u, c.r[6]);  if (t) { goto L_001186BC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118660u | kUnwind; return; } goto L_00118660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { goto L_001186C4; } }
    c.budget -= 1;
L_001186B8:
    set32(c.r[19], c.r[22].w[0] - c.r[18].w[0]);
    c.budget -= 1;
L_001186BC:
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 2;
L_001186C4:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st64((c.r[2].w[0]), c.r[20].d[0]);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] >= 0; set32(c.r[5], ld32((c.r[29].w[0] + 584u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118630u | kUnwind; return; } goto L_00118630; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 568u)));
    c.budget -= 1;
L_001186D8:
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 568u)));  goto L_00118700; }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] > 0; c.r[18].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00118780; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 588u)));  if (t) { goto L_00118718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 624u));  if (t) { goto L_001189E4; } }
    c.budget -= 1;
L_00118700:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[3], ld32((c.r[29].w[0] + 588u)));  if (t) { goto L_00118858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 624u));  if (t) { goto L_001189E4; } }
    c.budget -= 1;
L_00118718:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] < 0; set32(c.r[6], c.r[29].w[0] + 240u);  if (t) { goto L_00118750; } }
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 3;
L_00118730:
    c.r[5].d[0] = ld64((c.r[16].w[0]));
    set32(c.r[16], c.r[16].w[0] - 8u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118744u); set32(c.r[18], c.r[18].w[0] - 1u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00118744u) [[unlikely]] return; }
L_00118744:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118730u | kUnwind; return; } goto L_00118730; } }
L_00118750:
    set32(c.r[8], ld32((c.r[29].w[0] + 564u)));
    st64((c.r[8].w[0]), c.r[20].d[0]);
    c.budget -= 4;
    if (c.r[30].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 588u)));  goto L_001189E0; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118770u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00118770u) [[unlikely]] return; }
L_00118770:
    set32(c.r[3], ld32((c.r[29].w[0] + 564u)));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 588u)));  if (t) { goto L_001189E0; } }
L_00118780:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] < 0; set32(c.r[6], c.r[29].w[0] + 240u);  if (t) { goto L_001187B8; } }
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 3;
L_00118798:
    c.r[5].d[0] = ld64((c.r[16].w[0]));
    set32(c.r[16], c.r[16].w[0] - 8u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001187ACu); set32(c.r[18], c.r[18].w[0] - 1u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x001187ACu) [[unlikely]] return; }
L_001187AC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118798u | kUnwind; return; } goto L_00118798; } }
L_001187B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 564u)));
    st64((c.r[4].w[0]), c.r[20].d[0]);
    c.budget -= 4;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_001187E0; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001187D8u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001187D8u) [[unlikely]] return; }
L_001187D8:
    set32(c.r[5], ld32((c.r[29].w[0] + 564u)));
    st64((c.r[5].w[0]), c.r[2].d[0]);
    c.budget -= 2;
L_001187E0:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 240u));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001187F0u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001187F0u) [[unlikely]] return; }
L_001187F0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].sd[0] <= 0; set32(c.r[6], ld32((c.r[29].w[0] + 564u)));  if (t) { goto L_00118828; } }
    c.r[18].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 248u);
    c.budget -= 3;
L_00118808:
    c.r[5].d[0] = ld64((c.r[16].w[0]));
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011881Cu); set32(c.r[18], c.r[18].w[0] - 1u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x0011881Cu) [[unlikely]] return; }
L_0011881C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 564u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118808u | kUnwind; return; } goto L_00118808; } }
L_00118828:
    st64((c.r[6].w[0] + 8u), c.r[20].d[0]);
    c.budget -= 3;
    if (c.r[30].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 588u)));  goto L_001189E0; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0011883C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118844u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00118844u) [[unlikely]] return; }
L_00118844:
    set32(c.r[8], ld32((c.r[29].w[0] + 564u)));
    st64((c.r[8].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 588u)));  if (t) { goto L_001189E0; } }
    c.budget -= 1;
L_00118858:
    c.r[18].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0; c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_001188C4; } }
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[3].w[0] + 232u);
    c.budget -= 3;
L_00118870:
    c.r[16].d[0] = ld64((c.r[19].w[0]));
    c.r[17].d[0] = ld64((c.r[19].w[0] + 8u));
    c.budget -= 2;
L_00118878:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00118880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118888u); set32(c.r[18], c.r[18].w[0] - 1u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00118888u) [[unlikely]] return; }
L_00118888:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011889Cu);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x0011889Cu) [[unlikely]] return; }
L_0011889C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001188ACu);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x001188ACu) [[unlikely]] return; }
L_001188AC:
    st64((c.r[19].w[0]), c.r[20].d[0]);
    st64((c.r[19].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] > 0; set32(c.r[19], c.r[19].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118870u | kUnwind; return; } goto L_00118870; } }
    c.r[18].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_001188C0:
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_001188C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[18].d[0] = c.r[22].d[0] + 0ull;  goto L_0011892C; }
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[3].w[0] + 232u);
    c.budget -= 3;
L_001188D8:
    c.r[16].d[0] = ld64((c.r[19].w[0]));
    c.r[17].d[0] = ld64((c.r[19].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001188F0u); set32(c.r[18], c.r[18].w[0] - 1u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x001188F0u) [[unlikely]] return; }
L_001188F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118904u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00118904u) [[unlikely]] return; }
    goto L_00118904;
L_00118900:
    c.budget -= 1;
L_00118904:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118914u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00118914u) [[unlikely]] return; }
L_00118914:
    st64((c.r[19].w[0]), c.r[20].d[0]);
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    st64((c.r[19].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001188D8u | kUnwind; return; } goto L_001188D8; } }
    c.r[18].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_0011892C:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[29].w[0] + 240u);  if (t) { goto L_0011896C; } }
    set32(c.r[2], c.r[18].w[0] << 3);
    c.budget -= 1;
L_00118940:
    set32(c.r[16], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 2;
L_00118948:
    c.r[5].d[0] = ld64((c.r[16].w[0]));
    set32(c.r[16], c.r[16].w[0] - 8u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011895Cu); set32(c.r[18], c.r[18].w[0] - 1u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x0011895Cu) [[unlikely]] return; }
L_0011895C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118948u | kUnwind; return; } goto L_00118948; } }
L_0011896C:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 564u)));  if (t) { goto L_00118990; } }
    c.r[2].d[0] = ld64((c.r[29].w[0] + 240u));
    c.r[3].d[0] = ld64((c.r[29].w[0] + 248u));
    st64((c.r[4].w[0] + 16u), c.r[20].d[0]);
    st64((c.r[4].w[0]), c.r[2].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 588u)));  if (t) { goto L_001189E0; } }
L_00118990:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 240u));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001189A4u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001189A4u) [[unlikely]] return; }
L_001189A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 564u)));
    st64((c.r[5].w[0]), c.r[2].d[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 248u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001189BCu);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001189BCu) [[unlikely]] return; }
L_001189BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 564u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st64((c.r[6].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001189D4u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001189D4u) [[unlikely]] return; }
L_001189D4:
    set32(c.r[8], ld32((c.r[29].w[0] + 564u)));
    st64((c.r[8].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 588u)));
    c.budget -= 3;
L_001189E0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 624u));
    c.budget -= 1;
L_001189E4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 632u));
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 640u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 648u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 656u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 664u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 672u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 680u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 688u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 696u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 704u);  c.pc = t; return; }
L_00118A18:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E3F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_00118A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118A70u);  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x00118A70u) [[unlikely]] return; }
L_00118A70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00118A88; } }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00118C30; } }
    c.budget -= 1;
L_00118A88:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118A98u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118A98u) [[unlikely]] return; }
L_00118A98:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118AACu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118AACu) [[unlikely]] return; }
L_00118AAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 18696u));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118AC4u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118AC4u) [[unlikely]] return; }
    goto L_00118AC4;
L_00118AC0:
    c.budget -= 1;
L_00118AC4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 18704u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118AD8u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00118AD8u) [[unlikely]] return; }
L_00118AD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118AE8u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118AE8u) [[unlikely]] return; }
L_00118AE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 18712u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118AFCu);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00118AFCu) [[unlikely]] return; }
L_00118AFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118B0Cu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118B0Cu) [[unlikely]] return; }
L_00118B0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 18720u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118B20u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00118B20u) [[unlikely]] return; }
L_00118B20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118B30u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118B30u) [[unlikely]] return; }
L_00118B30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 18728u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118B44u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00118B44u) [[unlikely]] return; }
L_00118B44:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00118BA8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118B6Cu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118B6Cu) [[unlikely]] return; }
L_00118B6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 18736u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118B80u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00118B80u) [[unlikely]] return; }
L_00118B80:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118B90u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118B90u) [[unlikely]] return; }
L_00118B90:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118BA0u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00118BA0u) [[unlikely]] return; }
L_00118BA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00118C30; } }
L_00118BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118BB0u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118BB0u) [[unlikely]] return; }
L_00118BB0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_00118BBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118BC4u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118BC4u) [[unlikely]] return; }
L_00118BC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118BD4u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00118BD4u) [[unlikely]] return; }
L_00118BD4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118BE4u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118BE4u) [[unlikely]] return; }
L_00118BE4:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118BF4u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00118BF4u) [[unlikely]] return; }
L_00118BF4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 2;
L_00118BFC:
    c.r[5].d[0] = ld64((c.r[1].w[0] + 18744u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118C0Cu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00118C0Cu) [[unlikely]] return; }
L_00118C0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118C1Cu);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00118C1Cu) [[unlikely]] return; }
L_00118C1C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118C2Cu);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00118C2Cu) [[unlikely]] return; }
L_00118C2C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00118C30:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 3;
L_00118C3C:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00118C50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[0] = c.f[12];
    st32((c.r[29].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[12]);
    set32(c.r[5], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x31FF0000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] | 39321ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_00118CA0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00118DB8; } }
L_00118CA0:
    c.f[4] = fp::mul(c.f[12], c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xAD470000u);
    c.r[1].d[0] = c.r[1].d[0] | 55118ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x310F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 29942ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB4930000u);
    c.r[1].d[0] = c.r[1].d[0] | 62076ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37D00000u);
    c.r[1].d[0] = c.r[1].d[0] | 3329ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBAB60000u);
    c.r[1].d[0] = c.r[1].d[0] | 2913ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 36;
    { const bool t = c.r[4].d[0] != 0ull; c.f[1] = fp::mul(c.f[4], c.f[0]);  if (t) { goto L_00118D60; } }
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::mul(c.f[12], c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[3], c.f[0]);  if (t) { goto L_00118DB8; } }
    c.budget -= 1;
L_00118D60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E900000u);
    c.f[5] = c.r[1].w[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);  if (t) { goto L_00118D80; } }
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[5] = c.r[3].w[0];
    c.budget -= 2;
L_00118D80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::mul(c.f[4], c.f[1]);
    c.f[3] = fp::mul(c.f[12], c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 14;
L_00118DB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00118DC0:
    set32(c.r[2], c.r[6].w[0] - 3u);
    set32(c.r[10], c.r[6].w[0] + 4u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] - 432u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[10].d[0];
    st64((c.r[29].w[0] + 392u), c.r[23].d[0]);
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    st32((c.r[29].w[0] + 324u), c.r[8].w[0]);
    c.r[2].d[0] = c.r[23].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] << 2);
    if (c.r[2].d[0] != 0) c.r[23].d[0] = 0ull;
    st64((c.r[29].w[0] + 368u), c.r[20].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[20], c.r[20].w[0] + c.r[8].w[0]);
    set32(c.r[20], ld32((c.r[20].w[0] + 18752u)));
    set32(c.r[2], c.r[23].w[0] << 3);
    st64((c.r[29].w[0] + 352u), c.r[18].d[0]);
    set32(c.r[18], c.r[7].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + c.r[20].w[0]);
    st64((c.r[29].w[0] + 344u), c.r[17].d[0]);
    set32(c.r[17], c.r[6].w[0] - 8u);
    st64((c.r[29].w[0] + 400u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 336u), c.r[16].d[0]);
    set32(c.r[5], c.r[23].w[0] - c.r[18].w[0]);
    st64((c.r[29].w[0] + 360u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 376u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 384u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 408u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 416u), c.f[20]);
    st32((c.r[29].w[0] + 320u), c.r[4].w[0]);
    c.budget -= 34;
    { const bool t = c.r[3].sd[0] < 0; st32((c.r[29].w[0] + 328u), c.r[9].w[0]);  if (t) { goto L_00118E80; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.budget -= 4;
L_00118E58:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { st32((c.r[3].w[0]), 0u);  goto L_00118E6C; }
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 3;
L_00118E6C:
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118E58u | kUnwind; return; } goto L_00118E58; } }
L_00118E80:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00118EF0; } }
    set32(c.r[2], c.r[29].w[0] + 240u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_00118E98:
    c.f[2] = 0u;
    c.budget -= 3;
    if (c.r[18].sd[0] < 0) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_00118EDC; }
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 5;
L_00118EB8:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; c.f[2] = fp::add(c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118EB8u | kUnwind; return; } goto L_00118EB8; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00118EDC:
    st32((c.r[7].w[0]), c.f[2]);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118E98u | kUnwind; return; } goto L_00118E98; } }
L_00118EF0:
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00118EF4:
    set32(c.r[19], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + 240u);
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] <= 0; c.f[20] = ld32((c.r[2].w[0]));  if (t) { goto L_00118F6C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.f[4] = c.r[1].w[0];
    set32(c.r[3], c.r[2].w[0] - 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[3] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
L_00118F28:
    c.f[0] = fp::mul(c.f[20], c.f[4]);
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.f[20] = fp::add(c.f[1], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[4].w[0]), c.f[1]);
    c.budget -= 17;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118F28u | kUnwind; return; } goto L_00118F28; } }
L_00118F6C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118F78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 206u, depth + 1u); else { c.pc = 0x0011A3C8u; return; } if (c.pc != 0x00118F78u) [[unlikely]] return; }
L_00118F78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[12] = c.r[1].w[0];
    c.f[20] = c.f[0];
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118F90u); c.f[12] = fp::mul(c.f[20], c.f[12]);  if (depth < kMaxDepth) unit_0006(c, 205u, depth + 1u); else { c.pc = 0x0011A2D8u; return; } if (c.pc != 0x00118F90u) [[unlikely]] return; }
L_00118F90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[21], c.f[0]);
    c.f[0] = c.r[21].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[17].sd[0] <= 0; c.f[20] = fp::sub(c.f[20], c.f[0]);  if (t) { goto L_00119000; } }
    set32(c.r[3], c.r[19].w[0] - 4u);
    set32(c.r[2], 0u + 8u);
    set32(c.r[5], c.r[29].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] - c.r[17].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[2].w[0] & 31u)));
    set32(c.r[2], c.r[6].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[21], c.r[21].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[4].w[0] & 31u)));  if (t) { goto L_00119034; } }
    c.budget -= 1;
L_00119000:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] + c.r[29].w[0]);  if (t) { goto L_00119018; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));  if (t) { goto L_00119034; } }
    c.budget -= 1;
L_00119018:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[22], 0u + 2u);  goto L_00119034; }
L_00119034:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0;  if (t) { goto L_00119100; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0011908C; } }
    set32(c.r[8], 0u + 256u);
    set32(c.r[4], 0u + 255u);
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_00119058:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_00119070; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[8].w[0] - c.r[5].w[0]);  if (t) { goto L_00119078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_00119074; } }
L_00119070:
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_00119074:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00119078:
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119058u | kUnwind; return; } goto L_00119058; } }
L_0011908C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_001190DC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001190B0; } }
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[19].w[0] - 4u);  goto L_001190C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001190DC; } }
L_001190B0:
    set32(c.r[2], c.r[19].w[0] - 4u);
    set32(c.r[4], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 127ull;  if (t) { goto L_001190D4; } }
    c.budget -= 1;
L_001190C8:
    set32(c.r[4], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.budget -= 3;
L_001190D4:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_001190DC:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00119100; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull; c.f[20] = fp::sub(c.f[12], c.f[20]);  if (t) { goto L_00119100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001190FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 206u, depth + 1u); else { c.pc = 0x0011A3C8u; return; } if (c.pc != 0x001190FCu) [[unlikely]] return; }
L_001190FC:
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 1;
L_00119100:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], c.r[16].w[0] - 1u);  if (t) { goto L_00119260; } }
    c.r[2].d[0] = c.r[6].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0011914C; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
L_00119130:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] - 4u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119130u | kUnwind; return; } goto L_00119130; } }
L_0011914C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] - 1u);  if (t) { goto L_00119250; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_00119194; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[2].w[0] - 4u);
    c.budget -= 4;
L_00119178:
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_00119180:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119178u | kUnwind; return; } goto L_00119178; } }
L_00119194:
    set32(c.r[9], c.r[16].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118EF4u | kUnwind; return; } goto L_00118EF4; } }
    set32(c.r[11], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[2], c.r[18].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[23].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[7], c.r[29].w[0] + 240u);
    set32(c.r[4], c.r[4].w[0] + c.r[11].w[0]);
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[2].w[0] + c.r[5].w[0]);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 14;
L_001191E0:
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[6].w[0]);
    c.f[2] = 0u;
    c.budget -= 6;
    { const bool t = c.r[18].sd[0] < 0; st32((c.r[8].w[0]), c.f[0]);  if (t) { goto L_00119228; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + c.r[11].w[0]);
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_00119208:
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; c.f[2] = fp::add(c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119208u | kUnwind; return; } goto L_00119208; } }
L_00119228:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[3].w[0]), c.f[2]);
    c.r[2].d[0] = c.r[10].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001191E0u | kUnwind; return; } goto L_001191E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118EF4u | kUnwind; return; } goto L_00118EF4; } }
    c.budget -= 1;
L_00119250:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 4;
L_00119260:
    c.budget -= 2;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[12] = c.f[20];  if (t) { goto L_001192B0; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 8u);  if (t) { goto L_00119338; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00119288:
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119288u | kUnwind; return; } goto L_00119288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00119338; } }
    c.budget -= 1;
L_001192B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001192B8u); set32(c.r[4], 0u - c.r[17].w[0]);  if (depth < kMaxDepth) unit_0006(c, 206u, depth + 1u); else { c.pc = 0x0011A3C8u; return; } if (c.pc != 0x001192B8u) [[unlikely]] return; }
L_001192B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[1] = c.r[1].w[0];
    c.f[20] = c.f[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[29].w[0] + c.r[19].w[0]);  if (t) { goto L_00119330; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + c.r[19].w[0]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[4].w[0]), c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { goto L_00119338; } }
    c.budget -= 1;
L_00119330:
    c.f[0] = fp::cvt_w_s(c.f[20]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 2;
L_00119338:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119348u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 206u, depth + 1u); else { c.pc = 0x0011A3C8u; return; } if (c.pc != 0x00119348u) [[unlikely]] return; }
L_00119348:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0; c.f[2] = c.f[0];  if (t) { goto L_00119394; } }
    set32(c.r[2], c.r[29].w[0] + 240u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
L_00119368:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[6].sd[0] >= 0; st32((c.r[2].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119368u | kUnwind; return; } goto L_00119368; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00119394:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_00119428; } }
    set32(c.r[3], c.r[29].w[0] + 240u);
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[12], c.r[2].w[0] + 18768u);
    set32(c.r[11], c.r[29].w[0] + 160u);
    c.budget -= 5;
L_001193B0:
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] < 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00119410; } }
    set32(c.r[7], c.r[16].w[0] - c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] < 0; c.r[9].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00119414; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    c.r[5].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.budget -= 4;
L_001193D8:
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.f[1] = ld32((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.f[2] = fp::add(c.f[2], c.f[0]);  if (t) { goto L_00119414; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001193D8u | kUnwind; return; } goto L_001193D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { goto L_00119418; } }
    c.budget -= 1;
L_00119410:
    set32(c.r[7], c.r[16].w[0] - c.r[6].w[0]);
    c.budget -= 1;
L_00119414:
    set32(c.r[2], c.r[7].w[0] << 2);
    c.budget -= 1;
L_00119418:
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] >= 0; st32((c.r[2].w[0]), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001193B0u | kUnwind; return; } goto L_001193B0; } }
L_00119428:
    set32(c.r[5], ld32((c.r[29].w[0] + 324u)));
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 324u)));  goto L_00119450; }
    c.budget -= 2;
    if (c.r[5].sd[0] > 0) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_001194B0; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 7ull;  if (t) { goto L_00119468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 336u));  if (t) { goto L_00119634; } }
L_00119450:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[21].d[0] & 7ull;  if (t) { goto L_00119538; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 336u));  if (t) { goto L_00119634; } }
    c.budget -= 1;
L_00119468:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = 0u;
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[3], c.r[29].w[0] + 160u);  if (t) { goto L_0011949C; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00119480:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] >= 0; c.f[2] = fp::add(c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119480u | kUnwind; return; } goto L_00119480; } }
L_0011949C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[30].w[0]), c.f[2]);  if (t) { goto L_0011962C; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0]), c.f[0]);  if (t) { goto L_0011962C; } }
L_001194B0:
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[3], c.r[29].w[0] + 160u);  if (t) { goto L_001194E4; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_001194C8:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] >= 0; c.f[2] = fp::add(c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001194C8u | kUnwind; return; } goto L_001194C8; } }
L_001194E4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[30].w[0]), c.f[2]);  if (t) { goto L_001194F4; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[30].w[0]), c.f[0]);
    c.budget -= 2;
L_001194F4:
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; c.f[2] = fp::sub(c.f[0], c.f[2]);  if (t) { goto L_00119524; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.budget -= 2;
L_00119508:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; c.f[2] = fp::add(c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119508u | kUnwind; return; } goto L_00119508; } }
L_00119524:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[30].w[0] + 4u), c.f[2]);  if (t) { goto L_0011962C; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0] + 4u), c.f[0]);  if (t) { goto L_0011962C; } }
L_00119538:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0; c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00119580; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 156u);
    c.budget -= 3;
L_00119550:
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = fp::add(c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[3].w[0]), c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[3], c.r[3].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119550u | kUnwind; return; } goto L_00119550; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 2;
L_00119580:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_001195C8; }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 156u);
    c.budget -= 4;
L_00119598:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.f[2] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[3].w[0]), c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119598u | kUnwind; return; } goto L_00119598; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001195C8:
    c.f[2] = 0u;
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_001195FC; } }
    set32(c.r[3], c.r[29].w[0] + 160u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_001195E0:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.f[2] = fp::add(c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001195E0u | kUnwind; return; } goto L_001195E0; } }
L_001195FC:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; c.f[0] = ld32((c.r[29].w[0] + 160u));  if (t) { goto L_00119610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 164u));  if (t) { goto L_00119620; } }
    c.budget -= 1;
L_00119610:
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 4;
L_00119620:
    st32((c.r[30].w[0] + 8u), c.f[2]);
    st32((c.r[30].w[0]), c.f[0]);
    st32((c.r[30].w[0] + 4u), c.f[1]);
    c.budget -= 3;
L_0011962C:
    c.r[2].d[0] = c.r[21].d[0] & 7ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 336u));
    c.budget -= 2;
L_00119634:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 344u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 352u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 360u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 368u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 376u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 384u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 392u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 400u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 408u));
    c.f[20] = ld32((c.r[29].w[0] + 416u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 432u);  c.pc = t; return; }
L_00119668:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[0] = c.f[12];
    st32((c.r[29].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[12]);
    set32(c.r[5], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x31FF0000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[2].d[0] != 0ull) { c.f[3] = fp::mul(c.f[12], c.f[12]);  goto L_001196AC; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.f[0] = c.f[12];  if (t) { goto L_00119784; } }
    c.f[3] = fp::mul(c.f[12], c.f[12]);
    c.budget -= 1;
L_001196AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x2F2E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 51667ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB2D70000u);
    c.r[1].d[0] = c.r[1].d[0] | 12084ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[4] = fp::mul(c.f[3], c.f[12]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x36380000u);
    c.r[1].d[0] = c.r[1].d[0] | 61211ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB9500000u);
    c.r[1].d[0] = c.r[1].d[0] | 3329ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C080000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.budget -= 29;
    { const bool t = c.r[4].d[0] != 0ull; c.f[1] = fp::add(c.f[0], c.f[1]);  if (t) { goto L_00119748; } }
    c.f[0] = fp::mul(c.f[3], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBE2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[12], c.f[0]);  if (t) { goto L_00119784; } }
    c.budget -= 1;
L_00119748:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::mul(c.f[4], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBE2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[13], c.f[0]);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[13]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 15;
L_00119784:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00119790:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[6].d[0] | c.r[3].d[0];  c.pc = t; return; }
L_001197D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE90000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | 8699ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00119820; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119814u);  if (depth < kMaxDepth) unit_0005(c, 444u, depth + 1u); else { c.pc = 0x00117BF0u; return; } if (c.pc != 0x00119814u) [[unlikely]] return; }
L_00119814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001198F4; } }
    c.budget -= 1;
L_00119820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011983Cu);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x0011983Cu) [[unlikely]] return; }
L_0011983C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001198F4; } }
    goto L_00119844;
L_00119840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00119844:
    c.budget -= 1;
L_00119848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119850u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 369u, depth + 1u); else { c.pc = 0x00116498u; return; } if (c.pc != 0x00119850u) [[unlikely]] return; }
L_00119850:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_001198A0; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_00119878; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00119888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001198E0; } }
L_00119878:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001198B8; } }
L_00119880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001198E0; } }
L_00119888:
    c.r[4].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119898u);  if (depth < kMaxDepth) unit_0005(c, 444u, depth + 1u); else { c.pc = 0x00117BF0u; return; } if (c.pc != 0x00119898u) [[unlikely]] return; }
L_00119898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001198F4; } }
L_001198A0:
    c.r[4].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001198B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 92u, depth + 1u); else { c.pc = 0x00118A18u; return; } if (c.pc != 0x001198B0u) [[unlikely]] return; }
L_001198B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001198C8; } }
L_001198B8:
    c.r[4].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 2;
L_001198C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001198C8u);  if (depth < kMaxDepth) unit_0005(c, 444u, depth + 1u); else { c.pc = 0x00117BF0u; return; } if (c.pc != 0x001198C8u) [[unlikely]] return; }
L_001198C8:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001198D8u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001198D8u) [[unlikely]] return; }
L_001198D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001198F4; } }
L_001198E0:
    c.r[4].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001198F0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 92u, depth + 1u); else { c.pc = 0x00118A18u; return; } if (c.pc != 0x001198F0u) [[unlikely]] return; }
L_001198F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001198F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00119900:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00119938:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] << 32;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 20));
    c.r[3].d[0] = c.r[3].d[0] & 2047ull;
    set32(c.r[17], c.r[3].w[0] - 1023u);
    c.r[2].d[0] = c.r[17].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_00119A48; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_001199E0; } }
    goto L_00119984;
L_00119980:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.budget -= 1;
L_00119984:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[2].w[0] + 18840u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119994u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00119994u) [[unlikely]] return; }
L_00119994:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001199A4u);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x001199A4u) [[unlikely]] return; }
L_001199A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00119AFC; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_001199C0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00119AFC; } }
L_001199C0:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[18].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119AFC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0xBFF00000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00119AFC; } }
L_001199E0:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> (c.r[17].w[0] & 31u)));
    c.r[3].d[0] = c.r[16].d[0] & c.r[19].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[18].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00119B30; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 1;
L_00119A00:
    c.r[5].d[0] = ld64((c.r[2].w[0] + 18840u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119A0Cu);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00119A0Cu) [[unlikely]] return; }
L_00119A0C:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119A1Cu);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x00119A1Cu) [[unlikely]] return; }
L_00119A1C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00119AFC; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[2].d[0] = ~(0ull | c.r[19].d[0]);  if (t) { goto L_00119A3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[17].w[0] & 31u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ~(0ull | c.r[19].d[0]);
    c.budget -= 4;
L_00119A3C:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];  if (t) { goto L_00119AFC; } }
L_00119A48:
    c.r[2].d[0] = c.r[17].sd[0] < 52ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 1043u);  if (t) { goto L_00119A78; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00119B28; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119A6Cu);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00119A6Cu) [[unlikely]] return; }
L_00119A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00119B30; } }
    c.budget -= 1;
L_00119A78:
    set32(c.r[3], 0u - 1u);
    set32(c.r[19], c.r[3].w[0] >> (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[18].d[0] & c.r[19].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00119B30; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[2].w[0] + 18840u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119AA0u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00119AA0u) [[unlikely]] return; }
L_00119AA0:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119AB0u);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x00119AB0u) [[unlikely]] return; }
L_00119AB0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00119AFC; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[2].d[0] = ~(0ull | c.r[19].d[0]);  if (t) { goto L_00119AF8; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 52u);  if (t) { goto L_00119AD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00119AF4; } }
    c.budget -= 1;
L_00119AD8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
L_00119AF4:
    c.r[2].d[0] = ~(0ull | c.r[19].d[0]);
    c.budget -= 1;
L_00119AF8:
    c.r[18].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.budget -= 1;
L_00119AFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[20].d[0] = c.r[20].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.r[6].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 11;
L_00119B28:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00119B30:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00119B50:
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    set32(c.r[5], 0u - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);  c.pc = t; return; }
L_00119B98:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    set32(c.r[5], 0u - c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[2], c.r[6].w[0] - c.r[2].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 31);  c.pc = t; return; }
L_00119BD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[17].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 20));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00119C80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00119DAC; }
    c.r[5].d[0] = 0ull | 34464ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119C3Cu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00119C3Cu) [[unlikely]] return; }
L_00119C3C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[7].d[0] & c.r[17].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 15536ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 20));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] - 54u);  if (t) { goto L_00119C80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[2].w[0] + 18888u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119C74u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00119C74u) [[unlikely]] return; }
L_00119C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00119DAC; } }
    c.budget -= 1;
L_00119C80:
    set32(c.r[2], 0u + 2047u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);  if (t) { goto L_00119CA8; } }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119C9Cu);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00119C9Cu) [[unlikely]] return; }
L_00119C9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00119DAC; } }
    c.budget -= 1;
L_00119CA8:
    c.r[2].d[0] = c.r[3].sd[0] < 2047ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_00119CC8; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[2].w[0] + 18896u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00119D40; } }
    c.budget -= 1;
L_00119CC8:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { c.r[2].d[0] = c.r[3].sd[0] < -53ll ? 1ull : 0ull;  goto L_00119D08; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x800F0000u);
    set32(c.r[5], c.r[3].w[0] << 20);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00119DAC; } }
L_00119D08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 54u);  goto L_00119D68; }
    c.r[2].d[0] = 0ull | 50000ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_00119D38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[2].w[0] + 18896u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00119D40; } }
    c.budget -= 1;
L_00119D38:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[2].w[0] + 18888u));
    c.budget -= 2;
L_00119D40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119D4Cu);  if (depth < kMaxDepth) unit_0006(c, 149u, depth + 1u); else { c.pc = 0x00119790u; return; } if (c.pc != 0x00119D4Cu) [[unlikely]] return; }
L_00119D4C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119D5Cu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00119D5Cu) [[unlikely]] return; }
L_00119D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00119DAC; } }
    c.budget -= 1;
L_00119D68:
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x800F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], c.r[3].w[0] << 20);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 62016ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119DA8u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00119DA8u) [[unlikely]] return; }
L_00119DA8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00119DAC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00119DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE90000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | 8699ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00119E08; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119DFCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 92u, depth + 1u); else { c.pc = 0x00118A18u; return; } if (c.pc != 0x00119DFCu) [[unlikely]] return; }
L_00119DFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00119EEC; } }
    c.budget -= 1;
L_00119E08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119E30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119E24u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00119E24u) [[unlikely]] return; }
L_00119E24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00119EEC; } }
    c.budget -= 1;
L_00119E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119E38u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 369u, depth + 1u); else { c.pc = 0x00116498u; return; } if (c.pc != 0x00119E38u) [[unlikely]] return; }
L_00119E38:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00119E3C:
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00119E88; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_00119E60; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00119E70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00119EC8; } }
L_00119E60:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00119EA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00119EC8; } }
L_00119E70:
    c.r[4].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119E80u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 92u, depth + 1u); else { c.pc = 0x00118A18u; return; } if (c.pc != 0x00119E80u) [[unlikely]] return; }
L_00119E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00119EEC; } }
L_00119E88:
    c.r[4].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119E98u);  if (depth < kMaxDepth) unit_0005(c, 444u, depth + 1u); else { c.pc = 0x00117BF0u; return; } if (c.pc != 0x00119E98u) [[unlikely]] return; }
L_00119E98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00119EEC; } }
L_00119EA0:
    c.r[4].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119EB0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 92u, depth + 1u); else { c.pc = 0x00118A18u; return; } if (c.pc != 0x00119EB0u) [[unlikely]] return; }
L_00119EB0:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119EC0u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00119EC0u) [[unlikely]] return; }
L_00119EC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00119EEC; } }
L_00119EC8:
    c.r[4].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119ED8u);  if (depth < kMaxDepth) unit_0005(c, 444u, depth + 1u); else { c.pc = 0x00117BF0u; return; } if (c.pc != 0x00119ED8u) [[unlikely]] return; }
L_00119ED8:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119EE8u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00119EE8u) [[unlikely]] return; }
L_00119EE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00119EEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00119EF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[13] = c.f[12];
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.f[13]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x507F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[16].d[0] = c.r[17].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00119F60; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_00119F48; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.f[1] = ld32((c.r[2].w[0] + 18916u));
    c.f[0] = ld32((c.r[3].w[0] + 18932u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_0011A180; } }
L_00119F48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.f[0] = ld32((c.r[2].w[0] + 18916u));
    c.f[1] = ld32((c.r[3].w[0] + 18932u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_0011A180; } }
L_00119F60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EDF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x30FF0000u);  if (t) { goto L_00119FB8; } }
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0011A0A4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[1].d[0] = c.r[1].d[0] | 62154ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[13], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[13];  if (t) { goto L_0011A180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = fp::mul(c.f[13], c.f[13]);  if (t) { goto L_0011A0A8; } }
    c.budget -= 1;
L_00119FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119FC0u);  if (depth < kMaxDepth) unit_0006(c, 204u, depth + 1u); else { c.pc = 0x0011A2B0u; return; } if (c.pc != 0x00119FC0u) [[unlikely]] return; }
L_00119FC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F970000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.f[13] = c.f[0];  if (t) { goto L_0011A048; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F2F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011A020; } }
    c.f[0] = fp::add(c.f[13], c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[13], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_div(c, 13u, c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0011A0A4; } }
    c.budget -= 1;
L_0011A020:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[13], c.f[0]);
    c.f[0] = fp::sub(c.f[13], c.f[0]);
    fpu_div(c, 13u, c.f[0], c.f[1]);
    c.budget -= 8;
L_0011A040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0011A0A4; } }
L_0011A048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x401B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 3u);  goto L_0011A090; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[13], c.f[0]);
    c.f[0] = fp::sub(c.f[13], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_div(c, 13u, c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0011A0A4; } }
    c.budget -= 1;
L_0011A090:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    fpu_div(c, 13u, c.f[0], c.f[13]);
    c.budget -= 5;
L_0011A0A4:
    c.f[12] = fp::mul(c.f[13], c.f[13]);
    c.budget -= 1;
L_0011A0A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] + 18936u);
    c.f[7] = ld32((c.r[2].w[0] + 40u));
    c.f[4] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = fp::mul(c.f[12], c.f[12]);
    c.f[5] = ld32((c.r[2].w[0] + 36u));
    c.f[6] = ld32((c.r[2].w[0] + 24u));
    c.f[1] = ld32((c.r[2].w[0] + 28u));
    c.f[8] = ld32((c.r[2].w[0] + 16u));
    c.f[7] = fp::mul(c.f[0], c.f[7]);
    c.f[2] = ld32((c.r[2].w[0] + 20u));
    c.f[5] = fp::mul(c.f[0], c.f[5]);
    c.f[9] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0] + 12u));
    c.f[10] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = fp::add(c.f[4], c.f[7]);
    c.f[11] = ld32((c.r[2].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[5]);
    c.f[4] = fp::mul(c.f[0], c.f[4]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[6] = fp::add(c.f[6], c.f[4]);
    c.f[2] = fp::add(c.f[2], c.f[1]);
    c.f[6] = fp::mul(c.f[0], c.f[6]);
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    c.f[8] = fp::add(c.f[8], c.f[6]);
    c.f[3] = fp::add(c.f[3], c.f[2]);
    c.f[8] = fp::mul(c.f[0], c.f[8]);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    c.f[9] = fp::add(c.f[9], c.f[8]);
    c.f[10] = fp::add(c.f[10], c.f[3]);
    c.f[9] = fp::mul(c.f[0], c.f[9]);
    c.f[1] = fp::mul(c.f[0], c.f[10]);
    c.f[11] = fp::add(c.f[11], c.f[9]);
    c.budget -= 35;
    { const bool t = c.r[3].sd[0] >= 0; c.f[0] = fp::mul(c.f[12], c.f[11]);  if (t) { goto L_0011A148; } }
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[13], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[13], c.f[0]);  if (t) { goto L_0011A180; } }
    c.budget -= 1;
L_0011A148:
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[1], c.r[1].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[1].w[0] + 18920u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[1], c.r[1].w[0] + c.r[2].w[0]);
    c.f[2] = ld32((c.r[1].w[0] + 18904u));
    c.f[0] = fp::mul(c.f[13], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[13]);
    c.budget -= 13;
    { const bool t = c.r[17].sd[0] >= 0; c.f[0] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_0011A180; } }
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 1;
L_0011A180:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011A198:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[0] = c.f[12];
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[13]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011A1D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[0] = c.f[12];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 4056ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0011A220; } }
    c.f[13] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A218u);  if (depth < kMaxDepth) unit_0006(c, 120u, depth + 1u); else { c.pc = 0x00118C50u; return; } if (c.pc != 0x0011A218u) [[unlikely]] return; }
L_0011A218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0011A2A4; } }
L_0011A220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A228u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 437u, depth + 1u); else { c.pc = 0x00117750u; return; } if (c.pc != 0x0011A228u) [[unlikely]] return; }
L_0011A228:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0011A270; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_0011A250; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.f[12] = ld32((c.r[29].w[0]));  if (t) { goto L_0011A260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0011A298; } }
L_0011A250:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.f[12] = ld32((c.r[29].w[0]));  if (t) { goto L_0011A288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0011A298; } }
L_0011A260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A268u); c.f[13] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_0006(c, 120u, depth + 1u); else { c.pc = 0x00118C50u; return; } if (c.pc != 0x0011A268u) [[unlikely]] return; }
L_0011A268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0011A2A4; } }
L_0011A270:
    c.f[12] = ld32((c.r[29].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A280u); c.f[13] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_0006(c, 148u, depth + 1u); else { c.pc = 0x00119668u; return; } if (c.pc != 0x0011A280u) [[unlikely]] return; }
L_0011A280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_0011A2A0; } }
L_0011A288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A290u); c.f[13] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_0006(c, 120u, depth + 1u); else { c.pc = 0x00118C50u; return; } if (c.pc != 0x0011A290u) [[unlikely]] return; }
L_0011A290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_0011A2A0; } }
L_0011A298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A2A0u); c.f[13] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_0006(c, 148u, depth + 1u); else { c.pc = 0x00119668u; return; } if (c.pc != 0x0011A2A0u) [[unlikely]] return; }
L_0011A2A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0011A2A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011A2B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[0] = c.f[12];
    st32((c.r[29].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011A2D8:
    set32(c.r[3], c.f[12]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[6].w[0] >> 23);
    set32(c.r[5], c.r[3].w[0] - 127u);
    c.r[2].d[0] = c.r[5].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = c.f[12];  if (t) { goto L_0011A3C0; } }
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);  goto L_0011A360; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[1].d[0] = c.r[1].d[0] | 62154ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[0] = fp::add(c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0011A3B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_0011A348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0011A3B8; } }
    c.budget -= 1;
L_0011A348:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_0011A3B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011A3B8; } }
L_0011A360:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.f[0] = c.f[12];  if (t) { goto L_0011A3C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[1].d[0] = c.r[1].d[0] | 62154ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = 0u;
    c.f[0] = fp::add(c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0011A3B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[2].d[0] = ~(0ull | c.r[6].d[0]);  if (t) { goto L_0011A3B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[5].w[0] & 31u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ~(0ull | c.r[6].d[0]);
    c.budget -= 4;
L_0011A3B4:
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 1;
L_0011A3B8:
    c.f[12] = c.r[4].w[0];
    c.f[0] = c.r[4].w[0];
    c.budget -= 2;
L_0011A3C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A3C8:
    set32(c.r[6], c.f[12]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 8u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], c.r[2].w[0] >> 23);
    c.r[3].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.f[0] = c.f[12];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_0011A480; } }
    c.r[2].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.f[13] = c.f[12];  if (t) { goto L_0011A420; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[1].d[0] = c.r[1].d[0] | 62154ull;
    c.f[20] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011A474; } }
L_0011A420:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[2].d[0] = 0ull | 50000ull;  if (t) { goto L_0011A448; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x807F0000u);
    set32(c.r[3], c.r[5].w[0] << 23);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[12];  if (t) { goto L_0011A480; } }
L_0011A448:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[13] = c.f[12];  if (t) { goto L_0011A468; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[1].d[0] = c.r[1].d[0] | 62154ull;
    c.f[20] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011A474; } }
L_0011A468:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0DA20000u);
    c.r[1].d[0] = c.r[1].d[0] | 16992ull;
    c.f[20] = c.r[1].w[0];
    c.budget -= 3;
L_0011A474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A47Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0006(c, 196u, depth + 1u); else { c.pc = 0x0011A198u; return; } if (c.pc != 0x0011A47Cu) [[unlikely]] return; }
L_0011A47C:
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 1;
L_0011A480:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011A490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[0] = c.f[12];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 4056ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0011A4D8; } }
    c.f[13] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A4D0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 148u, depth + 1u); else { c.pc = 0x00119668u; return; } if (c.pc != 0x0011A4D0u) [[unlikely]] return; }
L_0011A4D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0011A570; } }
L_0011A4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A4E0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 437u, depth + 1u); else { c.pc = 0x00117750u; return; } if (c.pc != 0x0011A4E0u) [[unlikely]] return; }
L_0011A4E0:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0011A530; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_0011A508; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.f[12] = ld32((c.r[29].w[0]));  if (t) { goto L_0011A518; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011A560; } }
L_0011A508:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.f[12] = ld32((c.r[29].w[0]));  if (t) { goto L_0011A548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011A560; } }
L_0011A518:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A524u); c.f[13] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_0006(c, 148u, depth + 1u); else { c.pc = 0x00119668u; return; } if (c.pc != 0x0011A524u) [[unlikely]] return; }
L_0011A524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0011A570; } }
    c.budget -= 1;
L_0011A530:
    c.f[12] = ld32((c.r[29].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A53Cu); c.f[13] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_0006(c, 120u, depth + 1u); else { c.pc = 0x00118C50u; return; } if (c.pc != 0x0011A53Cu) [[unlikely]] return; }
L_0011A53C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0011A570; } }
    c.budget -= 1;
L_0011A548:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A554u); c.f[13] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_0006(c, 148u, depth + 1u); else { c.pc = 0x00119668u; return; } if (c.pc != 0x0011A554u) [[unlikely]] return; }
L_0011A554:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_0011A56C; } }
    c.budget -= 1;
L_0011A560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A568u); c.f[13] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_0006(c, 120u, depth + 1u); else { c.pc = 0x00118C50u; return; } if (c.pc != 0x0011A568u) [[unlikely]] return; }
L_0011A568:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 1;
L_0011A56C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0011A570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011A578:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00115768u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 218u, depth); }
L_0011A590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00115E90u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 306u, depth); }
L_0011A5A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116D70u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 428u, depth); }
L_0011A5C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001171B0u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 431u, depth); }
L_0011A5D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00117568u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 434u, depth); }
L_0011A5F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00117B18u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 442u, depth); }
L_0011A608:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::multu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[8].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    mmi::mult(c, 1, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[9].d[0] = c.r[9].d[0] & c.r[5].d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[7].d[0] = c.r[7].d[0] >> 32;
    c.r[9].d[0] = c.r[9].d[0] | c.r[6].d[0];
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];  c.pc = t; return; }
L_0011A680:
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[4].d[0] = c.r[10].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; c.r[24].d[0] = 0ull + 0ull;  if (t) { goto L_0011A6EC; } }
    c.r[2].d[0] = c.r[9].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[24], 0u - 1u);
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[9].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.budget -= 21;
L_0011A6EC:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0011A748; } }
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.r[24].d[0] = ~(0ull | c.r[24].d[0]);
    c.r[2].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[7].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.budget -= 20;
L_0011A748:
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[11].d[0] = c.r[9].d[0] << 32;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[10].d[0] = c.r[10].d[0] << 32;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.r[9].d[0] = c.r[5].d[0] << 32;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.budget -= 9;
    { const bool t = c.r[8].d[0] != 0ull; c.r[2].d[0] = c.r[10].d[0] < c.r[8].d[0] ? 1ull : 0ull;  if (t) { goto L_0011AAF0; } }
    c.r[2].d[0] = c.r[10].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull | 65535ull;  if (t) { goto L_0011A8B0; } }
    c.r[2].d[0] = c.r[2].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_0011A798; } }
    c.r[2].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;  if (t) { goto L_0011A7AC; } }
    c.budget -= 1;
L_0011A798:
    set32(c.r[3], 0u + 24u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_0011A7AC:
    set32(c.r[3], c.r[9].w[0] >> (c.r[4].w[0] & 31u));
    set32(c.r[5], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 18992u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[5].w[0] - c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - c.r[6].w[0]);  if (t) { goto L_0011A7E4; } }
    set32(c.r[3], c.r[10].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[2], c.r[11].w[0] >> (c.r[2].w[0] & 31u));
    set32(c.r[11], c.r[11].w[0] << (c.r[6].w[0] & 31u));
    c.r[10].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[9], c.r[9].w[0] << (c.r[6].w[0] & 31u));
    c.budget -= 5;
L_0011A7E4:
    set32(c.r[6], c.r[9].w[0] >> 16);
    c.r[8].d[0] = c.r[9].d[0] & 65535ull;
    mmi::divu(c, 0, c.r[10].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[11].w[0] >> 16);
    c.budget -= 6;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011A7F8u);  goto L_0011A7FC; }
L_0011A7FC:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[7].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);  goto L_0011A84C; }
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] - 1u);  if (t) { goto L_0011A848; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);  goto L_0011A84C; }
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 3;
L_0011A848:
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_0011A84C:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011A850u);  goto L_0011A854; }
L_0011A854:
    mmi::divu(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.r[11].d[0] & 65535ull;
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] << 16);  if (t) { goto L_0011A8A4; } }
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_0011A8A0; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_0011A8A0:
    set32(c.r[2], c.r[7].w[0] << 16);
    c.budget -= 1;
L_0011A8A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] | c.r[6].d[0];  if (t) { goto L_0011AC98; } }
    c.budget -= 1;
L_0011A8B0:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull; c.r[2].d[0] = c.r[2].d[0] < c.r[9].d[0] ? 1ull : 0ull;  if (t) { goto L_0011A8D8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[9].d[0] == 0ull) { breakpoint(c, 0x0011A8C0u);  goto L_0011A8C4; }
    goto L_0011A8C4;
L_0011A8C0:
    breakpoint(c, 0x0011A8C0u);
    c.budget -= 1;
L_0011A8C4:
    mmi::divu(c, 0, c.r[2].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0011A8D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_0011A8F0; } }
    c.r[2].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;  if (t) { goto L_0011A904; } }
L_0011A8F0:
    set32(c.r[3], 0u + 24u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_0011A904:
    set32(c.r[3], c.r[9].w[0] >> (c.r[4].w[0] & 31u));
    set32(c.r[5], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 18992u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[5].w[0] - c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[7], c.r[5].w[0] - c.r[6].w[0]);  if (t) { goto L_0011A940; } }
    set32(c.r[10], c.r[10].w[0] - c.r[9].w[0]);
    set32(c.r[13], 0u + 1u);
    set32(c.r[8], c.r[9].w[0] >> 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = c.r[9].d[0] & 65535ull;  if (t) { goto L_0011AA28; } }
    c.budget -= 1;
L_0011A940:
    set32(c.r[3], c.r[10].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[2], c.r[11].w[0] >> (c.r[7].w[0] & 31u));
    set32(c.r[11], c.r[11].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[4], c.r[10].w[0] >> (c.r[7].w[0] & 31u));
    c.r[10].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[9], c.r[9].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[8], c.r[9].w[0] >> 16);
    mmi::divu(c, 0, c.r[4].w[0], c.r[8].w[0]);
    set32(c.r[4], c.r[10].w[0] >> 16);
    c.r[12].d[0] = c.r[9].d[0] & 65535ull;
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 13;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011A970u);  goto L_0011A974; }
L_0011A974:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[7].w[0], c.r[12].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[13].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_0011A9C0; } }
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] - 1u);  if (t) { goto L_0011A9C0; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);  goto L_0011A9C4; }
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 3;
L_0011A9C0:
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_0011A9C4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011A9C8u);  goto L_0011A9CC; }
L_0011A9CC:
    mmi::divu(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[6].w[0], c.r[13].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] << 16);  if (t) { goto L_0011AA20; } }
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_0011AA1C; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] << 16);  if (t) { goto L_0011AA20; } }
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 2;
L_0011AA1C:
    set32(c.r[2], c.r[7].w[0] << 16);
    c.budget -= 1;
L_0011AA20:
    set32(c.r[10], c.r[3].w[0] - c.r[5].w[0]);
    c.r[13].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 2;
L_0011AA28:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.r[8].d[0] = c.r[12].d[0] + 0ull;
    mmi::divu(c, 0, c.r[10].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[11].w[0] >> 16);
    c.budget -= 6;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011AA3Cu);  goto L_0011AA40; }
L_0011AA40:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[7].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);  goto L_0011AA8C; }
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] - 1u);  if (t) { goto L_0011AA88; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);  goto L_0011AA8C; }
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 2;
L_0011AA88:
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_0011AA8C:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011AA90u);  goto L_0011AA94; }
L_0011AA94:
    mmi::divu(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.r[11].d[0] & 65535ull;
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] << 16);  if (t) { goto L_0011AAE4; } }
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_0011AAE0; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_0011AAE0:
    set32(c.r[2], c.r[7].w[0] << 16);
    c.budget -= 1;
L_0011AAE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] | c.r[6].d[0];  if (t) { goto L_0011AC9C; } }
    c.budget -= 1;
L_0011AAF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull | 65535ull;  if (t) { goto L_0011AB00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0011AC98; } }
L_0011AB00:
    c.r[2].d[0] = c.r[2].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_0011AB20; } }
    c.r[2].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;  if (t) { goto L_0011AB34; } }
    c.budget -= 1;
L_0011AB20:
    set32(c.r[3], 0u + 24u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_0011AB34:
    set32(c.r[3], c.r[8].w[0] >> (c.r[4].w[0] & 31u));
    set32(c.r[5], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 18992u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[5].w[0] - c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[7], c.r[5].w[0] - c.r[6].w[0]);  if (t) { goto L_0011AB78; } }
    c.r[2].d[0] = c.r[8].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0011AC98; } }
    c.r[2].d[0] = c.r[11].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0011AC98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0011AC98; } }
L_0011AB78:
    set32(c.r[4], c.r[8].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[5], c.r[11].w[0] >> (c.r[7].w[0] & 31u));
    set32(c.r[11], c.r[11].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[2], c.r[9].w[0] >> (c.r[7].w[0] & 31u));
    set32(c.r[9], c.r[9].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[3], c.r[10].w[0] << (c.r[6].w[0] & 31u));
    c.r[8].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[10].w[0] >> (c.r[7].w[0] & 31u));
    c.r[10].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[5], c.r[8].w[0] >> 16);
    mmi::divu(c, 0, c.r[4].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[10].w[0] >> 16);
    c.r[12].d[0] = c.r[8].d[0] & 65535ull;
    c.budget -= 15;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x0011ABB0u);  goto L_0011ABB4; }
L_0011ABB4:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[7].w[0], c.r[12].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);  goto L_0011AC04; }
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] - 1u);  if (t) { goto L_0011AC00; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);  goto L_0011AC04; }
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 3;
L_0011AC00:
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 1;
L_0011AC04:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x0011AC08u);  goto L_0011AC0C; }
L_0011AC0C:
    mmi::divu(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[5].w[0], c.r[12].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] << 16);  if (t) { goto L_0011AC60; } }
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { goto L_0011AC5C; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] << 16);  if (t) { goto L_0011AC60; } }
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 2;
L_0011AC5C:
    set32(c.r[2], c.r[7].w[0] << 16);
    c.budget -= 1;
L_0011AC60:
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.r[6].d[0] = c.r[2].d[0] | c.r[5].d[0];
    mmi::multu(c, 0, c.r[6].w[0], c.r[9].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] - 1u);  goto L_0011AC98; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_0011AC9C; } }
    c.r[2].d[0] = c.r[11].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] << 32;  if (t) { goto L_0011ACA0; } }
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_0011AC98:
    c.r[13].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011AC9C:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.budget -= 1;
L_0011ACA0:
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[15].d[0] = c.r[15].d[0] & c.r[4].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[13].d[0] << 32;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[15].d[0] = c.r[15].d[0] & c.r[5].d[0];
    c.budget -= 11;
    { const bool t = c.r[24].d[0] == 0ull; c.r[3].d[0] = c.r[15].d[0] | c.r[2].d[0];  if (t) { goto L_0011AD0C; } }
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[14].d[0] = c.r[14].d[0] & c.r[4].d[0];
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[14].d[0] = c.r[14].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[14].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[14].d[0] = c.r[14].d[0] & c.r[5].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[14].d[0] | c.r[4].d[0];
    c.budget -= 16;
L_0011AD0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_0011AD18:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[4].d[0] = c.r[10].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] >= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0011AD8C; } }
    c.r[2].d[0] = c.r[8].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[16], 0u - 1u);
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.budget -= 21;
L_0011AD8C:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[4], 0u - c.r[4].w[0]);  if (t) { goto L_0011ADE0; } }
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[7].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[7].d[0] | c.r[4].d[0];
    c.budget -= 18;
L_0011ADE0:
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[13].d[0] = c.r[8].d[0] << 32;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 32);
    c.r[10].d[0] = c.r[10].d[0] << 32;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.r[7].d[0] = c.r[5].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.budget -= 9;
    { const bool t = c.r[9].d[0] != 0ull; c.r[25].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0011B0C0; } }
    c.r[2].d[0] = c.r[10].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull | 65535ull;  if (t) { goto L_0011AE88; } }
    c.r[2].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_0011AE30; } }
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;  if (t) { goto L_0011AE44; } }
    c.budget -= 1;
L_0011AE30:
    set32(c.r[3], 0u + 24u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_0011AE44:
    set32(c.r[3], c.r[7].w[0] >> (c.r[4].w[0] & 31u));
    set32(c.r[5], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19248u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[12], c.r[5].w[0] - c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[12].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - c.r[12].w[0]);  if (t) { goto L_0011AE7C; } }
    set32(c.r[3], c.r[10].w[0] << (c.r[12].w[0] & 31u));
    set32(c.r[2], c.r[13].w[0] >> (c.r[2].w[0] & 31u));
    set32(c.r[13], c.r[13].w[0] << (c.r[12].w[0] & 31u));
    c.r[10].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] << (c.r[12].w[0] & 31u));
    c.budget -= 5;
L_0011AE7C:
    set32(c.r[6], c.r[7].w[0] >> 16);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[7].d[0] & 65535ull;  if (t) { goto L_0011AFE8; } }
L_0011AE88:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; c.r[2].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;  if (t) { goto L_0011AEB0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[7].d[0] == 0ull) { breakpoint(c, 0x0011AE98u);  goto L_0011AE9C; }
L_0011AE9C:
    mmi::divu(c, 0, c.r[2].w[0], c.r[9].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0011AEB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_0011AEC8; } }
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;  if (t) { goto L_0011AEDC; } }
L_0011AEC8:
    set32(c.r[3], 0u + 24u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_0011AEDC:
    set32(c.r[3], c.r[7].w[0] >> (c.r[4].w[0] & 31u));
    set32(c.r[5], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19248u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[12], c.r[5].w[0] - c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[15], c.r[5].w[0] - c.r[12].w[0]);  if (t) { goto L_0011AF10; } }
    set32(c.r[10], c.r[10].w[0] - c.r[7].w[0]);
    set32(c.r[5], c.r[7].w[0] >> 16);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = c.r[7].d[0] & 65535ull;  if (t) { goto L_0011AFE0; } }
L_0011AF10:
    set32(c.r[3], c.r[10].w[0] << (c.r[12].w[0] & 31u));
    set32(c.r[2], c.r[13].w[0] >> (c.r[15].w[0] & 31u));
    set32(c.r[13], c.r[13].w[0] << (c.r[12].w[0] & 31u));
    set32(c.r[4], c.r[10].w[0] >> (c.r[15].w[0] & 31u));
    c.r[10].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] << (c.r[12].w[0] & 31u));
    set32(c.r[5], c.r[7].w[0] >> 16);
    mmi::divu(c, 0, c.r[4].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[10].w[0] >> 16);
    c.r[14].d[0] = c.r[7].d[0] & 65535ull;
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    if (c.r[9].d[0] == 0ull) { breakpoint(c, 0x0011AF40u);  goto L_0011AF44; }
L_0011AF44:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[14].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[6].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[6].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[15].d[0] = c.r[14].d[0] + 0ull;  if (t) { goto L_0011AF88; } }
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] - c.r[8].w[0]);  goto L_0011AF8C; }
    c.r[2].d[0] = c.r[6].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_0011AF88:
    set32(c.r[6], c.r[6].w[0] - c.r[8].w[0]);
    c.budget -= 1;
L_0011AF8C:
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    mmi::divu(c, 0, c.r[6].w[0], c.r[9].w[0]);
    c.budget -= 4;
    if (c.r[9].d[0] == 0ull) { breakpoint(c, 0x0011AF98u);  goto L_0011AF9C; }
L_0011AF9C:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[15].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[4].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[10], c.r[4].w[0] - c.r[8].w[0]);  if (t) { goto L_0011AFE0; } }
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[10], c.r[4].w[0] - c.r[8].w[0]);  if (t) { goto L_0011AFE0; } }
    c.r[2].d[0] = c.r[4].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    set32(c.r[10], c.r[4].w[0] - c.r[8].w[0]);
    c.budget -= 5;
L_0011AFE0:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[9].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 2;
L_0011AFE8:
    mmi::divu(c, 0, c.r[10].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[13].w[0] >> 16);
    c.budget -= 4;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011AFF4u);  goto L_0011AFF8; }
L_0011AFF8:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[9].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[5].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);  goto L_0011B03C; }
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[5].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);  goto L_0011B03C; }
    c.r[2].d[0] = c.r[5].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[5].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);
    c.budget -= 5;
L_0011B03C:
    c.r[4].d[0] = c.r[13].d[0] & 65535ull;
    c.budget -= 1;
L_0011B040:
    mmi::divu(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011B048u);  goto L_0011B04C; }
L_0011B04C:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[9].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[4].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011B088; } }
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] < c.r[8].d[0] ? 1ull : 0ull;  if (t) { goto L_0011B088; } }
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_0011B088:
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == 0ull; set32(c.r[13], c.r[4].w[0] - c.r[8].w[0]);  if (t) { goto L_0011B33C; } }
    set32(c.r[2], c.r[13].w[0] >> (c.r[12].w[0] & 31u));
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[11].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[11].d[0] = c.r[11].d[0] | c.r[2].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[11].d[0] & c.r[3].d[0];  if (t) { goto L_0011B338; } }
    c.budget -= 1;
L_0011B0C0:
    c.r[2].d[0] = c.r[10].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull | 65535ull;  if (t) { goto L_0011B100; } }
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[13].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[11].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[10].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[11].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[2].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0]), c.r[11].d[0]);  if (t) { goto L_0011B33C; } }
L_0011B100:
    c.r[2].d[0] = c.r[2].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_0011B120; } }
    c.r[2].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;  if (t) { goto L_0011B134; } }
    c.budget -= 1;
L_0011B120:
    set32(c.r[3], 0u + 24u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_0011B134:
    set32(c.r[3], c.r[9].w[0] >> (c.r[4].w[0] & 31u));
    set32(c.r[5], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19248u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[12], c.r[5].w[0] - c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[15], c.r[5].w[0] - c.r[12].w[0]);  if (t) { goto L_0011B1B8; } }
    c.r[2].d[0] = c.r[9].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[13].w[0] - c.r[7].w[0]);  if (t) { goto L_0011B170; } }
    c.r[2].d[0] = c.r[13].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[13].w[0] - c.r[7].w[0]);  if (t) { goto L_0011B180; } }
L_0011B170:
    set32(c.r[4], c.r[10].w[0] - c.r[9].w[0]);
    c.r[3].d[0] = c.r[13].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[13].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[10], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 4;
L_0011B180:
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == 0ull; c.r[2].d[0] = c.r[13].d[0] << 32;  if (t) { goto L_0011B33C; } }
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[11].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[10].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[11].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[11].d[0] | c.r[2].d[0];  if (t) { goto L_0011B338; } }
    c.budget -= 1;
L_0011B1B8:
    set32(c.r[5], c.r[10].w[0] << (c.r[12].w[0] & 31u));
    set32(c.r[4], c.r[9].w[0] << (c.r[12].w[0] & 31u));
    set32(c.r[2], c.r[7].w[0] >> (c.r[15].w[0] & 31u));
    set32(c.r[3], c.r[13].w[0] >> (c.r[15].w[0] & 31u));
    set32(c.r[13], c.r[13].w[0] << (c.r[12].w[0] & 31u));
    c.r[9].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[10].w[0] >> (c.r[15].w[0] & 31u));
    set32(c.r[7], c.r[7].w[0] << (c.r[12].w[0] & 31u));
    c.r[10].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[6], c.r[9].w[0] >> 16);
    mmi::divu(c, 0, c.r[4].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[10].w[0] >> 16);
    c.r[5].d[0] = c.r[9].d[0] & 65535ull;
    c.budget -= 15;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011B1F0u);  goto L_0011B1F4; }
L_0011B1F4:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[14].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[14].w[0], c.r[5].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);  goto L_0011B244; }
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[14], c.r[14].w[0] - 1u);  if (t) { goto L_0011B240; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);  goto L_0011B244; }
    set32(c.r[14], c.r[14].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 3;
L_0011B240:
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    c.budget -= 1;
L_0011B244:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011B248u);  goto L_0011B24C; }
L_0011B24C:
    mmi::divu(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[5].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);  goto L_0011B2A0; }
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[5].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_0011B29C; } }
    c.r[2].d[0] = c.r[5].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);  goto L_0011B2A0; }
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    c.budget -= 2;
L_0011B29C:
    set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);
    c.budget -= 1;
L_0011B2A0:
    set32(c.r[2], c.r[14].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    mmi::multu(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    c.r[8].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[10].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] - c.r[7].w[0]);  if (t) { goto L_0011B2D8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[10].d[0]; c.r[2].d[0] = c.r[13].d[0] < c.r[8].d[0] ? 1ull : 0ull;  if (t) { goto L_0011B2E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[8].w[0] - c.r[7].w[0]);  if (t) { goto L_0011B2E8; } }
    c.budget -= 1;
L_0011B2D8:
    set32(c.r[4], c.r[6].w[0] - c.r[9].w[0]);
    c.r[3].d[0] = c.r[8].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 4;
L_0011B2E8:
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == 0ull; set32(c.r[4], c.r[13].w[0] - c.r[8].w[0]);  if (t) { goto L_0011B33C; } }
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    c.r[3].d[0] = c.r[13].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[10], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[10].w[0] << (c.r[15].w[0] & 31u));
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[4], c.r[4].w[0] >> (c.r[12].w[0] & 31u));
    c.r[11].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], c.r[10].w[0] >> (c.r[12].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[11].d[0] = c.r[11].d[0] | c.r[2].d[0];
    c.r[11].d[0] = c.r[11].d[0] & c.r[4].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[3].d[0];
    c.budget -= 18;
L_0011B338:
    st64((c.r[25].w[0]), c.r[11].d[0]);
    c.budget -= 1;
L_0011B33C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[3].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0011B398; } }
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[24].d[0] = c.r[24].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[24].d[0] = c.r[24].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[4].d[0] = c.r[24].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[24].d[0] = c.r[24].d[0] & c.r[2].d[0];
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[24].d[0] = c.r[24].d[0] | c.r[3].d[0];
    st64((c.r[29].w[0]), c.r[24].d[0]);
    c.budget -= 21;
L_0011B398:
    c.r[2].d[0] = ld64((c.r[29].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011B3A8:
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[9].d[0] = c.r[5].d[0] << 32;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[11].d[0] = c.r[4].d[0] << 32;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != 0ull; c.r[2].d[0] = c.r[10].d[0] < c.r[8].d[0] ? 1ull : 0ull;  if (t) { goto L_0011B748; } }
    c.r[2].d[0] = c.r[10].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull | 65535ull;  if (t) { goto L_0011B508; } }
    c.r[2].d[0] = c.r[2].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_0011B3F0; } }
    c.r[2].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;  if (t) { goto L_0011B404; } }
L_0011B3F0:
    set32(c.r[3], 0u + 24u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_0011B404:
    set32(c.r[3], c.r[9].w[0] >> (c.r[4].w[0] & 31u));
    set32(c.r[5], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19504u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[5].w[0] - c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - c.r[6].w[0]);  if (t) { goto L_0011B43C; } }
    set32(c.r[3], c.r[10].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[2], c.r[11].w[0] >> (c.r[2].w[0] & 31u));
    set32(c.r[11], c.r[11].w[0] << (c.r[6].w[0] & 31u));
    c.r[10].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[9], c.r[9].w[0] << (c.r[6].w[0] & 31u));
    c.budget -= 5;
L_0011B43C:
    set32(c.r[6], c.r[9].w[0] >> 16);
    c.r[8].d[0] = c.r[9].d[0] & 65535ull;
    mmi::divu(c, 0, c.r[10].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[11].w[0] >> 16);
    c.budget -= 6;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011B450u);  goto L_0011B454; }
L_0011B454:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[7].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);  goto L_0011B4A4; }
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] - 1u);  if (t) { goto L_0011B4A0; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);  goto L_0011B4A4; }
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 3;
L_0011B4A0:
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_0011B4A4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011B4A8u);  goto L_0011B4AC; }
L_0011B4AC:
    mmi::divu(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.r[11].d[0] & 65535ull;
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] << 16);  if (t) { goto L_0011B4FC; } }
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_0011B4F8; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_0011B4F8:
    set32(c.r[2], c.r[7].w[0] << 16);
    c.budget -= 1;
L_0011B4FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] | c.r[6].d[0];  if (t) { goto L_0011B8F0; } }
    c.budget -= 1;
L_0011B508:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull; c.r[2].d[0] = c.r[2].d[0] < c.r[9].d[0] ? 1ull : 0ull;  if (t) { goto L_0011B530; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[9].d[0] == 0ull) { breakpoint(c, 0x0011B518u);  goto L_0011B51C; }
L_0011B51C:
    mmi::divu(c, 0, c.r[2].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0011B530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_0011B548; } }
    c.r[2].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;  if (t) { goto L_0011B55C; } }
L_0011B548:
    set32(c.r[3], 0u + 24u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_0011B55C:
    set32(c.r[3], c.r[9].w[0] >> (c.r[4].w[0] & 31u));
    set32(c.r[5], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19504u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[5].w[0] - c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[7], c.r[5].w[0] - c.r[6].w[0]);  if (t) { goto L_0011B598; } }
    set32(c.r[10], c.r[10].w[0] - c.r[9].w[0]);
    set32(c.r[13], 0u + 1u);
    set32(c.r[8], c.r[9].w[0] >> 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = c.r[9].d[0] & 65535ull;  if (t) { goto L_0011B680; } }
    c.budget -= 1;
L_0011B598:
    set32(c.r[3], c.r[10].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[2], c.r[11].w[0] >> (c.r[7].w[0] & 31u));
    set32(c.r[11], c.r[11].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[4], c.r[10].w[0] >> (c.r[7].w[0] & 31u));
    c.r[10].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[9], c.r[9].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[8], c.r[9].w[0] >> 16);
    mmi::divu(c, 0, c.r[4].w[0], c.r[8].w[0]);
    set32(c.r[4], c.r[10].w[0] >> 16);
    c.r[12].d[0] = c.r[9].d[0] & 65535ull;
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 13;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011B5C8u);  goto L_0011B5CC; }
L_0011B5CC:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[7].w[0], c.r[12].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[13].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_0011B618; } }
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] - 1u);  if (t) { goto L_0011B618; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);  goto L_0011B61C; }
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 3;
L_0011B618:
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_0011B61C:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011B620u);  goto L_0011B624; }
L_0011B624:
    mmi::divu(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[6].w[0], c.r[13].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] << 16);  if (t) { goto L_0011B678; } }
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_0011B674; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] << 16);  if (t) { goto L_0011B678; } }
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 2;
L_0011B674:
    set32(c.r[2], c.r[7].w[0] << 16);
    c.budget -= 1;
L_0011B678:
    set32(c.r[10], c.r[3].w[0] - c.r[5].w[0]);
    c.r[13].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 2;
L_0011B680:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.r[8].d[0] = c.r[12].d[0] + 0ull;
    mmi::divu(c, 0, c.r[10].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[11].w[0] >> 16);
    c.budget -= 6;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011B694u);  goto L_0011B698; }
L_0011B698:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[7].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);  goto L_0011B6E4; }
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] - 1u);  if (t) { goto L_0011B6E0; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);  goto L_0011B6E4; }
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 2;
L_0011B6E0:
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_0011B6E4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011B6E8u);  goto L_0011B6EC; }
L_0011B6EC:
    mmi::divu(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.r[11].d[0] & 65535ull;
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] << 16);  if (t) { goto L_0011B73C; } }
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_0011B738; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_0011B738:
    set32(c.r[2], c.r[7].w[0] << 16);
    c.budget -= 1;
L_0011B73C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] | c.r[6].d[0];  if (t) { goto L_0011B8F4; } }
    c.budget -= 1;
L_0011B748:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull | 65535ull;  goto L_0011B758; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0011B8F0; } }
L_0011B758:
    c.r[2].d[0] = c.r[2].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_0011B778; } }
    c.r[2].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;  if (t) { goto L_0011B78C; } }
    c.budget -= 1;
L_0011B778:
    set32(c.r[3], 0u + 24u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_0011B78C:
    set32(c.r[3], c.r[8].w[0] >> (c.r[4].w[0] & 31u));
    set32(c.r[5], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19504u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[5].w[0] - c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[7], c.r[5].w[0] - c.r[6].w[0]);  if (t) { goto L_0011B7D0; } }
    c.r[2].d[0] = c.r[8].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0011B8F0; } }
    c.r[2].d[0] = c.r[11].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0011B8F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0011B8F0; } }
L_0011B7D0:
    set32(c.r[4], c.r[8].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[5], c.r[11].w[0] >> (c.r[7].w[0] & 31u));
    set32(c.r[11], c.r[11].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[2], c.r[9].w[0] >> (c.r[7].w[0] & 31u));
    set32(c.r[9], c.r[9].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[3], c.r[10].w[0] << (c.r[6].w[0] & 31u));
    c.r[8].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[10].w[0] >> (c.r[7].w[0] & 31u));
    c.r[10].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[5], c.r[8].w[0] >> 16);
    mmi::divu(c, 0, c.r[4].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[10].w[0] >> 16);
    c.r[12].d[0] = c.r[8].d[0] & 65535ull;
    c.budget -= 15;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x0011B808u);  goto L_0011B80C; }
L_0011B80C:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[7].w[0], c.r[12].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);  goto L_0011B85C; }
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] - 1u);  if (t) { goto L_0011B858; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);  goto L_0011B85C; }
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 3;
L_0011B858:
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 1;
L_0011B85C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x0011B860u);  goto L_0011B864; }
L_0011B864:
    mmi::divu(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[5].w[0], c.r[12].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] << 16);  if (t) { goto L_0011B8B8; } }
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { goto L_0011B8B4; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] << 16);  if (t) { goto L_0011B8B8; } }
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 2;
L_0011B8B4:
    set32(c.r[2], c.r[7].w[0] << 16);
    c.budget -= 1;
L_0011B8B8:
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.r[6].d[0] = c.r[2].d[0] | c.r[5].d[0];
    mmi::multu(c, 0, c.r[6].w[0], c.r[9].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] - 1u);  goto L_0011B8F0; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_0011B8F4; } }
    c.r[2].d[0] = c.r[11].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011B8F4; } }
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_0011B8F0:
    c.r[13].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011B8F4:
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[14].d[0] = c.r[14].d[0] & c.r[3].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[13].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[14].d[0] = c.r[14].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[14].d[0] | c.r[2].d[0];  c.pc = t; return; }
L_0011B928:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[7].d[0] = c.r[5].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[13].d[0] = c.r[4].d[0] << 32;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 32);
    c.budget -= 9;
    { const bool t = c.r[9].d[0] != 0ull; c.r[24].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0011BC08; } }
    c.r[2].d[0] = c.r[10].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull | 65535ull;  if (t) { goto L_0011B9D0; } }
    c.r[2].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_0011B978; } }
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;  if (t) { goto L_0011B98C; } }
    c.budget -= 1;
L_0011B978:
    set32(c.r[3], 0u + 24u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_0011B98C:
    set32(c.r[3], c.r[7].w[0] >> (c.r[4].w[0] & 31u));
    set32(c.r[5], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19760u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[12], c.r[5].w[0] - c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[12].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - c.r[12].w[0]);  if (t) { goto L_0011B9C4; } }
    set32(c.r[3], c.r[10].w[0] << (c.r[12].w[0] & 31u));
    set32(c.r[2], c.r[13].w[0] >> (c.r[2].w[0] & 31u));
    set32(c.r[13], c.r[13].w[0] << (c.r[12].w[0] & 31u));
    c.r[10].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] << (c.r[12].w[0] & 31u));
    c.budget -= 5;
L_0011B9C4:
    set32(c.r[6], c.r[7].w[0] >> 16);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[7].d[0] & 65535ull;  if (t) { goto L_0011BB30; } }
L_0011B9D0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; c.r[2].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;  if (t) { goto L_0011B9F8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[7].d[0] == 0ull) { breakpoint(c, 0x0011B9E0u);  goto L_0011B9E4; }
L_0011B9E4:
    mmi::divu(c, 0, c.r[2].w[0], c.r[9].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0011B9F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_0011BA10; } }
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;  if (t) { goto L_0011BA24; } }
L_0011BA10:
    set32(c.r[3], 0u + 24u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_0011BA24:
    set32(c.r[3], c.r[7].w[0] >> (c.r[4].w[0] & 31u));
    set32(c.r[5], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19760u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[12], c.r[5].w[0] - c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[15], c.r[5].w[0] - c.r[12].w[0]);  if (t) { goto L_0011BA58; } }
    set32(c.r[10], c.r[10].w[0] - c.r[7].w[0]);
    set32(c.r[5], c.r[7].w[0] >> 16);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = c.r[7].d[0] & 65535ull;  if (t) { goto L_0011BB28; } }
L_0011BA58:
    set32(c.r[3], c.r[10].w[0] << (c.r[12].w[0] & 31u));
    set32(c.r[2], c.r[13].w[0] >> (c.r[15].w[0] & 31u));
    set32(c.r[13], c.r[13].w[0] << (c.r[12].w[0] & 31u));
    set32(c.r[4], c.r[10].w[0] >> (c.r[15].w[0] & 31u));
    c.r[10].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[7], c.r[7].w[0] << (c.r[12].w[0] & 31u));
    set32(c.r[5], c.r[7].w[0] >> 16);
    mmi::divu(c, 0, c.r[4].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[10].w[0] >> 16);
    c.r[14].d[0] = c.r[7].d[0] & 65535ull;
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    if (c.r[9].d[0] == 0ull) { breakpoint(c, 0x0011BA88u);  goto L_0011BA8C; }
L_0011BA8C:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[14].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[6].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[6].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[15].d[0] = c.r[14].d[0] + 0ull;  if (t) { goto L_0011BAD0; } }
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] - c.r[8].w[0]);  goto L_0011BAD4; }
    c.r[2].d[0] = c.r[6].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_0011BAD0:
    set32(c.r[6], c.r[6].w[0] - c.r[8].w[0]);
    c.budget -= 1;
L_0011BAD4:
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    mmi::divu(c, 0, c.r[6].w[0], c.r[9].w[0]);
    c.budget -= 4;
    if (c.r[9].d[0] == 0ull) { breakpoint(c, 0x0011BAE0u);  goto L_0011BAE4; }
L_0011BAE4:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[15].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[4].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[10], c.r[4].w[0] - c.r[8].w[0]);  if (t) { goto L_0011BB28; } }
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[10], c.r[4].w[0] - c.r[8].w[0]);  if (t) { goto L_0011BB28; } }
    c.r[2].d[0] = c.r[4].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    set32(c.r[10], c.r[4].w[0] - c.r[8].w[0]);
    c.budget -= 5;
L_0011BB28:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[9].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 2;
L_0011BB30:
    mmi::divu(c, 0, c.r[10].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[13].w[0] >> 16);
    c.budget -= 4;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011BB3Cu);  goto L_0011BB40; }
L_0011BB40:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[9].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[5].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);  goto L_0011BB84; }
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[5].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);  goto L_0011BB84; }
    c.r[2].d[0] = c.r[5].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[5].w[0] + c.r[7].w[0]);
    c.budget -= 2;
L_0011BB78:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);
    c.budget -= 3;
L_0011BB84:
    c.r[4].d[0] = c.r[13].d[0] & 65535ull;
    mmi::divu(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.budget -= 4;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011BB90u);  goto L_0011BB94; }
L_0011BB94:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[9].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[4].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011BBD0; } }
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] < c.r[8].d[0] ? 1ull : 0ull;  if (t) { goto L_0011BBD0; } }
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_0011BBD0:
    c.budget -= 2;
    { const bool t = c.r[24].d[0] == 0ull; set32(c.r[13], c.r[4].w[0] - c.r[8].w[0]);  if (t) { goto L_0011BE84; } }
    set32(c.r[2], c.r[13].w[0] >> (c.r[12].w[0] & 31u));
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[11].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[11].d[0] = c.r[11].d[0] | c.r[2].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[11].d[0] & c.r[3].d[0];  if (t) { goto L_0011BE80; } }
    c.budget -= 1;
L_0011BC08:
    c.r[2].d[0] = c.r[10].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull | 65535ull;  if (t) { goto L_0011BC48; } }
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[13].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[11].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[10].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[11].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[2].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0]), c.r[11].d[0]);  if (t) { goto L_0011BE84; } }
L_0011BC48:
    c.r[2].d[0] = c.r[2].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_0011BC68; } }
    c.r[2].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;  if (t) { goto L_0011BC7C; } }
    c.budget -= 1;
L_0011BC68:
    set32(c.r[3], 0u + 24u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_0011BC7C:
    set32(c.r[3], c.r[9].w[0] >> (c.r[4].w[0] & 31u));
    set32(c.r[5], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19760u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[12], c.r[5].w[0] - c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[15], c.r[5].w[0] - c.r[12].w[0]);  if (t) { goto L_0011BD00; } }
    c.r[2].d[0] = c.r[9].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[13].w[0] - c.r[7].w[0]);  if (t) { goto L_0011BCB8; } }
    c.r[2].d[0] = c.r[13].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[13].w[0] - c.r[7].w[0]);  if (t) { goto L_0011BCC8; } }
L_0011BCB8:
    set32(c.r[4], c.r[10].w[0] - c.r[9].w[0]);
    c.r[3].d[0] = c.r[13].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[13].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[10], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 4;
L_0011BCC8:
    c.budget -= 2;
    { const bool t = c.r[24].d[0] == 0ull; c.r[2].d[0] = c.r[13].d[0] << 32;  if (t) { goto L_0011BE84; } }
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[11].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[10].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[11].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[11].d[0] | c.r[2].d[0];  if (t) { goto L_0011BE80; } }
    c.budget -= 1;
L_0011BD00:
    set32(c.r[5], c.r[10].w[0] << (c.r[12].w[0] & 31u));
    set32(c.r[4], c.r[9].w[0] << (c.r[12].w[0] & 31u));
    set32(c.r[2], c.r[7].w[0] >> (c.r[15].w[0] & 31u));
    set32(c.r[3], c.r[13].w[0] >> (c.r[15].w[0] & 31u));
    set32(c.r[13], c.r[13].w[0] << (c.r[12].w[0] & 31u));
    c.r[9].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[10].w[0] >> (c.r[15].w[0] & 31u));
    set32(c.r[7], c.r[7].w[0] << (c.r[12].w[0] & 31u));
    c.r[10].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[6], c.r[9].w[0] >> 16);
    mmi::divu(c, 0, c.r[4].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[10].w[0] >> 16);
    c.r[5].d[0] = c.r[9].d[0] & 65535ull;
    c.budget -= 15;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011BD38u);  goto L_0011BD3C; }
L_0011BD3C:
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[14].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[14].w[0], c.r[5].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);  goto L_0011BD8C; }
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[14], c.r[14].w[0] - 1u);  if (t) { goto L_0011BD88; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);  goto L_0011BD8C; }
    set32(c.r[14], c.r[14].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 3;
L_0011BD88:
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    c.budget -= 1;
L_0011BD8C:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x0011BD90u);  goto L_0011BD94; }
L_0011BD94:
    mmi::divu(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[5].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);  goto L_0011BDE8; }
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[5].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_0011BDE4; } }
    c.r[2].d[0] = c.r[5].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);  goto L_0011BDE8; }
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    c.budget -= 2;
L_0011BDE4:
    set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);
    c.budget -= 1;
L_0011BDE8:
    set32(c.r[2], c.r[14].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    mmi::multu(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    c.r[8].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[10].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] - c.r[7].w[0]);  if (t) { goto L_0011BE20; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[10].d[0]; c.r[2].d[0] = c.r[13].d[0] < c.r[8].d[0] ? 1ull : 0ull;  if (t) { goto L_0011BE30; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[8].w[0] - c.r[7].w[0]);  if (t) { goto L_0011BE30; } }
    c.budget -= 1;
L_0011BE20:
    set32(c.r[4], c.r[6].w[0] - c.r[9].w[0]);
    c.r[3].d[0] = c.r[8].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 4;
L_0011BE30:
    c.budget -= 2;
    { const bool t = c.r[24].d[0] == 0ull; set32(c.r[4], c.r[13].w[0] - c.r[8].w[0]);  if (t) { goto L_0011BE84; } }
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    c.r[3].d[0] = c.r[13].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[10], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[10].w[0] << (c.r[15].w[0] & 31u));
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[4], c.r[4].w[0] >> (c.r[12].w[0] & 31u));
    c.r[11].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], c.r[10].w[0] >> (c.r[12].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[11].d[0] = c.r[11].d[0] | c.r[2].d[0];
    c.r[11].d[0] = c.r[11].d[0] & c.r[4].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[3].d[0];
    c.budget -= 18;
L_0011BE80:
    st64((c.r[24].w[0]), c.r[11].d[0]);
    c.budget -= 1;
L_0011BE84:
    c.r[2].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011BE90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[17].d[0] = 0ull | 33248ull;
    c.r[17].d[0] = c.r[17].d[0] << 47;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BEB8u);  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x0011BEB8u) [[unlikely]] return; }
L_0011BEB8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BEC8u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0011BEC8u) [[unlikely]] return; }
L_0011BEC8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BED8u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0011BED8u) [[unlikely]] return; }
L_0011BED8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BEF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x0011BEF8u) [[unlikely]] return; }
L_0011BEF8:
    c.r[5].d[0] = 0ull | 33760ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0011BF14; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BF14u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x0011BF14u) [[unlikely]] return; }
L_0011BF14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BF24u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x0011BF24u) [[unlikely]] return; }
L_0011BF24:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011BF38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 11;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + c.r[2].d[0];
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 11;
    c.r[3].d[0] = c.r[3].d[0] >> 10;
    c.r[3].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[17].d[0] & 2047ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_0011BF80; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_0011BF80; } }
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_0011BF80:
    c.r[16].d[0] = 0ull | 33248ull;
    c.r[16].d[0] = c.r[16].d[0] << 47;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BF94u);  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x0011BF94u) [[unlikely]] return; }
L_0011BF94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BFA4u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0011BFA4u) [[unlikely]] return; }
L_0011BFA4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[16].d[0] = c.r[16].d[0] >> 32;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BFBCu); c.r[16].d[0] = c.r[17].d[0] & c.r[16].d[0];  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0011BFBCu) [[unlikely]] return; }
L_0011BFBC:
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BFD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x0011BFD0u) [[unlikely]] return; }
L_0011BFD0:
    c.r[5].d[0] = 0ull | 33760ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0011BFEC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BFECu);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x0011BFECu) [[unlikely]] return; }
L_0011BFEC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BFFCu);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x0011BFFCu) [[unlikely]] return; }
L_0011BFFC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_0007(c, 1u, depth);
}

}
