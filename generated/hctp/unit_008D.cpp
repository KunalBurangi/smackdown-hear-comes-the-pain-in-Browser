#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008D[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25,
    0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0,
    0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0,
    43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0,
    58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0,
    114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0,
    122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0,
    130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0,
    0, 0, 136, 0, 137, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225,
    0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0,
    0, 243, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 269, 0, 270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 285, 0, 286, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 309, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0,
    0, 323, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330,
    0, 0, 331, 0, 332, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 349, 0, 0,
    350, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 357, 0, 358, 0, 0, 0, 359,
    0, 360, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0,
    0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372,
};

void unit_008D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00334000;
    case 2u: goto L_00334010;
    case 3u: goto L_00334024;
    case 4u: goto L_00334034;
    case 5u: goto L_00334040;
    case 6u: goto L_00334088;
    case 7u: goto L_003340A0;
    case 8u: goto L_003340C4;
    case 9u: goto L_003340E8;
    case 10u: goto L_003340F0;
    case 11u: goto L_00334114;
    case 12u: goto L_00334140;
    case 13u: goto L_00334180;
    case 14u: goto L_0033418C;
    case 15u: goto L_00334198;
    case 16u: goto L_003341B0;
    case 17u: goto L_003341D0;
    case 18u: goto L_003341F8;
    case 19u: goto L_00334220;
    case 20u: goto L_00334228;
    case 21u: goto L_0033423C;
    case 22u: goto L_0033424C;
    case 23u: goto L_0033425C;
    case 24u: goto L_0033426C;
    case 25u: goto L_0033427C;
    case 26u: goto L_00334284;
    case 27u: goto L_00334290;
    case 28u: goto L_0033429C;
    case 29u: goto L_003342A8;
    case 30u: goto L_003342C0;
    case 31u: goto L_003342E8;
    case 32u: goto L_003342F0;
    case 33u: goto L_003342F8;
    case 34u: goto L_00334318;
    case 35u: goto L_00334328;
    case 36u: goto L_00334340;
    case 37u: goto L_00334350;
    case 38u: goto L_00334360;
    case 39u: goto L_0033436C;
    case 40u: goto L_003343A0;
    case 41u: goto L_003343C4;
    case 42u: goto L_003343EC;
    case 43u: goto L_00334400;
    case 44u: goto L_00334410;
    case 45u: goto L_00334430;
    case 46u: goto L_0033444C;
    case 47u: goto L_00334460;
    case 48u: goto L_00334478;
    case 49u: goto L_003344B4;
    case 50u: goto L_003344C4;
    case 51u: goto L_003344D0;
    case 52u: goto L_003344F0;
    case 53u: goto L_00334508;
    case 54u: goto L_00334510;
    case 55u: goto L_00334520;
    case 56u: goto L_0033454C;
    case 57u: goto L_00334574;
    case 58u: goto L_00334580;
    case 59u: goto L_00334594;
    case 60u: goto L_003345A8;
    case 61u: goto L_003345B8;
    case 62u: goto L_003345C8;
    case 63u: goto L_003345D0;
    case 64u: goto L_003345E0;
    case 65u: goto L_00334610;
    case 66u: goto L_0033464C;
    case 67u: goto L_00334664;
    case 68u: goto L_00334680;
    case 69u: goto L_003346A4;
    case 70u: goto L_003346CC;
    case 71u: goto L_003346E0;
    case 72u: goto L_003346F0;
    case 73u: goto L_003346F8;
    case 74u: goto L_00334720;
    case 75u: goto L_00334730;
    case 76u: goto L_0033476C;
    case 77u: goto L_00334774;
    case 78u: goto L_0033478C;
    case 79u: goto L_003347A0;
    case 80u: goto L_003347B0;
    case 81u: goto L_003347B8;
    case 82u: goto L_003347C8;
    case 83u: goto L_003347E0;
    case 84u: goto L_003347F0;
    case 85u: goto L_00334808;
    case 86u: goto L_00334820;
    case 87u: goto L_0033482C;
    case 88u: goto L_00334834;
    case 89u: goto L_00334850;
    case 90u: goto L_00334860;
    case 91u: goto L_00334894;
    case 92u: goto L_0033489C;
    case 93u: goto L_003348B8;
    case 94u: goto L_003348C0;
    case 95u: goto L_003348D0;
    case 96u: goto L_003348F0;
    case 97u: goto L_00334924;
    case 98u: goto L_00334940;
    case 99u: goto L_00334948;
    case 100u: goto L_00334958;
    case 101u: goto L_00334970;
    case 102u: goto L_00334988;
    case 103u: goto L_003349A4;
    case 104u: goto L_003349C0;
    case 105u: goto L_003349D0;
    case 106u: goto L_003349E0;
    case 107u: goto L_003349F0;
    case 108u: goto L_00334A08;
    case 109u: goto L_00334A1C;
    case 110u: goto L_00334A30;
    case 111u: goto L_00334A48;
    case 112u: goto L_00334A5C;
    case 113u: goto L_00334A70;
    case 114u: goto L_00334A80;
    case 115u: goto L_00334A90;
    case 116u: goto L_00334AA0;
    case 117u: goto L_00334AB0;
    case 118u: goto L_00334AC0;
    case 119u: goto L_00334AD0;
    case 120u: goto L_00334AE0;
    case 121u: goto L_00334AF0;
    case 122u: goto L_00334B00;
    case 123u: goto L_00334B10;
    case 124u: goto L_00334B20;
    case 125u: goto L_00334B30;
    case 126u: goto L_00334B40;
    case 127u: goto L_00334B50;
    case 128u: goto L_00334B60;
    case 129u: goto L_00334B70;
    case 130u: goto L_00334B80;
    case 131u: goto L_00334B90;
    case 132u: goto L_00334BA0;
    case 133u: goto L_00334BB0;
    case 134u: goto L_00334BC0;
    case 135u: goto L_00334BF8;
    case 136u: goto L_00334C08;
    case 137u: goto L_00334C10;
    case 138u: goto L_00334C24;
    case 139u: goto L_00334C2C;
    case 140u: goto L_00334C4C;
    case 141u: goto L_00334C6C;
    case 142u: goto L_00334C8C;
    case 143u: goto L_00334CAC;
    case 144u: goto L_00334D84;
    case 145u: goto L_00334D9C;
    case 146u: goto L_00334DAC;
    case 147u: goto L_00334DBC;
    case 148u: goto L_00334DC8;
    case 149u: goto L_00334DE4;
    case 150u: goto L_00334E8C;
    case 151u: goto L_00334EB8;
    case 152u: goto L_00334F34;
    case 153u: goto L_00335054;
    case 154u: goto L_00335064;
    case 155u: goto L_003350B0;
    case 156u: goto L_003350E0;
    case 157u: goto L_003350FC;
    case 158u: goto L_00335110;
    case 159u: goto L_00335128;
    case 160u: goto L_00335150;
    case 161u: goto L_00335160;
    case 162u: goto L_00335184;
    case 163u: goto L_003351E4;
    case 164u: goto L_00335200;
    case 165u: goto L_00335234;
    case 166u: goto L_00335328;
    case 167u: goto L_00335454;
    case 168u: goto L_00335490;
    case 169u: goto L_00335504;
    case 170u: goto L_00335550;
    case 171u: goto L_00335568;
    case 172u: goto L_003355D0;
    case 173u: goto L_00335608;
    case 174u: goto L_00335620;
    case 175u: goto L_00335688;
    case 176u: goto L_003356B0;
    case 177u: goto L_003356F0;
    case 178u: goto L_00335708;
    case 179u: goto L_00335734;
    case 180u: goto L_00335760;
    case 181u: goto L_003358C4;
    case 182u: goto L_003358E0;
    case 183u: goto L_00335908;
    case 184u: goto L_00335918;
    case 185u: goto L_00335940;
    case 186u: goto L_003359B0;
    case 187u: goto L_003359C4;
    case 188u: goto L_003359E0;
    case 189u: goto L_00335A10;
    case 190u: goto L_00335A94;
    case 191u: goto L_00335AB4;
    case 192u: goto L_00335B04;
    case 193u: goto L_00335B50;
    case 194u: goto L_00335B60;
    case 195u: goto L_00335C1C;
    case 196u: goto L_00335CD4;
    case 197u: goto L_00335E64;
    case 198u: goto L_00335EAC;
    case 199u: goto L_00335ED0;
    case 200u: goto L_00335EF8;
    case 201u: goto L_00336014;
    case 202u: goto L_003360E4;
    case 203u: goto L_00336104;
    case 204u: goto L_003362D8;
    case 205u: goto L_00336310;
    case 206u: goto L_00336320;
    case 207u: goto L_00336354;
    case 208u: goto L_003363C0;
    case 209u: goto L_003365B4;
    case 210u: goto L_003365DC;
    case 211u: goto L_003366A0;
    case 212u: goto L_003366AC;
    case 213u: goto L_00336740;
    case 214u: goto L_00336760;
    case 215u: goto L_00336790;
    case 216u: goto L_003367B0;
    case 217u: goto L_003367C0;
    case 218u: goto L_00336810;
    case 219u: goto L_00336824;
    case 220u: goto L_0033683C;
    case 221u: goto L_00336878;
    case 222u: goto L_003368B0;
    case 223u: goto L_003368C8;
    case 224u: goto L_003368E4;
    case 225u: goto L_003368FC;
    case 226u: goto L_00336904;
    case 227u: goto L_00336928;
    case 228u: goto L_003369C4;
    case 229u: goto L_003369CC;
    case 230u: goto L_003369DC;
    case 231u: goto L_003369EC;
    case 232u: goto L_00336A10;
    case 233u: goto L_00336A30;
    case 234u: goto L_00336A58;
    case 235u: goto L_00336A74;
    case 236u: goto L_00336AC4;
    case 237u: goto L_00336AEC;
    case 238u: goto L_00336B70;
    case 239u: goto L_00336B90;
    case 240u: goto L_00336BD0;
    case 241u: goto L_00336BDC;
    case 242u: goto L_00336BE4;
    case 243u: goto L_00336C04;
    case 244u: goto L_00336C0C;
    case 245u: goto L_00336C18;
    case 246u: goto L_00336C50;
    case 247u: goto L_00336C60;
    case 248u: goto L_00336C84;
    case 249u: goto L_00336CA8;
    case 250u: goto L_00336CE4;
    case 251u: goto L_00336D0C;
    case 252u: goto L_00336D44;
    case 253u: goto L_00336D84;
    case 254u: goto L_00336DCC;
    case 255u: goto L_00336E10;
    case 256u: goto L_00336E5C;
    case 257u: goto L_00336EB0;
    case 258u: goto L_00336EBC;
    case 259u: goto L_00336EC8;
    case 260u: goto L_00336EF0;
    case 261u: goto L_00336F28;
    case 262u: goto L_00336F38;
    case 263u: goto L_00336F80;
    case 264u: goto L_00336FBC;
    case 265u: goto L_00336FD0;
    case 266u: goto L_00337000;
    case 267u: goto L_00337098;
    case 268u: goto L_003370A0;
    case 269u: goto L_003370B8;
    case 270u: goto L_003370C0;
    case 271u: goto L_003370C8;
    case 272u: goto L_003370E0;
    case 273u: goto L_0033710C;
    case 274u: goto L_00337130;
    case 275u: goto L_00337198;
    case 276u: goto L_003371A0;
    case 277u: goto L_003371B8;
    case 278u: goto L_003371C0;
    case 279u: goto L_003371C8;
    case 280u: goto L_003371E0;
    case 281u: goto L_0033720C;
    case 282u: goto L_00337230;
    case 283u: goto L_00337298;
    case 284u: goto L_003372A0;
    case 285u: goto L_003372B8;
    case 286u: goto L_003372C0;
    case 287u: goto L_003372C8;
    case 288u: goto L_003372E0;
    case 289u: goto L_0033730C;
    case 290u: goto L_00337330;
    case 291u: goto L_003373D0;
    case 292u: goto L_00337430;
    case 293u: goto L_00337464;
    case 294u: goto L_003374BC;
    case 295u: goto L_003374D0;
    case 296u: goto L_003374F4;
    case 297u: goto L_00337500;
    case 298u: goto L_00337620;
    case 299u: goto L_00337650;
    case 300u: goto L_00337694;
    case 301u: goto L_003376C0;
    case 302u: goto L_003376E0;
    case 303u: goto L_00337718;
    case 304u: goto L_00337728;
    case 305u: goto L_0033775C;
    case 306u: goto L_00337780;
    case 307u: goto L_003377A4;
    case 308u: goto L_003377B0;
    case 309u: goto L_0033781C;
    case 310u: goto L_00337820;
    case 311u: goto L_00337860;
    case 312u: goto L_00337890;
    case 313u: goto L_003378B4;
    case 314u: goto L_003378E4;
    case 315u: goto L_003378EC;
    case 316u: goto L_00337930;
    case 317u: goto L_00337954;
    case 318u: goto L_00337968;
    case 319u: goto L_00337A20;
    case 320u: goto L_00337A54;
    case 321u: goto L_00337A68;
    case 322u: goto L_00337A70;
    case 323u: goto L_00337A84;
    case 324u: goto L_00337A8C;
    case 325u: goto L_00337AA0;
    case 326u: goto L_00337B80;
    case 327u: goto L_00337BC8;
    case 328u: goto L_00337BE8;
    case 329u: goto L_00337CF4;
    case 330u: goto L_00337CFC;
    case 331u: goto L_00337D08;
    case 332u: goto L_00337D10;
    case 333u: goto L_00337D1C;
    case 334u: goto L_00337D28;
    case 335u: goto L_00337D34;
    case 336u: goto L_00337D40;
    case 337u: goto L_00337D4C;
    case 338u: goto L_00337D58;
    case 339u: goto L_00337D64;
    case 340u: goto L_00337D70;
    case 341u: goto L_00337D98;
    case 342u: goto L_00337DC4;
    case 343u: goto L_00337E24;
    case 344u: goto L_00337E2C;
    case 345u: goto L_00337E3C;
    case 346u: goto L_00337E48;
    case 347u: goto L_00337E58;
    case 348u: goto L_00337E64;
    case 349u: goto L_00337E74;
    case 350u: goto L_00337E80;
    case 351u: goto L_00337E90;
    case 352u: goto L_00337E9C;
    case 353u: goto L_00337EAC;
    case 354u: goto L_00337EB8;
    case 355u: goto L_00337EC8;
    case 356u: goto L_00337ED4;
    case 357u: goto L_00337EE4;
    case 358u: goto L_00337EEC;
    case 359u: goto L_00337EFC;
    case 360u: goto L_00337F04;
    case 361u: goto L_00337F14;
    case 362u: goto L_00337F20;
    case 363u: goto L_00337F30;
    case 364u: goto L_00337F3C;
    case 365u: goto L_00337F4C;
    case 366u: goto L_00337F6C;
    case 367u: goto L_00337F84;
    case 368u: goto L_00337F94;
    case 369u: goto L_00337FB4;
    case 370u: goto L_00337FCC;
    case 371u: goto L_00337FDC;
    case 372u: goto L_00337FFC;
    default: bad_entry(c, 0x00334000u); return;
    }
L_00334000:
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 3;
    { st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031F5E0u | kUnwind; return; } [[clang::musttail]] return unit_0087(c, 375u, depth); }
L_00334010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334024u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 169u, depth + 1u); else { c.pc = 0x0018DA60u; return; } if (c.pc != 0x00334024u) [[unlikely]] return; }
L_00334024:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334034u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334034u) [[unlikely]] return; }
L_00334034:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334040u); set32(c.r[4], c.r[16].w[0] + 208u);  if (depth < kMaxDepth) unit_008C(c, 541u, depth + 1u); else { c.pc = 0x00333890u; return; } if (c.pc != 0x00334040u) [[unlikely]] return; }
L_00334040:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 3200u);
    set32(c.r[4], c.r[16].w[0] + 208u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334088u); st32((c.r[29].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_008C(c, 511u, depth + 1u); else { c.pc = 0x003335B0u; return; } if (c.pc != 0x00334088u) [[unlikely]] return; }
L_00334088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003340A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003340C4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 356u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x003340C4u) [[unlikely]] return; }
L_003340C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 22064u);
    set32(c.r[2], c.r[2].w[0] + 22152u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 208u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003340E8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_008B(c, 253u, depth + 1u); else { c.pc = 0x0032ECD0u; return; } if (c.pc != 0x003340E8u) [[unlikely]] return; }
L_003340E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003340F0u); set32(c.r[4], c.r[16].w[0] + 784u);  if (depth < kMaxDepth) unit_008C(c, 463u, depth + 1u); else { c.pc = 0x00333050u; return; } if (c.pc != 0x003340F0u) [[unlikely]] return; }
L_003340F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x414D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[2].d[0] | 18002ull;
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 180u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334114u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x00334114u) [[unlikely]] return; }
L_00334114:
    set32(c.r[3], 0u + 4095u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00334140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003341B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 22064u);
    set32(c.r[2], c.r[2].w[0] + 22152u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 784u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334180u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008C(c, 492u, depth + 1u); else { c.pc = 0x003333A0u; return; } if (c.pc != 0x00334180u) [[unlikely]] return; }
L_00334180:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033418Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 259u, depth + 1u); else { c.pc = 0x0032EDC0u; return; } if (c.pc != 0x0033418Cu) [[unlikely]] return; }
L_0033418C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334198u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 359u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x00334198u) [[unlikely]] return; }
L_00334198:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003341B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003341B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003341B0u) [[unlikely]] return; }
L_003341B0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003341B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003341D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003341F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003341F8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003341F8u) [[unlikely]] return; }
L_003341F8:
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00334220; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00334220; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334220u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334220u) [[unlikely]] return; }
L_00334220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334228u); st32((c.r[17].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00334228u) [[unlikely]] return; }
L_00334228:
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00334254; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033423Cu); set32(c.r[4], ld32((c.r[1].w[0] + 26120u)));  if (depth < kMaxDepth) unit_0023(c, 46u, depth + 1u); else { c.pc = 0x0018C890u; return; } if (c.pc != 0x0033423Cu) [[unlikely]] return; }
L_0033423C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[16], c.r[2].w[0] << 3);  if (t) { goto L_00334260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033424Cu);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x0033424Cu) [[unlikely]] return; }
L_0033424C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033425C; } }
L_00334254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033425Cu);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x0033425Cu) [[unlikely]] return; }
L_0033425C:
    set32(c.r[16], c.r[2].w[0] << 3);
    c.budget -= 1;
L_00334260:
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033426Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0033426Cu) [[unlikely]] return; }
L_0033426C:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033427Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0033427Cu) [[unlikely]] return; }
L_0033427C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334284u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x00334284u) [[unlikely]] return; }
L_00334284:
    set32(c.r[4], c.r[17].w[0] + 784u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334290u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008C(c, 539u, depth + 1u); else { c.pc = 0x00333850u; return; } if (c.pc != 0x00334290u) [[unlikely]] return; }
L_00334290:
    set32(c.r[4], c.r[17].w[0] + 784u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033429Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008C(c, 541u, depth + 1u); else { c.pc = 0x00333890u; return; } if (c.pc != 0x0033429Cu) [[unlikely]] return; }
L_0033429C:
    set32(c.r[4], c.r[17].w[0] + 784u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003342A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008C(c, 543u, depth + 1u); else { c.pc = 0x003338D0u; return; } if (c.pc != 0x003342A8u) [[unlikely]] return; }
L_003342A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003342C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003342E8u); st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x003342E8u) [[unlikely]] return; }
L_003342E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003342F0u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x003342F0u) [[unlikely]] return; }
L_003342F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003342F8u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 256u, depth + 1u); else { c.pc = 0x0018E780u; return; } if (c.pc != 0x003342F8u) [[unlikely]] return; }
L_003342F8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 64u)));  if (t) { goto L_00334330; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334318u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334318u) [[unlikely]] return; }
L_00334318:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334328u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 427u, depth + 1u); else { c.pc = 0x0018FED0u; return; } if (c.pc != 0x00334328u) [[unlikely]] return; }
L_00334328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 176u)));  if (t) { goto L_00334354; } }
L_00334330:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334340u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334340u) [[unlikely]] return; }
L_00334340:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334350u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 428u, depth + 1u); else { c.pc = 0x0018FF30u; return; } if (c.pc != 0x00334350u) [[unlikely]] return; }
L_00334350:
    set32(c.r[2], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 1;
L_00334354:
    st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334360u); set32(c.r[4], ld32((c.r[19].w[0] + 36u)));  if (depth < kMaxDepth) unit_008B(c, 227u, depth + 1u); else { c.pc = 0x0032E6F0u; return; } if (c.pc != 0x00334360u) [[unlikely]] return; }
L_00334360:
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033436Cu); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_008B(c, 263u, depth + 1u); else { c.pc = 0x0032EE40u; return; } if (c.pc != 0x0033436Cu) [[unlikely]] return; }
L_0033436C:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[1].w[0] - 1624u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003343A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00334408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003343C4u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x003343C4u) [[unlikely]] return; }
L_003343C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 14u);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003343ECu); set32(c.r[16], ld32((c.r[2].w[0] + 64u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003343ECu) [[unlikely]] return; }
L_003343EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334400u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00334400u) [[unlikely]] return; }
L_00334400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00334414; } }
L_00334408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334410u);  if (depth < kMaxDepth) unit_0087(c, 400u, depth + 1u); else { c.pc = 0x0031F8D0u; return; } if (c.pc != 0x00334410u) [[unlikely]] return; }
L_00334410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00334414:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00334430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033444Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 169u, depth + 1u); else { c.pc = 0x0018DA60u; return; } if (c.pc != 0x0033444Cu) [[unlikely]] return; }
L_0033444C:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00334478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334460u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00334460u) [[unlikely]] return; }
L_00334460:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334478u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00334478u) [[unlikely]] return; }
L_00334478:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 3184u);
    set32(c.r[4], c.r[17].w[0] + 784u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003344B4u); st32((c.r[29].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_008C(c, 511u, depth + 1u); else { c.pc = 0x003335B0u; return; } if (c.pc != 0x003344B4u) [[unlikely]] return; }
L_003344B4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003344D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003344C4u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_008B(c, 227u, depth + 1u); else { c.pc = 0x0032E6F0u; return; } if (c.pc != 0x003344C4u) [[unlikely]] return; }
L_003344C4:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003344D0u); set32(c.r[4], c.r[17].w[0] + 208u);  if (depth < kMaxDepth) unit_008B(c, 263u, depth + 1u); else { c.pc = 0x0032EE40u; return; } if (c.pc != 0x003344D0u) [[unlikely]] return; }
L_003344D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003344F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334508u); st32((c.r[4].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0087(c, 380u, depth + 1u); else { c.pc = 0x0031F6A0u; return; } if (c.pc != 0x00334508u) [[unlikely]] return; }
L_00334508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334510u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 227u, depth + 1u); else { c.pc = 0x0032E6F0u; return; } if (c.pc != 0x00334510u) [[unlikely]] return; }
L_00334510:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00334520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033454Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 356u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x0033454Cu) [[unlikely]] return; }
L_0033454C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21888u);
    set32(c.r[2], c.r[2].w[0] + 21976u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 400u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 212u), c.r[16].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334574u); st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00334574u) [[unlikely]] return; }
L_00334574:
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334580u); st32((c.r[17].w[0] + 208u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00334580u) [[unlikely]] return; }
L_00334580:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00334594; } }
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334594u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 128u, depth + 1u); else { c.pc = 0x0032CE80u; return; } if (c.pc != 0x00334594u) [[unlikely]] return; }
L_00334594:
    set32(c.r[2], 0u + 4095u);
    st16((c.r[17].w[0] + 188u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003345A8u); set32(c.r[4], ld32((c.r[17].w[0] + 212u)));  if (depth < kMaxDepth) unit_0023(c, 244u, depth + 1u); else { c.pc = 0x0018E5E0u; return; } if (c.pc != 0x003345A8u) [[unlikely]] return; }
L_003345A8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003345B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003345B8u) [[unlikely]] return; }
L_003345B8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003345C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003345C8u) [[unlikely]] return; }
L_003345C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003345D0u);  if (depth < kMaxDepth) unit_0076(c, 189u, depth + 1u); else { c.pc = 0x002D9920u; return; } if (c.pc != 0x003345D0u) [[unlikely]] return; }
L_003345D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003345E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003345E0u);  if (depth < kMaxDepth) unit_0076(c, 189u, depth + 1u); else { c.pc = 0x002D9920u; return; } if (c.pc != 0x003345E0u) [[unlikely]] return; }
L_003345E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 432u)));  if (t) { goto L_003345EC; } }
L_003345E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003345EC:
    st32((c.r[17].w[0] + 216u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00334610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00334664; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21888u);
    set32(c.r[2], c.r[2].w[0] + 21976u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033464Cu); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 359u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x0033464Cu) [[unlikely]] return; }
L_0033464C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00334668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334664u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00334664u) [[unlikely]] return; }
L_00334664:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00334668:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00334680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003346A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003346A4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003346A4u) [[unlikely]] return; }
L_003346A4:
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003346CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003346CC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003346CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003346CCu) [[unlikely]] return; }
L_003346CC:
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003346E0u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003346E0u) [[unlikely]] return; }
L_003346E0:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003346F0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x003346F0u) [[unlikely]] return; }
L_003346F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003346F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x003346F8u) [[unlikely]] return; }
L_003346F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st8((c.r[3].w[0] + 33u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00334720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00334730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 208u)));
    c.r[1].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00334754; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 2;
L_00334754:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 20u);  if (t) { goto L_00334774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033476Cu);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0033476Cu) [[unlikely]] return; }
L_0033476C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334774u); set32(c.r[4], 0u + 404u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00334774u) [[unlikely]] return; }
L_00334774:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003347D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033478Cu); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0033478Cu) [[unlikely]] return; }
L_0033478C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003347A0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003347A0u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_008B(c, 140u, depth + 1u); else { c.pc = 0x0032D220u; return; } if (c.pc != 0x003347A0u) [[unlikely]] return; }
L_003347A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 632u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003347B0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_009C(c, 186u, depth + 1u); else { c.pc = 0x00370F00u; return; } if (c.pc != 0x003347B0u) [[unlikely]] return; }
L_003347B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003347B8u); set32(c.r[4], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 410u, depth + 1u); else { c.pc = 0x001873D0u; return; } if (c.pc != 0x003347B8u) [[unlikely]] return; }
L_003347B8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003347C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003347C8u) [[unlikely]] return; }
L_003347C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 248u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_003347D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003347E0u);  if (depth < kMaxDepth) unit_0087(c, 369u, depth + 1u); else { c.pc = 0x0031F540u; return; } if (c.pc != 0x003347E0u) [[unlikely]] return; }
L_003347E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003347F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334808u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00334808u) [[unlikely]] return; }
L_00334808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00334824; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334820u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 128u, depth + 1u); else { c.pc = 0x0032CE80u; return; } if (c.pc != 0x00334820u) [[unlikely]] return; }
L_00334820:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00334824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033482Cu);  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x0033482Cu) [[unlikely]] return; }
L_0033482C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334834u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00334834u) [[unlikely]] return; }
L_00334834:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00334850:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00334860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 45u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 208u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 208u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033489C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334894u); set32(c.r[4], ld32((c.r[16].w[0] + 216u)));  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00334894u) [[unlikely]] return; }
L_00334894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033489Cu); set32(c.r[4], 0u + 404u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0033489Cu) [[unlikely]] return; }
L_0033489C:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.r[1].d[0] = c.r[3].sd[0] < 51ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_003348D8; } }
    set32(c.r[4], ld32((c.r[1].w[0] - 632u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003348B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 186u, depth + 1u); else { c.pc = 0x00370F00u; return; } if (c.pc != 0x003348B8u) [[unlikely]] return; }
L_003348B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003348C0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0021(c, 410u, depth + 1u); else { c.pc = 0x001873D0u; return; } if (c.pc != 0x003348C0u) [[unlikely]] return; }
L_003348C0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003348D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003348D0u) [[unlikely]] return; }
L_003348D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    st8((c.r[3].w[0] + 248u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003348D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003348F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 45u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 208u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 208u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00334924; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334924u); set32(c.r[4], ld32((c.r[16].w[0] + 216u)));  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00334924u) [[unlikely]] return; }
L_00334924:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.r[1].d[0] = c.r[3].sd[0] < 51ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_00334960; } }
    set32(c.r[4], ld32((c.r[1].w[0] - 632u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334940u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 186u, depth + 1u); else { c.pc = 0x00370F00u; return; } if (c.pc != 0x00334940u) [[unlikely]] return; }
L_00334940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334948u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0021(c, 410u, depth + 1u); else { c.pc = 0x001873D0u; return; } if (c.pc != 0x00334948u) [[unlikely]] return; }
L_00334948:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334958u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334958u) [[unlikely]] return; }
L_00334958:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    st8((c.r[3].w[0] + 248u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00334960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00334970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334988u); set32(c.r[4], ld32((c.r[4].w[0] + 212u)));  if (depth < kMaxDepth) unit_0023(c, 245u, depth + 1u); else { c.pc = 0x0018E600u; return; } if (c.pc != 0x00334988u) [[unlikely]] return; }
L_00334988:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003349A4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003349A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003349A4u) [[unlikely]] return; }
L_003349A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003349C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018D9A0u | kUnwind; return; } [[clang::musttail]] return unit_0023(c, 160u, depth); }
L_003349D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018D9A0u | kUnwind; return; } [[clang::musttail]] return unit_0023(c, 160u, depth); }
L_003349E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130270u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 25u, depth); }
L_003349F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334A08u); set32(c.r[4], 0u + 224u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00334A08u) [[unlikely]] return; }
L_00334A08:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00334A1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334A1Cu);  if (depth < kMaxDepth) unit_008D(c, 55u, depth + 1u); else { c.pc = 0x00334520u; return; } if (c.pc != 0x00334A1Cu) [[unlikely]] return; }
L_00334A1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00334A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334A48u); set32(c.r[4], 0u + 224u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00334A48u) [[unlikely]] return; }
L_00334A48:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00334A5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334A5Cu);  if (depth < kMaxDepth) unit_008D(c, 55u, depth + 1u); else { c.pc = 0x00334520u; return; } if (c.pc != 0x00334A5Cu) [[unlikely]] return; }
L_00334A5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00334A70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00334A30u | kUnwind; return; } goto L_00334A30; }
L_00334A80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003302F0u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 31u, depth); }
L_00334A90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FE60u | kUnwind; return; } [[clang::musttail]] return unit_008B(c, 404u, depth); }
L_00334AA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003349F0u | kUnwind; return; } goto L_003349F0; }
L_00334AB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003308E0u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 90u, depth); }
L_00334AC0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003304D0u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 49u, depth); }
L_00334AD0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003310C0u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 174u, depth); }
L_00334AE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00330DF0u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 141u, depth); }
L_00334AF0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00331C80u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 275u, depth); }
L_00334B00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00331820u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 233u, depth); }
L_00334B10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003325A0u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 357u, depth); }
L_00334B20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003320D0u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 310u, depth); }
L_00334B30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00332CD0u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 432u, depth); }
L_00334B40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003327D0u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 380u, depth); }
L_00334B50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00333D00u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 594u, depth); }
L_00334B60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00333A10u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 554u, depth); }
L_00334B70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00334010u | kUnwind; return; } goto L_00334010; }
L_00334B80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00333E40u | kUnwind; return; } [[clang::musttail]] return unit_008C(c, 606u, depth); }
L_00334B90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00334430u | kUnwind; return; } goto L_00334430; }
L_00334BA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00334140u | kUnwind; return; } goto L_00334140; }
L_00334BB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00334610u | kUnwind; return; } goto L_00334610; }
L_00334BC0:
    set32(c.r[29], c.r[29].w[0] - 1824u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48410000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334BF8u); c.r[5].d[0] = c.r[2].d[0] | 18770ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x00334BF8u) [[unlikely]] return; }
L_00334BF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[19], c.r[17].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] + 23680u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 4;
L_00334C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334C10u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 160u, depth + 1u); else { c.pc = 0x00335150u; return; } if (c.pc != 0x00334C10u) [[unlikely]] return; }
L_00334C10:
    set32(c.r[19], c.r[19].w[0] + 160u);
    set32(c.r[18], c.r[17].w[0] + 640u);
    c.budget -= 5;
    { const bool t = c.r[19].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00334C08u | kUnwind; return; } goto L_00334C08; } }
L_00334C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334C2Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 160u, depth + 1u); else { c.pc = 0x00335150u; return; } if (c.pc != 0x00334C2Cu) [[unlikely]] return; }
L_00334C2C:
    set32(c.r[18], c.r[18].w[0] + 160u);
    set32(c.r[2], c.r[17].w[0] + 1120u);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00334C24u | kUnwind; return; } goto L_00334C24; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334C4Cu); st32((c.r[17].w[0] + 128u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_008D(c, 176u, depth + 1u); else { c.pc = 0x003356B0u; return; } if (c.pc != 0x00334C4Cu) [[unlikely]] return; }
L_00334C4C:
    st32((c.r[17].w[0] + 92u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334C6Cu); set32(c.r[5], c.r[5].w[0] - 12600u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334C6Cu) [[unlikely]] return; }
L_00334C6C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334C8Cu); set32(c.r[5], c.r[5].w[0] - 12592u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334C8Cu) [[unlikely]] return; }
L_00334C8C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00334CACu); set32(c.r[5], c.r[5].w[0] - 12584u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00334CACu) [[unlikely]] return; }
L_00334CAC:
    st32((c.r[17].w[0] + 136u), c.r[19].w[0]);
    set32(c.r[4], 0u + 3u);
    st32((c.r[17].w[0] + 140u), c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 144u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[17].w[0] + 132u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 160u), 0u);
    st32((c.r[17].w[0] + 164u), 0u);
    st32((c.r[17].w[0] + 168u), 0u);
    st32((c.r[17].w[0] + 172u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 12464u));
    st32((c.r[17].w[0] + 320u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[17].w[0] + 324u), 0u);
    c.f[0] = ld32((c.r[1].w[0] - 12472u));
    st32((c.r[17].w[0] + 328u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[17].w[0] + 332u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 12480u));
    st32((c.r[17].w[0] + 480u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[17].w[0] + 484u), 0u);
    st32((c.r[17].w[0] + 488u), 0u);
    st32((c.r[17].w[0] + 492u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 304u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 12488u));
    st32((c.r[17].w[0] + 308u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 12480u));
    st32((c.r[17].w[0] + 312u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[17].w[0] + 316u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 464u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 12488u));
    st32((c.r[17].w[0] + 468u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 12480u));
    st32((c.r[17].w[0] + 472u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[17].w[0] + 476u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 12480u));
    st32((c.r[17].w[0] + 624u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 12480u));
    st32((c.r[17].w[0] + 628u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 12480u));
    st32((c.r[17].w[0] + 632u), c.f[0]);
    c.budget -= 51;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[17].w[0] + 636u), c.r[3].w[0]);  if (t) { goto L_00334F28; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334D84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x00334D84u) [[unlikely]] return; }
L_00334D84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00334F2C; } }
    set32(c.r[4], c.r[29].w[0] + 784u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334D9Cu); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00334D9Cu) [[unlikely]] return; }
L_00334D9C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 784u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334DACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x00334DACu) [[unlikely]] return; }
L_00334DAC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334DBCu); set32(c.r[6], 0u + 640u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00334DBCu) [[unlikely]] return; }
L_00334DBC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334DC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x00334DC8u) [[unlikely]] return; }
L_00334DC8:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 13u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 10u);  if (t) { goto L_00334E74; } }
L_00334DE4:
    c.r[6].d[0] = ld8((c.r[3].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00334E84; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00334E24; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[19].w[0] << 6);  if (t) { goto L_00334E08; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_00334E24; } }
L_00334E08:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 144u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_00334E70; } }
L_00334E24:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_00334E40; } }
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_00334E50; } }
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 1;
L_00334E40:
    c.r[1].d[0] = c.r[3].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00334E70; } }
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 1;
L_00334E50:
    c.r[1].d[0] = c.r[3].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] << 6);  if (t) { goto L_00334E70; } }
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 144u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 5;
L_00334E70:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00334E74:
    c.r[3].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] + c.r[29].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00334DE4u | kUnwind; return; } goto L_00334DE4; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00334E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;  if (t) { goto L_00334F20; } }
L_00334E8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] - 12576u);
    set32(c.r[6], c.r[29].w[0] + 1820u);
    set32(c.r[4], c.r[2].w[0] + 144u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    set32(c.r[8], c.r[29].w[0] + 100u);
    set32(c.r[9], c.r[29].w[0] + 104u);
    set32(c.r[10], c.r[29].w[0] + 108u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00334EB8u); set32(c.r[11], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x00334EB8u) [[unlikely]] return; }
L_00334EB8:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00334F18; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 1820u)));
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 136u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[3].w[0] + 160u), c.f[1]);
    st32((c.r[3].w[0] + 164u), 0u);
    st32((c.r[3].w[0] + 168u), c.f[0]);
    st32((c.r[3].w[0] + 172u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[3].w[0] + 304u), c.f[2]);
    st32((c.r[3].w[0] + 308u), c.f[1]);
    st32((c.r[3].w[0] + 312u), c.f[0]);
    st32((c.r[3].w[0] + 316u), c.r[2].w[0]);
    c.budget -= 21;
L_00334F18:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00334F20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 6);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00334E8Cu | kUnwind; return; } goto L_00334E8C; } }
L_00334F28:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00334F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_00335048; } }
L_00334F34:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    ld128((c.r[4].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[10], c.r[4].w[0] + 656u);
    set32(c.r[5], c.r[4].w[0] + 176u);
    st128((c.r[4].w[0] + 640u) & ~15u, c.r[2]);
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    st128((c.r[10].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[10].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[10].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + 720u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 240u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[4].w[0] + 304u) & ~15u, c.r[5]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    st128((c.r[4].w[0] + 784u) & ~15u, c.r[5]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 356u));
    set32(c.r[6], c.r[2].w[0] + 160u);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 356u));
    set32(c.r[4], c.r[2].w[0] + 304u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 69;
L_00335048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00334F34u | kUnwind; return; } goto L_00334F34; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00335054:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335064u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 185u, depth + 1u); else { c.pc = 0x00335940u; return; } if (c.pc != 0x00335064u) [[unlikely]] return; }
L_00335064:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00335084; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335054u | kUnwind; return; } goto L_00335054; } }
L_00335084:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1824u);  c.pc = t; return; }
L_003350B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00335128; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 23680u);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 4;
L_003350E0:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00335104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003350FCu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003350FCu) [[unlikely]] return; }
L_003350FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003350E0u | kUnwind; return; } goto L_003350E0; } }
L_00335104:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335110u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x00335110u) [[unlikely]] return; }
L_00335110:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0033512C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335128u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00335128u) [[unlikely]] return; }
L_00335128:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0033512C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00335150:
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00335160:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335184u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x00335184u) [[unlikely]] return; }
L_00335184:
    set32(c.r[2], c.r[17].w[0] + 16u);
    ld128((c.r[16].w[0]) & ~15u, c.r[6]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[3], c.r[17].w[0] + 16u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[17].w[0] + 80u);
    st128((c.r[17].w[0] + 64u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003351E4u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 352u, depth + 1u); else { c.pc = 0x001039B8u; return; } if (c.pc != 0x003351E4u) [[unlikely]] return; }
L_003351E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00335200:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[5], c.r[17].w[0] + 80u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335234u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x00335234u) [[unlikely]] return; }
L_00335234:
    c.f[2] = ld32((c.r[17].w[0] + 152u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033568C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00335688; } }
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.f[2] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 100u), c.f[2]);
    c.f[2] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 88u), c.f[2]);  if (t) { goto L_003352DC; } }
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003352E0; } }
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003352DC; } }
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003352DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003352E0; } }
L_003352DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003352E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00335330; } }
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033530C; } }
    c.f[0] = ld32((c.r[17].w[0] + 152u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 120u), c.f[0]);  if (t) { goto L_00335318; } }
L_0033530C:
    c.f[0] = ld32((c.r[17].w[0] + 152u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.budget -= 3;
L_00335318:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335328u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x00335328u) [[unlikely]] return; }
L_00335328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033568C; } }
L_00335330:
    c.f[4] = ld32((c.r[17].w[0] + 148u));
    c.f[3] = ld32((c.r[17].w[0] + 152u));
    c.f[2] = ld32((c.r[17].w[0] + 144u));
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = c.f[4] ^ fp::kSign;
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[4] = fp::add(c.f[4], c.f[3]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = c.f[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 108u), c.f[4]);  if (t) { goto L_003353B0; } }
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003353B4; } }
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003353B0; } }
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003353B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003353B4; } }
L_003353B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003353B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00335688; } }
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = 0u;
    c.f[21] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[21];  if (t) { goto L_003353E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.f[1] ^ fp::kSign;
    c.f[21] = c.r[2].w[0];
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.budget -= 4;
L_003353E8:
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_0033540C; } }
    c.f[0] = c.f[1] ^ fp::kSign;
    c.f[20] = c.r[2].w[0];
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.budget -= 3;
L_0033540C:
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[17].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    fpu_div(c, 0u, c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    st32((c.r[29].w[0] + 64u), c.f[1]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335454u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x00335454u) [[unlikely]] return; }
L_00335454:
    c.f[1] = ld32((c.r[17].w[0] + 152u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033550C; } }
    c.f[2] = ld32((c.r[17].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 148u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335490u); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x00335490u) [[unlikely]] return; }
L_00335490:
    c.f[0] = ld32((c.r[17].w[0] + 152u));
    set32(c.r[3], c.r[29].w[0] + 112u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.f[3] = ld32((c.r[17].w[0] + 144u));
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[2] = ld32((c.r[29].w[0] + 116u));
    c.f[1] = fp::add(c.f[1], c.f[3]);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[3] = ld32((c.r[17].w[0] + 148u));
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 124u), c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.f[1] = fp::mul(c.f[1], c.f[21]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335504u); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x00335504u) [[unlikely]] return; }
L_00335504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335688; } }
L_0033550C:
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003355D8; } }
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    c.f[22] = ld32((c.r[29].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00335688; } }
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[29].w[0] + 116u), 0u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335550u); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x00335550u) [[unlikely]] return; }
L_00335550:
    c.f[1] = ld32((c.r[17].w[0] + 152u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_00335688; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335568u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x00335568u) [[unlikely]] return; }
L_00335568:
    c.f[0] = ld32((c.r[17].w[0] + 152u));
    set32(c.r[3], c.r[29].w[0] + 112u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.f[2] = ld32((c.r[17].w[0] + 144u));
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[29].w[0] + 116u), c.f[22]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 124u), c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::mul(c.f[1], c.f[21]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003355D0u); st32((c.r[29].w[0] + 112u), c.f[1]);  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x003355D0u) [[unlikely]] return; }
L_003355D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00335688; } }
L_003355D8:
    c.f[0] = ld32((c.r[17].w[0] + 144u));
    c.f[22] = ld32((c.r[29].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00335688; } }
    c.f[1] = ld32((c.r[17].w[0] + 148u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[29].w[0] + 112u), 0u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335608u); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x00335608u) [[unlikely]] return; }
L_00335608:
    c.f[1] = ld32((c.r[17].w[0] + 152u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_00335688; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335620u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x00335620u) [[unlikely]] return; }
L_00335620:
    c.f[0] = ld32((c.r[17].w[0] + 152u));
    set32(c.r[3], c.r[29].w[0] + 112u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.f[2] = ld32((c.r[17].w[0] + 148u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[29].w[0] + 112u), c.f[22]);
    c.f[2] = fp::add(c.f[1], c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[29].w[0] + 124u), c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.f[1] = fp::mul(c.f[1], c.f[21]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335688u); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x00335688u) [[unlikely]] return; }
L_00335688:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033568C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003356B0:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    st32((c.r[1].w[0] - 1596u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[1].w[0] - 1600u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 1592u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 1588u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 1584u), c.r[3].w[0]);  c.pc = t; return; }
L_003356F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
L_00335708:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 12288u)));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335708u | kUnwind; return; } goto L_00335708; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[3].d[0] | 4096ull;  if (t) { goto L_00335818; } }
L_00335734:
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], ld32((c.r[3].w[0] + 136u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335760u); set32(c.r[4], c.r[4].w[0] + 160u);  if (depth < kMaxDepth) unit_008D(c, 161u, depth + 1u); else { c.pc = 0x00335160u; return; } if (c.pc != 0x00335760u) [[unlikely]] return; }
L_00335760:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[5], c.r[3].w[0] + c.r[18].w[0]);
    ld128((c.r[5].w[0] + 160u) & ~15u, c.r[4]);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[10], c.r[3].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 176u);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    st128((c.r[10].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[10].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[10].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + 80u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 240u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    ld128((c.r[4].w[0] + 304u) & ~15u, c.r[4]);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st128((c.r[3].w[0] + 144u) & ~15u, c.r[4]);
    c.budget -= 46;
L_00335818:
    set32(c.r[3], ld32((c.r[18].w[0] + 132u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335734u | kUnwind; return; } goto L_00335734; } }
    ld128((c.r[18].w[0] + 112u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[0] = 0u;
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[12]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 112u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 31;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003358E0; } }
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[29].w[0] + 80u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003358C4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x003358C4u) [[unlikely]] return; }
L_003358C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 12464u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003358DC; } }
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 1;
L_003358DC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003358E0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00335920; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_0033590C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335908u);  if (depth < kMaxDepth) unit_008D(c, 193u, depth + 1u); else { c.pc = 0x00335B50u; return; } if (c.pc != 0x00335908u) [[unlikely]] return; }
L_00335908:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0033590C:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335918u); set32(c.r[4], ld32((c.r[2].w[0] + 28u)));  if (depth < kMaxDepth) unit_008D(c, 194u, depth + 1u); else { c.pc = 0x00335B60u; return; } if (c.pc != 0x00335918u) [[unlikely]] return; }
L_00335918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003358E0u | kUnwind; return; } goto L_003358E0; } }
L_00335920:
    st32((c.r[18].w[0] + 88u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00335940:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 10u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::div(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00335970; } }
    breakpoint(c, 0x0033596Cu);
    c.budget -= 1;
L_00335970:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 10u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    mmi::div(c, 0, c.r[17].w[0], c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + 48u);
    st8((c.r[1].w[0] - 3164u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.hi.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] + 48u);
    st8((c.r[1].w[0] - 3163u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003359B0u); set32(c.r[5], c.r[5].w[0] - 3168u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003359B0u) [[unlikely]] return; }
L_003359B0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003359E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003359C4u); set32(c.r[4], 0u + 944u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003359C4u) [[unlikely]] return; }
L_003359C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003359EC; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003359E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 189u, depth + 1u); else { c.pc = 0x00335A10u; return; } if (c.pc != 0x003359E0u) [[unlikely]] return; }
L_003359E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003359F0; } }
L_003359E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003359EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003359F0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00335A10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[6].w[0], c.r[2].w[0]);  if (t) { goto L_00335A54; } }
    breakpoint(c, 0x00335A50u);
    c.budget -= 1;
L_00335A54:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 10u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    mmi::div(c, 0, c.r[6].w[0], c.r[2].w[0]);
    set32(c.r[20], c.r[3].w[0] + 48u);
    st8((c.r[1].w[0] - 3164u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[19], c.r[2].w[0] + 48u);
    st8((c.r[1].w[0] - 3163u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00335A94u); set32(c.r[5], c.r[5].w[0] - 3168u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00335A94u) [[unlikely]] return; }
L_00335A94:
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    st8((c.r[1].w[0] - 3156u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st8((c.r[1].w[0] - 3155u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 8;
L_00335AB4:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);  if (t) { goto L_00335AC4; } }
    breakpoint(c, 0x00335AC0u);
    c.budget -= 1;
L_00335AC4:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 10u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + 48u);
    st8((c.r[1].w[0] - 3153u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.hi.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] + 48u);
    st8((c.r[1].w[0] - 3152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00335B04u); set32(c.r[5], c.r[5].w[0] - 3160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00335B04u) [[unlikely]] return; }
L_00335B04:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00335B24; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335AB4u | kUnwind; return; } goto L_00335AB4; } }
L_00335B24:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00335B50:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_00335B60:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].d[0] = c.r[20].d[0] | 80ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[20].d[0] | 64ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[20].d[0] | 96ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.r[30].d[0] = c.r[20].d[0] | 112ull;
    c.r[17].d[0] = c.r[20].d[0] | 192ull;
    c.r[23].d[0] = c.r[20].d[0] | 512ull;
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[20].d[0] | 128ull;
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[20].d[0] | 256ull;
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[20].d[0] | 4096ull;
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 30;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[22].d[0] = c.r[20].d[0] | 576ull;  if (t) { goto L_00336708; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 240u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003365A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00335C4C; } }
L_00335C1C:
    set32(c.r[3], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 12;
L_00335C4C:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 6);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335C1Cu | kUnwind; return; } goto L_00335C1C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[17].w[0]) & ~15u, c.r[6]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[17].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[5], c.r[22].w[0] + 48u);
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 48u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[23].w[0]) & ~15u, c.r[2]);
    ld128((c.r[23].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[23].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335CD4u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x00335CD4u) [[unlikely]] return; }
L_00335CD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 12496u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00335D0C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 12504u));
    ld128((c.r[23].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st128((c.r[23].w[0]) & ~15u, c.vu0.vf[4]);  if (t) { goto L_00335D5C; } }
L_00335D0C:
    c.f[1] = ld32((c.r[1].w[0] - 12512u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_00335D3C; } }
    c.f[0] = c.r[2].w[0];
    ld128((c.r[23].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st128((c.r[23].w[0]) & ~15u, c.vu0.vf[4]);  if (t) { goto L_00335D5C; } }
L_00335D3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 12520u));
    ld128((c.r[23].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[23].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 8;
L_00335D5C:
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    st32((c.r[19].w[0] + 4u), c.f[1]);
    st32((c.r[19].w[0] + 12u), c.f[0]);
    ld128((c.r[22].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[22].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[22].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[22].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[2], c.r[21].w[0] + 32u);
    ld128((c.r[17].w[0]) & ~15u, c.r[6]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    ld128((c.r[17].w[0]) & ~15u, c.r[6]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[22].w[0]) & ~15u, c.r[6]);
    st128((c.r[22].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[22].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[22].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    st32((c.r[18].w[0] + 4u), c.f[1]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[12]);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[17].w[0]) & ~15u, c.r[6]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[20].w[0]) & ~15u, c.r[6]);
    st128((c.r[20].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[20].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[20].w[0] + 48u) & ~15u, c.r[9]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 66;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335E64u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 350u, depth + 1u); else { c.pc = 0x00103970u; return; } if (c.pc != 0x00335E64u) [[unlikely]] return; }
L_00335E64:
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[20].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[1].w[0] - 12488u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] - 1u);  if (t) { goto L_00335EC0; } }
L_00335EAC:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[0] = ld32((c.r[2].w[0] + 828u));
    st32((c.r[2].w[0] + 832u), c.f[0]);
    c.budget -= 5;
L_00335EC0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335EACu | kUnwind; return; } goto L_00335EAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00335ED0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x00335ED0u) [[unlikely]] return; }
L_00335ED0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[16], 0u + 1u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[21].w[0] + 832u), c.f[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_00336590; } }
L_00335EF8:
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 828u));
    st32((c.r[18].w[0] + 8u), c.f[1]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[12]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[19].w[0]), c.f[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[23].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    ld128((c.r[19].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    st128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[3].w[0] + 872u)));
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.budget -= 49;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00335FF4; } }
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00335FE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[1].w[0] - 12520u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.f[0]);  if (t) { goto L_0033606C; } }
L_00335FE0:
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[1].w[0] - 12488u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.f[0]);  if (t) { goto L_0033606C; } }
L_00335FF4:
    set32(c.r[2], c.r[16].w[0] << 1);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 12488u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336014u); c.r[4].d[0] = ld16((c.r[2].w[0] + 912u));  if (depth < kMaxDepth) unit_0011(c, 11u, depth + 1u); else { c.pc = 0x001441F0u; return; } if (c.pc != 0x00336014u) [[unlikely]] return; }
L_00336014:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[16].w[0] << 1);
    c.f[2] = ld32((c.r[1].w[0] - 12528u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], c.r[4].w[0] - 25200u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] + 512u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[3].w[0] + 912u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 912u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 22;
L_0033606C:
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 672u);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[29].w[0] + 176u), 0u);
    c.f[1] = ld32((c.r[2].w[0] + 228u));
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003360C0; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_003360C0:
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003360DC; } }
    st32((c.r[19].w[0] + 4u), c.f[1]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_003360DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), 0u);  if (t) { goto L_0033615C; } }
L_003360E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336104u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_008D(c, 164u, depth + 1u); else { c.pc = 0x00335200u; return; } if (c.pc != 0x00336104u) [[unlikely]] return; }
L_00336104:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00336150; } }
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 15;
L_00336150:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 3;
L_0033615C:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003360E4u | kUnwind; return; } goto L_003360E4; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 872u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[4].w[0] + 872u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 872u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[6].w[0] + 872u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 868u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 868u), c.r[3].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[20].w[0]) & ~15u, c.r[6]);
    st128((c.r[20].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[20].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[20].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 240u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[20].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[10]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[20].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[20].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 89;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003362D8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 352u, depth + 1u); else { c.pc = 0x001039B8u; return; } if (c.pc != 0x003362D8u) [[unlikely]] return; }
L_003362D8:
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[20].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[12]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[12] = ld32((c.r[19].w[0] + 4u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336310u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 97u, depth + 1u); else { c.pc = 0x00145DD0u; return; } if (c.pc != 0x00336310u) [[unlikely]] return; }
L_00336310:
    st32((c.r[30].w[0]), c.f[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336320u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 30u, depth + 1u); else { c.pc = 0x001446D0u; return; } if (c.pc != 0x00336320u) [[unlikely]] return; }
L_00336320:
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[20].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[12]);
    c.f[13] = ld32((c.r[19].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336354u); c.f[12] = ld32((c.r[19].w[0] + 8u));  if (depth < kMaxDepth) unit_0011(c, 97u, depth + 1u); else { c.pc = 0x00145DD0u; return; } if (c.pc != 0x00336354u) [[unlikely]] return; }
L_00336354:
    c.f[1] = c.f[0] ^ fp::kSign;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[30].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 12536u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00336374; } }
    st32((c.r[30].w[0] + 4u), c.f[0]);
    c.budget -= 1;
L_00336374:
    c.f[1] = ld32((c.r[30].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00336390; } }
    st32((c.r[30].w[0] + 4u), c.f[0]);
    c.budget -= 1;
L_00336390:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003363A8; } }
    c.f[1] = ld32((c.r[30].w[0] + 4u));
    c.f[0] = ld32((c.r[1].w[0] - 12544u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[30].w[0] + 4u), c.f[0]);
    c.budget -= 4;
L_003363A8:
    c.f[0] = ld32((c.r[30].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003363C0u); st32((c.r[30].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 40u, depth + 1u); else { c.pc = 0x00144A40u; return; } if (c.pc != 0x003363C0u) [[unlikely]] return; }
L_003363C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], c.r[20].w[0] + 48u);
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 240u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 204u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[20].w[0]) & ~15u, c.r[6]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[20].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[20].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[20].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[20].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    ld128((c.r[20].w[0]) & ~15u, c.r[6]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[20].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    ld128((c.r[20].w[0]) & ~15u, c.r[6]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[20].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[19].w[0]), c.f[0]);
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[20].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[12]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 12552u));
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    ld128((c.r[19].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 672u) & ~15u, c.r[3]);
    c.budget -= 116;
L_00336590:
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00335EF8u | kUnwind; return; } goto L_00335EF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), 0u);  if (t) { goto L_00336708; } }
L_003365A8:
    set32(c.r[17], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00336684; } }
L_003365B4:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 240u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003365DCu); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 53u, depth + 1u); else { c.pc = 0x00145110u; return; } if (c.pc != 0x003365DCu) [[unlikely]] return; }
L_003365DC:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[20].w[0] + 48u);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 240u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[17].w[0] << 6);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 204u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[20].w[0]) & ~15u, c.r[6]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[20].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 672u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[0] = 0u;
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    st32((c.r[4].w[0] + 872u), 0u);
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 832u), c.f[0]);
    st16((c.r[2].w[0] + 912u), static_cast<std::uint16_t>(0u));
    c.budget -= 42;
L_00336684:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003365B4u | kUnwind; return; } goto L_003365B4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003366A0u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_0014(c, 69u, depth + 1u); else { c.pc = 0x00151160u; return; } if (c.pc != 0x003366A0u) [[unlikely]] return; }
L_003366A0:
    set32(c.r[17], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_003366F4; } }
L_003366AC:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[11].w[0] << 6);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] << 6);
    set32(c.r[10], c.r[3].w[0] + 32u);
    set32(c.r[3], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    st128((c.r[10].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[10].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[10].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 18;
L_003366F4:
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    c.r[3].d[0] = c.r[11].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003366ACu | kUnwind; return; } goto L_003366AC; } }
    st32((c.r[21].w[0] + 4u), 0u);
    c.budget -= 1;
L_00336708:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00336740:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[9].w[0]);  c.pc = t; return; }
L_00336760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00336794; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00336790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336790u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00336790u) [[unlikely]] return; }
L_00336790:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00336794:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003367B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003367C0:
    set32(c.r[29], c.r[29].w[0] - 656u);
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 204u), c.r[5].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), 0u);  if (t) { goto L_003369A8; } }
L_00336810:
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[22].w[0] + 1u);  if (t) { goto L_003369A0; } }
    set32(c.r[20], 0u + 2u);
    c.budget -= 1;
L_00336824:
    set32(c.r[17], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_00336980; } }
L_0033683C:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[6].w[0] + 1u);  if (t) { goto L_00336978; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[6], 0u + 100u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336878u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00336878u) [[unlikely]] return; }
L_00336878:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[2], 0u + 706u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 13u);  if (t) { goto L_003368A8; } }
    set32(c.r[2], 0u + 850u);
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 84u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
L_003368A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003368B0u); c.r[19].d[0] = ld16((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003368B0u) [[unlikely]] return; }
L_003368B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[6].d[0] = ld8((c.r[1].w[0] - 25576u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003368C8u); set32(c.r[4], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_008D(c, 319u, depth + 1u); else { c.pc = 0x00337A20u; return; } if (c.pc != 0x003368C8u) [[unlikely]] return; }
L_003368C8:
    set32(c.r[19], c.r[29].w[0] + 640u);
    set32(c.r[2], 0u + 255u);
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 648u);  if (t) { goto L_00336968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003368E4u);  if (depth < kMaxDepth) unit_008E(c, 214u, depth + 1u); else { c.pc = 0x00339EF0u; return; } if (c.pc != 0x003368E4u) [[unlikely]] return; }
L_003368E4:
    c.r[7].d[0] = ld16((c.r[17].w[0] + 2u));
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003368FCu); set32(c.r[6], c.r[29].w[0] + 648u);  if (depth < kMaxDepth) unit_0082(c, 304u, depth + 1u); else { c.pc = 0x0030B140u; return; } if (c.pc != 0x003368FCu) [[unlikely]] return; }
L_003368FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0033695C; } }
L_00336904:
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_00336940; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[2].w[0] + 648u);
    set32(c.r[23], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336928u); set32(c.r[5], 0u + 355u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00336928u) [[unlikely]] return; }
L_00336928:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { goto L_0033693C; } }
    set32(c.r[2], 0u + 50u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0033693C:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_00336940:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 648u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[2].w[0] + 208u), c.r[3].w[0]);
    c.budget -= 7;
L_0033695C:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336904u | kUnwind; return; } goto L_00336904; } }
L_00336968:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_00336990; } }
L_00336978:
    set32(c.r[17], c.r[17].w[0] + 100u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_00336980:
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033683Cu | kUnwind; return; } goto L_0033683C; } }
L_00336990:
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336824u | kUnwind; return; } goto L_00336824; } }
    set32(c.r[2], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_003369A0:
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.r[22].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_003369A8:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[3].d[0] = c.r[22].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336810u | kUnwind; return; } goto L_00336810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003369C4u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0082(c, 302u, depth + 1u); else { c.pc = 0x0030B0D0u; return; } if (c.pc != 0x003369C4u) [[unlikely]] return; }
L_003369C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00336B24; } }
L_003369CC:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 496u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003369DCu); set32(c.r[20], c.r[2].w[0] + 492u);  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x003369DCu) [[unlikely]] return; }
L_003369DC:
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003369ECu); set32(c.r[4], c.r[29].w[0] + 648u);  if (depth < kMaxDepth) unit_008E(c, 214u, depth + 1u); else { c.pc = 0x00339EF0u; return; } if (c.pc != 0x003369ECu) [[unlikely]] return; }
L_003369EC:
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[6], 0u + 75u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], c.r[29].w[0] + 208u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336A10u); c.r[10].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 131u, depth + 1u); else { c.pc = 0x00339460u; return; } if (c.pc != 0x00336A10u) [[unlikely]] return; }
L_00336A10:
    set32(c.r[23], c.r[19].w[0] - c.r[18].w[0]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[19].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_00336A50; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 50u);  if (t) { goto L_00336A40; } }
L_00336A30:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 240u), c.r[3].w[0]);
    c.budget -= 4;
L_00336A40:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336A30u | kUnwind; return; } goto L_00336A30; } }
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00336A50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00336B14; } }
L_00336A58:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { goto L_00336B20; } }
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[30], c.r[2].w[0] + 240u);
    set32(c.r[5], ld32((c.r[30].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336A74u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0082(c, 309u, depth + 1u); else { c.pc = 0x0030B290u; return; } if (c.pc != 0x00336A74u) [[unlikely]] return; }
L_00336A74:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336AA0; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00336A98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00336B10; } }
L_00336A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00336B10; } }
L_00336AA0:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00336AB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00336AD8; } }
L_00336AB8:
    set32(c.r[5], ld32((c.r[30].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336AC4u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0082(c, 309u, depth + 1u); else { c.pc = 0x0030B290u; return; } if (c.pc != 0x00336AC4u) [[unlikely]] return; }
L_00336AC4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336AD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00336B10; } }
L_00336AD8:
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[7], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336AECu); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 304u, depth + 1u); else { c.pc = 0x0030B140u; return; } if (c.pc != 0x00336AECu) [[unlikely]] return; }
L_00336AEC:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[22], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00336B0C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00336B10; } }
L_00336B0C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00336B10:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00336B14:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[22].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336A58u | kUnwind; return; } goto L_00336A58; } }
L_00336B20:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00336B24:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 684u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003369CCu | kUnwind; return; } goto L_003369CC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_00336B70:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 12448u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00336B90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], c.r[5].w[0] << 1);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 12448u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] << 3);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336BD0u); set32(c.r[16], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00336BD0u) [[unlikely]] return; }
L_00336BD0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336BDCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00336BDCu) [[unlikely]] return; }
L_00336BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_00336C1C; } }
L_00336BE4:
    set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00336C28; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336C04u); set32(c.r[5], c.r[5].w[0] - 10384u);  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x00336C04u) [[unlikely]] return; }
L_00336C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336C0Cu); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00336C0Cu) [[unlikely]] return; }
L_00336C0C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336C18u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x00336C18u) [[unlikely]] return; }
L_00336C18:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00336C1C:
    c.r[3].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00336BE4u | kUnwind; return; } goto L_00336BE4; } }
L_00336C28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00336C50:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D530u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 128u, depth); }
L_00336C60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336C84u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00336C84u) [[unlikely]] return; }
L_00336C84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00336CA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00336ED8; } }
L_00336CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336CA8u); set32(c.r[16], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00336CA8u) [[unlikely]] return; }
L_00336CA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00336CC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00336ED8; } }
L_00336CC4:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 353u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00336D28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336CE4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00336CE4u) [[unlikely]] return; }
L_00336CE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25571u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00336D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00336ED8; } }
L_00336D00:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336D0Cu); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00336D0Cu) [[unlikely]] return; }
L_00336D0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25571u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00336D28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00336ED8; } }
L_00336D28:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u + 15u);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 356u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 356u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336D44u); set32(c.r[16], c.r[3].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 10u, depth + 1u); else { c.pc = 0x0033C160u; return; } if (c.pc != 0x00336D44u) [[unlikely]] return; }
L_00336D44:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[16], c.r[2].w[0] - 7u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00336D64; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_00336D64:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00336DFC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 60u);  if (t) { goto L_00336DB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336D84u);  if (depth < kMaxDepth) unit_008E(c, 235u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x00336D84u) [[unlikely]] return; }
L_00336D84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336D94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00336ED8; } }
L_00336D94:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00336DA0; } }
    set32(c.r[2], 0u - c.r[16].w[0]);
    c.budget -= 1;
L_00336DA0:
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00336DB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00336ED8; } }
L_00336DB4:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 60u);  if (t) { goto L_00336E90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336DCCu);  if (depth < kMaxDepth) unit_008E(c, 235u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x00336DCCu) [[unlikely]] return; }
L_00336DCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336DDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00336ED8; } }
L_00336DDC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00336DE8; } }
    set32(c.r[2], 0u - c.r[16].w[0]);
    c.budget -= 1;
L_00336DE8:
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00336E90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00336ED8; } }
L_00336DFC:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 20u);  if (t) { goto L_00336E44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336E10u);  if (depth < kMaxDepth) unit_008E(c, 235u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x00336E10u) [[unlikely]] return; }
L_00336E10:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336E24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00336ED8; } }
L_00336E24:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00336E30; } }
    set32(c.r[2], 0u - c.r[16].w[0]);
    c.budget -= 1;
L_00336E30:
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00336E44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00336ED8; } }
L_00336E44:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 20u);  if (t) { goto L_00336E90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336E5Cu);  if (depth < kMaxDepth) unit_008E(c, 235u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x00336E5Cu) [[unlikely]] return; }
L_00336E5C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00336E70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00336ED8; } }
L_00336E70:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00336E7C; } }
    set32(c.r[2], 0u - c.r[16].w[0]);
    c.budget -= 1;
L_00336E7C:
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00336E90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00336ED8; } }
L_00336E90:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00336E9C; } }
    set32(c.r[2], 0u - c.r[16].w[0]);
    c.budget -= 1;
L_00336E9C:
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00336ED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336EB0u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_008E(c, 390u, depth + 1u); else { c.pc = 0x0033B9A0u; return; } if (c.pc != 0x00336EB0u) [[unlikely]] return; }
L_00336EB0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336EBCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 390u, depth + 1u); else { c.pc = 0x0033B9A0u; return; } if (c.pc != 0x00336EBCu) [[unlikely]] return; }
L_00336EBC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336EC8u); set32(c.r[4], 0u + 15u);  if (depth < kMaxDepth) unit_008F(c, 10u, depth + 1u); else { c.pc = 0x0033C160u; return; } if (c.pc != 0x00336EC8u) [[unlikely]] return; }
L_00336EC8:
    set32(c.r[3], c.r[16].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] - 7u);
    c.budget -= 3;
L_00336ED4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00336ED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00336EF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[19], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336F28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00336F28u) [[unlikely]] return; }
L_00336F28:
    c.r[18].d[0] = ld8((c.r[2].w[0] + 356u));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336F38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00336F38u) [[unlikely]] return; }
L_00336F38:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 356u));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] - c.r[2].w[0]);  if (t) { goto L_00336FD4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 1568u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00336F88; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00336F60; } }
    set32(c.r[2], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_00336F60:
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[19], 0u - c.r[4].w[0]);  if (t) { goto L_00336F74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00336FD8; } }
L_00336F74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336F80u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 237u, depth + 1u); else { c.pc = 0x0033A090u; return; } if (c.pc != 0x00336F80u) [[unlikely]] return; }
L_00336F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00336FD4; } }
L_00336F88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00336FC4; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00336F9C; } }
    set32(c.r[2], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_00336F9C:
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00336FB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00336FD4; } }
L_00336FB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336FBCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 237u, depth + 1u); else { c.pc = 0x0033A090u; return; } if (c.pc != 0x00336FBCu) [[unlikely]] return; }
L_00336FBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00336FD4; } }
L_00336FC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00336FD0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 237u, depth + 1u); else { c.pc = 0x0033A090u; return; } if (c.pc != 0x00336FD0u) [[unlikely]] return; }
L_00336FD0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00336FD4:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00336FD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00337000:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 356u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 356u));
    set32(c.r[5], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 14;
    { const bool t = c.r[5].sd[0] >= 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033703C; } }
    set32(c.r[5], 0u - c.r[5].w[0]);
    c.budget -= 1;
L_0033703C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 356u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 356u));
    set32(c.r[4], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0033705C; } }
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_0033705C:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00337074; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);  if (t) { goto L_0033710C; } }
L_00337074:
    set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00337084; } }
    set32(c.r[3], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_00337084:
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003370EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337098u);  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x00337098u) [[unlikely]] return; }
L_00337098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003370A0u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003370A0u) [[unlikely]] return; }
L_003370A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003370B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x003370B8u) [[unlikely]] return; }
L_003370B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003370C0u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x003370C0u) [[unlikely]] return; }
L_003370C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003370C8u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003370C8u) [[unlikely]] return; }
L_003370C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003370E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x003370E0u) [[unlikely]] return; }
L_003370E0:
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 3;
L_003370EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033710C; } }
    set32(c.r[2], 0u + 50u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033710Cu); st32((c.r[1].w[0] - 1560u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 237u, depth + 1u); else { c.pc = 0x0033A090u; return; } if (c.pc != 0x0033710Cu) [[unlikely]] return; }
L_0033710C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00337130:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00337164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);  if (t) { goto L_0033720C; } }
L_00337164:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 356u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 356u));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00337184; } }
    set32(c.r[3], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_00337184:
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003371EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337198u);  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x00337198u) [[unlikely]] return; }
L_00337198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003371A0u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003371A0u) [[unlikely]] return; }
L_003371A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003371B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x003371B8u) [[unlikely]] return; }
L_003371B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003371C0u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x003371C0u) [[unlikely]] return; }
L_003371C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003371C8u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003371C8u) [[unlikely]] return; }
L_003371C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003371E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x003371E0u) [[unlikely]] return; }
L_003371E0:
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 3;
L_003371EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033720C; } }
    set32(c.r[2], 0u + 50u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033720Cu); st32((c.r[1].w[0] - 1560u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 237u, depth + 1u); else { c.pc = 0x0033A090u; return; } if (c.pc != 0x0033720Cu) [[unlikely]] return; }
L_0033720C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00337230:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00337264; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);  if (t) { goto L_0033730C; } }
L_00337264:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 356u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 356u));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00337284; } }
    set32(c.r[3], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_00337284:
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003372EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337298u);  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x00337298u) [[unlikely]] return; }
L_00337298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003372A0u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003372A0u) [[unlikely]] return; }
L_003372A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003372B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x003372B8u) [[unlikely]] return; }
L_003372B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003372C0u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x003372C0u) [[unlikely]] return; }
L_003372C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003372C8u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003372C8u) [[unlikely]] return; }
L_003372C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003372E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x003372E0u) [[unlikely]] return; }
L_003372E0:
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 3;
L_003372EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033730C; } }
    set32(c.r[2], 0u + 50u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033730Cu); st32((c.r[1].w[0] - 1560u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 237u, depth + 1u); else { c.pc = 0x0033A090u; return; } if (c.pc != 0x0033730Cu) [[unlikely]] return; }
L_0033730C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00337330:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033734C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003373C4; } }
L_0033734C:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 356u));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 356u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;  if (t) { goto L_00337390; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 356u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 356u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] - c.r[3].w[0]);  if (t) { goto L_0033738C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003373C4; } }
L_0033738C:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00337390:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003373A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003373C4; } }
L_003373A0:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 356u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 356u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] - c.r[3].w[0]);  if (t) { goto L_003373C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003373C4; } }
L_003373C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003373D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00337428; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 357u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 357u)));
    set32(c.r[4], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_00337404; } }
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_00337404:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 357u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 357u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00337424; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_00337424:
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 1;
L_00337428:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00337430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003374BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337464u); set32(c.r[4], ld32((c.r[1].w[0] - 1560u)));  if (depth < kMaxDepth) unit_008E(c, 235u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x00337464u) [[unlikely]] return; }
L_00337464:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003374B4; } }
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u - 1u);  if (t) { goto L_00337498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003374BC; } }
L_00337498:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003374AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003374BC; } }
L_003374AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003374BC; } }
L_003374B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003374BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 237u, depth + 1u); else { c.pc = 0x0033A090u; return; } if (c.pc != 0x003374BCu) [[unlikely]] return; }
L_003374BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003374D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003374F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003374F4u);  if (depth < kMaxDepth) unit_008E(c, 237u, depth + 1u); else { c.pc = 0x0033A090u; return; } if (c.pc != 0x003374F4u) [[unlikely]] return; }
L_003374F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00337500:
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 353u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 353u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033753C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00337530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0033753C; } }
L_00337530:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0033753C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0033753C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00337574; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 354u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 354u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00337574; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00337568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00337574; } }
L_00337568:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00337574; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00337574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003375AC; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 355u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 355u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003375AC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 355u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003375A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003375AC; } }
L_003375A0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003375AC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003375AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003375E4; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 346u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 346u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003375E4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 346u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003375D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003375E4; } }
L_003375D8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003375E4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003375E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00337618; } }
    c.r[4].d[0] = ld8((c.r[8].w[0] + 356u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 356u));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 356u));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);  if (t) { goto L_00337608; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_00337608:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00337614; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_00337614:
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 1;
L_00337618:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00337620:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00337640; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 3;
L_00337640:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00337650:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[18], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003376C4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 1560u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337694u); set32(c.r[18], c.r[3].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 235u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x00337694u) [[unlikely]] return; }
L_00337694:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003376C4; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003376AC; } }
    set32(c.r[2], 0u - c.r[18].w[0]);
    c.budget -= 1;
L_003376AC:
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003376C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003376C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 237u, depth + 1u); else { c.pc = 0x0033A090u; return; } if (c.pc != 0x003376C0u) [[unlikely]] return; }
L_003376C0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003376C4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003376E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033775C; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337718u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00337718u) [[unlikely]] return; }
L_00337718:
    c.r[16].d[0] = ld8((c.r[2].w[0] + 356u));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337728u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00337728u) [[unlikely]] return; }
L_00337728:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 356u));
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00337744; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - c.r[2].w[0]);  if (t) { goto L_00337744; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00337744:
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033775C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033775Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 237u, depth + 1u); else { c.pc = 0x0033A090u; return; } if (c.pc != 0x0033775Cu) [[unlikely]] return; }
L_0033775C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00337780:
    set32(c.r[29], c.r[29].w[0] - 272u);
    set32(c.r[6], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 30u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003377A4u); set32(c.r[8], 0u + 100u);  if (depth < kMaxDepth) unit_008E(c, 87u, depth + 1u); else { c.pc = 0x00338EC0u; return; } if (c.pc != 0x003377A4u) [[unlikely]] return; }
L_003377A4:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[6].w[0] << 3);
    c.budget -= 3;
L_003377B0:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[4].w[0] + 32u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[5].w[0]), c.r[4].w[0]);  if (t) { goto L_003377E4; } }
    c.r[1].d[0] = c.r[6].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003377E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), 0u);  if (t) { goto L_003377E8; } }
L_003377E4:
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 1;
L_003377E8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[6].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003377B0u | kUnwind; return; } goto L_003377B0; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[2], 0u + 50u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[1].w[0] - 1560u), c.r[2].w[0]);
    set32(c.r[5], 0u + 30u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033781Cu); set32(c.r[7], c.r[7].w[0] + 30432u);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x0033781Cu) [[unlikely]] return; }
L_0033781C:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00337820:
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[6].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00337820u | kUnwind; return; } goto L_00337820; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_00337860:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 96u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 12;
L_00337890:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003378B4u); set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_008D(c, 316u, depth + 1u); else { c.pc = 0x00337930u; return; } if (c.pc != 0x003378B4u) [[unlikely]] return; }
L_003378B4:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00337890u | kUnwind; return; } goto L_00337890; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003378E4u); set32(c.r[7], c.r[7].w[0] + 30240u);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x003378E4u) [[unlikely]] return; }
L_003378E4:
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003378EC:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[19].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003378ECu | kUnwind; return; } goto L_003378EC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00337930:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[14].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 802u);
    set32(c.r[7], 0u + 803u);
    set32(c.r[6], 0u + 999u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[9], 0u + 25500u);
    set32(c.r[10], 0u + 255u);
    set32(c.r[3], c.r[14].w[0] << 1);
    c.budget -= 9;
L_00337954:
    c.r[13].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[14].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[12], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[13].w[0] << 4);
    c.budget -= 5;
L_00337968:
    set32(c.r[3], c.r[12].w[0] + c.r[3].w[0]);
    c.r[11].d[0] = ld16((c.r[3].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[11].d[0] == c.r[10].d[0]; set32(c.r[15], c.r[3].w[0] + 4u);  if (t) { goto L_003379F8; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == c.r[9].d[0]; c.r[3].d[0] = c.r[11].sd[0] < 255ll ? 1ull : 0ull;  if (t) { goto L_003379F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[11].sd[0] < 2001ll ? 1ull : 0ull;  if (t) { goto L_00337990; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00337994; } }
L_00337990:
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 1;
L_00337994:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == c.r[8].d[0];  if (t) { goto L_003379A4; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[7].d[0]; c.r[3].d[0] = c.r[11].sd[0] < 800ll ? 1ull : 0ull;  if (t) { goto L_003379AC; } }
L_003379A4:
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.r[3].d[0] = c.r[11].sd[0] < 800ll ? 1ull : 0ull;
    c.budget -= 2;
L_003379AC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[11].sd[0] < 930ll ? 1ull : 0ull;  if (t) { goto L_003379C8; } }
    c.r[1].d[0] = c.r[11].sd[0] < 851ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003379C4; } }
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 1;
L_003379C4:
    c.r[3].d[0] = c.r[11].sd[0] < 930ll ? 1ull : 0ull;
    c.budget -= 1;
L_003379C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[11].sd[0] < 950ll ? 1ull : 0ull;  if (t) { goto L_003379DC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003379DC; } }
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 1;
L_003379DC:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[6].d[0];  if (t) { goto L_003379E8; } }
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 1;
L_003379E8:
    set32(c.r[3], ld32((c.r[15].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003379F8; } }
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 1;
L_003379F8:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[3].d[0] = c.r[13].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[13].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00337968u | kUnwind; return; } goto L_00337968; } }
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[3].d[0] = c.r[14].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[14].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00337954u | kUnwind; return; } goto L_00337954; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00337A20:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], 0u + 118u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337A54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337A54u) [[unlikely]] return; }
L_00337A54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337A68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00337A68u) [[unlikely]] return; }
L_00337A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337A70u); c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337A70u) [[unlikely]] return; }
L_00337A70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] - 24836u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337A84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00337A84u) [[unlikely]] return; }
L_00337A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337A8Cu); c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337A8Cu) [[unlikely]] return; }
L_00337A8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] - 24832u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337AA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00337AA0u) [[unlikely]] return; }
L_00337AA0:
    set32(c.r[4], 0u - 1u);
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    st32((c.r[16].w[0]), c.r[4].w[0]);
    set32(c.r[3], 0u + 255u);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 500ll ? 1ull : 0ull;
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00337B20; } }
    c.r[1].d[0] = c.r[5].sd[0] < 600ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_00337B20; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_00337AE8; } }
    set32(c.r[2], c.r[17].w[0] - 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00337B20; } }
L_00337AE8:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[18].d[0] << 56;  if (t) { goto L_00337B00; } }
    set32(c.r[2], c.r[17].w[0] - 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00337B20; } }
L_00337B00:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00337B18; } }
    set32(c.r[2], c.r[17].w[0] - 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00337B20; } }
L_00337B18:
    set32(c.r[2], c.r[17].w[0] - 100u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_00337B20:
    c.r[17].d[0] = c.r[17].d[0] & 65535ull;
    c.r[1].d[0] = c.r[17].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[17].sd[0] < 200ll ? 1ull : 0ull;  if (t) { goto L_00337B3C; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[17].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337B3C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00337BF8; } }
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 197u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[17].w[0] - 100u);  if (t) { goto L_00337B90; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_00337B68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 22u);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337B68:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 50u);  if (t) { goto L_00337B78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 20u);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337B80u);  if (depth < kMaxDepth) unit_008E(c, 235u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x00337B80u) [[unlikely]] return; }
L_00337B80:
    set32(c.r[19], 0u + 22u);
    set32(c.r[3], 0u + 20u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337B90:
    set32(c.r[2], 0u + 198u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 199u);  if (t) { goto L_00337BD8; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_00337BB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 22u);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337BB0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 50u);  if (t) { goto L_00337BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 20u);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337BC8u);  if (depth < kMaxDepth) unit_008E(c, 235u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x00337BC8u) [[unlikely]] return; }
L_00337BC8:
    set32(c.r[19], 0u + 22u);
    set32(c.r[3], 0u + 20u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337BD8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337BE8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337BE8u) [[unlikely]] return; }
L_00337BE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[1].w[0] - 25584u)));  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337BF8:
    c.r[1].d[0] = c.r[17].sd[0] < 300ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[17].sd[0] < 600ll ? 1ull : 0ull;  if (t) { goto L_00337C14; } }
    set32(c.r[2], 0u + 8u);
    set32(c.r[19], c.r[17].w[0] - 200u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337C14:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_00337CB8; } }
    set32(c.r[3], c.r[17].w[0] - 300u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 100u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00337C34; } }
    breakpoint(c, 0x00337C30u);
    c.budget -= 1;
L_00337C34:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 10u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] + 3u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] - c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00337C6C; } }
    breakpoint(c, 0x00337C68u);
    c.budget -= 1;
L_00337C6C:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 255u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], c.r[3].w[0] + 3u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337CB8:
    c.r[1].d[0] = c.r[17].sd[0] < 800ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[17].sd[0] < 820ll ? 1ull : 0ull;  if (t) { goto L_00337DF0; } }
    set32(c.r[2], c.r[17].w[0] - 700u);
    set32(c.r[4], 0u + 4u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[16].w[0]), c.r[4].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 10304u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00334000u < 16384u) { entry = entries_008D[(t - 0x00334000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00337CF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), 0u);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337CFC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[4].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337D10:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337D1C:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337D28:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337D34:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337D40:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337D4C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337D58:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337D64:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337D70:
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = c.r[21].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00337D90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), 0u);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337D98:
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = c.r[21].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00337DBC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337DBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337DC4:
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = c.r[21].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00337DE8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337DF0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] - 800u);  if (t) { [[clang::musttail]] return unit_008E(c, 4u, depth); } }
    set32(c.r[4], 0u + 2u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[16].w[0]), c.r[4].w[0]);  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 10368u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00334000u < 16384u) { entry = entries_008D[(t - 0x00334000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00337E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337E2Cu); st32((c.r[16].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337E2Cu) [[unlikely]] return; }
L_00337E2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[1].w[0] - 24836u));  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337E3C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337E48u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337E48u) [[unlikely]] return; }
L_00337E48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[1].w[0] - 24834u));  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337E58:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337E64u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337E64u) [[unlikely]] return; }
L_00337E64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[1].w[0] - 24824u));  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337E74:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337E80u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337E80u) [[unlikely]] return; }
L_00337E80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[1].w[0] - 24822u));  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337E90:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337E9Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337E9Cu) [[unlikely]] return; }
L_00337E9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[1].w[0] - 24818u));  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337EAC:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337EB8u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337EB8u) [[unlikely]] return; }
L_00337EB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[1].w[0] - 24820u));  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337EC8:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337ED4u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337ED4u) [[unlikely]] return; }
L_00337ED4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[1].w[0] - 24816u));  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337EECu); st32((c.r[16].w[0] + 16u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337EECu) [[unlikely]] return; }
L_00337EEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[1].w[0] - 24832u));  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337F04u); st32((c.r[16].w[0] + 16u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337F04u) [[unlikely]] return; }
L_00337F04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[1].w[0] - 24830u));  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337F14:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337F20u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337F20u) [[unlikely]] return; }
L_00337F20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[1].w[0] - 24828u));  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337F30:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337F3Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337F3Cu) [[unlikely]] return; }
L_00337F3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[1].w[0] - 24826u));  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337F4C:
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = c.r[21].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00337F7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337F6Cu); st32((c.r[16].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337F6Cu) [[unlikely]] return; }
L_00337F6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[1].w[0] - 24836u));  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337F84u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337F84u) [[unlikely]] return; }
L_00337F84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[1].w[0] - 24834u));  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337F94:
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = c.r[21].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00337FC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337FB4u); st32((c.r[16].w[0] + 16u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337FB4u) [[unlikely]] return; }
L_00337FB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[1].w[0] - 24832u));  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337FCCu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337FCCu) [[unlikely]] return; }
L_00337FCC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[1].w[0] - 24828u));  if (t) { [[clang::musttail]] return unit_008E(c, 17u, depth); } }
L_00337FDC:
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = c.r[21].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { [[clang::musttail]] return unit_008E(c, 2u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00337FFCu); st32((c.r[16].w[0] + 16u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00337FFCu) [[unlikely]] return; }
L_00337FFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
    [[clang::musttail]] return unit_008E(c, 1u, depth);
}

}
